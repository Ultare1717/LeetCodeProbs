    #include <iostream>
    #include <vector>
    using namespace std;
    
    
    int maxSubArray(vector<int>& nums) {
        int sub_array = 0;
        int max_sub = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            sub_array += nums[i];
            if(sub_array < nums[i])
            {
                sub_array = 0;
                sub_array += nums[i];
            }
            if(sub_array > max_sub) max_sub = sub_array;
        }
        return max_sub;
        
    }