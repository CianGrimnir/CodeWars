/*
 * Convert number to reversed array of digits
 *
 * Given a random number:
 * C++: unsigned long;
 *
 * You have to return the digits of this number within an array in reverse order.
 *
 * Example:
 * 348597 => [7,9,5,8,4,3]
 *
 */


std::vector<int> digitize(unsigned long val) 
{   
  int n;
  std::vector<int> revArray;
  while(val){
    n=val%10;
    val=val/10;
    revArray.push_back(n);
  }
  return revArray; 
}
