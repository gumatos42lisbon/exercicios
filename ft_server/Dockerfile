FROM debian:buster

ENV AUTOINDEX on

RUN apt-get update && apt-get upgrade -y && apt-get install -y \
						nginx	\
						mariadb-server	\
						php-fpm	\
						php-mysql	\
						php-mbstring	\
						wget	\
						vim	\
						&& rm -rf /var/lib/apt/lists/*

COPY srcs/*.conf /tmp/
COPY srcs/start.sh /tmp/
COPY srcs/autoindex.sh /etc/nginx

RUN mkdir -p /var/www/gu_server && \
	mv /tmp/server.conf /etc/nginx/sites-available/localhost && \
	ln -s /etc/nginx/sites-available/localhost /etc/nginx/sites-enabled/gu_server && \
	rm -rf /etc/nginx/sites-enabled/default


RUN wget https://files.phpmyadmin.net/phpMyAdmin/5.0.2/phpMyAdmin-5.0.2-english.tar.gz && \
    tar -xzvf phpMyAdmin-5.0.2-english.tar.gz && \
    mv phpMyAdmin-5.0.2-english/ /var/www/gu_server/phpmyadmin && \
    rm -rf phpMyAdmin-5.0.2-english.tar.gz
COPY srcs/config.inc.php /var/www/gu_server/phpmyadmin

RUN wget https://wordpress.org/latest.tar.gz && \
    tar -xzvf latest.tar.gz && \
    mv wordpress /var/www/gu_server/ && \
    rm -rf latest.tar.gz
COPY srcs/wp-config.php /var/www/gu_server/wordpress

RUN cd /etc/ssl/private && \
	wget https://github.com/FiloSottile/mkcert/releases/download/v1.4.1/mkcert-v1.4.1-linux-amd64 && \
	mv mkcert-v1.4.1-linux-amd64 mkcert && chmod +x mkcert && \
	./mkcert -install && ./mkcert localhost

# Change ownership and allow access to all the files
# This is required for phpMyAdmin to have acces to all the data, otherwise it will display an error

RUN chown -R www-data /var/www/*
RUN chmod -R 755 /var/www/*

EXPOSE 80 443

CMD bash /tmp/start.sh
