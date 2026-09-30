#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

int main() {
    array a { 1, 2, 3};
    for(int i = 0; i < 10; ++i)
        a.at(i) = i;
    cout << "hello" << endl;
    return EXIT_SUCCESS;
}