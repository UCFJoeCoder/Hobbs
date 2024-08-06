#ifndef HOBBS_COLLECTION_H
#define HOBBS_COLLECTION_H

#include "Shape.h"
#include <iostream>
#include <string>
#include <list>
#include <map>
namespace shape {

    class Collection {
    public:
        Collection();

        void AddShape(Shape::ShapeType id, std::shared_ptr<Shape> pShape);

        std::string report();

        template<typename T>
        std::shared_ptr<T> find(Shape::ShapeType shapeType) const {
            std::shared_ptr<T> retVal = nullptr;
            auto it = m_ShapeMap.find(shapeType);

//            std::string typeTStr = typeid(std::shared_ptr<T>).name();
//            Shape::log(typeTStr + "\n");

            if (it != m_ShapeMap.end()) {
                retVal = std::dynamic_pointer_cast<T>(it->second);
                if(retVal) {
                    Shape::log("Dynamic cast success.\n");
                } else {
                    Shape::log("Dynamic cast fail.\n");
                }
            }

            return retVal;
        }

    private:
        std::map<Shape::ShapeType, std::shared_ptr<Shape>> m_ShapeMap;
    };

} // shape

#endif //HOBBS_COLLECTION_H
