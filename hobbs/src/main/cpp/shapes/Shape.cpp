#include "Shape.h"

namespace shape {

    std::stringstream Shape::mLogStream;

    void Shape::log(std::string message) {
        Shape::mLogStream << message;
    }

    Shape::~Shape() {};

} // shape