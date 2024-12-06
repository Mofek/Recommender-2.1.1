#ifndef LLM_RECOMMENDATION_H
#define LLM_RECOMMENDATION_H

#include <string>
#include "User.h"

class LLMRecommendation {
public:
    static std::string generateRecommendation(const User& user) {
        if (user.getAge() < 18) {
            return "You're young! Keep exploring and learning new things. Since you like " + user.getFavoriteActivity() + ", you could consider joining a club or taking classes to develop your skills.";
        } else if (user.getAge() < 30) {
            return "You have a lot of potential! Since you love " + user.getFavoriteActivity() + ", why not consider making it part of your career or starting a side project?";
        } else {
            return "It's never too late to follow your passions! Since you enjoy " + user.getFavoriteActivity() + ", perhaps you could volunteer, teach others, or even start a blog about it.";
        }
    }
};

#endif
