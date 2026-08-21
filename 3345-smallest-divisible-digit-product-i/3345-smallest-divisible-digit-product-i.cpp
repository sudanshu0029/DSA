class Solution {
public:
    int smallestNumber(int n, int t) {
        int mul= 1;
      while(true){
        int m = n;
        int mul = 1;
        while(m!=0){
        int s =  m%10;
        m/=10;
        mul *=s; 
        }
        if(mul % t == 0){
            return n ; 
        }
        n++;
      }
    return n;
    }
};