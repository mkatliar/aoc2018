#include <iostream>
#include <iterator>
#include <vector>
#include <set>


int main(int, char **)
{
    using namespace std;

    // Read the change sequence
    vector<int> const delta_f_sequence {istream_iterator<int> {cin}, istream_iterator<int> {}};

    set<int> seen;
    int f = 0;
    auto delta_f = delta_f_sequence.begin(); 
    
    while (seen.insert(f).second)
    {
        f += *delta_f;
        if (++delta_f == delta_f_sequence.end())
            delta_f = delta_f_sequence.begin();
    }

    cout << f << endl;
    
    return 0;
}