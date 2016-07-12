# This image is based of debian with curl preinstalled
FROM buildpack-deps:jessie-curl

MAINTAINER Corey Maylone version:0.1

# Install dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
        build-essential \ 
        cmake \
        libavahi-client-dev \
        libavahi-common-dev \
        libbluetooth-dev \
        libudev-dev \
        libusb-1.0-0-dev \
        libsqlite3-dev \
        libssl-dev \
        nginx \
        python \
        sudo \
        supervisor \
        sqlite3     
        
RUN useradd -m docker && echo "docker:docker" | chpasswd && adduser docker sudo

USER docker