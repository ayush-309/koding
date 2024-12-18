class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k=0;
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                i++;
                k++;
                continue;
            } else {
                int index = m;
                while (index != i) {
                    swap(nums1[index], nums1[index - 1]);
                    index--;
                }
                m++;
                nums1[k] = nums2[j];
                i++;
                j++;
                k++;
            }
        }
        // cout<<i<<endl<<j<<endl<<k;
        while(i<m){
            nums1[k]=nums1[i];
            i++;
            k++;
        }
        while(j<n){
            nums1[k]=nums2[j];
            j++;
            k++;
        }
    }
};