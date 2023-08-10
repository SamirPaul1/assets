//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
  
  bool isValid(const string& sub) {
    if (sub.length() > 1 && sub[0] == '0') {
        return false;
    }
    int num = stoi(sub);
    return num >= 0 && num <= 255;
}

void backtrack(const string& s, vector<string>& current, vector<string>& result) {
    if (s.empty() && current.size() == 4) {
        result.push_back(current[0] + "." + current[1] + "." + current[2] + "." + current[3]);
        return;
    }

    if (current.size() >= 4) {
        return;
    }

    for (int i = 1; i <= min(4, static_cast<int>(s.length())); i++) {
        string sub = s.substr(0, i);
        if (isValid(sub)) {
            current.push_back(sub);
            backtrack(s.substr(i), current, result);
            current.pop_back();
        }
    }
}
  
    vector<string> genIp(string &s) {
        // Your code here
    vector<string> result;
    vector<string> current;
    backtrack(s, current, result);
    return result;
    }

};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        if(str.size()==0)
            cout << -1 << "\n";
        else{
            for (auto &u : str) {
                cout << u << "\n";
            }
        }
    }
}
// } Driver Code Ends