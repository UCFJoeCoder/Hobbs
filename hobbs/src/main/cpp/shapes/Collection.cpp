#include "Collection.h"
#include <iostream>
#include <sstream>
#include <string>

namespace shape {

    Collection::Collection() {
    }

    void Collection::AddShape(Shape::ShapeType id, std::shared_ptr<Shape> pShape) {
        m_ShapeMap[id] = pShape;
    }

    std::string Collection::report() {
        std::stringstream ss;

        for (auto it = m_ShapeMap.begin(); it != m_ShapeMap.end(); it++) {
            std::shared_ptr<shape::Shape> pShape = it->second;
            std::string dsType = std::string(typeid(pShape).name());
            ss << "Type: " << dsType << std::endl;
            ss << pShape->report() << std::endl;
        }

        return ss.str();
    }

} // shape