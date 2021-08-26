
  #include <iostream>
  #include<vector>
  #include<unordered_map>

  using namespace std;

  

    
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_multimap<int,int> sum_list;
        vector<int> soln;
        int fir,sec,temp;
        for(int iter = 0; iter < nums.size(); iter++)
        {
            pair<int,int> pair_num;
            pair_num.first = nums[iter];
            pair_num.second = iter;
            sum_list.insert(pair_num);   
        }
        
        for(auto iter = sum_list.begin(); iter!=sum_list.end();iter++)
        {
            

            temp = target - iter->first;
            if(sum_list.find(temp)!=sum_list.end())
            {
                fir = sum_list.find(temp)->second;
                sec = sum_list.find(iter->first)->second;
                break;
            }
            
           
            
        }
        int i = 0;
        if(fir==sec)
         for(auto iter = sum_list.begin(); iter!=sum_list.end();iter++)
         {
                 if(iter->first==temp)
                 {
                    if(i==0) 
                    {
                     fir = iter->second;
                     i++;
                    }
                    else
                    {
                     sec = iter->second;
                    }
                } 
             
         }


      soln.push_back(fir);
      soln.push_back(sec);
      return soln     ;
    }