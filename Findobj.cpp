//
// Created by Johannes Joujo on 2022-12-15.
//

#include "Findobj.h"
/*
bool Findobj::is_bigger(Ball &boll, double speed) {
    return speed > boll.getSpeed();
}*/
/*
bool Findobj::comp(Ball &boll) {
    double value;
    std::cout<<"insert a speed plz: ";
    std::cin>>value;
    return value > boll.getSpeed();
}
*/

bool Findobj::operator()(Ball &boll) {
    double temp= this->value;
    if(temp==0) {
        std::cout << "Insert a speed value plz: ";
        std::cin >> temp;
        this->value = temp;
    }
        return this->value < boll.getSpeed();
}

bool Findname::operator()(Ball &boll,Ball &bol) {
    return bol.getName() == boll.getName();
}

bool isEqul::operator()(Ball &boll, Ball &Arr) {
    return boll.getName()==Arr.getName() && boll.getSpeed()==Arr.getSpeed();
}


bool searchseq::operator()(Ball &boll, Ball &Arr) {
    return boll.getName()==Arr.getName() && boll.getSpeed()==Arr.getSpeed();
}
/*
bool MyBinOp::operator()(Ball &boll, Ball &bol) {
    double sum=0;
    sum=boll.getSpeed()+bol.getSpeed();
    this->total+=sum;
    return total;

}
*/
double MyBinOp::operator()(double boll, Ball &bol) {
    double sum=0;
    sum+=boll+bol.getSpeed();
    return sum;
}

double MyBinOp::operator()(Ball &boll) {
    return boll.getSpeed();
}

double MyFunc::operator()(double boll, double bol) {
    return boll-bol;
}
