#pragma once

#include <vector>
#include <string>
#include "abstract_painter.hpp"

class Painter: public AbstractPainter {
public:
   virtual void DrawImage(Point topLeft, Point bottomRight, const std::vector<std::string>& image) override;
   virtual void WriteText(Point position, const std::string& text) override;
};