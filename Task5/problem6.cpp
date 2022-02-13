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
    long long  n , inp=0 ;
    cin>>n ;
    vector<long long > ranked ;
    for (int i = 0  ; i<n ; i++){
        cin>>inp ;
        if (i!=0&&inp==ranked[i-1]){
            i-- ;
            n-- ;
        }
        else
            ranked.push_back(inp);
    }
    long long m ;
    cin>>m ;
    vector<long long >player ;
    for (int i =0 ; i<m ; i++){
        cin>>inp ;
        player.push_back(inp);
        long long count = n-1  , output = 0  ;
        while ( count >=0 && ranked[count]<player[i] ){
            count-- ;
        }
        if (count==-1)
            output=1 ;
        else if (ranked[count]>player[i])
            output=count+2 ;
        else
            output=count+1;

        cout<<output<<"\n";
    }
}
