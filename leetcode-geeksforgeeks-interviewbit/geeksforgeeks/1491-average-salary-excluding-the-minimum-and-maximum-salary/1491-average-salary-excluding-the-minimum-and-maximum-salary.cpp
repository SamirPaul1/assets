class Solution {
public:
    double average(vector<int>& salary) {
      sort(salary.begin(), salary.end());
        double count = 0;
        int sz = salary.size() - 2;
        for(int i = 1; i < salary.size()-1; i++) {
            count += salary[i];
        }
        count=  count/sz;
        return count;
    }
};