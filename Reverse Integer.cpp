
#include <cmath>
    
    int reverse(int x) {
        long long int factor, answer = 0;
        long long int temp = abs(x);
        if(x == 0) return 0;
        factor = int(log10(temp));
        while(temp!=0)
        {
            
            answer+= (temp%10)*pow(10,factor);
            if(answer>pow(2,31)) return 0;
            factor--;
            temp = temp/10;
        }
        if(x<0)
            answer = - answer;
        return answer;
        
        
    }