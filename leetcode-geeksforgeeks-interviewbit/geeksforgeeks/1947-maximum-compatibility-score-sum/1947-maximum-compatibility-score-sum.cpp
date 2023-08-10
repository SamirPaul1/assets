class Solution {
public:
    int ans=INT_MIN;

    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
    int idx=0;
        int n=students.size();
        vector<bool>vis(n,false);
        int currscore=0;
        fun(idx,students,mentors,n,vis,currscore);
        return ans;
    }               //student        //mentor
    void fun(int idx,vector<vector<int>>&student,vector<vector<int>>&mentor,int &n,vector<bool>&vis,int currscore)
    {
        //base
        if(idx >= n)
        {
            if(currscore > ans)
            {
                ans=currscore;
            }
            return;
        }
        //for the curr ith studen we have the choise for all the mentors
        //we will try to match the curr student with every mentor individulally
        //so to avoid the clash in matching we will make that mentor visited after considerration and will run the loop from the starting
        //we have choise of m mentors
        for(int i=0;i<n;i++)
        {
            if(vis[i]==true)
            {
                continue;
            }
            else if(vis[i]==false)  //then only we can match the ith student with the curr mentor
            {
                vis[i]=true;   //making the curr mentor vis as it got matched now with curr ith student
                int temp = match(student[idx],mentor[i]);       	        		
                fun(idx+1,student,mentor,n,vis,currscore+temp);
                vis[i]=false;  //backtracking
            }
        }
    }
    int match(vector<int>&student,vector<int>&mentor)
    {
        int n=student.size();
        int count=0;

        for(int i=0;i<n;i++)
        {
            if(student[i]==mentor[i])
            {
                count++;
            }
        }
        return count;    
    }
};