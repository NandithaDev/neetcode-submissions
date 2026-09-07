class Solution {
public:
    bool isPalindrome(string s){
    string rev="";
    string s_copy="";
    for(int j=0;j<s.size();j++){
        if(std::isalpha(s[j]) or std::isdigit(s[j])){
            char c =std::tolower(static_cast<char>(s[j]));
            s_copy+=c;
        }
    }

    for(int i=s_copy.size()-1;i>=0;i--){
        
            rev=rev+s_copy[i];
    }
    return (rev==s_copy);

}
};
