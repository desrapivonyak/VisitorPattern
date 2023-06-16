#pragma once
#include "Visitor.hpp"

class Circle {
public:
  void accept(Visitor*);
  void operation();
};