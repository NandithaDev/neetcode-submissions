class Solution {
public:
    bool isPalindrome(string s) {
    stack<char> p;
    int n=s.size();

    for(int i=0;i<n;i++){
        if(std::isalpha(s[i]) or std::isdigit(s[i])){char c =std::tolower(static_cast<char>(s[i]));
        p.push(c);}
    }
    for(int j=0;j<n;j++){
        char a=p.top();
        if(std::isalpha(s[j]) or std::isdigit(s[j])){char c =std::tolower(static_cast<char>(s[j]));
        if(a==c){
            p.pop();
        }}
    }
    return p.empty();


}
};
