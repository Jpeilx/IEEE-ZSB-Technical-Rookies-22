#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <string>
#include <iterator>
using namespace std ;
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int number_times (int t , int x ,  int output) ;
int main (){
    cin.tie(0);
    ios::sync_with_stdio(0);
 int n , output=0  ;
 cin>>n ;
 v vv(n) ;
 xx(i,0,n)
 cin>>vv[i] ;
 sort(all(vv)) ;
    xx(i,0,n-1){
        if(vv[i]==vv[i+1]){
            output++ ;
            i++ ;
        }
    }
    cout<<output ;
}
