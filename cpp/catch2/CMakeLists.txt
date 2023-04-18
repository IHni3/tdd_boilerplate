cmake_minimum_required(VERSION 3.16)
project(tdd_boilerplate)

set(CMAKE_CXX_STANDARD 17)

include(ExternalProject)

ExternalProject_Add(
        catch
        PREFIX ${CMAKE_BINARY_DIR}/catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        TIMEOUT 10
        GIT_TAG v2.13.10
        CONFIGURE_COMMAND ""
        BUILD_COMMAND ""
        INSTALL_COMMAND ""
        LOG_DOWNLOAD ON
)

ExternalProject_Get_Property(catch source_dir)
include_directories(${source_dir}/single_include/)

add_executable(
        ${PROJECT_NAME}
        testing/ExampleTests.cc source/Calculator.cpp source/Calculator.hpp source/Calculator.cpp source/Calculator.hpp testing/ExampleTests.cc)