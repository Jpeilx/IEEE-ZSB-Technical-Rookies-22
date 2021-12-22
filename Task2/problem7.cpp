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
  string s1 ,s2 ;
  cin>>s1>>s2 ;
  int output=0 ;
  xx(i,0,s1.length()) {
      if (s1.length()-i>=s2.length() && s1.substr(i,s2.length())==s2)
          output++ ;

      }
      cout<<output ;

}
