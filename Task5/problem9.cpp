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
    long long t ;
    cin>>t ;
    while (t--){
        string s , compared = "hackerrank";
        cin>>s ;
        int n = compared.length() , out = 0 ,j=0;
        for (int i = 0 ; i<n; i++){
            while ( j<s.length()){
                if(compared[i]==s[j]){
                    out++;
                    j++;
                    break ;
                }
                j++ ;
            }
        }
        if (out==n)
            cout<<"YES"<<"\n" ;
        else
            cout<<"NO"<<"\n" ;
        
    }
}
