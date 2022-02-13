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
int main (){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n , m ;
    cin>>n>>m ;
    vector<string>s(n) ;
    for (int i = 0 ; i<n ; i++ ){
        cin>>s[i];
    }
    int maxtopics = 0 ;
    int teams = 0 ;
    for (int i = 0 ;i<n ;i++) {
        for (int j = i + 1; j < n; j++) {
            int count = 0 ; 
            for (int k = 0; k < m; k++) {
                if (s[i][k] == '1' || s[j][k] == '1')
                    count++ ;
            }
            if (count>maxtopics){
                maxtopics=count ;
                teams=1 ;
            }
            else if (count == maxtopics)
                teams++;

        }
    }
    cout<<maxtopics<<"\n"<<teams ;
    }



