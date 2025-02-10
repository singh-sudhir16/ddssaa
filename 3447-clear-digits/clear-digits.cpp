class Solution {
public:
    string clearDigits(string s) {
        
        int lastCharIndx = 0;
        unordered_set<int> st;
        stack<int> stck;
        stck.push(0);

        for(int i=1 ; i<s.size() ; i++){

            if(s[i]>='0' && s[i]<='9'){
                st.insert(i);
                st.insert(stck.top());
                stck.pop();
            }
            else
                stck.push(i);
        }

        string res = "";

        for(int i=0 ; i<s.size() ; i++){
            if(st.find(i) == st.end() ){
                res += s[i];
            }
        }
        return res;
    }
};