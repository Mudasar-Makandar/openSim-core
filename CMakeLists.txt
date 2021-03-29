# CMake current version==3.16.3
cmake_minimum_required(VERSION 3.16)

# Setting up the project name.
project(openSim)

# executable name
add_executable(openSim ${SOURCE_DIR}App/src/main.cpp)

# include header files dir for the project
target_include_directories(openSim PUBLIC
                            "${SOURCE_DIR}App/include"  
                        )
