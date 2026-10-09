class Solution {
public:
    bool isPalindrome(int x) {
        int c=x;
        long res=0;
        if(x<0){
            return false;
        }
        while(c>0){
            res=(res*10)+c%10;
            c=c/10;
        }
        if(res==x){
            return true;
        }else{
            return false;
        }
    }
};