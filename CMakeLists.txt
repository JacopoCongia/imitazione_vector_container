cmake_minimum_required(VERSION 4.1)
project(imitazione_vector_container)

set(CMAKE_CXX_STANDARD 14)

include_directories(imitazione_vector_container)

add_executable(imitazione_vector_container
        imitazione_vector_container/imitazione_vector_container.cpp
        imitazione_vector_container/Vettore.h)
