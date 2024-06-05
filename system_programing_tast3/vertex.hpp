#include <vector>
#include <iostream>


enum class resourceTypes { wood, stone, clay, sheep, wheat };

class vertex {
    private:
        int id_;
        std::vector<resourceTypes> resources_; // vector of resources
        int owner_;

    public:
        vertex(int id = 0, std::vector<resourceTypes> resources , int owner = 0) 
            : id_(id), resources_(resources), owner_(owner) {}

        int getVertexId() const ;

        int getVertexOwner() const ;

        std::vector<resourceTypes> getVertexResources() const;
};