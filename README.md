clone the folder from github:
                $ git clone https://github.com/chengyuen93/auto_shutdown
this node receives a signal from openCR and shudown the system
please follow the instructions in the file sudoShutdown_woPasswd.txt

this node listens to the rostopic "shutdown" with the message type std_msgs::Bool

if the msg received is True, the node will execute the following command:
	$ sudo shutdown -h now



