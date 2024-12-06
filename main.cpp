#include <iostream>
#include <string>
#include "User.h"
#include "LLMRecommendation.h"

int main() {
    // User input
    std::string name;
    int age;
    std::string favoriteActivity;

    std::cout << "Welcome! Let's figure out what you might like to do in life." << std::endl;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cin.ignore();  // Ignore newline left in the input buffer.

    std::cout << "What is your favorite activity? ";
    std::getline(std::cin, favoriteActivity);

    // Create User object
    User user(name, age, favoriteActivity);
    user.displayUserInfo();

    // Get LLM recommendation
    std::string recommendation = LLMRecommendation::generateRecommendation(user);
    std::cout << "\nHere is the recommendation for you: " << recommendation << std::endl;

    return 0;
}
