#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <string>
#include <iterator>
#include <cmath>
using namespace std ;
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main () {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        long long n, k , j=0 ;
        cin >> n >> k;
        vector<int> guys;
        int inp ;
        cin>>inp ;
        guys.push_back(inp) ;
        for (int i = 0; i < n - 1; i++) {
            cin>>inp ;
            guys.push_back(inp) ;
            while (k > 0 && i >= 0 && guys[i] < guys[i + 1]) {
                guys.erase(guys.begin() + i);
                k--;
                i--;
                n--;
            }

            if (k<=0){
               while(j<=i+1){
                   cout<<guys[j]<<" ";
                   j++ ;
               }

            }
        }
        cout<<"\n";

    }
}
