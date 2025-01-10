cmake_minimum_required(VERSION 3.30)
project(Pricer)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(Pricer src/main.cpp src/OptionPricer.cpp
        tests/OptionPricerTest.cpp)

add_subdirectory(third_party/googletest)

add_executable(tests tests/OptionPricerTest.cpp src/OptionPricer.cpp)
target_link_libraries(tests gtest_main)

enable_testing()
add_test(NAME OptionPricerTests COMMAND tests)

