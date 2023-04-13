bool isOp(char c) 
{
    return (c=='+'|| c=='-'||c=='*'||c=='/');
}
int Solution::braces(string A)
{
    stack<char> st;
    for(int i = 0; i < A.length(); i++)
    {
        if(A[i]=='(' || isOp(A[i])) 
        st.push(A[i]);
        
        else if(A[i]==')')
        {
            if(st.top()=='(')
            return true;
            
            while(isOp(st.top())) 
            st.pop();
            
            
            st.pop();
        }
    }
    return false;
}
