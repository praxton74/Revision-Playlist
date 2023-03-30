class Solution {
public:

    // double solvep(double x,int n,int c,double b,double ans)
    // {
        
    //     while(c<n)
    //     {
    //         b*=x;
    //         ans=b;
    //         c++;
    //         solvep(x,n,c,b,ans);
    //     }
    //     return ans;
    // }

    // double solven(double x,int n,int c,double b,double ans)
    // {
    //     n=abs(n);
    //     while(c<n)
    //     {
    //         b*=x;
    //         ans=b;
    //         c++;
    //         solvep(x,n,c,b,ans);
    //     }
    //     return ans;
    // }

    // double myPow(double x, int n)
    // {
    //     int c=1;
    //     double ans=0;
    //     if(n==0)
    //     {
    //         return 1;
    //     }
    //     if(abs(n)==1)
    //     {
    //         double res= n==1?x:1.0/x;
    //         return res;
    //     }
    //     else if(n>1)
    //     {
    //         double b=x;
    //         ans=solvep(x,n,c,b,ans);
    //     }
    //     else if(n<-1)
    //     {
    //         double b=x;
    //         ans=solven(x,n,c,b,ans);
    //         ans=1.0/ans;
    //     }
    //     return ans;

    double myPow(double x,int n)
    {
        if(n==0)
        {
            return 1;
        }
        if(abs(n)==1)
        {
            double res= n==1? x:1.0/x;
            return res;
        }
        if(n>1)
        {
            double ans=1.0;
            while(n>0)
            {
                if(n&1)
                {
                    ans=ans*x;
                }
                x=x*x;
                n>>=1;
            }
            return ans;
        }
        else
        {
            n=abs(n);
            double ans=1.0;
            while(n>0)
            {
                if(n&1)
                {
                    ans=ans*x;
                }
                x=x*x;
                n>>=1;
            }
            return 1.0/ans;
        }
        return 0.0;
    }
   
};
