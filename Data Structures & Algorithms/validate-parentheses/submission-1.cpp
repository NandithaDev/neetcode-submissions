#include<iostream>
#include<stack>

class Solution {
public:
    bool isValid(string s) {
        stack <char> p;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='['||s[i]=='{'||s[i]=='(')
            {
                p.push(s[i]);
            }
            else if(s[i]==']'||s[i]=='}'||s[i]==')')
            {
                if(p.empty()){
                    return false;
                }
                char top=p.top();
                p.pop();

                if( (top=='[' && s[i]!=']')
                ||(top=='(' && s[i]!=')')||
                (top=='{' && s[i]!='}')){
                    return false;
                }
            }
        }
        return p.empty();
        
    }
};
