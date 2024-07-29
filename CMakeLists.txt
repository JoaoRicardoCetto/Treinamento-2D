cmake_minimum_required(VERSION 3.22)

project(jardim)

add_executable(jardim
    src/main.cpp
    src/componentes/passaro.cpp
    src/componentes/formigas.cpp
    src/elementos/elementosPassaros/minhoca.cpp
    src/elementos/elementosPassaros/gafanhoto.cpp
    src/elementos/elementosFormigas/boloDeChocolate.cpp
    src/elementos/elementosFormigas/granuladoFormicida.cpp

) 