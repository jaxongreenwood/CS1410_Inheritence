//
// Created by Main on 10/17/2017.
//

#include "testDistance.h"


Distance::Distance() {

}

Distance::Distance(unsigned int feet, float inches) {

}

unsigned int Distance::getFeet() const {
    return 0;
}

float Distance::getInches() const {
    return 0;
}

void Distance::setFeet(unsigned int feet) {

}

void Distance::setInches(float inches) {

}

bool Distance::operator==(const Distance &rhs) const {
    return feet == rhs.feet &&
           inches == rhs.inches;
}

bool Distance::operator!=(const Distance &rhs) const {
    return !(rhs == *this);
}

DistSign::DistSign(posneg sign) : sign(sign) {}

DistSign::DistSign(unsigned int feet, float inches, posneg sign) : Distance(feet, inches), sign(sign) {}

posneg DistSign::getSign() const {
    return sign;
}

void DistSign::setSign(posneg sign) {
    DistSign::sign = sign;
}

std::ostream &operator<<(std::ostream &os, const DistSign &sign) {
    os << static_cast<const Distance &>(sign) << " sign: " << sign.sign;
    return os;
}
