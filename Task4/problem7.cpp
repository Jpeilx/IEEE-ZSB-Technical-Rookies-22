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
    long long  p , q ;
    cin>>p>>q ;
    long long c = q-p+1 , count = 0 ;
    while (p<=q){
        long long  pp = p*p   ;
        string s1 = to_string(p), s2 = to_string(pp) , s3 ,s4;
        s4=s2.substr(s2.length()/2) ;
        s3=s2.substr(0,s2.length()/2) ;
        if (pp==1)
            cout<<1<<" " ;
        else if (s2.length()==1){
            p++;
            continue;}
        else if (p==(stoi(s3)+stoi(s4)))
            cout<<p <<" ";
        else
            count++ ;

        if (count==c)
            cout<<"INVALID RANGE";
        p++ ;


    }



