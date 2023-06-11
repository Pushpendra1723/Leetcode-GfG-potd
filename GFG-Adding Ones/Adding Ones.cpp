    void update(int a[], int n, int updates[], int k)
    {
        // Your code goes here
        for(int i=0;i<k;i++)
        {
            int m=updates[i]-1;
            a[m]+=1;
        }
        int p=0;
        for(int i=0;i<n;i++)
        {
            p+=a[i];
            a[i]=p;
        }
    }