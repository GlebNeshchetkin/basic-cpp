// Copyright 2021 GN

#include "TimedDoor.h"
#include <iostream>
#include <ctime>

DoorTimerAdapter::DoorTimerAdapter(TimedDoor& door_) : door(door_) {}
TimedDoor::TimedDoor(int t_) {
    this->lock();
    this->iTimeout = t_;
    this->adapter = new DoorTimerAdapter(*this);
}
bool TimedDoor::isDoorOpened() {
    return opened;
}
void TimedDoor::unlock() {
    opened = true;
    Timer time;
    time.tregister(this->iTimeout, this->adapter);
}
void TimedDoor::lock() {
    opened = false;
}
void TimedDoor::DoorTimeOut() {
    throwState();
}
void DoorTimerAdapter::Timeout() {
    door.DoorTimeOut();
}
void TimedDoor::throwState() {
    if (!isDoorOpened()) {
        std::string str1 = "the door is closed!";
        throw(str1);
    } else {
        std::string str2 = "close the door!";
        throw(str2);
    }
}
void Timer::tregister(int t_, TimerClient* cl) {
    sleep(t_);
    cl->Timeout();
}
void Timer::sleep(int t_) {
    time_t s = time(nullptr);
    time_t f = s;
    while (f != s + t_) {
        f = time(nullptr);
    }
}

