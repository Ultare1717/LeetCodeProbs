    #include <cmath>
    bool isPalindrome(int x) {
        long long int factor;
        long long int temp = abs(x);
        if(x == 0) return true;
        if(x<0) return false;
        if(log(temp)>31) return false;
        factor = int(log10(temp));
        int i = 0;
        while(1)
        {
            long long int t1 = (int(temp/pow(10,i)))%10;
            long long int t2 = (int(temp/pow(10,factor-i)))%10;
            if(t1!=t2) return false;
            if(factor-i==i && (factor+1)%2!=0) break;
            else if(factor-i==i+1  && (factor+1)%2==0) break;
            i++;
        }
        
        return true;
        
    }