/* Create a function that returns the sum of the two lowest positive numbers
 *
 * For example:
 * When an array is passed like [19, 5, 42, 2, 77], the output should be 7.
 *
 */


#include <vector>

void bubbleSort(std::vector<int>& a){
      bool swapp = true;
      while(swapp){
        swapp = false;
        for (size_t i = 0; i < a.size()-1; i++) {
            if (a[i]>a[i+1] ){
                a[i] += a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                swapp = true;
            }
        }
    }
}


long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    bubbleSort(numbers);
    unsigned long sum=long(numbers[0])+long(numbers[1]);
    return sum;
}
