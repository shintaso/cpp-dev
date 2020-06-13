FROM ubuntu:20.04
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && \
    apt-get install -y gcc g++ clang make gdb valgrind graphviz imagemagick git zip unzip