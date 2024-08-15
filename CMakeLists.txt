cmake_minimum_required(VERSION 3.22)

project(Jardim)

add_executable(jardim
    src/main.cpp
    src/componentes/planta.cpp
    src/fertilizantes/fertilizante_industrial.cpp
    src/fertilizantes/fertilizante_organico.cpp
)   