#include<bits/stdc++.h>
using namespace std;

int LS(int a[] ,int key,int size)
{
    int i;
    for(i =0 ; i < size ;i++)
    {
        if(a[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int na,nb,a,b;
        cin>>na>>nb>>a>>b;
        int aa[na],ab[nb];

        for(int i = 0; i < na ;i++)
            cin>>aa[i];

        for(int i = 0; i < nb ;i++)
            cin>>ab[i];
            
        if(LS(aa,a,na)!=-1 && LS(ab,b,nb)!=-1)
            cout<<LS(aa,a,na) + LS(ab,b,nb)<<endl;
        else
            cout<<"-1"<<endl;
    }

}