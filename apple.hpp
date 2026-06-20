/**
 * @file apple.hpp
 * @brief Declarația clasei Apple, care reprezintă mărul din jocul Snake.
 * @author Turcan Victoria
 * @date 2026
 * @project SnakeGame
 */

#pragma once

#include <iostream>
#include "point.hpp"

/**
 * @brief Reprezintă mărul din joc, pe care șarpele îl poate mânca.
 *
 * Clasa Apple păstrează poziția mărului pe tabla de joc și oferă
 * operatori pentru comparare, copiere și citire/scriere din flux.
 */
class Apple {
   Point _position; ///< Poziția curentă a mărului pe tablă
public:
   /**
    * @brief Constructor implicit. Poziționează mărul la (0, 0).
    */
   Apple();

   /**
    * @brief Constructor cu poziție specificată.
    * @param position Poziția la care va fi creat mărul.
    */
   Apple(const Point& position);

   /**
    * @brief Constructor de copiere.
    * @param other Mărul din care se copiază poziția.
    */
   Apple(const Apple& other);

   /**
    * @brief Returnează poziția curentă a mărului.
    * @return Poziția mărului, de tip Point.
    */
   Point GetPosition() const;

   /**
    * @brief Operator de asignare.
    * @param other Mărul din care se copiază poziția.
    * @return O copie a mărului curent, după asignare.
    */
   Apple operator = (const Apple& other);

   /**
    * @brief Compară două mere pentru egalitate (aceeași poziție).
    * @param other Mărul cu care se face comparația.
    * @return true dacă merele au aceeași poziție, false altfel.
    */
   bool operator == (const Apple& other) const;
};

/**
 * @brief Citește un măr (poziția lui) dintr-un flux de intrare.
 * @param in Fluxul de intrare.
 * @param apple Mărul în care se salvează poziția citită.
 * @return Fluxul de intrare, pentru înlănțuirea operațiilor.
 */
std::istream& operator >> (std::istream& in, Apple& apple);

/**
 * @brief Scrie poziția unui măr într-un flux de ieșire.
 * @param out Fluxul de ieșire.
 * @param apple Mărul de afișat.
 * @return Fluxul de ieșire, pentru înlănțuirea operațiilor.
 */
std::ostream& operator << (std::ostream& out, const Apple& apple);