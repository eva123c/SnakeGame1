/**
 * @file game_engine.hpp
 * @brief Declarația clasei GameEngine, motorul principal al jocului.
 * @author Turcan Victoria
 * @date 2026
 * @project SnakeGame
 */

#pragma once
#include "apple.hpp"
#include "snake.hpp"
#include "board.hpp"

/**
 * @brief Motorul jocului, responsabil de coordonarea tuturor componentelor.
 *
 * Clasa GameEngine inițializează tabla de joc, șarpele și mărul,
 * și controlează rularea efectivă a jocului.
 */
class GameEngine {
   Apple _apple; ///< Mărul curent din joc
   Snake _snake; ///< Șarpele jucătorului
   Board _board; ///< Tabla de joc
public:
   /**
    * @brief Constructor implicit. Inițializează tabla, șarpele și mărul cu valori implicite.
    */
   GameEngine();

   /**
    * @brief Inițializează jocul, afișând informații despre starea inițială.
    */
   void Init();

   /**
    * @brief Rulează logica principală a jocului.
    */
   void Run();
};