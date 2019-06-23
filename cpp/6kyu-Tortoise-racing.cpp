/*
 * https://www.codewars.com/kata/55e2adece53b4cdcb900006c
 *
 * Examples:
 *
 * race(720, 850, 70) => [0, 32, 18] or "0 32 18"
 * race(80, 91, 37)   => [3, 21, 49] or "3 21 49"
 *
 */


class Tortoise
{
private:
  int v1, v2, g;
public:
    static std::vector<int> race(int v1, int v2, int g){
      std::vector<int> timeRemain;
      int h,mn,s;
      h=mn=s=-1;
      if(v1<v2){
        h = g/(v2-v1);
        mn = (g % (v2-v1)) * 60 / (v2-v1);
        s = (((g % (v2-v1)) * 60) % (v2-v1)) * 60 / (v2-v1);      
      }
      timeRemain.push_back(h);
        timeRemain.push_back(mn);
        timeRemain.push_back(s);
      return timeRemain;
    }
};
