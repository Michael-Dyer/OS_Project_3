#!/bin/bash

awk '{ sum += $1 } END { print sum }' number_list
