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
int main (){
    cin.tie(0);
    ios::sync_with_stdio(0);
   int n ;
   cin>>n ;
   int t = n ;
   int sum =0 ;
   v vv  ;
   while (t--){
       int vol , cap ;
       cin>>vol>>cap ;
       sum+=vol ;
       vv.push_back(cap);
   }
   sort(all(vv));
   int sum_cap =0 ;
   sum_cap=vv[n-1]+vv[n-2] ;
   if (sum_cap >= sum)
       cout<<"Yes" ;
   else
       cout<<"No" ;


}
