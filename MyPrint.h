//
// Created by Johannes Joujo on 2022-12-15.
//

#ifndef UNTITLED5_MYPRINT_H
#define UNTITLED5_MYPRINT_H
#include "Ball.h"


class MyPrint {
public:
    void operator()(Ball boll[],size_t size);
    void operator()(Ball &boll);
};


#endif //UNTITLED5_MYPRINT_H
