#ifndef HOBBS_RECTANGLE_H
#define HOBBS_RECTANGLE_H

#include "RectangleInterface.h"

namespace rectangle {

    class Rectangle : public RectangleInterface {

    public:
        Rectangle(int length, int width);

        int getArea() override;

        std::string report() override;

        int getLength() override { return m_length; }

        int getWidth() override { return m_width; }

    private:
        int m_length;
        int m_width;
    };

} // shape

#endif //HOBBS_RECTANGLE_H
