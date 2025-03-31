cmake_minimum_required(VERSION 3.16)
project(HelloWorld LANGUAGES CXX)

# Find Qt components
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Create executable
add_executable(HelloWorld
    main.cpp
)

# Link Qt libraries
target_link_libraries(HelloWorld PRIVATE Qt6::Widgets)

# Set C++ standard properties
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
