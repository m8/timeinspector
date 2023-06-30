#!/bin/bash
example_dir="examples"

# Compile all examples
pushd $example_dir 
make
popd


touch test_output.txt

for file in $(find $example_dir -name "*.out"); do

    filename=$(basename -- "$file")
    filename="${filename%.*}"

    python3 main.py -f $example_dir/$filename.out >> test_output.txt 
done