cmake_minimum_required(VERSION 2.8.3)
project(beginner_tutorials)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
)

find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs genmsg)

################################################
## Declare ROS messages, services and actions ##
################################################

add_message_files(FILES Message.msg)
add_service_files(FILES Service.srv)
generate_messages(DEPENDENCIES std_msgs)

################################################
## Declare ROS dynamic reconfigure parameters ##
################################################

add_executable(talker src/talker.cpp)
target_link_libraries(talker ${catkin_LIBRARIES})

add_executable(listener src/listener.cpp)
target_link_libraries(listener ${catkin_LIBRARIES})

add_executable(multiply_two_ints_server src/multiply_two_ints_server.cpp)
target_link_libraries(multiply_two_ints_server ${catkin_LIBRARIES})
add_dependencies(multiply_two_ints_server beginner_tutorials_gencpp)

add_executable(multpily_two_ints_client src/multpily_two_ints_client.cpp)
target_link_libraries(multpily_two_ints_client ${catkin_LIBRARIES})
add_dependencies(multpily_two_ints_client beginner_tutorials_gencpp)

###################################
## catkin specific configuration ##
###################################

catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})
