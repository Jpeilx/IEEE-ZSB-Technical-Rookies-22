#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <string>
#include <iterator>
using namespace std ;
template<typename T>
vector<T> read_line_array();
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main () {

    v v1 = read_line_array<int>();
    int dis = v1.size()  ;
    xx(i, 0, v1.size()-1 )
        xx(j, i+1, v1.size() ) {
        if (v1[i] == v1[j])
          if (dis>j-i)
              dis=j-i;
    }
    cout<<dis ;
}

template<typename T> vector<T> read_line_array()
{
    vector<T> arr;
    string line;
    getline(std::cin, line);

    std::stringstream line_stream;
    line_stream << line;

    T curr_val;
    while (line_stream >> curr_val) {
        arr.push_back(curr_val);
    }
    return arr;
}

