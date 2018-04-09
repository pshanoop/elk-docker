FROM fluent/fluentd:v1.1.3-debian-onbuild
MAINTAINER Sanoob <...@...>

RUN apt-get install -y --no-install-recommends $buildDeps \
 && gem install \
        fluent-plugin-secure-forward \
 && gem install \
        fluent-plugin-elasticsearch \
 && gem sources --clear-all \
 && apt-get purge -y --auto-remove \
                -o APT::AutoRemove::RecommendsImportant=false \
                 $buildDeps \
 && rm -rf /var/lib/apt/lists/* \
 && rm -rf /tmp/* /var/tmp/* /usr/lib/ruby/gems/*/cache/*.gem

EXPOSE 24284
EXPOSE 24224
