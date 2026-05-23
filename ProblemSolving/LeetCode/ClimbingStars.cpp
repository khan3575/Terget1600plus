#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    map<string, bool>found;
    map<string,bool>isPalindromeMap;

    vector<vector<string>> ans;


    bool isPalindrome(string s)
    {
        if(found[s])
        {
            return isPalindromeMap[s];
        }
        else{
            int n=s.size();
            bool ok = true;
            for(int i = 0; i<n/2; i++)
            {
                if(s[i]==s[n-1-i])
                {
                    continue;
                }
                else{
                    ok=false;
                }
            }
            isPalindromeMap[s]=ok;
            found[s]=true;
            return isPalindromeMap[s];
        }
    }
    void solve(string s, int i, int j)
    {
        if(i> j)
        {
            return;
        }
        if(i>= s.size() || j>=s.size())
        {
            return;
        }
        string t= s.substr(i,(j-i+1));
        if(isPalindrome(t))
        {
            ans.push_back(t);
        }
        solve(s,i,j+1);
        solve(s,i+1, j+1);
       
    }

    vector<vector<string>> partition(string s) {
        solve(s,0,0);
        for(int i = 0; i < ans.size(); i++)
        {
            cout<< ans[i]<<" ";
        }
    }
};

int main()
{
    Solution sol;
    sol.partition("hello");
    
    
    return 0;
}
