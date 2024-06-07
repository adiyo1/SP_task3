#include <vector>
#include <iostream>
#include "vertex.hpp"

    int vertex:: getVertexId() const {
        return id_;
    }

    int vertex::getVertexOwner() const {
        return owner_;
    }

    std::vector<resourceTypes> vertex::getVertexResources() const {
        return resources_;
    }

