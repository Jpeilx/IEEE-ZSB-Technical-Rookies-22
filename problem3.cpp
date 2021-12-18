#include <iostream>
#include <algorithm>
using namespace std;
int binary_search(int arr [],int b , int n , int c);
// b is the beginning of the array // n is the numbers of items in the array -1
// if the return value is equal -1 the element is not existed in the array
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int arr[] = { 5,6,7, 10, 40 , 50 };
    int x = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr,0,n-1,x) +1 ;
    cout<<result;
}
int binary_search(int arr [],int b , int n , int c){
    if (n>=b){
        int mid = (b+n)/2  ;
        if (arr[mid] == c)
            return mid ;
        else if (arr[mid]>c)
            return binary_search(arr,b,mid-1,c);
        else
            return binary_search(arr,mid+1,n,c);



    }
    return -1 ;




}
