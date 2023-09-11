   int isPerfectNumber(long long n) {
        // code here
        if(n==1)return 0;
        
        long long ans=0;
        for(long long i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                ans+=i;
                if(n/i!=i)
                {
                    ans+=n/i;
                }
            }
        }
        
        if(ans+1==n)return 1;
        return 0;
    }