cmake_minimum_required(VERSION 3.5)

project(vko4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vko4 main.cpp
    asunto.h asunto.cpp
    katutaso.h katutaso.cpp
    kerros.h kerros.cpp
    kerrostalo.h kerrostalo.cpp)

include(GNUInstallDirs)
install(TARGETS vko4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
