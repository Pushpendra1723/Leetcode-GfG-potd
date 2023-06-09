		vector<string>find_permutation(string s)
		{
		    // Code here there
		    vector<string>v;
		    sort(s.begin(),s.end());
		    do
		    {
		        v.push_back(s);
		    }while(next_permutation(s.begin(),s.end()));
		    return v;
		}