#ifndef HOBBS_CIRCLE_H
#define HOBBS_CIRCLE_H

#include "CircleInterface.h"

namespace circle {

    class Circle : public circle::CircleInterface {

    public:

        Circle(int radius);
        ~Circle();

        int getRadius() const override;

        int getArea() override;

        std::string report() override;

    private:
        int m_radius;

    };

}

#endif //HOBBS_CIRCLE_H
