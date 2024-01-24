cmake_minimum_required(VERSION 3.5)

project(vko2teh1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vko2teh1 main.cpp
    game.h)

include(GNUInstallDirs)
install(TARGETS vko2teh1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
