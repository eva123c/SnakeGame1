/**
 * @file direction.hpp
 * @brief Declarația enumerației Direction, care reprezintă direcția de mișcare a șarpelui.
 * @author Turcan Victoria
 * @date 2026
 * @project SnakeGame
 */

#pragma once

#include <iostream>

/**
 * @brief Reprezintă direcția de mișcare a șarpelui pe tabla de joc.
 *
 * Poate avea una din cele patru valori posibile: Top, Left, Right, Bottom.
 */
enum class Direction {
   Top,    ///< Mișcare în sus
   Left,   ///< Mișcare la stânga
   Right,  ///< Mișcare la dreapta
   Bottom  ///< Mișcare în jos
};

/**
 * @brief Scrie denumirea direcției într-un flux de ieșire.
 * @param out Fluxul de ieșire.
 * @param direction Direcția de afișat.
 * @return Fluxul de ieșire, pentru înlănțuirea operațiilor.
 */
std::ostream& operator<<(std::ostream& out, const Direction& direction);