// password_generator.cpp : Defines the entry point for the application.
//

#include "password_generator.h"

std::string GeneretePass(int passLength) {
    std::string password;
    srand(time(NULL));
    for (int n = 0; n < passLength; n++) {  
        int randomSign = rand() % NUM_OF_PRINTABLE_CHARS + OFFSET;
        password.push_back(randomSign);
    }
    return password;
}

int main() {

    int passLength = 0;
    std::string newPassword;
    std::cout << "How long your passward will be?" << std::endl;
    std::cin >> passLength;

    if (!std::cin.good()) {
        std::cout << "Valid password length" << std::endl;
    }
    else {
        newPassword = GeneretePass(passLength);
        std::cout << newPassword << std::endl;
    }
    return 0;
}
