/**
 * @file point.hpp
 * @brief Declarația structurii Point, folosită pentru a reprezenta o coordonată pe tabla de joc.
 * @author Turcan Victoria
 * @date 2026
 * @project SnakeGame
 */

#pragma once

#include <iostream>

/**
 * @brief Reprezintă o coordonată (x, y) pe tabla de joc.
 *
 * Structura Point este folosită pentru a marca poziția oricărui element
 * din joc: segmentele șarpelui, poziția mărului, etc.
 */
struct Point{
   int x; ///< Coordonata pe axa orizontală
   int y; ///< Coordonata pe axa verticală

   /**
    * @brief Constructor cu parametri impliciți.
    * @param _x Coordonata x (implicit 0)
    * @param _y Coordonata y (implicit 0)
    */
   Point(int _x = 0, int _y = 0);

   /**
    * @brief Constructor de copiere.
    * @param other Punctul din care se copiază valorile.
    */
   Point(const Point& other);

   /**
    * @brief Operator de asignare.
    * @param other Punctul din care se copiază valorile.
    * @return O copie a punctului curent, după asignare.
    */
   Point operator = (const Point& other);

   /**
    * @brief Compară două puncte pentru egalitate.
    * @param other Punctul cu care se face comparația.
    * @return true dacă punctele au aceleași coordonate, false altfel.
    */
   bool operator == (const Point& other) const;
};

/**
 * @brief Citește un punct dintr-un flux de intrare.
 * @param in Fluxul de intrare.
 * @param point Punctul în care se salvează valorile citite.
 * @return Fluxul de intrare, pentru înlănțuirea operațiilor.
 */
std::istream& operator >> (std::istream& in, Point& point);

/**
 * @brief Scrie un punct într-un flux de ieșire.
 * @param out Fluxul de ieșire.
 * @param point Punctul de afișat.
 * @return Fluxul de ieșire, pentru înlănțuirea operațiilor.
 */
std::ostream& operator << (std::ostream& out, const Point& point);