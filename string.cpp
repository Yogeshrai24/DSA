#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

// Function to find the length of the longest substring without repeating characters
int lengthOfLongestSubstring(const std::string &s) {
    std::unordered_map<char, int> lastSeen; // Stores last seen index of each character
    int maxLength = 0;
    int start = 0; // Start index of the current window

    for (int end = 0; end < (int)s.size(); ++end) {
        char currentChar = s[end];

        // If character is already seen and is inside the current window
        if (lastSeen.find(currentChar) != lastSeen.end() && lastSeen[currentChar] >= start) {
            start = lastSeen[currentChar] + 1; // Move start to avoid duplicate
        }

        lastSeen[currentChar] = end; // Update last seen index
        maxLength = std::max(maxLength, end - start + 1); // Update max length
    }

    return maxLength;
}

int main() {
    std::string s;

    std::cout << "Enter a string: ";
    if (!std::getline(std::cin, s)) { // Input validation
        std::cerr << "Error reading input.\n";
        return 1;
    }

    int result = lengthOfLongestSubstring(s);
    std::cout << "Length of the longest substring without repeating characters: " 
              << result << "\n";

    return 0;
}
