cmake_minimum_required(VERSION 3.9.1)
project (LinkedList)
ADD_LIBRARY(LibsModule 
    LinkedList.cpp
    ListNode.cpp
)
add_executable(main.out Main.cpp)
target_link_libraries(main.out LibsModule)
