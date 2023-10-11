cmake_minimum_required(VERSION 3.5)

project(my_first_cmake_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(UNIX)
    message("This is a ${CMAKE_SYSTEM_NAME} system")
elseif(WIN32)
    message("This is a Windows System")
endif()

add_executable(my_first_cmake_project main.cpp)
