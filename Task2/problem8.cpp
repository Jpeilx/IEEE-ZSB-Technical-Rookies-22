#include <string>
#include <iterator>
using namespace std ;
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main (){

   int n ;
   cin>>n ;
    vector <string > vs(n) ,vs1 ;
    vector <double> vi1(n) ,vi2(n) ;
   xx(i,0,n){
       cin>>vs[i]>>vi1[i] ;
   }
   vi2=vi1 ;
   sort(all(vi2)) ;
    xx(i,0,n){
        if (vi1[i]==vi2[1])
            vs1.push_back(vs[i])  ;
    }
    sort(all(vs1));
    xx(i,0,vs1.size())
    cout<<vs1[i]<<"\n" ;




}
