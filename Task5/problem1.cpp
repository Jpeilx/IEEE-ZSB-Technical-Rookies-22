#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <string>
#include <iterator>
#include <cmath>
using namespace std ;
template<typename T>
vector<T> read_line_array();
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
void max_heap (vector<int>& arr,int n , int i ) ;
void build_heap(vector<int>& arr,int n  ) ;
int main (){
    cin.tie(0);
    ios::sync_with_stdio(0);
    vector<int> arr = read_line_array<int>();
    int n = arr.size()  ;

    build_heap(arr,n) ;
    for(int i = 0 ; i<n ; i++)
        cout<<arr[i]<<" "  ;

}
void max_heap (vector<int> &arr,int n , int i ){
    int L = 2*i +1 ;
    int R = 2*i + 2 ;
    int max = i ;
    if (L<n && arr[max]<arr[L])
        max = L ;
    if (R<n && arr[max]<arr[R])
        max = R ;
    if (max!=i){
        swap(arr[i],arr[max]) ;
        max_heap (arr , n , max ) ;
    }
}
void build_heap(vector<int> &arr,int n  ){
    for(int i = n/2 -1 ; i>=0 ; i--)
        max_heap(arr,n,i) ;
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
