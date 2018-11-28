#ifndef JOY_VEHICLE_CND_SENDER_H_INCLUDED
#define JOY_VEHICLE_CND_SENDER_H_INCLUDED

#include <ros/ros.h>

#include <sensor_msgs/Joy.h>
#include <autoware_msgs/VehicleCmd.h>

#include <boost/optional.hpp>
#include <boost/thread.hpp>

class joy_vehicle_cmd_sender
{
public:
    joy_vehicle_cmd_sender();
    ~joy_vehicle_cmd_sender();
    void run();
private:
    ros::NodeHandle nh_;
    void publish_vehicle_cmd_();
    void joy_callback_(sensor_msgs::Joy msg);
    ros::Subscriber joy_sub_;
    ros::Publisher vehicle_cmd_pub_;
    boost::optional<sensor_msgs::Joy> joy_cmd_;
};
#endif  //JOY_VEHICLE_CND_SENDER_H_INCLUDED