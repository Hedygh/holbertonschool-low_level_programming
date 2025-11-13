#!/bin/bash
docker run --rm -it -v "$PWD":/work -w /work debian:stable-slim \
  sh -lc 'apt update && apt install -y build-essential valgrind &&
          gcc -O0 -g -Wall -Wextra -o f 5-main.c 5-free_dog.c 4-new_dog.c &&
          valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./f'
