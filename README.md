# tarlan-rtech

### Tallinn University of Technology
#### IAS0220 Robot guidance and software

### Tasks:

#### Task 1 - Introduction to ROS: ROS beginner level tutorials

1. Navigating the ROS Filesystem. Introduction to ROS filesystem concepts, and using the roscd, rosls, and rospack command line tools.
2. Creating a ROS Package. How to use roscreate-pkg or catkin to create a new package, and rospack to list package dependencies.
3. Building a ROS Package
4. Understanding ROS Nodes. Introduction to ROS graph concepts and the use of roscore, rosnode, and rosrun command line tools.
5. Understanding ROS Topics. Introduction to ROS topics as well as using the rostopic and rqt_plot command line tools.
6. Understanding ROS Services and Parameters. Introduction to ROS services, and parameters as well as using the rosservice and rosparam command line tools.
7. Using rqt_console and roslaunch. Introduction to ROS using rqt_console and rqt_logger_level for debugging and roslaunch for starting many nodes at once.
8. Creating a ROS msg and srv. How to create and build msg and srv files as well as the rosmsg, rossrv and roscp command line tools.
9. Writing a Simple Publisher and Subscriber (C++). How to write a publisher and subscriber node in C++.
10. Examining the Simple Publisher and Subscriber. Running the simple publisher and subscriber.
11. Writing a Simple Service and Client (C++). How to write a service and client node in C++.
12. Examining the Simple Service and Client. Running the simple service and client.
13. Recording and playing back data. How to record data from a running ROS system into a .bag file, and then to play back the data to produce similar behavior in a running system.
14. Getting started with roswtf. Introduction to the roswtf tool.

#### Task 2 - Unified Robot Description Format (URDF)

1. Building a Visual Robot Model with URDF from Scratch. Learn how to build a visual model of a robot that you can view in Rviz.
3. Building a Movable Robot Model with URDF. Learn how to define movable joints in URDF.
4. Adding Physical and Collision Properties to a URDF Model. Learn how to add collision and inertial properties to links, and how to add joint dynamics to joints.
5. Using Xacro to Clean Up a URDF File. Learn some tricks to reduce the amount of code in a URDF file using Xacro.
6. Modify the xacro-file to add a black lense (Figure 1) to your R2D2

example: https://mymodelrobot.appspot.com/5650437726273536

#### Task 3 - Modularity of ROS and roslaunch

How to make R2D2 robot move via keyboard teleoperation.

#### Task 4 - Tracking AR tags with USB camera

1. Install ROS package for USB cameras
2. Calibrate the camera for distance sensing
3. Install ROS package for tracking AR tags
4. Setup launch-files for launching USB camera and AR tracking
5. Use RViz for displaying camera images
6. Update R2D2’s description so that its lense link acts as the base for the camera

#### Task 5 - Rosbag files playback

How to work with rosbag

#### Task 6 - Establishing Android Phone and ROS connection

#### Task 7 - Mapping and Navigation

1. Set up TurtleBot3 mobile robot and its simulation.
2. Bring up TurtleBot3 in Gazebo simulation environment.
3. Learn how Gazebo and ROS work together by visualizing data from simulated world in RViz.
4. Use TurtleBot3 to map a given area.
5. Navigate the robot based on the previously saved map.

#### Task 8 - Motion Planning with MOVEIT

1. Learn the basic concepts of MoveIt! motion planning on a Franka Emika Panda robot manipulator using RViz and its GUI elements
2. Learn how to program a manipulator robot using MoveGroup C++ interface.
3. Setting up MoveIt! for Yaskawa Sia5D industrial manipulator

#### Task 9 - Motion planning with dual manipulator system

- Motion panning with two Yaskawa Sia5D Manipulators
  - Describe a Xacro-file that combines two robot models.
  - Set up MoveIt! configuration package that enables motion planning for each manipulator independently and for simultaneous dual manipulation.
  - Test motion planning with MoveIt GUI in RViz.
- Dual manipulation with yaskawa Sia5D and universal robots UR5.
  - Download ROS-Industrial support packages for Universal Robots.
  - Set up MoveIt! configuration package that enables motion planning for each manipulator independently and for simultaneous dual manipulation.
  - Test motion planning using MoveIt GUI in RViz.
