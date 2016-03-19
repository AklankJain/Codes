#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long t , n , a, b;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        cin>>n;
        if(n%2==0)
        {
            a = b = n/2;
            cout << a <<" " <<b<<endl;
        }
        else
        {
            a = n/2;
            b = a+1;
            cout << a << " " << b<<endl;
        }
    }
    return 0;
}
