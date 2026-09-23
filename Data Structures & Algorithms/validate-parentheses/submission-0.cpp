class Solution 
{
    public:
        bool isValid(string s) 
        {
            stack<char> temp;
            
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == '[')
                {
                    temp.push('[');
                }
                else if(s[i] == '(')
                {
                    temp.push('(');
                }
                else if(s[i] == '{')
                {
                    temp.push('{');
                    
                }
                else if(!temp.empty() && temp.top() == '[')
                {
                    if(s[i] != ']') return false;
                    temp.pop();
                    
                }
                else if(!temp.empty() && temp.top() == '(')
                {
                    if( s[i] != ')') return false;
                    temp.pop();
                    
                }
                else if(!temp.empty() && temp.top() == '{' )
                {
                    if( s[i] != '}') return false;
                    temp.pop();
                } 
                else 
                {
                    return false;
                }
            }
            
            return temp.empty();
        }
};