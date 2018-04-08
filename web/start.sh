#!/bin/bash

_trap() {
    echo "Terminating nginx and fluentd"
#    service td-agent-bit stop
    exit 0
}

trap _trap SIGTERM

#service td-agent-bit start
#service td-agent-bit status

/opt/td-agent-bit/bin/td-agent-bit -c /etc//td-agent-bit/td-agent-bit.conf &
nginx
tail -f /var/log/nginx/access.log -f /var/log/nginx/error.log
