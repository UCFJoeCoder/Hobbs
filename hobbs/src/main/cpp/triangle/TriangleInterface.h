#ifndef HOBBS_TRIANGLE_INTERFACE_H
#define HOBBS_TRIANGLE_INTERFACE_H

#include "../shapes/Shape.h"

namespace triangle {

    // class __attribute__((visibility("default"))) TriangleInterface : public Shape {
class TriangleInterface : public shape::Shape {
    public:
        static ShapeType getShapeType() { return TRIANGLE; };

        virtual int getBase() = 0;

        virtual int getHeight() = 0;
    };

} // shape

#endif //HOBBS_TRIANGLE_INTERFACE_H
