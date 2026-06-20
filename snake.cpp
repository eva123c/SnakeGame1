#include "snake.hpp"
#include "json.hpp"
#include <fstream>

using json = nlohmann::json;

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

void Snake::SaveToFile(const std::string& filename) const
{
    json data;
    for (const Point& p : _segments)
    {
        data["segments"].push_back({{"x", p.x}, {"y", p.y}});
    }

    std::ofstream file(filename);
    file << data.dump(4);
}

void Snake::LoadFromFile(const std::string& filename)
{
    std::ifstream file(filename);
    json data;
    file >> data;

    _segments.clear();
    for (const auto& seg : data["segments"])
    {
        _segments.push_back(Point(seg["x"], seg["y"]));
    }
}

std::ostream& operator << (std::ostream& out, const Snake& snake)
{
    out << "Snake size: " << snake.GetSize() << ", head: " << snake.GetPosition();
    return out;
}