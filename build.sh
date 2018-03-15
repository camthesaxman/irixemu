#!/bin/bash

export CFLAGS="-g -O0"

./configure --target-list=mips-linux-user,mipsn32-linux-user --static
make -j $(nproc)
