#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace  std ;
int guss_game( int mo, int t  );
int main (){
    srand(time(NULL)) ;
    int n ,  t= rand() % 11 , mo =0 ;
    n = guss_game(mo, t);
    cout << "you take "<< n<<" tries to win  " ;
}
int guss_game( int mo , int t  ){
    mo++ ;
    int n  ;
    cout<<"Guss a number "<<endl ;
    cin>>n ;
    if (n==t)
        return mo ;
    return guss_game(mo,t) ;


}
