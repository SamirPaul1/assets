class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int>st;
    for(auto it : tokens)
    {
        if(it=="+" || it=="-" || it=="*" || it=="/"  )
        {
            int f = st.top();st.pop();
            int s = st.top();st.pop();

            if (it == "+")
              { int r = s + f;  st.push(r); }
            else if (it == "*")
              { int r = s * f;  st.push(r); }
            else if (it == "-")
              { int r = s - f;   st.push(r); }
            else if (it == "/")
              { int r = s / f;   st.push(r); }
        }
        else{ st.push( stoi(it)); }
    }
    return st.top();
    }
};