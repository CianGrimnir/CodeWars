/*
 * Take a number: 56789. Rotate left, you get 67895. 
 * Write function which given a positive integer n 
 * returns the maximum number you got doing rotations 
 *
 * Example:
 *  n = 38458215
 *
 * output:
 * 84582153
 *
 */


#include <string>
#include <iostream>
#include <algorithm>

class MaxRotate
{
public:
  static long long maxRot(long long n);
};

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

unsigned long long leftReverse(long long n){
    std::string str = std::to_string(n) ;
    std::rotate( str.begin(), str.begin()+1, str.end() ) ;
    return std::stoull(str) ;
}

long long MaxRotate::maxRot(long long n){
   long long reverse=n;
   int SIZE,LENGTH;
   SIZE=LENGTH=snprintf(nullptr, 0, "%lli", n);
   int arr[LENGTH];
   while(LENGTH!=0){
     reverse=leftReverse(reverse);
     std::cout<<"Reversed : "<<reverse<<std::endl;
     arr[LENGTH]=reverse;
     LENGTH--;
   }
   bubbleSort(arr,SIZE);
   std::cout<<"MAX : "<<arr[SIZE];
   return arr[SIZE-1];
}
