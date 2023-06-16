#pragma once
class Square;
class Circle;

class IVisitor {
public:
  virtual void visit(Square* square) = 0;
  virtual void visit(Circle* circle) = 0;
};