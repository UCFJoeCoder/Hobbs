#ifndef HOBBS_RECTANGLEINTERFACE_H
#define HOBBS_RECTANGLEINTERFACE_H

#include "../shapes/Shape.h"

namespace rectangle {

    // class __attribute__((visibility("default"))) RectangleInterface : public Shape {
class RectangleInterface : public shape::Shape {
    public:
        static ShapeType getShapeType() { return RECTANGLE; };

        virtual int getLength() = 0;

        virtual int getWidth() = 0;
    };
}

#endif //HOBBS_RECTANGLEINTERFACE_H
