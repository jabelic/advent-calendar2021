#!/bin/bash

test(){
    expected="$1"
    input="$2"
    ./tcc
}
test 0 0