/*
 * Complete the method which accepts an array of integers, and returns one of the following:
 * "yes, ascending" - if the numbers in the array are sorted in an ascending order
 * "yes, descending" - if the numbers in the array are sorted in a descending order
 * "no" - otherwise
 *
 */



std::string is_sorted_and_how(std::vector<int> array)
{  
    if (array.size() >= 2) {
      if ( array.at(0) > array.at(1) ) {
        std::cout<<array.at(0)<<array.at(1)<<std::endl;
        for(int i=1; i < array.size()-1 ; i++) {
          if(array.at(i) < array.at(i+1))
            return "no";
        }
        return "yes, descending";
      }
      if( array.at(0) < array.at(1) ) {
        for(int i=1; i < array.size()-1 ; i++) {
          if(array.at(i) > array.at(i+1))
            return "no";
        }
        return "yes, ascending";
      }
    }
}
