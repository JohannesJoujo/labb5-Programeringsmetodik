//
// Created by Johannes Joujo on 2022-12-15.
//

#include "Ball.h"

#include <utility>

bool Ball::operator==(Ball &boll) {
    return this->name == boll.name;
}

Ball::Ball(std::string name, double speed) : name(std::move(name)), speed(speed) {

}

std::ostream &operator<<(std::ostream &COUT, Ball &boll) {
    COUT << boll.name << ' ' << boll.speed<<std::endl;
    return COUT;
}

double Ball::getSpeed() const {
    return speed;
}

std::string Ball::getName() const {
    return name;
}
