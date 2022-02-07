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
    while (t--){
        long long int n ,c , count = 0  ;
        cin>>n ;
        c = n ;
        while (c>0){
            if (c%10!=0 && n%(c%10)==0)
                count++ ;
            c/=10 ;
        }
        cout<<count<<"\n" ;
    }
}
