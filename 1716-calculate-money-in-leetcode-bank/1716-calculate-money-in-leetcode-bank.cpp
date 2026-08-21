class Solution {
public:
int totalMoney(int n) {
    int a = n / 7;
    int b = n % 7;
    int sum = 0;

    for(int j = 0; j < a; j++) {
        sum += 28 + 7*j;
    }

    for(int i = 1; i <= b; i++) {
        sum += a + i;
    }

    return sum;
}
};