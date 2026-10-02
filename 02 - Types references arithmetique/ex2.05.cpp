#include  <iostream>
#include <cstdlib>
#include <limits>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    using type = char ;
    cout <<  "Taille : " << sizeof(type) <<" bytes = " << std::numeric_limits<type>::digits + std::numeric_limits<type>::is_signed<< " bits" << endl;
    cout << "Plage de valeurs : " << static_cast<long long>(std::numeric_limits<type>::lowest()) <<  " -> " << static_cast< unsigned long long >(std::numeric_limits<type>::max()) << endl;
    cout << "Signé: " << boolalpha  << std::numeric_limits<type>::is_signed  << endl;
}

// utilisation de static_cast long long  car il contient toutes les valeurs de lowest() et unsigned long long toutes celles de max()