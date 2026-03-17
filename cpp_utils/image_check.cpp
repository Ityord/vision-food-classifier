#include <iostream>
#include <fstream>
#include <string>

bool CheckFileExists(const std::string& filename) {
    std::ifstream file(filename);
    return file.good();
}

int main (int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./image_check <filename>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    if (CheckFileExists(filename)) {
        std::cout << "[SUCCESS] File " << filename << " is ready for ML inference." << std::endl; 
    } else {
        std::cerr << "[ERROR] File " << filename << " not found!" << std::endl;
        return 1;
    }
    return 0;
}