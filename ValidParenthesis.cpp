    #include <stack>
    #include <iostream>
    using namespace std;

    
    bool isValid(string s) {
        stack<char> store;
        store.push(s[0]);
        
        for(int i = 1; i < s.length(); i++)
        {
            char ch = s[i];
            if(!store.empty() && store.top()=='(' && ch == ')') store.pop();
            else if(!store.empty() && store.top()=='{' && ch == '}') store.pop();
            else if(!store.empty() && store.top()=='[' && ch == ']') store.pop();
            else store.push(s[i]);
        }
        return store.empty();
        
    }