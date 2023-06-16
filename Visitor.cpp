#include "Visitor.hpp"
#include "Circle.hpp"
#include "Square.hpp"
#include <iostream>

void Visitor::visit(Circle* circle) {
  circle->operation();
}

void Visitor::visit(Square* square) {
  square->operation();
}