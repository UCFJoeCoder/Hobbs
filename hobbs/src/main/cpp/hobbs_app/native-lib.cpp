#include <jni.h>
#include "../shapes/Collection.h"
#include <sstream>
#include "../shapes/Shape.h"
#include "dlfcn.h"

#include "../rectangle/Rectangle.h"
#include "../rectangle/RectangleInterface.h"
#include "../circle/Circle.h"
#include "../circle/CircleInterface.h"
#include "../triangle/Triangle.h"
#include "../triangle/TriangleInterface.h"

typedef void (*SymbolHandle)();
typedef shape::Shape* (*BuildShapeMethod)();
extern "C" JNIEXPORT jstring JNICALL Java_com_example_hobbs_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    //void* ptr = dlopen("libRectangleLib.so",RTLD_NOW);
    //void* pCircleLibHandle = dlopen("libCircleLib.so",RTLD_NOW);

    //const char* errorBuffer = dlerror();

    //dlopen("libRectangleLib.so",RTLD_NOW);
    //dlopen("libTriangleLib.so",RTLD_NOW);
    //dlopen("libShapesLib.so",RTLD_NOW);

    std::stringstream result;

    shape::Collection cc;

    // Add other shapes.
    cc.AddShape(rectangle::Rectangle::getShapeType(), std::make_shared<rectangle::Rectangle>(15, 22));
    cc.AddShape(triangle::Triangle::getShapeType(), std::make_shared<triangle::Triangle>(80, 12));

    // Add the Circle shape.
    cc.AddShape(circle::Circle::getShapeType(), std::make_shared<circle::Circle>(12));
    //SymbolHandle symbolHandle = (SymbolHandle) dlsym(pCircleLibHandle, "buildShape");
    //BuildShapeMethod getCircleMethod = reinterpret_cast<BuildShapeMethod>(symbolHandle);
    //cc.AddShape(circle::Circle::getShapeType(), std::shared_ptr<shape::Shape>(getCircleMethod()));


    // Display the collection
    result << "--- Collection Report --- " << std::endl;
    result << cc.report() << std::endl;

    // Now try the find routines.
    std::shared_ptr<circle::CircleInterface> spCircle = cc.find<circle::CircleInterface>(
            circle::CircleInterface::getShapeType());
    std::shared_ptr<rectangle::RectangleInterface> spRectangle = cc.find<rectangle::RectangleInterface>(
            rectangle::RectangleInterface::getShapeType());
    std::shared_ptr<triangle::TriangleInterface> spTriangle = cc.find<triangle::TriangleInterface>(
            triangle::TriangleInterface::getShapeType());

    result << "----Find Results ---" << std::endl;
    if (spCircle) {
        result << spCircle->report();
    } else {
        result << "Circle search failed." << std::endl;
    }
    if (spRectangle) {
        result << spRectangle->report();
    } else {
        result << "Rectangle search failed." << std::endl;
    }
    if (spTriangle) {
        result << spTriangle->report();
    } else {
        result << "Triangle search failed." << std::endl;
    }

    // Add whatever is in the log stream.
    result << std::endl << "Debug Log:" << std::endl;
    result << shape::Shape::getLog() << std::endl;

    return env->NewStringUTF(result.str().c_str());
}