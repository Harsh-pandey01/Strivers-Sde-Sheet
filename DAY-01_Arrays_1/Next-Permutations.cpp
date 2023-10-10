// using next_permutation method to find the next permutation

// public:
//     void nextPermutation(vector<int>& nums) {
//         next_permutation(nums.begin(),nums.end());
//     }
// };

/*
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       
       
    //    it is a inbuilt function
        // int s = nums.size();
        // next_permutation(nums.begin(),nums.end());


        // strivers solution
        int index = -1 ; 
        int n = nums.size();
        for(int i = n - 2 ; i >=0 ; i--){
            if(nums[i] < nums[i+1]){
                index = i ;
                break ;
            }
        }
        if(index == -1){
            reverse(nums.begin(),nums.end());
        }
        // checking for the smallest number greater than index
        else {for(int i = n-1 ; i >index ; i--){
            if(nums[i]>nums[index]){ 
                swap(nums[i],nums[index]);
                break;
                }
        }
        reverse(nums.begin() + index + 1 , nums.end());}


        }

};
*/

























