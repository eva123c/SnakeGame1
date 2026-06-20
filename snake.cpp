#include "snake.hpp"

Snake::Snake() {
    _segments.push_back(Point(0, 0));
}

Snake::Snake(const Point &position) {
    _segments.push_back(position);
}

void Snake::Move(Direction direction)
{
    Point head = _segments.front();

    switch (direction)
    {
    case Direction::Top:
        head.y -= 1;
        break;
    case Direction::Bottom:
        head.y += 1;
        break;
    case Direction::Left:
        head.x -= 1;
        break;
    case Direction::Right:
        head.x += 1;
        break;
    }

    _segments.insert(_segments.begin(), head);
    _segments.pop_back();
}

int Snake::GetSize() const
{
    return _segments.size();
}

Point Snake::GetPosition() const
{
    return _segments.front();
}

void Snake::Eat(const Apple &apple)
{
    _segments.push_back(apple.GetPosition());
}

std::ostream& operator << (std::ostream& out, const Snake& snake)
{
    out << "Snake size: " << snake.GetSize() << ", head: " << snake.GetPosition();
    return out;
}