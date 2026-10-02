cmake_minimum_required(VERSION 4.3)
project(Exercices)

set(CMAKE_CXX_STANDARD 20)

# Trouve tous les fichiers .cpp dans les sous-dossiers
file(GLOB_RECURSE ALL_EXERCISES "*.cpp")

foreach(ex_file ${ALL_EXERCISES})
    # Récupère le nom du fichier sans extension
    get_filename_component(ex_name ${ex_file} NAME_WE)

    # Remplace les points par des underscores (ex: ex2.05 devient ex2_05)
    string(REPLACE "." "_" ex_name ${ex_name})

    # Crée la cible si elle n'existe pas déjà
    if(NOT TARGET ${ex_name})
        add_executable(${ex_name} ${ex_file})
    endif()
endforeach()