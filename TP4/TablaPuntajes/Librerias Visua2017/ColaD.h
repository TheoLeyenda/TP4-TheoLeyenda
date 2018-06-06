#ifndef COLA_H
#define COLA_H
#include"Lista.h"

class ColaD{
private:
	Lista l;
public:
  ColaD(){}
  ~ColaD(){}
  bool push(int data);
  bool pop(int &data);
  bool empty();
};
#endif