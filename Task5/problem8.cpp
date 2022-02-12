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
    int t ;
    cin>>t ;
    while (t--){
        string s , t ;
        cin>>s>>t ;
        int output = 0 ;
         for (int i = 0 ; i<s.length(); i++){
             bool  NotExist = true ;
             for (int j=0 ; j<t.length() ; j++){
                 if (s[i]==t[j]){
                     t.erase(t.begin()+j);
                     NotExist = false  ;
                     break ;
                 }
             }
             if (NotExist==true)
                 output++ ;
        }
        cout<<t.length()+output<<"\n";
    }


}
