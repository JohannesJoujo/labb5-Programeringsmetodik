//
// Created by Johannes Joujo on 2022-12-15.
//

#ifndef UNTITLED5_BALL_H
#define UNTITLED5_BALL_H

#include <iostream>
#include <string>
class Ball {
private:
    std::string name;
    double speed;
    double summa;
    int count;
public:
    Ball()=default;
    Ball(std::string name, double speed);
    bool operator ==(Ball & boll);
    friend std::ostream& operator<<(std::ostream& COUT, Ball& boll);
    double getSpeed() const;
    std::string getName() const;
    std::string SetName(std::string setname);

};


#endif //UNTITLED5_BALL_H
