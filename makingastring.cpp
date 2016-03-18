#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("inp.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int n;
    long long a[27];

    cin >> n;
    for(int i =0;i<n;i++)
    {
        cin>> a[i];
    }
    sort(a , a+n, greater<int>() );

    long long sum = a[0];
    for(int i =0;i<n ;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]--;
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]>0)
        {
            sum+=a[i];
        }
    }

    cout <<sum<<endl;

    fclose(stdin);
    //fclose(stdout);
    return 0;
}
