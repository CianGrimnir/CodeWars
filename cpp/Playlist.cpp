/*

Question is from testdome.com
Implement a function isRepeatingPlaylist that, efficiently with respect 
to time used, returns true if a playlist is repeating or false if it is not.

*/


#include <stdexcept>
#include <iostream>

class Song
{
public:
    Song(std::string name): name(name), nextSong(NULL) {}
    
    void next(Song* song)
    {
        this->nextSong = song;
    }

    bool isRepeatingPlaylist()
    {
       Song* slow = this->nextSong;
       Song* fast = slow == nullptr ? nullptr : slow->nextSong;
            while (fast != nullptr) {
                if (slow == this || slow == fast)
                    return true;
                slow = slow->nextSong;
                fast = fast->nextSong;
                if (fast != nullptr)
                    fast = fast->nextSong;
            } 
            return false;
        }

private:
    const std::string name;
    Song* nextSong;
};

#ifndef RunTests
int main()
{
    Song* first = new Song("Hello");
    Song* second = new Song("Eye of the tiger");
    
    first->next(second);
    second->next(first);

    std::cout << std::boolalpha << first->isRepeatingPlaylist();
}
#endif

