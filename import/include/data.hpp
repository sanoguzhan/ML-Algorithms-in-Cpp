//
// Created by Oguzhan San on 27.05.20.
//
#ifndef ML_ALGORITHMS_IN_CPP_DATA_HPP
#define ML_ALGORITHMS_IN_CPP_DATA_HPP

#include <iostream>
#include <sstream>
#include <vector>
#include "stdint.h"
#include "stdio.h"
#include <sstream>


class data {
    std::vector<uint8_t> *features;
    uint8_t label;
    int enumerator;
    double distance;

public:
    data();
    ~data();
    void set_features(std::vector<uint8_t>*);
    void append(uint8_t);
    void set_label(uint8_t);
    void set_enumerator(int);
    void set_distance(double);
    int get_length();
    uint8_t get_label();
    uint8_t get_enumerator();

    std::vector<uint8_t> * get_features();

};
#endif //ML_ALGORITHMS_IN_CPP_DATA_HPP
