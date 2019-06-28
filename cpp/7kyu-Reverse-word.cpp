/* Example:
 * Input : 	RakesHiSiNWORK
 *
 * Output : 	Number of uppercase character is higher,
 * 		convert string to uppercase.
 *
 *
 */

#include <ctype.h>
#include <algorithm>
#include<string>
#include <iostream>

using namespace std; 
std::string reverse_words(std::string str)
{
  char ch;
  int lower,upper,loop;
  lower=upper=loop=0;
  int LENGTH=snprintf(nullptr, 0, "%s", str);
  while(loop != LENGTH-1){
     ch=str.at(loop);
     if(isupper(ch))
       upper++;
      else
        lower++;
     loop++;
  }
  if(upper>lower)
      transform(str.begin(), str.end(), str.begin(), ::toupper); 
  else
      transform(str.begin(), str.end(), str.begin(), ::tolower); 
  return str;
}
