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
    long long n ;
    int d , output=0 ;
    cin>>n>>d ;
    vector <long long > comp(n) ;
    for (int i = 0 ; i<n ; i++)
        cin>>comp[i] ;
    reverse(comp.begin(),comp.end());
    for (int i =0 ; i<n ;i++){
        long long  con=0 ;
        for (int j=i ; j<n ; j++){
            if (comp[i]-comp[j]==d){
                con=comp[j] ;
             }
            if (con-comp[j]==d)
                output++ ;

        }
    }
    cout<<output;
}
