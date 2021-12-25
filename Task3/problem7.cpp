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
  ll t ;
    v vv(5 ) ;
    cin>>t ;
  while (t--){
      int x ;
      cin>>x ;
      vv[x-1]++ ;
}
  xx(i,0,5) {
     if (vv[i]== *max_element(all(vv)) ){
         cout<<i+1 ;
         break ;
     }}

}
