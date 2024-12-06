# Life Recommendation Program with LLM Integration

## Overview
This program is a simple console application designed to provide users with life recommendations based on their personal interests. The program interacts with the user, gathers basic information, and uses an external LLM (Language Learning Model) API to generate personalized suggestions for activities or career choices.

### Features
- Asks the user for their name, age, and favorite activity.
- Creates a `User` object using the information provided.
- Sends the user's information to an external LLM API to receive a recommendation.
- Requires internet connection and access to a third-party LLM API (e.g., OpenAI).

### How to Use
1. Compile the program in Visual Studio or any compatible C++ compiler.
2. Install `libcurl` and link it in your project.
3. Set up an LLM API key and replace `"YOUR_API_KEY"` in `LLMRecommendation.h`.
4. Run the executable.
5. Enter your name, age, and favorite activity when prompted.
6. Receive a personalized recommendation based on your inputs.

### Files
- `main.cpp`: The main file which runs the program.
- `User.h`: Contains the `User` class to store user data.
- `LLMRecommendation.h`: Provides a class to generate recommendations for the user using an external LLM API.
- `README.md`: Basic information about the program.

### Requirements
- C++11 or later.
- `libcurl` for HTTP requests.
- A valid API key for The LLM provider.

### Disclaimer
This program uses an external LLM API for recommendations. Ensure your API key is kept secure, and be mindful of the API usage limits and costs associated with the LLM provider.
