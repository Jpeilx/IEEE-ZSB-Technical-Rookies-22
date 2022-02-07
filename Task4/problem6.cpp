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
    int t ;
    cin>>t ;
    while (t--) {
       long long n , c , m , output = 0 ;
       cin>>n>>c>>m ;
       n/=c ;
       output+=n ;
       while (n>=m){
           output+=(n/m) ;
           n=(n/m)+(n%m) ;

       }


       cout<<output<<"\n" ;
    }
}
