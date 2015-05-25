#!/bin/bash
if [ $# -ne 2 ]; then
	echo "./set_gssh.sh [libpam_galaxy.so path] [directory for passwords]"
	exit 1
fi
so_path=$1
password_dir=$2
sed -ine '/galaxy.so/d' /etc/pam.d/sshd
sed -ine "2i\auth     sufficient   $so_path $password_dir" /etc/pam.d/sshd
if [ $? -ne 0 ]; then
    echo "faild to attach libpam_galaxy.so"
fi
echo "Done"

