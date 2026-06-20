#pragma once

#include <vector>
#include <iostream>
#include "apple.hpp"
#include "direction.hpp"
#include "point.hpp"

class Snake {
   std::vector<Point> _segments;
public:
   Snake();
   Snake(const Point& position);
   void Move(Direction direction);
   int GetSize() const;
   Point GetPosition() const;
   void Eat(const Apple& apple);
};

std::ostream& operator << (std::ostream& out, const Snake& snake);