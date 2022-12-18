//
// Created by Johannes Joujo on 2022-12-15.
//

#include "MyPrint.h"

#include <utility>

void MyPrint::operator()(Ball boll[],size_t size) {
    for(int i=0;i<size;i++) {
        std::cout << *(boll+i) << " \n";
    }
}

void MyPrint::operator()(Ball &boll) {
    std::cout<<boll<<" \n";
}

