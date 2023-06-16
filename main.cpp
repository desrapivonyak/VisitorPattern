#include <iostream>
#include "Visitor.hpp"
#include "Circle.hpp"
#include "Square.hpp"

int main() {
  Visitor* v = new Visitor();

  Circle* c = new Circle();
  Square* s = new Square();

  c->accept(v);
  s->accept(v);

  delete s;
  delete c;
  delete v;

  return 0;
}