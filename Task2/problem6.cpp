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
int main () {
   int n ;
   cin>>n ;
   v vv(n);
   xx(i,0 , n ){
       cin>>vv[i] ;
   }
   int t =  *max_element(all(vv)) ;
  xx(i,0 , n){
  if (vv[i]==t ){
      vv.erase(vv.begin()+i) ;
      n-- ;
  i-- ;}
   }

   cout<< *max_element(all(vv)) ;


}
