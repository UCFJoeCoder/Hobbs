#ifndef HOBBS_CIRCLEINTERFACE_H
#define HOBBS_CIRCLEINTERFACE_H

#include "../shapes/Shape.h"

namespace circle {

    class CircleInterface : public shape::Shape {
    public:

        // __attribute__((noinline)) virtual ~CircleInterface() {};
        virtual ~CircleInterface();

        static ShapeType getShapeType() { return CIRCLE; };

        virtual int getRadius() const = 0;
    };

}


#endif //HOBBS_CIRCLEINTERFACE_H
