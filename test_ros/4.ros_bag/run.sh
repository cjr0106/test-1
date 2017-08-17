#!/bin/bash

ROOT=`pwd`

# make source dir
cd ${ROOT}
mkdir src

# create package
cd ${ROOT}/src
catkin_create_pkg beginner_tutorials std_msgs rospy roscpp

# catkin make
cd ${ROOT}
catkin_make
