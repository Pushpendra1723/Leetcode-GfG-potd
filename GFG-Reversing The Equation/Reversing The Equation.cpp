    string reverseEqn (string s)
        {
            //code here.
            int n=s.size();
            string ans="",a="";
            for(int i=n-1;i>=0;i--)
            {
               if(isdigit(s[i])==false)
               {
                   if(a.size()!=0)
                   {
                       reverse(a.begin(),a.end());
                       ans+=a;
                       a.clear();
                   }
                   ans+=s[i];
               }
               else
               {
                   a+=s[i];
               }
            }
                               if(a.size()!=0)
                   {
                       reverse(a.begin(),a.end());
                       ans+=a;
                       a.clear();
                   }
            return ans;
        }