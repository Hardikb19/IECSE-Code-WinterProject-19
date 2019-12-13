#include<bits/stdc++.h>
using namespace std;

int main()
{
    //We use fast I/O method to improve speed. Refer wiki.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
            int n;
            cin>>n;
            for(int i=0;i<n;i++)
            {
                int k,a,b;
                cin>>k>>a>>b;
                if(a%2==0)
                {
                    cout<<a/2<<endl;
                }
                else if(a%2==1)
                {
                    if(k!=b)
                    {
                        cout<<(a/2)+1<<endl;
                    }
                    else if(k==b)
                    {
                        cout<<a/2<<endl;
                    }

                }
            }
    }
}


