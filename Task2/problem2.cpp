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
    v v1  = read_line_array<int>();
    xx(i,0,v1.size()-1){
        if (v1[i]==v1[i+1])
            v1.erase(v1.begin()+i) ;
    }
    v::iterator it=v1.begin();
    for (;it!=v1.end(); it++)
        cout<<*it<<" " ;


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

