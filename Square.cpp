#include <iostream>
#include "Square.hpp"

void Square::accept(Visitor* v) {
  v->visit(this);
}

void Square::operation() {
  std::cout << "This shape is square." << std::endl;
}