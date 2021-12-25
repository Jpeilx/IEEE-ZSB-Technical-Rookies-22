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
      int t , output= 0  ;
      cin>>t ;
    int x = 6174 ;
    int tries =number_times( t , x ,output) ;
    cout<<tries ;
}
int number_times (int t , int x , int  output){
    output++ ;
    v vl(4) , vh(4) ;
     xx(i,0,4){
         vl[i]=t%10 ;
         t /= 10;
    }
    sort(all(vl)) ;
    vh=vl ;
    reverse(all(vl)) ;
   int dec = 0 , inc = 0 , j=0 ;
   for (int i =1 ; i<=1000 ; i*=10)
   {
       dec+=vl[j]*i ;
       inc+=vh[j]*i ;
       j++ ;
   }
    t=inc - dec ;
    if (t==x)
        return output ;
    return number_times (t , x ,output) ;

}
