/*
 * Simple, given a string of words, return the length of the shortest word(s).
 *
 * String will never be empty and you do not need to account for different data types.
 *
 */



int find_short(std::string str)
{
    int shortLen=str.length();
    string subs;
    istringstream inStream(str);
    do
    {
        inStream >> subs;
        if (subs.length() < shortLen)
            shortLen=subs.length();
    } while (inStream);
    return shortLen;
}
