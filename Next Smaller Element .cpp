vector<int> Solution::prevSmaller(vector<int> &A) 
{
       int n=A.size();
       stack<int> st;
       vector<int> vec;
       for(int i=0;i<n;i++)
       {
           while(!st.empty() && A[i]<=st.top()) 
           {
               st.pop();
           }

           if(st.empty())
           {
              vec.push_back(-1);
           }

           else 
           {
               vec.push_back(st.top());
           }

           st.push(A[i]);
       }
       
       return vec;
}
