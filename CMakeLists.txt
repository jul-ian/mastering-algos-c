cmake_minimum_required(VERSION 3.28)
project(mastering_algos_c C)

set(CMAKE_C_STANDARD 11)

add_executable(mastering_algos_c main.c
        list.h
        list.c
        dlist.h
        dlist.c
        clist.h
        clist.c
        stack.h)
