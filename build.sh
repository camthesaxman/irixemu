#!/bin/bash

export CFLAGS="-g -O0"

# build emulator for old ABI (o32) binaries
./configure --target-list=mips-linux-user --static
make -j $(nproc)

# build emulator for new ABI (n32) binaries
./configure --target-list=mipsn32-linux-user --static
make -j $(nproc)
