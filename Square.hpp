#pragma once
#include "Visitor.hpp"
#include "VisitorInterface.hpp"

class Square {
public:
  void accept(Visitor*);
  void operation();
};