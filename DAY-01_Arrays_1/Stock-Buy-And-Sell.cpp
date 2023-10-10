// We are given an array of prices and we have to find the maximum return we can expect from the stock


// Bruteforce :-
/*
Find all the returns for each day and we will track track the maximum return
int prices[]= {7,1,5,3,6,4}
int maxi = 0 ;
for(int i = 0 ; i < n-1 ; i++){
    for(int j = i+1 ; j < n ;j++){
        diff = arr[j]- arr[i];
        maxi = max(maxi,diff);
    }
}
ans = maxi = 5 {purchase for 1 and sell for 6}

*/

/*
// More optimise
we will find the maximum element for the right side of all the element and store 
it in and 
use an stack to do so

int maxProfit(vector<int>& prices) {
        // tryig to solve using stack
        stack<int>st;
        st.push(0);
        int s = prices.size();
        vector<int>ans(s);
        for(int i = s-1;i>=0;i--){
            int top = st.top();
            if(prices[i]>top){
                ans[i]=top;
                st.pop();
                st.push(prices[i]);
            }else{
                ans[i]=top;
            }
        }
        // we get a ans vector and a prices 
        int final = 0 ;
        for(int i = 0 ; i < s;i++){
            int difference = ans[i]-prices[i];
            final = max(final,difference);
        }
        return final;
    }

*/



// Optimised approach

// take a min element i.e arr[0] and track over the arr
// If any element is less than that then change the min else store the difference in a maxi


#include<bits/stdc++.h>
using namespace std ;

int main(){
int prices[]= {7,1,5,3,6,4};
int min = prices[0];

int ans = 0 ;
for(int i = 1 ; i < 6 ; i++){
    if(min < prices[i]){
    ans = max(ans,prices[i]-min);
    }else{
        min = prices[i];
    }
}

cout<<"The maximum return is"<< ans ;

    return 0 ;
}