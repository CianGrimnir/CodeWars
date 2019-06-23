/*
 * Complete the square sum function so that it squares each number passed into it and then sums the results together.
 *
 * For example, for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9.
 *
 */


#include <vector>
#include <math.h>

int square_sum(const std::vector<int> ar)
{
    int sum=0;
    std::vector<int>::const_iterator ptr; 
    for (ptr = ar.begin(); ptr < ar.end(); ptr++) {
      std::cout<<*ptr;
      sum+=pow(*ptr,2); 
    }
    std::cout<<sum;
    return(sum);
}
