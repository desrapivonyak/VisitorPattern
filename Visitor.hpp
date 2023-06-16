#pragma once
#include "VisitorInterface.hpp"

class Visitor : public IVisitor {
public:
  void visit(Circle* circle) override;
  void visit(Square* square) override;
};
