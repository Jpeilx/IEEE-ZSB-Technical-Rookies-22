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
int number_times (int t , int x ,  int output) ;
int main (){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n , max =0  , min =0 , out1=0 , out2=0    ;
    cin>>n ;
    v vv(n) ;
    xx(i,0,n)
    cin>>vv[i] ;
    max = vv[0] ;
    min = vv[0] ;
    xx(i,1,n){
        if(vv[i]>max){
            max=vv[i] ;
            out1++ ;
        }
        if(vv[i]<min){
            min=vv[i] ;
            out2++ ;
        }
    }
    cout<<out1<<" "<<out2 ;

}
