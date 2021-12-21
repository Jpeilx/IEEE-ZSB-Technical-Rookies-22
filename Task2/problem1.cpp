#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std ;
#define ll  long long
#define v  vector<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main () {
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s  , n ;
    cin>>s ;
    n= s ;
    reverse(all(s)) ;
    if (s == n )
        cout<<"yes";
    else
        cout<<"no" ;

}
