#include <iostream>
#include <iterator>
#include <numeric>


int main(int, char **)
{
    using namespace std;
    cout << accumulate(istream_iterator<int>(cin), istream_iterator<int>(), 0) << endl;
    
    return 0;
}