#include <vector>
#include <vertex.hpp>

class edge
{
    private:
        
        bool roadIsAvailable_;
        std::vector<vertex> vertexesOfTheEdge_;
    public:
        bool getRoadIsAvailable();
        std::vector<vertex> getVertexesOfTheEdge() const ;

};