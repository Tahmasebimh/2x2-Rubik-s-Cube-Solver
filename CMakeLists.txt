cmake_minimum_required(VERSION 3.15)
project(AP_MidtermProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(AP_MidtermProject main.cpp model/cpp/Cell.cpp model/h/Cell.h model/cpp/Row.cpp model/h/Row.h model/cpp/Side.cpp model/h/Side.h model/cpp/Cube.cpp model/h/Cube.h)