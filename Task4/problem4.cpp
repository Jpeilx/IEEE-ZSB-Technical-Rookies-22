#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <string>
#include <iterator>
using namespace std ;
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main (){
    cin.tie(0);
    ios::sync_with_stdio(0);
    vector<int> ReturnDate(3) , Date(3) ;
    int count = 0;
    for (int i =0 ; i<3 ; i++)
        cin>>ReturnDate[i];
    for (int i =0 ; i<3 ; i++)
        cin>>Date[i];

    for(int i = 2 ;i>=0; i--){
        if(ReturnDate[i]==Date[i]){
            count++ ;
            continue;
        }
        else if (ReturnDate[i]<Date[i]){
            cout<<0 ;
            break ;
        }
        else if (i==2){
            cout<<10000 ;
            break ;
        }
        else if (i==1){
            cout<<((ReturnDate[i]-Date[i])*500) ;
            break;
        }
        else
            cout<<((ReturnDate[i]-Date[i])*15) ;

}
    if (count==3)
        cout<<0 ;

}
