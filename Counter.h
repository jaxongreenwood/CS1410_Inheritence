//
// Created by Main on 10/17/2017.
//

#ifndef LECT8_COUNTER_H
#define LECT8_COUNTER_H


class Counter {
//count
protected:
    unsigned int count;
public:
    Counter();
    Counter(unsigned int count);

    unsigned int getCount() const;

    void setCount(unsigned int count);

    Counter operator ++();
};

class CountDn : public Counter {
public:
    Counter operator --();
};


#endif //LECT8_COUNTER_H
