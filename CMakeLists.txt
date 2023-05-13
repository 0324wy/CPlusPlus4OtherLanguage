cmake_minimum_required(VERSION 3.0)

project(CPlusPlus4OtherLanguage)

include_directories(0.helloWorld 1.functionDeclaration/include) # -i

add_executable(functionDeclaration 1.functionDeclaration/src/main.cpp 1.functionDeclaration/include/swap.h)
add_executable(helloWorld 0.helloWorld/src/main.cpp)
add_executable(2.pointer 2.pointer/src/main.cpp)
add_executable(3.struct 3.struct/src/main.cpp)
add_executable(4.memoryArea 4.memoryArea/src/main.cpp 4.memoryArea/include/temp.h)
add_executable(5.reference 5.reference/src/main.cpp)
