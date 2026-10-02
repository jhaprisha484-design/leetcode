class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int t=0;
        int p=num;
        while(num>0){
            t=num%10;
            if(p%t == 0){
                c++;
            }
            num=num/10;
        }
        return c;
        
    }
};