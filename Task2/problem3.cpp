#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <string>
#include <iterator>
#include <ctime>
#include <cstdlib>
using namespace std;
int guss_game2(int t ,int tries );
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main () {
    
    
    srand(time(NULL)) ;
    int t = rand()%898+100 , tries = 0 ;
    int tr = guss_game2(t , tries) ;
    cout<<"you take "<<tr<<" tries to win" ;

    
}
int guss_game2(int t ,int tries) {
    int miss =0 ,  hit = 0   ;
    tries++ ;
    int n , x ;
    x=t ;
    cout<<"Enter a number has 3 digits \n";
    cin>>n ;
    v vn(3) ,vx(3)  ;
    xx(i,0,3){
        vn[i]=n%10 ;
        vx[i]=x%10 ;
        n/=10 ;
        x/=10 ;
    }
    int y =3 ;
    xx(i,0,y){
        if (vn[i]==vx[i]){
            hit++;
            vx.erase(vx.begin()+i) ;
            vn.erase(vn.begin()+i) ;
            i-- ; y-- ;
        }
    }
    if (hit==3)
        return tries  ;
    xx(i,0,y){

        xx(j,0,y){
            if (vn[i]==vx[j])
                miss++;


        }
    }

    cout<<hit<<"hit "<<miss<<" miss"<<endl  ;
    return  guss_game2( t, tries) ;

}
