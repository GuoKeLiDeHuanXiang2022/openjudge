cmake_minimum_required(VERSION 3.23)
project(openjudge)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)

add_executable(openjudge
        .idea/.gitignore
        .idea/modules.xml
        .idea/openjudge.iml
        .idea/vcs.xml
        .idea/workspace.xml
        noi.c
        README.md)
