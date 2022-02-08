class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            num=sumd(num);
        }
        return num;
    }
    int sumd(int k){
        int sum=0;
        while(k>0){
            sum+=(k%10);
            k/=10;
        }
        return sum;
    }
};