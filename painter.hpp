/**
 * @file painter.hpp
 * @brief Declarația clasei Painter, implementarea concretă pentru desenare în consolă.
 * @author Turcan Victoria
 * @date 2026
 * @project SnakeGame
 */

#pragma once

#include <vector>
#include <string>
#include "abstract_painter.hpp"

/**
 * @brief Implementare concretă a AbstractPainter, pentru afișare în consolă.
 *
 * Clasa Painter desenează imaginile și textele jocului direct în consolă,
 * folosind fluxul standard de ieșire (std::cout).
 */
class Painter: public AbstractPainter {
public:
   /**
    * @brief Desenează o imagine în consolă, linie cu linie.
    * @param topLeft Colțul din stânga-sus al zonei de desenare.
    * @param bottomRight Colțul din dreapta-jos al zonei de desenare.
    * @param image Imaginea de desenat, reprezentată ca un vector de linii de text.
    */
   virtual void DrawImage(Point topLeft, Point bottomRight, const std::vector<std::string>& image) override;

   /**
    * @brief Scrie un text în consolă.
    * @param position Poziția la care se scrie textul (nefolosită în implementarea curentă).
    * @param text Textul de afișat.
    */
   virtual void WriteText(Point position, const std::string& text) override;
};