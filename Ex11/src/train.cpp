// Copyright 2021 GN
#include "train.h"
#include <ctime>
#include <iostream>
Train::Train(int length_) {
    srand(std::time(0));
    unsigned int t = std::time(NULL);
    for (size_t i = 0; i < length_; i++) {
        int light_ = rand_r(&t) % 2;
        this->addCage(light_);
    }
}
void Train::addCage(int light_) {
    Cage *cg = new Cage;
    if (light_ == 1) {
        cg->on();
    }
    if (this->first == nullptr && this->last == nullptr) {
        this->first = cg;
        this->last = cg;
    } else if (this->first == this->last) {
        this->last = cg;
        this->first->next = cg;
        this->first->prev = cg;
        this->last->next = this->first;
        this->last->prev = this->first;
    } else {
        cg->prev = this->last;
        this->last->next = cg;
        this->last = cg;
        this->first->prev = this->last;
        this->last->next = this->first;
    }
}
void Train::print() {
    Cage* cg1 = first;
    while (cg1 != this->last) {
        std::cout << cg1->get() << std::endl;
        cg1 = cg1->next;
    }
    std::cout << cg1->get() << std::endl;
}
int Train::length() {
    int first_position = this->first->get();
    int length = 0;
    Cage* cg2 = new Cage;
    Cage* cg3 = new Cage;
    cg2 = this->first;
    while (cg2->get() == first_position) {
        cg3 = this->first->next;
        length = 1;
        while (cg3->get() != first_position) {
            length++;
            cg3 = cg3->next;
        }
        if (first_position == 1) {
            cg3->off();
        }
        if (first_position == 0) {
            cg3->on();
        }
        for (size_t i = 0; i < length; i++) {
            cg3 = cg3->prev;
        }
        cg2 = cg3;
    }
    return length;
}
