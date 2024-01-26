class Solution {
    public int maxSatisfied(int[] customers, int[] grumpy, int minutes) {
        int s = 0, cs = 0;
        int n = customers.length;
        for (int i = 0; i < n; ++i) {
            s += customers[i] * grumpy[i];
            cs += customers[i];
        }
        int t = 0, ans = 0;
        for (int i = 0; i < n; ++i) {
            t += customers[i] * grumpy[i];
            int j = i - minutes + 1;
            if (j >= 0) {
                ans = Math.max(ans, cs - (s - t));
                t -= customers[j] * grumpy[j];
            }
        }
        return ans;
    }
}