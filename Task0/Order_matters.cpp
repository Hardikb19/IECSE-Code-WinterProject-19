#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
            
        int max = -1, second_max = -1;

        for(int i = 0; i < n; i++)
        {
            if(a[i] > max)
            {
                second_max = max;
                max = a[i];
            }

            else if(a[i] < max && a[i] > second_max)
                second_max = a[i];
        }
        cout<<second_max<<endl;
    }
    return 0;
}
