class Solution {
public:
    int addDigits(int num) {
        int num1 = 0, num2 = 0;
        while (num > 9) {
            num1 = num % 10;
            num2 = num / 10;
            num = num1 + num2;
        }
        return num;
    }
};