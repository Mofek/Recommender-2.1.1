#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string name;
    int age;
    std::string favoriteActivity;

public:
    User(std::string name, int age, std::string favoriteActivity)
        : name(name), age(age), favoriteActivity(favoriteActivity) {}

    void displayUserInfo() const {
        std::cout << "\nUser Info:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Favorite Activity: " << favoriteActivity << std::endl;
    }

    // Getters
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getFavoriteActivity() const { return favoriteActivity; }
};

#endif
