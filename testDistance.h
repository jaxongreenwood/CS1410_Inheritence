//
// Created by Main on 10/17/2017.
//

#ifndef LECT8_TESTDISTANCE_H
#define LECT8_TESTDISTANCE_H
#include <ostream>

enum posneg {pos, neg};

class Distance {
private:
    unsigned int feet;
    unsigned float inches;
public:
    Distance();
    Distance(unsigned int feet, float inches);

    unsigned int getFeet() const;

    float getInches() const;

    void setFeet(unsigned int feet);

    void setInches(float inches);

    bool operator==(const Distance &rhs) const;

    bool operator!=(const Distance &rhs) const;


};

class DistSign: public Distance{
private:
    posneg sign;            //sign is positive or negative
public:
    DistSign(posneg sign);

    DistSign(unsigned int feet, float inches, posneg sign);

    posneg getSign() const;

    void setSign(posneg sign);

    friend std::ostream &operator<<(std::ostream &os, const DistSign &sign);
};




#endif //LECT8_TESTDISTANCE_H