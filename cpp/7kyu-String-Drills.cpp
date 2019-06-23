/*
 * Write a function named repeater() that takes two arguments (a string and a number),
 * and returns a new string where the input string is repeated that many times.
 *
 * Example:
 *
 * Repeater.repeat("a", 5)
 *
 * should return -> "aaaaa"
 *
 */


std::string repeater(std::string str, int n)
{
  string repeat;
  for(int i = 0; i < n; i++)
    repeat+=str;
  return repeat;
}
