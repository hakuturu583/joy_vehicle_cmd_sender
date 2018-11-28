#include <joy_vehicle_cmd_sender/joy_vehicle_cmd_sender.h>
#include <ros/ros.h>

int main(int argc, char *argv[]) {
  ros::init(argc, argv, "fake_subscriber_node");
  joy_vehicle_cmd_sender sender;
  sender.run();
  ros::spin();
  return 0;
}