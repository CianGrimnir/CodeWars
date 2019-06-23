/*
 * https://www.codewars.com/kata/56484848ba95170a8000004d
 *
 * Example:
 *
 * x = [0.0, 0.19, 0.5, 0.75, 1.0, 1.25, 1.5, 1.75, 2.0, 2.25]
 *
 * With the above data your function gps(s, x)should return 74
 *
 */


#include <stdlib.h>
#include <math.h>

class GpsSpeed
{
public:
    static int gps(int s, std::vector<double> &x);
};

int GpsSpeed::gps(int s, std::vector<double> &x){
  int speed=0;
  int max=0;
  if (x.size() <= 0)
    return 0;
  for(int i=1;i<x.size();i++){
        double dist = x[i] - x[i - 1];
        double speed = dist * 3600.0 / s;
        if (speed > max) {
          max = speed;
        }
   }   
   return max;
}
