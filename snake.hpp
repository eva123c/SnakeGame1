/**
 * @file snake.hpp
 * @brief Declarația clasei Snake, care reprezintă șarpele jucătorului.
 * @author Turcan Victoria
 * @date 2026
 * @project SnakeGame
 */

#pragma once

#include <vector>
#include <iostream>
#include <string>
#include "apple.hpp"
#include "direction.hpp"
#include "point.hpp"

/**
 * @brief Reprezintă șarpele jucătorului, format dintr-un șir de segmente.
 *
 * Clasa Snake gestionează mișcarea șarpelui pe tabla de joc, creșterea
 * lui atunci când mănâncă un măr, precum și salvarea/încărcarea stării
 * sale într-un fișier, folosind formatul JSON.
 */
class Snake {
   std::vector<Point> _segments; ///< Segmentele șarpelui, de la cap la coadă
public:
   /**
    * @brief Constructor implicit. Șarpele începe cu un singur segment, la poziția (0, 0).
    */
   Snake();

   /**
    * @brief Constructor cu poziție inițială specificată.
    * @param position Poziția la care va fi creat capul șarpelui.
    */
   Snake(const Point& position);

   /**
    * @brief Mișcă șarpele într-o direcție specificată.
    *
    * Capul se deplasează în direcția dată, iar ultimul segment este eliminat,
    * astfel încât lungimea șarpelui rămâne neschimbată.
    * @param direction Direcția în care se mișcă șarpele.
    */
   void Move(Direction direction);

   /**
    * @brief Returnează numărul de segmente ale șarpelui.
    * @return Mărimea curentă a șarpelui.
    */
   int GetSize() const;

   /**
    * @brief Returnează poziția capului șarpelui.
    * @return Poziția curentă a capului.
    */
   Point GetPosition() const;

   /**
    * @brief Face șarpele să „mănânce” un măr, crescând cu un segment.
    * @param apple Mărul mâncat de șarpe.
    */
   void Eat(const Apple& apple);

   /**
    * @brief Salvează starea curentă a șarpelui într-un fișier JSON.
    * @param filename Numele fișierului în care se salvează datele.
    */
   void SaveToFile(const std::string& filename) const;

   /**
    * @brief Încarcă starea șarpelui dintr-un fișier JSON.
    * @param filename Numele fișierului din care se citesc datele.
    */
   void LoadFromFile(const std::string& filename);
};

/**
 * @brief Scrie informații despre șarpe (mărime și poziția capului) într-un flux de ieșire.
 * @param out Fluxul de ieșire.
 * @param snake Șarpele de afișat.
 * @return Fluxul de ieșire, pentru înlănțuirea operațiilor.
 */
std::ostream& operator << (std::ostream& out, const Snake& snake);