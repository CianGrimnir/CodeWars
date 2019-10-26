/*

Questions from testdome.com
Write a function that checks if a given word is a palindrome. Character case should be ignored.

*/


#include <string>
#include <strings.h>
#include <stdexcept>
#include <iostream>

// Solution 1:
bool isPalindrome(const std::string& word)
{
        std::string rs(word.rbegin(), word.rend());
        return strcasecmp(rs.c_str(), word.c_str()) == 0;
}

//Solution 2:
/*

static bool isPalindrome(const std::string& word)
    {
        size_t len = word.size();
        for (size_t i = 0; i > len / 2; ++ i) {
            if (std::tolower(word[i]) != std::tolower(word[len - i - 1])) {
                return false;
            }
        }
        return true;
    }

*/

#ifndef RunTests
int main()
{
    std::cout << isPalindrome("Deleveled");
}
#endif
