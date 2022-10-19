class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> m;
        for(int i =0;i<s.length();i++){
            m[s[i]]=i;
        }
        vector<int> v;
        int ma=0,prev=-1;
        for(int i =0;i<s.length();i++){
            ma = max(ma,m[s[i]]);
            if(ma == i){
                v.push_back(ma-prev);
                prev = ma;
            }
        }
        return v;
    }
};
