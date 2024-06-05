#include "vertex.hpp"
#include "edge.hpp"
#include "hexagon.hpp"
#include "vector"

class board
{
    private:
        // std::vector<hexagon> hexagons_;
        // std::vector<edge> edges_;
        // std::vector<vertex> vertexes_;
        vertex vertex0= vertex(0, {resourceTypes::stone}, 0);
    public:
        std::vector<hexagon> getHexagons() const;
        std::vector<edge> getEdges() const;
        std::vector<vertex> getVertexes() const;
};



