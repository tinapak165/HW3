cmake_minimum_required(VERSION 3.2)
 
project(HW3) 

set(CMAKE_C_COMPILER "C:/w64devkit/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/w64devkit/bin/g++.exe")

add_executable(app main.cpp program.cpp Item.cpp Fruit.cpp Snack.cpp Seasoning.cpp bank.cpp personalbank.cpp )