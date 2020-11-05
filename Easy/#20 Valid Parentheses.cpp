class Solution {
public:
    bool isValid(string s) {
        stack <char> T;
        int i=0;
        for(char c : s)
        {
            if(c== '(' || c == '{' || c == '[')
            {
                T.push(s[i]);
            }    
            else if( c ==  ')')
            {
                if (T.empty())
                {
                    return false;
                }
                if(T.top()=='(')
                {
                    T.pop();
                }
                else
                    return false;
            }
            else if (c == '}')
            {
                 if (T.empty())
                {
                    return false;
                }
                if(T.top()=='{')
                {
                   T.pop();
                }
                else
                    return false;
            }
            else if (c == ']')
            {
                 if (T.empty())
                {
                    return false;
                }
                if(T.top()=='[')
                {
                    T.pop();
                }
                else
                    return false;
            }
            i++;
        } 
        if(T.empty())
             {
            return true;
             }
            else
            return false;     
    }
};