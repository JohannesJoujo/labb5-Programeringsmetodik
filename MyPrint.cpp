//
// Created by Johannes Joujo on 2022-12-15.
//

#include "MyPrint.h"

#include <utility>
/*
Ball MyPrint::operator()(std::string name, double speed) {
    std::cout<<name<<" "<<speed<<std::endl;
    return {std::move(name), speed};
}*/

/*
Ball MyPrint::operator()(Ball &boll) {
    std::cout<<boll<<" \n";
    return boll;
}*/
void MyPrint::operator()(Ball boll[],size_t size) {
    for(int i=0;i<size;i++) {
        std::cout << *(boll+i) << " \n";
    }
}

void MyPrint::operator()(Ball &boll) {
    std::cout<<boll<<" \n";
}

