#!/bin/bash

test(){
    expected="$1"
    input="$2"
    # ./tcc
    cc main.c
    ./a.out
}
test 0 0