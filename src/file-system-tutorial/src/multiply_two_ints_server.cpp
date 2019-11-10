#include "ros/ros.h"
#include "file-system-tutorial/MultiplyTwoInts.h"

bool add(file-system-tutorial::MultiplyTwoInts::Request  &req,
         file-system-tutorial::MultiplyTwoInts::Response &res)
{
  res.mul = req.a + req.b;
  ROS_INFO("request: x=%ld, y=%ld", (long int)req.a, (long int)req.b);
  ROS_INFO("response: [%ld]", (long int)res.mul);
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "multiply_two_ints_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("multiply_two_ints", add);
  ROS_INFO("Multiply two integers");
  ros::spin();

  return 0;
}