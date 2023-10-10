// We are given an array of 0 1 2 and we have to sort it

#include<bits/stdc++.h>
using namespace std ;

int main(){
  int arr[6]={1,2,0,0,2,1};

// bruteforce
// /Sort using the inbuild sorting function 
// Time complexity O(nlogn)

// Optimised Approach
// Count the numbers of zeros , ones and twos 
// replace the elemets by zero . one and twos

int zero = 0 ;
int one = 0 ;
int two = 0 ;
for(int i = 0 ; i < 6 ; i++){
    if(arr[i]==0){
        zero++ ;
    }else if(arr[i]==1){
        one++ ;
    }else{
        two++ ;
    }
}

int i = 0 ;
while(zero){
    arr[i++] = 0 ;
    zero -- ;
}
while(one){
    arr[i++] = 1 ;
    one -- ;
}
while(two){
    arr[i++] = 2;
    two -- ;
}



    return 0 ;
}