class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //brute force approach
        int n = nums.size();
        vector<int>product(n);
        for(int i=0;i<n;i++){
            int prod = 1;
            for(int j=0;j<n;j++){
                if(i == j){
                    continue;
                }
                prod = prod * nums[j];
            }
            product[i] = prod;
        }
        return product;
    }
};
