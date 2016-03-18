#include<bits/stdc++.h>

using namespace std;
long even[1000000];
long  odd[1000000];
int main()
{
    int n;
    cin>>n;

    int k=0 , r=0;
    long long sum=0;
    int t;
    for(int i = 0;i<n;i++)
    {
       cin>>t;
       if(t%2==0)
       {
           even[k] = t;
           k++;
       }
       else
       {
           odd[r] = t;
           r++;
       }
    }
   // cout<<r<<k<<endl;

    sort(odd,odd+r, greater<int>());
    for(int i =0;i<k;i++)
    {
        //cout<<"here";
        sum+=even[i];
    }
    if(r%2==0)
    {
        for(int i=0;i<r;i++)
            sum+=odd[i];
    }
    else
    {
        for(int i =0;i<r-1;i++)
            sum+=odd[i];
    }

    cout<<sum;
    return 0;
}
