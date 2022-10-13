//
// Created by Necmi Akin Evrenkaya on 13.10.2022.
//

#ifndef SORTING_GRAPHER_H
#define SORTING_GRAPHER_H

#include <string>
class Grapher {
public:
    std::string static draw(int[], int);
    Grapher();
private:
    std::string static const base_uri;
};


#endif //SORTING_GRAPHER_H
