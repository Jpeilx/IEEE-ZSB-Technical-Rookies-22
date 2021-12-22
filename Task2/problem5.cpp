#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <string>
#include <iterator>
using namespace std ;
void insertion_sort(int arr [] , int n ) ;
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main () {
   int n ;
   cin>>n ;
   int *arr = new int [n] ;
   xx(i,0 , n )
   cin>>arr[i] ;
    insertion_sort(arr, n ) ;
    xx(i,0 , n )
        cout<<arr[i]<<" " ;
}
void insertion_sort(int arr [] , int n ) {
    int j , mov ;
    xx(i,1,n){
       j=i-1 ;
       mov=arr[i] ;
       while (j>=0 && arr[j]>mov){
           arr[j+1]=arr[j] ;
           j-=1 ;
       }
       arr[j+1]=mov ;

    }
}

