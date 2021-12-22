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
    int n ;
    cin>>n ;
    v vv(n) ;
    xx(i,0 , n)
    cin>>vv[i] ;
    sort(all(vv)) ;
    xx(i,0,vv.size()-1){
        if (vv[i]==vv[i+1]){
            vv.erase(vv.begin()+i) ;
            i-- ;
        }}
        cout<<vv[vv.size()-2] ;


}
