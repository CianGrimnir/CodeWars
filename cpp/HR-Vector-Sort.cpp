/*
 * You are given integers.Sort the integers and print the sorted order.
 * Store the integers in a vector.Vectors are sequence containers representing arrays that can change in size.
 * 
 * Sample Input
 * 5
 * 1 6 10 8 4
 *
 * Sample Output
 * 1 4 6 8 10
 *
 */

using namespace std;

int main() {
    vector<int> sort;
    int n,y;
    cin>>n;
    while (cin>>y)
        sort.push_back(y);
    }
    std::sort(sort.begin(),sort.end());
    for(auto x : sort)
        cout<<x<<" ";
    return 0;
}
