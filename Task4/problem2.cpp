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
    string s ,c;
    cin>>s ;
    int n , counter = 0  ;
    cin>>n ;
    c=s ;
    while (s.length()<=n){
        s+=c ;
    }
    for (int i = 0 ; i<n ; i++){
        if (s[i]=='r')
            counter++ ;
    }
    cout<<counter;
}

