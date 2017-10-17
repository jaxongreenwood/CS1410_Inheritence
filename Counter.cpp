//
// Created by Main on 10/17/2017.
//

#include "Counter.h"
//Doxygen comments. Type /*! or /** followed by Enter
/*!
 * Counter: 1 Parameter Constructor
 * @param count : Initial Counter
 */
Counter::Counter(unsigned int count) : count(count) {}

/*!
 * Counter: Default Constructor
 */

Counter::Counter(): count(0) {}

/*!
 * getCount : Getter for count variable
 * @return : current count
 */

unsigned int Counter::getCount() const {
    return count;
}

/*!
 * setCount: Set current count
 * @param count : Number to set counter
 */

void Counter::setCount(unsigned int count) {
    Counter::count = count;
}
Counter Counter::operator++() {
    return Counter(++count);
}

/*!
 * ++ Operator : Increments counter
 * @return : ++counter
 */

//constructor


Counter CountDn::operator--() {
    return Counter(--count);
}

/*!
 * CountDn Default constructor
 */

CountDn::CountDn() : Counter() {

}

/*!
 * CountDn
 * @param count
 */

CountDn::CountDn(unsigned int count) : Counter(count) {}
