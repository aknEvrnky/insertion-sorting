# Insertion sorting algorithm
This is a simple implementation of the insertion sorting algorithm in C++.

It measures the time to sort randomly generated arrays of different sizes.

## inputs

- nValue => how many values to sort
- nSize => how many measurements to calculate

If you provide the program 10000 4 as input, then
it will sort 1000 values 4 times and calculate the average time.

| step (n) | number of elements | average time |
|----------|--------------------|--------------|
| 1        | 10000              | 38 ms        |
| 2        | 20000              | 129 ms       |
| 3        | 30000              | 285 ms       |
| 4        | 40000              | 505 ms       |

## build

You can build the cmake file with CLion.
