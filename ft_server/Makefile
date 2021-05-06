# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gumatos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/04 12:41:30 by gumatos           #+#    #+#              #
#    Updated: 2021/05/06 13:57:29 by gumatos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

build:
	docker build -t gu_server .

run:
	docker run --name gu_server -it -p 80:80 -p 443:443 gu_server

rund:
	docker run --name gu_server -d -p 80:80 -p 443:443 gu_server

kill:
	-docker kill 'docker ps -qa'

iclean: kill
	-docker rmi 'docker images -q'

cclean: kill
	-docker rm 'docker ps -qa'

prune:
	docker system prune
