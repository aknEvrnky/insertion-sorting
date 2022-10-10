//
// Created by Necmi Akin Evrenkaya on 10.10.2022.
//

#include "Sort.h"
#include <chrono>
using namespace std::chrono;

int Sort::Insertion(int arr[], int n) {
    // start timer
    auto start = high_resolution_clock::now();

    // this is the algorithm which indicated in the book
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // stop timer
    auto stop = high_resolution_clock::now();

    // return the duration as microseconds
    return (duration_cast<milliseconds>(stop - start)).count();
}
