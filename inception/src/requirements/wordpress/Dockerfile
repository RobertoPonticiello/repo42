FROM debian:bullseye

RUN apt-get update -y && apt-get upgrade -y && apt-get -y install wget
RUN apt-get install -y php7.4 \
	php7.4-fpm \
	php7.4-mysql \
	mariadb-client

RUN wget https://wordpress.org/wordpress-6.7.tar.gz -P /var/www
RUN cd /var/www && tar -xzf wordpress-6.7.tar.gz && rm wordpress-6.7.tar.gz
RUN chown -R root:root /var/www/wordpress
	


COPY	/conf/www.conf /etc/php/7.4/fpm/pool.d/www.conf

RUN 	mkdir -p /run/php
RUN wget https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar
RUN chmod +x wp-cli.phar
RUN mv wp-cli.phar /usr/local/bin/wp
	
COPY ./conf/config.sh /tmp/wordpress/config.sh
RUN chmod +x tmp/wordpress/config.sh

CMD [ "/tmp/wordpress/config.sh" ]
