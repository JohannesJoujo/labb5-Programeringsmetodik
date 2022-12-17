//
// Created by Johannes Joujo on 2022-12-15.
//

#ifndef UNTITLED5_FINDOBJ_H
#define UNTITLED5_FINDOBJ_H

#include "Ball.h"

class Findobj {
private:
    double value=0;
public:
    bool operator()(Ball &boll);
};

class Findname{
public:
    bool operator()(Ball &boll,Ball &bol);
};

class isEqul{
public:
    bool operator()(Ball &boll, Ball &Arr);
};

class searchseq{
public:
    bool operator()(Ball &boll, Ball &Arr);
};

class MyBinOp{
private:
public:
    double operator()(double boll, Ball &bol);
    double operator()(Ball &boll);
};

class MyFunc{
public:
    double operator()(double boll,double bol);
};

#endif //UNTITLED5_FINDOBJ_H
