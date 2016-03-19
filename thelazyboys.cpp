#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    long n,m,noa,nob,firstNum , secondNum,Low_Value,High_Value;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        noa = n/2;
        nob = m/2;
       long odd= (n-noa)*(m-nob);
        long even = noa*nob;
        firstNum = n*m - (odd+even);
        secondNum = n*m;
        int r= __gcd(firstNum,secondNum);
        firstNum/=r;
        secondNum/=r;
        cout<<firstNum<<"/"<<secondNum<<endl;
    }
    return 0;
}
