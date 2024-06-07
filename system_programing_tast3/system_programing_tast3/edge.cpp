#include "vertex.hpp"
#include "edge.hpp"
class edge
{
    private:
        bool roadIsAvailable_;
        std::vector<vertex> vertexesOfTheEdge;

        bool getRoadIsAvailable()
        {
            return this->roadIsAvailable_;
        }
        std::vector<vertex> getVertexesOfTheEdge() const
        {
            return vertexesOfTheEdge;
        }
};