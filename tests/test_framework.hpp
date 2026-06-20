/**
 * @file test_framework.hpp
 * @brief Mini-cadru propriu pentru scrierea și rularea testelor unitare.
 * @author Turcan Victoria
 * @date 2026
 * @project SnakeGame
 */

#pragma once

#include <iostream>
#include <string>

/// Numărul de teste reușite
inline int g_passed = 0;
/// Numărul de teste eșuate
inline int g_failed = 0;

/**
 * @brief Verifică o condiție și afișează rezultatul testului.
 * @param condition Condiția care trebuie să fie adevărată pentru ca testul să treacă.
 * @param testName Numele testului, afișat în consolă.
 */
inline void CHECK(bool condition, const std::string& testName)
{
    if (condition)
    {
        std::cout << "[PASS] " << testName << std::endl;
        g_passed++;
    }
    else
    {
        std::cout << "[FAIL] " << testName << std::endl;
        g_failed++;
    }
}

/**
 * @brief Afișează un rezumat al testelor rulate.
 */
inline void PRINT_SUMMARY()
{
    std::cout << "------------------------" << std::endl;
    std::cout << "Passed: " << g_passed << ", Failed: " << g_failed << std::endl;
}