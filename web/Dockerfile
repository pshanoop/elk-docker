FROM nginx as build
ENV REFRESHED_AT 2016-11-04


###############################################################################
#                                INSTALLATION
###############################################################################

### install Filebeat

ENV FILEBEAT_VERSION 6.2.3


RUN apt-get update -qq \
 && apt-get install -qqy gnupg wget libssl-dev \
 && apt-get clean
COPY fluentbit.list /etc/apt/sources.list.d/fluentbit.list
RUN wget -qO - http://packages.fluentbit.io/fluentbit.key | apt-key add - \
 && apt-get update \
 && apt-get install td-agent-bit


###############################################################################
#                                CONFIGURATION
###############################################################################

### tweak nginx image set-up

# remove log symlinks
RUN rm /var/log/nginx/access.log /var/log/nginx/error.log


###############################################################################
#                                    DATA
###############################################################################

### add dummy HTML file

COPY html /usr/share/nginx/html


###############################################################################
#                                    START
###############################################################################

ADD ./start.sh /usr/local/bin/start.sh
RUN chmod +x /usr/local/bin/start.sh
CMD [ "/usr/local/bin/start.sh" ]
