#include <iostream>
#include <iterator>
#include <list>
using namespace std;
int for_func( list<int>ll  );
int while_fun( list<int>ll    );
int recur_fun( list<int>ll ,int n ,auto it , int sum );
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,t ;
    cin>>n ;
    list<int>ll(n) ;
    for (int i =0 ; i<n ;i++)
    {
        cin>>t;
        ll.push_front(t);
    }
    auto it = ll.begin() ;
    int sum = 0 ;


       cout<<for_func(ll) <<endl<<while_fun(ll)<<endl<<recur_fun(ll,n, it , sum )<<endl   ;



}
int for_func( list<int>ll   ){
    int sum =0 ;
    auto it = ll.begin();
   for( ; it!=ll.end() ;it++)
      sum+=*it ;

 return sum ;
}
int while_fun( list<int>ll  ){
    int sum =0 ;
    auto it = ll.begin();
    while (it!=ll.end()){
        sum+=*it ;
        it++;
    }
    return sum ;
}
int recur_fun( list<int>ll ,int n , auto it , int sum ){

    sum+=*it ;
    it++ ;
    if(n==1)
        return sum ;
      return  recur_fun(ll,n-1,it , sum) ;
}

