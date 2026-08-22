class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int mul = 1;
        int m = n ;
        int s = 0;
        while(n!=0){
            s = n % 10;
            sum+=s;
            mul*=s;
            n/=10;
        }
        int c = sum + mul;
        if(m%c==0 ){
            return true;
        }
        return false;
    }
};