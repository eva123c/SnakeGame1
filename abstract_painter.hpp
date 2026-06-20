/**
 * @file abstract_painter.hpp
 * @brief Declarația clasei abstracte AbstractPainter, interfața comună pentru desenare.
 * @author Turcan Victoria
 * @date 2026
 * @project SnakeGame
 */

#pragma once

#include <vector>
#include <string>
#include "point.hpp"

/**
 * @brief Interfață abstractă pentru desenarea elementelor jocului.
 *
 * AbstractPainter definește contractul pe care trebuie să-l respecte
 * orice clasă responsabilă de afișarea grafică a jocului, indiferent
 * de modul concret de implementare (consolă, fereastră grafică, etc.).
 */
struct AbstractPainter {
   /**
    * @brief Desenează o imagine (un set de linii de text) într-o zonă a tablei.
    * @param topLeft Colțul din stânga-sus al zonei de desenare.
    * @param bottomRight Colțul din dreapta-jos al zonei de desenare.
    * @param image Imaginea de desenat, reprezentată ca un vector de linii de text.
    */
   virtual void DrawImage(Point topLeft, Point bottomRight, const std::vector<std::string>& image) = 0;

   /**
    * @brief Scrie un text la o poziție specificată.
    * @param position Poziția la care se scrie textul.
    * @param text Textul de afișat.
    */
   virtual void WriteText(Point position, const std::string& text) = 0;

   /**
    * @brief Destructor virtual, necesar pentru ștergerea corectă a obiectelor derivate.
    */
   virtual ~AbstractPainter() = default;
};