    #include <iostream>
    #include <vector>
    using namespace std;

    
    string table[10] = 
    {"0", "1", "abc", "def", "ghi", "jkl","mno", "pqrs", "tuv", "wxyz"};
    vector<string> final_answer;
    
    void recursive_soln(int i , string currstr, string digits)
    {
        if(digits.length() == 0) return;
        
        if(currstr.length() == digits.length()) 
        {
            final_answer.push_back(currstr);
            return;
        }
        
        
        for(auto iter = 0; iter < table[int(digits[i])-48].length(); iter++)
        {
            string temp = table[int(digits[i])-48];
            recursive_soln(i+1,currstr + temp[iter],digits);
        }
        
        
        
    }
    
    vector<string> letterCombinations(string digits) {
        string currstr;
        recursive_soln(0,currstr,digits);
        return final_answer;
        
    }