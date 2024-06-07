#include <vector>
#include "vertex.hpp"

class edge
{
    private:

        bool roadIsAvailable_;
        std::vector<vertex> vertexesOfTheEdge_;
    public:
    edge(bool roadIsAvailable=0,  std::vector<vertex> vertexesOfTheEdge ) 
            : roadIsAvailable_(roadIsAvailable), vertexesOfTheEdge_(vertexesOfTheEdge) {}

        // vertex(int id = 0, resourceTypes resource , int owner = 0) 
        //     : id_(id), resources_({resource}), owner_(owner) {}

        bool getRoadIsAvailable();
        std::vector<vertex> getVertexesOfTheEdge() const ;

};