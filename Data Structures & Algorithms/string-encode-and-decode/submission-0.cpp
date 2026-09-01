#include<string>
class Solution {
public:

    string encode(vector<string>& strs) {
        string enc="";
        for(int i=0;i<strs.size();i++){
            int len =strs[i].size();
            enc+=std::to_string(len);
            enc+="#";
            enc+=strs[i];
        }
        return enc;

    }

    vector<string> decode(string s) {
        string size1="";
        string dec;
        vector<string> strs;
        int j=0;
        int i=0;
        while(i<s.size()){
            
            while(s[i]!='#'){
                size1+=s[i];
                i++;
                continue;
            }
            i++;
            int size=std::stoi(size1);
            for(int j=0;j<size;j++){
                dec+=s[i];
                i++;
                continue;
            }
            strs.push_back(dec);
            dec="";
            size1="";
            
            
        }
        return strs;

    }
};
