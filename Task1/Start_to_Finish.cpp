#include<bits/stdc++.h>
using namespace std;
int isPattern(string text, string pat)
{
    int n_t = text.length();
    int n_p = pat.length();
    if(n_p > n_t)
        return -1;
    int min_ans=INT_MAX;
    for(int k=0; k<n_t; k++)
    {
        int count=0,j=0;
        for(int i=k; i<n_t; i++)
        {
            if(pat[j]==text[i])
            {
                j++;
            }
            else if(j<n_p)
            {
                count++;
            }
        }
        if(k==0 && j!=n_p)
            return -1;
            
        if(j==n_p)
        {
            if(count<min_ans)
                min_ans = count;
            if(min_ans==0)
                return 0;
        }
    }
    return min_ans;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string text,pat;
        cin>>text>>pat;
        int del=isPattern(text, pat);
        if(del==-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES "<<del<<endl;
        }
    }
}
