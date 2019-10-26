/*

Question is from testdome.com

Implement function countNumbers that accepts a sorted vector of unique integers and,
efficiently with respect to time used, counts the number of vector elements that are 
less than the parameter lessThan.

For example, for vector v containing { 1, 3, 5, 7 }, countNumbers(v, 4) should return
2 because there are two vector elements less than 4.

*/


#include <vector>
#include <stdexcept>
#include <iostream>

    
static int countNum( std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, 
int lessThan)
    {
        int count = 0;
        int size = std::distance(begin, end);
        
        if (size == 1)
        {
            if (*begin < lessThan)
            {
                count++;
            }                
            return count;
        }
                
        int halfSize = size/2;
        
        if (*(begin + halfSize - 1) < lessThan)
        {
            count = halfSize;
            count += countNum( begin+halfSize, end, lessThan );
        }
        else
        {
            count += countNum(begin, end-halfSize, lessThan);
        }
        return count;
}


int countNumbers(const std::vector<int>& sortedVector, int lessThan)
{           
        return countNum(sortedVector.begin(), sortedVector.end(), lessThan);
}

#ifndef RunTests
int main()
{
    std::vector<int> v { 1, 3, 4, 5, 7 };
    std::cout << countNumbers(v, 4);
}
#endif
