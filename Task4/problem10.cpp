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
    int budget , n , m ;
    cin>>budget>>n>>m ;
    vector<int>key(n),usb(m) ;
    for (int i = 0 ; i<n ; i++)
        cin>>key[i];
    for (int i = 0 ; i< m ;i++)
        cin>>usb[i];
    sort(key.begin(),key.end());
    sort(usb.begin(),usb.end());
    int max =-1 ;
    for (int i = 0 ; i<n ;i++)
        for (int j =0 ; j<m ; j++){
            if (key[i]+usb[j]<=budget && key[i]+usb[j]>max )
                max = key[i] + usb[j];

        }
    cout<<max ;


}

