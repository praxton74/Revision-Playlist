class Solution {
public:
    int flo(int x,vector<int>prime)
    {
        if(prime[0]>x)
        {
            return 0;
        }
        int ans=prime[0];
        for(int i=1;i<prime.size();i++)
        {
            if(prime[i]>x)
            {
                return ans;
            }
            ans=prime[i];
        }
        return ans;
    }
    bool primeSubOperation(vector<int>& nums)
    {
        if(nums.size()==1)
        {
            return true;
        }
        //Storing Prime Numbers

        vector<int>p;
        for(int num = 2; num <= 1000; num++)  
        {    
            int prime = 1;  
            int inum  = sqrt(num);  
            for(int count = 2; count <= inum; count++)  
            {  
                if(num % count == 0)  
                {  
                    prime = 0;  
                    break;  
                }  
            }  
            if(prime)  
            {
                p.push_back(num);
            }  
        }
        
        //Modifying Array
        int prev=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            int n=nums[i];
            int diff=n-prev-1;
            int f=flo(diff,p);
            nums[i]-=f;
            prev=nums[i];
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>=nums[i])
            {
                return false;
            }
        }
        //if(nums[nums.size()-2]<nums[nums.size()-1])
        return true;

    }
};
