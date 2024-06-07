#include "vertex.hpp"
#include "edge.hpp"
#include "hexagon.hpp"
#include "vector"
#include <iostream>

class board
{
private:
    // std::vector<hexagon> hexagons_;
    // std::vector<edge> edges_;
    // std::vector<vertex> vertexes_;
    // vertex vertex0 = vertex(0, {resourceTypes::stone}, 0);
    vertex vertex1 = vertex(1, {resourceTypes::stone}, 0);
    vertex vertex2 = vertex(2, {resourceTypes::stone, resourceTypes::sheep}, 0);
    vertex vertex3 = vertex(3, {resourceTypes::sheep}, 0);
    vertex vertex4 = vertex(4, {resourceTypes::sheep, resourceTypes::wood}, 0);
    vertex vertex5 = vertex(5, {resourceTypes::wood}, 0);
    vertex vertex6 = vertex(6, {resourceTypes::wood}, 0);
    vertex vertex7 = vertex(7, {resourceTypes::wheat}, 0);
    vertex vertex8 = vertex(8, {resourceTypes::stone, resourceTypes::wheat}, 0);
    vertex vertex9 = vertex(9, {resourceTypes::stone, resourceTypes::wheat, resourceTypes::clay}, 0);
    vertex vertex10 = vertex(10, {resourceTypes::stone, resourceTypes::sheep, resourceTypes::clay}, 0);
    // vertex vertex11 = vertex(11, {resourceTypes::stone}, 0);
    // vertex vertex1 = vertex(1, {resourceTypes::stone}, 0);
    // vertex vertex1 = vertex(1, {resourceTypes::stone}, 0);
    // vertex vertex1 = vertex(1, {resourceTypes::stone}, 0);
    // vertex vertex1 = vertex(1, {resourceTypes::stone}, 0);
    // vertex vertex1 = vertex(1, {resourceTypes::stone}, 0);
    // vertex vertex1 = vertex(1, {resourceTypes::stone}, 0);
    // vertex vertex1 = vertex(1, {resourceTypes::stone}, 0);
    // vertex vertex1 = vertex(1, {resourceTypes::stone}, 0);
    // vertex vertex1 = vertex(1, {resourceTypes::stone}, 0);
    // vertex vertex1 = vertex(1, {resourceTypes::stone}, 0);
    // vertex vertex2(0, resourceTypes::stone, 0);

public:
    std::vector<hexagon> getHexagons() const;
    std::vector<edge> getEdges() const;
    std::vector<vertex> getVertexes() const;
        // std::cout<<vertex0.getVertexResources()[0]<<endl;

};
