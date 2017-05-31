cmake_minimum_required(VERSION 3.3)
project(observer_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Observer.h Subject.h GameCharacter.cpp GameCharacter.h Display.h GUIMap.cpp GUIMap.h MiniGUIMap.cpp MiniGUIMap.h)
add_executable(observer_2 ${SOURCE_FILES})