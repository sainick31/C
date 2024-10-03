#include <iostream>
class ResourceManager {
public:
    ResourceManager() {
        std::cout << "Resource acquired\n";
    }

    ~ResourceManager() {
        std::cout << "Resource released\n";
    }
};

int main() {
    try {
        ResourceManager resourceManager; 
        throw std::runtime_error("Exception occurred");
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}

