#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s ; int max =0  , last =0 , now = 1 ;
    getline(cin , s ) ;
  for(int i =0 ;i<s.length();i++) {
      now ++ ;
      if (s[i]== ' ') {
          last = now ;
          now = 1 ;}
      if (max <last )
          max=last ;
  }
  int x = 1 ;
  for (int i = 0 ; i<max+2 ; i++)
      cout<<"*" ;
    cout<<"\n" ;
    cout<<"* " ;
   for (int j =0 ; j<s.length() ; j++){

       if (j==s.length()-1&&s[j]!=' '){
           cout<<s[s.length()-1] ;
           for (int i=0 ; i<max-x ; i++)
               cout<<' ' ;
           cout<<"*" ;
           break;

       }
      else if (s[j]==' '  ){
           if (x-1==j)
               x++ ;
          for (int i=0 ; i<max-x +1 ; i++)
              cout<<' ' ;
          if (j==s.length()-1)
              cout<<"*" ;
          else
              cout<<"*\n*";
          x=1;


      }
      x++ ;
      cout<<s[j] ;

   }

    cout<<"\n" ;
    for (int i = 0 ; i<max+2 ; i++)
        cout<<"*" ;


}
