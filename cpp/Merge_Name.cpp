/*
Questions from testdome.com
Implement the unique_names method. When passed two vectors of names, it will return a 
vector containing the names that appear in either or both vectors. The returned vector 
should have no duplicates.

*/

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    std::vector<std::string> unique_list(names1);
    unique_list.insert(unique_list.end(), names2.begin(), names2.end());
    std::sort( unique_list.begin(), unique_list.end() );
    unique_list.erase( unique( unique_list.begin(), unique_list.end() ), unique_list.end() );

    return unique_list;
}

int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; 
    }
}
