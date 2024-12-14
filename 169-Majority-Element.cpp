class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // Moore's Voting Algorithm
        int elem=nums[0], count=1;
        for (int i=1; i<n; i++){
            if (count==0){
                elem = nums[i];
                count++;
                continue;
            }
            if (nums[i]==elem){
                count++;
            }
            else{
                count--;
            }
        }
        return elem;
    }
};