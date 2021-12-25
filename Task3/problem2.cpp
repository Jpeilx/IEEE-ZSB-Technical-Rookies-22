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
  int n , t , output=0  ;
  cin>>n>>t ;
  v v1 , v2 ;
  xx(i,0 , n) {
      int x;
      cin>>x ;
      v1.push_back(x) ;
  }
    xx(i,0 , t) {
        int x;
        cin>>x ;
        v2.push_back(x) ;
    }
 sort(all(v1)) ;
  sort(all(v2)) ;
  
   int x = v1[n-1] ;
      while (x<=v2[0]){
          bool cor = true ;
          xx(i,0 , n-1){
              if (x%v1[i]!=0)
                  cor= false ;
          }
          xx(i,0 , t) {
              if (v2[i] % x != 0)
                  cor = false;
          }
          if (cor==true)
              output++ ;
          x+=v1[n-1] ;

      }
      cout<<output ;


}
