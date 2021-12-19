#include <iostream>
using namespace  std ;
int main () {
    int n = 0,x=0 , y=1 ,z=0  ;
    cin >> n;
    cout<<x<<" "<<y<<" " ;
for (int i =0 ; i<n-2 ; i++){
          z=y ;
          y=x+y ;
          cout<<y<<" " ;
          x=z ;

}
}
