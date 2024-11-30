cmake_minimum_required(VERSION 3.29)
project(untitled2)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled2 main.cpp
        Product/Product.cpp
        Product/Product.h
        DogFood/DogFood.cpp
        DogFood/DogFood.h
        DogToys/DogToys.cpp
        DogToys/DogToys.h
        DogAcessories/DogAccessories.cpp
        DogAcessories/DogAccessories.h
        AdminSystem/AdminSystem.cpp
        AdminSystem/AdminSystem.h
        UserSystem/UserSystem.cpp
        UserSystem/UserSystem.h)
