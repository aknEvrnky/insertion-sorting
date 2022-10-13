#include <iostream>
#include "Sort.h"
#include <string>
#include "Grapher.h"

int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    int nValue, nSize;
    std::cout << "Enter the N value: " << std::endl;
    std::cin >> nValue;
    std::cout << "Enter the size of the array: " << std::endl;
    std::cin >> nSize;

    // create 2d dynamic array => it will create nSize arrays with ( nValue * (i+1) ) elements
    // if our n value is 1000, arr[0] has 1000 elements, arr[1] has 2000 elements, arr[2] has 3000 elements, etc.
    int **arr = new int *[nValue];
    for (int i = 0; i < nSize; i++) {
        arr[i] = new int[nValue*(i+1)];
    }

    // fill the array with random numbers
    for (int i = 0; i < nSize; i++) {
        int actualSize = nValue * (i + 1);
        for (int j = 0; j < actualSize; j++) {
            arr[i][j] = getRandomNumber(0, actualSize);
        }
    }

    int *results = new int[nSize];

    for(int i = 0; i < nSize; i++) {
        int actualSize = nValue * (i + 1);
        int duration = Sort::Insertion(arr[i], actualSize);
        std::cout << "duration for n = "<< i+1 <<": " << duration << "ms" << std::endl;
        results[i] = duration;
    }
    std::string output = Grapher::draw(results, nSize);

    std::cout << output << std::endl;

    // free the memory
    for (int i = 0; i < nSize; i++) {
        delete [] arr[i];
    }
    delete [] results;

    return 0;
}
