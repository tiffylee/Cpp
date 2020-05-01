/*
 * Find the difference between two string. 
 * String t is generated by random shuffling string s and then add 
 * one more letter at a random position. 
 * Determine the character which is different in t. 
 * 
 * Approach: Since only one letter is different between s and t,
 * we could try XOR approach.
 * XOR of a character with itself will give 0.
 */

#include <iostream>

char find_difference(const std::string& s, const std::string& t)
{
    std::string r = s + t;
    char ch = 0;
    for (char c : r) {
        ch ^= c;
    }
    return ch;
}

int main()
{
    std::string str1{"hello"};
    std::string str2{"ollleh"};
    std::cout << "String 1: " << str1 << std::endl;
    std::cout << "String 2: " << str2 << std::endl;
    std::cout << "Diff: " << find_difference(str1, str2) << std::endl;
    return 0;
}


