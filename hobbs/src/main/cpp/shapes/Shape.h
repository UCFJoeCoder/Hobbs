#ifndef HOBBS_SHAPE_H
#define HOBBS_SHAPE_H

#include <string>
#include <sstream>

namespace shape {

    class Shape {
    public:

        enum ShapeType
        {
            CIRCLE,
            RECTANGLE,
            TRIANGLE
        };

        virtual ~Shape();

        virtual int getArea() = 0;

        virtual std::string report() = 0;

        static void log(std::string message);

        static std::string getLog() { return mLogStream.str(); }

    protected:
        static std::stringstream mLogStream;
    };

} // shape

#endif //HOBBS_SHAPE_H
