cmake_minimum_required(VERSION 3.5)

project(vko3teh4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vko3teh4 main.cpp)

include(GNUInstallDirs)
install(TARGETS vko3teh4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
