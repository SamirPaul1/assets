typedef long long int lli;

class Solution {
public:
    int findKthNumber(int n, int k) {
    int curr = 1;
      k--;
      while(k){
         int steps = calcSteps(n, curr, curr + 1);
         if(steps <= k){
            k -= steps;
            curr++;
         }else{
            curr *= 10;
            k -= 1;
         }
      }
      return curr;
   }
   int calcSteps(lli nax, lli n1, lli n2){
      int ret = 0;
      while(n1 <= nax){
         ret += min(nax + 1, n2) - n1;
         n1 *= 10;
         n2 *= 10;
      }
      return ret;    
    }
};