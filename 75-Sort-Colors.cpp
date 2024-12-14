class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int x=0, y=0, z=0;
        for (int i=0; i<n; i++){
            if (nums[i]==0){
                x++;
                continue;
            }
            if (nums[i]==1){
                y++;
                continue;
            }
            if (nums[i]==2){
                z++;
                continue;
            }
        }
        cout<<x<<endl<<y<<endl<<z<<endl;
        for (int j=0; j<n; j++){
            if (j<x){
                nums[j]=0;
                continue;
            }
            if (j<x+y){
                nums[j]=1;
                continue;
            }
            if (j<x+y+z){
                nums[j]=2;
                continue;
            }
        }
    }
};