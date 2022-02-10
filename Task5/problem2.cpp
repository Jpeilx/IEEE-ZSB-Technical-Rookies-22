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
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main (){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n , count =0  ;
    long long t ;
    cin>>n>>t;
    vector<long long > vec(n) ;
    for (int i = 0 ; i<n ; i++){
        cin>>vec[i] ;
    }
    for (int i = 0 ; i<n ; i++){
        count ++ ;
        t-=(86400-vec[i]) ;
        if (t<=0)
            break ;
    }
    cout<<count ;



}
