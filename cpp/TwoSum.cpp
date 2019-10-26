/*

Question is from testdome.com
Write a function that, when passed a list and a target sum, returns,
efficiently with respect to time used, two distinct zero-based indices 
of any two of the numbers, whose sum is equal to the target sum. If 
there are no two numbers, the function should return (-1, -1).

*/


#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>
#include <bits/stdc++.h> 

std::pair<int, int> findTwoSum(std::vector<int>& list, int sum)
{
      std::unordered_map<int,int> s;

      for (std::size_t i = 0; i < list.size(); ++i)
      {
         auto sit = s.find(sum - list[i]);

         if (sit != s.end())
           return std::make_pair(i,sit->second);

         s[list[i]] = i;
      }

      return std::make_pair(-1, -1);    
}

#ifndef RunTests
int main()
{
    std::vector<int> list = {5, 5, 5, 7, 5, 9};
    std::pair<int, int> indices = findTwoSum(list, 10);
    std::cout << indices.first << '\n' << indices.second;
}
#endif
