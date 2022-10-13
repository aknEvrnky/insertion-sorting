//
// Created by Necmi Akin Evrenkaya on 13.10.2022.
//

#include "Grapher.h"
#include <string>

std::string Grapher::draw(int arr[], int n) {
    std::string url = "https://quickchart.io/chart/render/zm-dd5a5c95-6438-4387-beab-61e00ccccb45";

    url += "?data1=";
    for(int i = 0; i < n; i++) {
        url +=  std::to_string(arr[i]) + ",";
    }
    url += "&labels=";
    for(int i = 0; i < n; i++) {
        url +=  "n=" + std::to_string(i+1) + ",";
    }
    return url;
}