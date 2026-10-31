class Solution {
public:
    int addDigits(int num) {
    int res;
    while(num>9){
        int nums=num;
        int  sum=0;
        while(nums>0){
        int d=nums%10;
        sum=sum+d;
        nums=nums/10;
        }
        num=sum;
    }
    return num;
    }
};