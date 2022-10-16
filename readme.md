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

## Example
The below graph shows the average time to sort 100000.

![plot](https://quickchart.io/chart/render/zm-dd5a5c95-6438-4387-beab-61e00ccccb45?data1=12,38,71,128,198,285,389,508,636,795,962,1146,1349,1566,1795,2042,2297,2578,2877,3187,&labels=n=1,n=2,n=3,n=4,n=5,n=6,n=7,n=8,n=9,n=10,n=11,n=12,n=13,n=14,n=15,n=16,n=17,n=18,n=19,n=20 "Title")
