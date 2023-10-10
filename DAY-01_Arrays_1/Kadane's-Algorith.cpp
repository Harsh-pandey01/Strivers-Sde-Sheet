// We are given an array and we have to find the maximum sum of the contigous array

// Bruteforce:-
/*
find all the subarrays and then track the sum everytime
Time-Complexity of the solution will be 0(n2)
*/

// Optimised Approach
/*
Using kadane's theorem
1.create a sum and trrack the sum at every element
2.Make a maxi = arr[0], and track maxi at each step with the sum
3. If the sum < 0 , make it 0 ;- sum =0
*/

#include<bits/stdc++.h>
using namespace std ;

int main(){
  int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int sum = INT_MIN ;
  int maxi = arr[0];
  for(int i = 0 ; i < n ; i++){
    sum+=arr[i];
    maxi = max(maxi,sum);
    if(sum < 0) sum = 0 ;
  }

  cout<<"The Gretest sum of the countinous subarray is"<<maxi<<endl ;

    return 0 ;
}