#include <vector>
#include <iostream>

enum class resourceTypes { wood, stone, clay, sheep, wheat };

class vertex {
    private:
        int id_;
        std::vector<resourceTypes> resources_; // vector of resources
        int owner_;

    public:
        vertex(int id = 0, std::vector<resourceTypes> resources = {}, int owner = 0) 
            : id_(id), resources_(resources), owner_(owner) {}

        vertex(int id = 0, resourceTypes resource = resourceTypes::wood, int owner = 0) 
            : id_(id), resources_({resource}), owner_(owner) {}

        int getVertexId() const {
            return id_;
        }

        int getVertexOwner() const {
            return owner_;
        }

        std::vector<resourceTypes> getVertexResources() const {
            return resources_;
        }
};

// #include <vector>
// #include <iostream>


// enum class resourceTypes { wood, stone, clay, sheep, wheat };

// class vertex {
//     private:
//         int id_;
//         std::vector<resourceTypes> resources_; // vector of resources
//         int owner_;

//     public:
//         vertex(int id = 0, std::vector<resourceTypes> resources , int owner = 0) 
//             : id_(id), resources_(resources), owner_(owner) {}

//         vertex(int id = 0, resourceTypes resource , int owner = 0) 
//             : id_(id), resources_({resource}), owner_(owner) {}

//         int getVertexId() const ;

//         int getVertexOwner() const ;

//         std::vector<resourceTypes> getVertexResources() const;
// };