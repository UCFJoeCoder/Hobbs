#ifndef HOBBS_TRIANGLE_H
#define HOBBS_TRIANGLE_H

#include "TriangleInterface.h"

namespace triangle {

    class Triangle : public TriangleInterface {

    public:
        Triangle(int base, int height);

        int getArea() override;

        int getBase() override;

        int getHeight() override;

        std::string report() override;

    private:
        int m_base;
        int m_height;
    };

} // shape

#endif //HOBBS_TRIANGLE_H
