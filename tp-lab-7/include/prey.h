// Copyright GN 2021

#ifndef INCLUDE_PREY_H_
#define INCLUDE_PREY_H_

#include "../include/common.h"
#include "../include/Object.h"
#include "../include/cell.h"
#include "../include/ocean.h"

// class Predator;
// class Object;
class Prey : public Object{
 protected:
    int time_of_life = 1;

 public:
    virtual void move();
  virtual void die();
    virtual void live();
  virtual void setObjectType();
    virtual void reproduction();
  virtual void printObject();
    virtual void setCell(Cell* c);
  virtual void init(Cell* c);
    virtual int getObjectINT();
  virtual char getObjectChar();
};
#endif  // INCLUDE_PREY_H_
