/**
 * @file test_main.cpp
 * @brief Teste unitare pentru clasele de date ale proiectului SnakeGame.
 * @author Turcan Victoria
 * @date 2026
 * @project SnakeGame
 */

#include "test_framework.hpp"
#include "../point.hpp"
#include "../apple.hpp"
#include "../board.hpp"
#include "../direction.hpp"
#include "../snake.hpp"

void TestPoint()
{
    Point p1(3, 4);
    CHECK(p1.x == 3 && p1.y == 4, "Point: constructor seteaza corect coordonatele");

    Point p2(3, 4);
    CHECK(p1 == p2, "Point: doua puncte cu aceleasi coordonate sunt egale");

    Point p3(1, 1);
    CHECK(!(p1 == p3), "Point: doua puncte cu coordonate diferite nu sunt egale");

    Point p4 = p1;
    CHECK(p4 == p1, "Point: operatorul de asignare copiaza corect valorile");
}

void TestApple()
{
    Apple a1(Point(5, 5));
    CHECK(a1.GetPosition() == Point(5, 5), "Apple: GetPosition returneaza poziția corectă");

    Apple a2(Point(5, 5));
    CHECK(a1 == a2, "Apple: doua mere cu aceeasi pozitie sunt egale");

    Apple a3;
    CHECK(a3.GetPosition() == Point(0, 0), "Apple: constructorul implicit seteaza pozitia (0,0)");
}

void TestBoard()
{
    Board b1(20, 15);
    CHECK(b1.GetWidth() == 20, "Board: GetWidth returneaza latimea corecta");
    CHECK(b1.GetHeight() == 15, "Board: GetHeight returneaza inaltimea corecta");

    Board b2(20, 15);
    CHECK(b1 == b2, "Board: doua table cu aceleasi dimensiuni sunt egale");

    Board b3;
    CHECK(b3.GetWidth() == 20 && b3.GetHeight() == 20, "Board: constructorul implicit foloseste 20x20");
}

void TestSnake()
{
    Snake s1(Point(0, 0));
    CHECK(s1.GetSize() == 1, "Snake: la creare, sarpele are un singur segment");
    CHECK(s1.GetPosition() == Point(0, 0), "Snake: pozitia initiala a capului este corecta");

    s1.Move(Direction::Right);
    CHECK(s1.GetPosition() == Point(1, 0), "Snake: miscarea spre dreapta modifica pozitia capului");
    CHECK(s1.GetSize() == 1, "Snake: miscarea nu modifica marimea sarpelui");

    Apple apple(Point(2, 0));
    s1.Eat(apple);
    CHECK(s1.GetSize() == 2, "Snake: dupa ce mananca, marimea sarpelui creste");
}

int main()
{
    std::cout << "=== Running SnakeGame unit tests ===" << std::endl;

    TestPoint();
    TestApple();
    TestBoard();
    TestSnake();

    PRINT_SUMMARY();

    return (g_failed == 0) ? 0 : 1;
}