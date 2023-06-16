#include "Circle.hpp"
#include <iostream>

void Circle::accept(Visitor* v) {
  v->visit(this);
}

void Circle::operation() {
  std::cout << "This shape is circle." << std::endl;
}