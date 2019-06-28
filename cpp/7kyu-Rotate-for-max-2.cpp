/*
 * Take a number: 56789. Rotate left, you get 67895.
 *
 * Keep the first digit in place and rotate left the other digits: 68957.
 *
 * Keep the first two digits in place and rotate the other ones: 68579.
 *
 * Keep the first three digits and rotate left the rest: 68597.
 * 
 * Now it is over since keeping the first four it remains only one digit which rotated is itself.
 *
 * You have the following sequence of numbers:
 *
 * 56789 -> 67895 -> 68957 -> 68579 -> 68597
 *
 * and you must return the greatest: 68957.
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


unsigned long long leftReverse(long long n,int slice){
    std::string str = std::to_string(n) ;
    std::string sub = str.substr(0, slice);
    str = str.substr(slice);
    std::rotate( str.begin(), str.begin()+1, str.end() ) ;
    return std::stoull(sub + str) ;
}

long long MaxRotate::maxRot(long long n){
   long long reverse=n;
   long long MAX = n;
   int caller=0;
   int LENGTH=snprintf(nullptr, 0, "%lli", n);
   while(caller!=LENGTH){
     if ( LENGTH != snprintf(nullptr, 0, "%lli", reverse))
        LENGTH=snprintf(nullptr, 0, "%lli", reverse);
     reverse=leftReverse(reverse,caller);
     if ( MAX < reverse)
         MAX = reverse;
     caller++;
   }
   return MAX;
}
