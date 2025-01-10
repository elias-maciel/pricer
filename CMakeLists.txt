cmake_minimum_required(VERSION 3.30)
project(Pricer)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)



add_executable(Pricer src/main.cpp src/OptionPricer.cpp)

