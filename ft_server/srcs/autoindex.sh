# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    autoindex.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gumatos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/06 11:43:01 by gumatos           #+#    #+#              #
#    Updated: 2021/05/06 13:13:19 by gumatos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
set -e

if [ $# = 1 ]; then
	if [ $1 = "off" ]; then
		sed -i 's/autoindex on;/autoindex off;/g' /etc/nginx/sites-available/localhost
	elif [ $1 = "on" ]; then
		sed -i 's/autoindex off;/autoindex on;/g' /etc/nginx/sites-available/localhost
	else
		echo "Please enter on/off to use this"
	fi
else
	echo "Usage : ./autoindex.sh on/off"
fi

nginx -s reload
