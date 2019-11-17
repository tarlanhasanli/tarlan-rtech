#include <ros/ros.h>
#include <moveit/move_group_interface/move_group_interface.h>
#include <vector>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "demo");
  ros::NodeHandle node_handle;
  ros::AsyncSpinner spinner(1);
  spinner.start();

  moveit::planning_interface::MoveGroupInterface move_group("sia5");

  std::vector<std::string> namedTargets = move_group.getNamedTargets();
  namedTargets.erase(namedTargets.begin());

  for (std::string target : namedTargets) {
    move_group.setNamedTarget(target);
    moveit::planning_interface::MoveGroupInterface::Plan my_plan;
    if (!move_group.plan(my_plan)) {
      ROS_WARN("[motoman_sia5d_interface_demo/demo] Failed. Shutting Down.");
      ros::shutdown();
      return 0;
    }
    ROS_INFO("[motoman_sia5d_interface_demo/demo] Success. Proceeding.");
    move_group.execute(my_plan);
  }

  ros::shutdown();
  return 0;
}
