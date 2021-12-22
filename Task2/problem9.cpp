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
int main () {
 int n=0 , out1 =0 , out2 =0 ;
 cin>>n;
 int * arr = new int [n*n] ;
 xx(i,0,n)
  xx(j,0,n){
     cin>>*(arr+i*n+j);
     if (i==j)
         out1+=*(arr+i*n+j);
     if((i + j) == (n - 1))
          out2+=*(arr+i*n+j);
 }
 cout<<abs(out1-out2) ;
}
