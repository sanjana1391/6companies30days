//Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& a) {
        
        //code here
        map<string,vector<string> >m;
        for(int i=0;i<a.size();i++)
        {
            string s=a[i];
            sort(s.begin(),s.end());
            m[s].push_back(a[i]);
        }
        
        vector<vector<string> >ans(m.size());
        int t=0;
        for (auto x:m)
        {
            auto v=x.second;
            for(int i=0;i<v.size();i++)
            {
                ans[t].push_back(v[i]);
            }
            t++;
        }
        return ans;
    }
};
