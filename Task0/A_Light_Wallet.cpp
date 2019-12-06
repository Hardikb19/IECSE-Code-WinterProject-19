#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {100,50,10,5,2,1};
    int t;
    cin>>t;
    for(int i =0 ;i < t ; i++)
    {
        long long int n;
        cin>>n;
        long long int cnt=0,j=0;
        while(n!=0)
        {
            cnt += n/arr[j];
            n = n%arr[j];
            j++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
    


