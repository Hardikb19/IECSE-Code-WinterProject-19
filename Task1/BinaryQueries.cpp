#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,q;
    cin>>n>>q;
    vector <int> arr(n);
    for(int i = 0; i < n ; i++)
        cin>>arr[i];
    
    for(int i = 0; i < q ; i++)
    {
        int k;
        cin>>k;
        if(k == 1)
        {
            int t;
            cin>>t;
            if(arr[t-1] == 0)
                arr[t-1] = 1;
            else
                arr[t-1] = 0;
        }
        else
        {
            int a,b;
            cin>>a>>b;
            if(arr[b-1] == 1)
                cout<<"ODD"<<endl;
            else
                cout<<"EVEN"<<endl;
        }
    }
}