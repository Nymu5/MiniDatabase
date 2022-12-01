cmake_minimum_required(VERSION 3.23)
project(MiniDatabase C)

set(CMAKE_C_STANDARD 90)
add_compile_options(-Wall -ansi -pedantic -Wmissing-prototypes -Wstrict-prototypes -Wold-style-definition)


add_executable(MiniDatabase main.c main.h database.c database.h errmsgs_1.h)
