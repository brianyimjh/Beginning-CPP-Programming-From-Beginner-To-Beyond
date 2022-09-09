#include <iostream>

int main() {
    int fav_num = 0;
    
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> fav_num;
    std::cout << "Amazing!! This is my favorite number too!" << std::endl;
    std::cout << "No, really! " << fav_num << " is my favorite number!" << std::endl;
    
    return 0;
}
