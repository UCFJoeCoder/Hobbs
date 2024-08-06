#include "Circle.h"
#include "../shapes/Collection.h"
#include <sstream>

namespace circle {

    Circle::Circle(int radius) : m_radius(radius) {
    }

    Circle::~Circle() {
    }

    int Circle::getRadius() const {
        return m_radius;
    }

    int Circle::getArea() {
        return (m_radius * m_radius * 314159) / 100000;
    }

    std::string Circle::report() {

        std::stringstream ss;
        ss << getShapeType() << "-Circle: " << "(r:" << m_radius << ") Area: " << getArea()
           << std::endl;

        return ss.str();
    }

    extern "C" shape::Shape* buildShape() {
        return new circle::Circle(19);
    }
}