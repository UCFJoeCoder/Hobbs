#include "Rectangle.h"
#include "../shapes/Shape.h"
#include <sstream>

namespace rectangle {

    Rectangle::Rectangle(int length, int width) : m_length(length),
                                                  m_width(width) {
    }

    int Rectangle::getArea() {
        return m_length * m_width;
    }

    std::string Rectangle::report() {
        std::stringstream ss;
        ss << getShapeType() << "-Rectangle: " << "(l:" << m_length << ",w:" << m_width << ") Area: "
           << getArea() << std::endl;
        return ss.str();
    }
} // shape