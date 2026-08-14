class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        while(n!=0){
            int t=n%10;
            sum+=t;
            product*=t;
            n=n/10;
        }
        return (product-sum);
        
    }
};