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
bool turfal(int x1 , int  v1 , int x2 , int v2) ;
int main (){
    cin.tie(0);
    ios::sync_with_stdio(0);
     int x1 , v1 , x2 , v2 ;
     cin>>x1>>v1>>x2>>v2 ;
     if (turfal(x1,v1,x2,v2)==false )
         cout<<"NO" ;
     else
         cout<<"YES" ;


}
bool turfal(int x1 , int  v1 , int x2 , int v2) {
    if ( v2 >= v1 )
        return false ;
    while (x2>x1)
        x2-=(v1-v2) ;
    if (x2==x1)
        return true ;

    return false ;

}
