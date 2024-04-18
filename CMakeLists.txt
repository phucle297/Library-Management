cmake_minimum_required(VERSION 3.27)
project(LibraryProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(LibraryProject src/main.cpp
        include/models/reader-model.h
        include/models/ticket-model.h
        include/models/book-model.h
        include/controllers/reader-controller.h
        include/controllers/ticket-controller.h
        include/views/reader-view.h
        include/views/book-view.h
        include/views/ticket-view.h
        include/views/statistic-view.h
        include/controllers/book-controller.h
        src/views/reader-view.cpp
        src/views/book-view.cpp
        src/views/ticket-view.cpp
        src/views/statistic-view.cpp
        src/models/reader-model.cpp
        src/views/menu-view.cpp
        include/views/menu-view.h
        include/controllers/menu-controller.h
        src/controllers/menu-controller.cpp
        src/controllers/reader-controller.cpp
        include/controllers/utils-controller.h
        src/controllers/utils-controller.cpp
        src/controllers/book-controller.cpp
        include/controllers/statistic-controller.h
        src/controllers/statictis-controller.cpp
        src/controllers/ticket-controller.cpp)
