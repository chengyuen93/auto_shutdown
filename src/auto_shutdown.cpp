#include <stdio.h>
#include <stdlib.h>
#include "std_msgs/Bool.h"
#include "ros/ros.h"

void sensorCallback(const std_msgs::Bool& msg)
{
	if (msg.data)
	{
		system("sudo shutdown -h now");
	}
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "auto_shutdown_node");
	ros::NodeHandle n;
	ros::Subscriber sensor_sub = n.subscribe("shutdown", 10, sensorCallback);

	while (n.ok()) {
		ros::spinOnce();
	}

	return 0;
}