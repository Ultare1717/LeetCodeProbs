    #include <iostream>
    #include <unordered_set>
    using namespace std;
    
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> character_table;
        int max_count = 0,count = 0;
        int i = 0;
        int pos = i;
        while(pos<s.length())
        {
            i = pos;
        while(character_table.find(int(s[i]))==character_table.end() && i<s.length())
            {
             character_table.insert(int(s[i]));
             count++;
             i++;
            }
           
           if(max_count<count) max_count = count;
           count = 0;
           character_table.clear();
           pos++;
            
        }
        
        return max_count;
        
        
        
    }