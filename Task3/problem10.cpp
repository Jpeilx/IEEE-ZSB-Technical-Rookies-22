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
    int n , p , a , b  ;
    cin>>n>>p ;
    a = p/2 ;
    b = (n-p)/2 ;
    if (n%2==0 && n-p ==1 )
        b++ ; 
     if (a>b)
         cout<<b ;
     else
         cout<<a ; 


}
