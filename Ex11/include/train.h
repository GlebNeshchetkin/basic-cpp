// Copyright 2021 GN
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_
class Cage {
    int light;

 public:
    Cage* next;
    Cage* prev;
    Cage() : light(false), next(nullptr), prev(nullptr) {}
    void on() { light = 1; }
    void off() { light = 0; }
    int get() const { return light; }
};
class Train : public Cage {
    Cage* first;
    Cage* last;

 public:
    explicit Train(int length_);
    void addCage(int light);
    void print();
    int length();
    Cage* getFirst() {
        return this->first;
    }
    Cage* getLast() {
        return this->last;
    }
};

#endif  // INCLUDE_TRAIN_H_
