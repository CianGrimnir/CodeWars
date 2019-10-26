/*

Questions is from testdome.com
Implement the function findRoots to find the roots of the 
quadratic equation: ax2 + bx + c = 0.

*/

#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string>
#include <cmath> 

std::pair<double, double> findRoots(double a, double b, double c)
{
      pair <double, double> roots ;
     int d  = b*b - 4*a*c; 
     double sqrt_val = sqrt(abs(d)); 
     if (d > 0) { 
         cout << "Roots are real and different \n"; 
        roots.first = (double)(-b + sqrt_val)/(2*a);
        roots.second = (double)(-b - sqrt_val)/(2*a); 
     } 
    else if (d == 0) { 
         cout << "Roots are real and same \n"; 
         roots.first = roots.second = -(double)b / (2*a); 
     } /*
     else { 
         cout << "Roots are complex \n" << -(double)b / (2*a) << " + i" << sqrt_val 
			<< roots.second << -(double)b / (2*a) << " - i" << sqrt_val; 
     } */
    
    return roots;    
}

#ifndef RunTests
int main()
{
    std::pair<double,double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
#endif
