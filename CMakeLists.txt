cmake_minimum_required(VERSION 3.5) 
project(HW3) 


set(CMAKE_C_COMPILER "C:/w64devkit/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/w64devkit/bin/g++.exe")

if(NOT CMAKE_GENERATOR)
    set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)
endif()`

add_executable(app main.cpp program.cpp Item.cpp Fruit.cpp Snack.cpp Seasoning.cpp bank.cpp personalbank.cpp )

if (WIN32)
    target_link_libraries(${PROJECT_NAME} winmm)
endif()