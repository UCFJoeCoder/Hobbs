#include "Triangle.h"
#include "../shapes/Shape.h"
#include <iostream>
#include <sstream>

namespace triangle {

    Triangle::Triangle(int base, int height) : m_base(base),
                                               m_height(height) {
    }

    int Triangle::getArea() {
        return (m_height * m_base) / 2;
    }

    std::string Triangle::report() {
        std::stringstream ss;
        ss << getShapeType() << "-Triangle: (b:" << getBase() << ",h:" << getHeight() << ") Area: "
           << getArea() << std::endl;
        return ss.str();
    }

    int Triangle::getBase() {
        return m_base;
    }

    int Triangle::getHeight() {
        return m_height;
    }

} // shape