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
    int t  ;
    cin>>t;
    while (t--){
        long long n , a , b  ;
        cin>>n>>a>>b ;
        vector<long long > out ;
        long long count = n-1 ;
        for (int i = 0 ; i<n ;i++){
            long long output =0 ;
            output=count*a + b*i ;
            count-- ;
            int  c = out.size();
            if (i!=0&& out[c-1]==output)
                continue;
            else
               out.push_back(output) ;
        }
        sort(out.begin(),out.end());
        for(auto i =out.begin() ; i!=out.end(); ++i)
            if (i==out.end()-1)
                cout<<*i;
            else
                cout<<*i<<" ";

        }
    }




