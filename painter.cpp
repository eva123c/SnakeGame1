#include "painter.hpp"
#include <iostream>

void Painter::DrawImage(Point topLeft, Point bottomRight, const std::vector<std::string>& image)
{
    for (const std::string& line : image)
    {
        std::cout << line << std::endl;
    }
}

void Painter::WriteText(Point position, const std::string& text)
{
    std::cout << text << std::endl;
}