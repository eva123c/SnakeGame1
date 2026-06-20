/**
 * @file board.hpp
 * @brief Declarația clasei Board, care reprezintă tabla de joc.
 * @author Turcan Victoria
 * @date 2026
 * @project SnakeGame
 */

#pragma once

#include <iostream>

/**
 * @brief Reprezintă tabla de joc, definită prin lățime și înălțime.
 *
 * Clasa Board păstrează dimensiunile tablei pe care se desfășoară jocul
 * și oferă operatori pentru comparare, copiere și citire/scriere din flux.
 */
class Board {
   int _width;  ///< Lățimea tablei de joc
   int _height; ///< Înălțimea tablei de joc
public:
   /**
    * @brief Constructor cu dimensiuni impliciite.
    * @param width Lățimea tablei (implicit 20).
    * @param height Înălțimea tablei (implicit 20).
    */
   Board(int width = 20, int height = 20);

   /**
    * @brief Constructor de copiere.
    * @param other Tabla din care se copiază dimensiunile.
    */
   Board(const Board& other);

   /**
    * @brief Returnează lățimea tablei.
    * @return Lățimea tablei, ca număr întreg.
    */
   int GetWidth() const;

   /**
    * @brief Returnează înălțimea tablei.
    * @return Înălțimea tablei, ca număr întreg.
    */
   int GetHeight() const;

   /**
    * @brief Operator de asignare.
    * @param other Tabla din care se copiază dimensiunile.
    * @return O copie a tablei curente, după asignare.
    */
   Board operator = (const Board& other);

   /**
    * @brief Compară două table pentru egalitate (aceleași dimensiuni).
    * @param other Tabla cu care se face comparația.
    * @return true dacă tablele au aceleași dimensiuni, false altfel.
    */
   bool operator == (const Board& other) const;
};

/**
 * @brief Citește dimensiunile unei table dintr-un flux de intrare.
 * @param in Fluxul de intrare.
 * @param board Tabla în care se salvează dimensiunile citite.
 * @return Fluxul de intrare, pentru înlănțuirea operațiilor.
 */
std::istream& operator >> (std::istream& in, Board& board);

/**
 * @brief Scrie dimensiunile unei table într-un flux de ieșire.
 * @param out Fluxul de ieșire.
 * @param board Tabla de afișat.
 * @return Fluxul de ieșire, pentru înlănțuirea operațiilor.
 */
std::ostream& operator << (std::ostream& out, const Board& board);