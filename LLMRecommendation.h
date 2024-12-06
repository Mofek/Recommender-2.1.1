#ifndef LLM_RECOMMENDATION_H
#define LLM_RECOMMENDATION_H

#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <array>
#include <memory>

#include "User.h"

class LLMRecommendation {
public:
    static std::string generateRecommendation(const User& user) {
        // Construct a prompt to send to the LLM
        std::ostringstream prompt;
        prompt << "The user named " << user.getName() << " is " << user.getAge() 
               << " years old and enjoys " << user.getFavoriteActivity() << ". "
               << "What should they do in their life to make the most out of their interests?";

        // Call Python script to get LLM response
        std::string pythonCommand = "python3 '/Users/ofekmendel/Documents/קורות חיים/Recommender-2.1.1-1/Recommender-2.1.1/inference.py' \"" + prompt.str() + "\"";
        std::string result = execCommand(pythonCommand.c_str());

        return result;
    }

private:
    // Function to execute a system command and capture the output
    static std::string execCommand(const char* cmd) {
        std::array<char, 128> buffer;
        std::string result;
        std::shared_ptr<FILE> pipe(popen(cmd, "r"), pclose);
        if (!pipe) {
            throw std::runtime_error("popen() failed!");
        }
        while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
            result += buffer.data();
        }
        return result;
    }
};

#endif
