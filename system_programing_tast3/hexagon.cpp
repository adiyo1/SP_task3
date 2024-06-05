#include "hexagon.hpp"
#include "edge.hpp"
#include "vector"
#include "vertex.hpp"

int hexagon::getHexagonId()
{
    return id_;
}
int hexagon::getHexagonCircleNumber()
{
    return circleNumber_;
}
std::vector<vertex> hexagon::getHexagonVertexes() const 
{
    return vertexes_;
}
std::vector<edge> hexagon:: getHexagonEdges() const 
{
    return edges_;
}
resourceTypes hexagon::getHexagonResource() const
{
    return resource_;
}