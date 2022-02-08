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
using namespace std ;
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main (){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n ;
    cin>>n ;
    vector<string> s (n) ;
    for (int i = 0 ; i<n ; i++){
        cin>>s[i];
    }
    char max = '0';
    for (int i = 0 ;i<n ;i++ ) {
        for (int j = 0; j < n; j++) {
            if (max<s[i][j])
                max=s[i][j] ;
            if (max =='9')
                break ;
        }
        if (max =='9')
            break ;
    }
    for (int i = 1 ; i<n-1 ; i++)
        for (int j = 1 ; j<n-1 ; j++ ){
            if (s[i][j]>s[i][j-1] && s[i][j] >s[i][j+1] && s[i][j]> s[i-1][j]&& s[i][j]>s[i+1][j] )
                s[i][j]='X';
        }
    for (int i =0 ; i<n ;i++)
        cout<<s[i]<<"\n";


}
