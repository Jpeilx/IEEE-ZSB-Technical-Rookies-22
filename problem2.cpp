#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n ;
    cin>>n ;
    for (int i = 2 ; i<= n ; i++ ) {
        bool prime = true ;
       for (int j = 2; j <= 9 ; j++) {
         if (i==j)
             continue ;
         else if (i % j == 0) {
             prime = false;
             break ; }

        }
        if(prime)
            cout<<i<<" " ;
    }
}
