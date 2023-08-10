class Solution {
public:
    bool isPalindrome(int x) {
       if(x < 0)
       return false;

       long int rev = 0;
       int temp = x;
       while(temp != 0){
           int lastDigit = temp % 10;
           rev = rev * 10 + lastDigit;
           temp = temp / 10;
       } 
       if(rev == x)
       return true;
       else
       return false;
    }
};