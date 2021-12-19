#include <iostream>
using namespace  std ;
int guss_game( int mo );
int main (){
   int n ,  mo =0 ;
   n = guss_game(mo);
   cout << "you take "<< n<<" tries to win  " ;
}
int guss_game( int mo ){
  mo++ ;
  int n , t  ;
  cout<<"Guss a number "<<endl ;
  cin>>n ;
  t = rand()%11 ;
    if (n==t)
        return mo ;
    return guss_game(mo) ;


}
