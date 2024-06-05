#include <vector>
// #include <string.h>
#include <vertex.hpp>
#include <edge.hpp>

class hexagon
{
    private:
        int id_;
        int circleNumber_;
        resourceTypes resource_;
        std::vector<vertex> vertexes_;
        std::vector<edge> edges_;

        
    public:
    hexagon(int id = 0, int circleNumber=0, resourceTypes resource = {},std::vector<vertex> vertexes={} ,std::vector<edge> edges={} ) 
            : id_(id), circleNumber_(circleNumber), resource_(resource), vertexes_(vertexes),edges_(edges) {}
        int getHexagonId();
        int getHexagonCircleNumber();
        std::vector<vertex> getHexagonVertexes() const ;
        std::vector<edge> getHexagonEdges() const ;
        resourceTypes getHexagonResource() const;



};