#include "game_engine.hpp"
#include "painter.hpp"
#include <iostream>

GameEngine::GameEngine() : _apple(Point(5, 5)), _snake(Point(0, 0)), _board(20, 20) {}

void GameEngine::Init()
{
    std::cout << "Game initialized." << std::endl;
    std::cout << "Board size: " << _board.GetWidth() << "x" << _board.GetHeight() << std::endl;
    std::cout << "Snake starts at: " << _snake.GetPosition() << std::endl;
    std::cout << "Apple is at: " << _apple.GetPosition() << std::endl;
}

void GameEngine::Run()
{
    Painter painter;
    painter.WriteText(Point(0, 0), "Snake game running...");

    _snake.Move(Direction::Right);
    std::cout << "After move: " << _snake << std::endl;

    _snake.Eat(_apple);
    std::cout << "After eating: " << _snake << std::endl;
}