class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> f1(26,0) , f2(26,0);

        if(s1==s2)
            return true;
        for(int i=0 ; i<s1.size() ; i++){
            f1[s1[i] - 'a']++;
            f2[s2[i] - 'a']++;
        }

        for(int i=0 ; i<26 ; i++){
            if(f1[i]!=f2[i])
                return false;
        }

        int count = 0;

        for(int i=0 ; i<s1.size() ; i++){
            if(s1[i] != s2[i])
                count++;
        }

        return count==2;


    }
};