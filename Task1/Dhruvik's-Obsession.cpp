#include<bits/stdc++.h>
using namespace std;


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        int count[26] = {0};
        for(int i = 0 ;i < s.size() ;i++)
            count[s[i] - 'A']++;
        int flag = 0;
        for(int i = 0;i < s.size() ; i++)
        {
            if(count[s[i]-'A'] == 1)
            {
                cout<<i<<endl;
                flag = 1;
                break;
            }    
        }
        if(flag == 0)
            cout<<"-1"<<endl;
    }
    
    return 0;
}
