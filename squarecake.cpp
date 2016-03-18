#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l , b;
    long long area;
    cin >> l>> b;
    area = l * b;
    long long count = l*b;
    for(long long i =2;i < area; i*= 2 )
    {
        if((int)sqrt(i) == sqrt(i))
        {
            count+= (l-(sqrt(i)-1))*(b-(sqrt(i)-1));
            cout<<i<<"\t"<<(l-(sqrt(i)-1))*(b-(sqrt(i)-1))<<endl;;
        }
        else
        {
            if((l-(i-1)) > 0 &&(b-(i-1)) > 0 )
            {
                count+= (l-(i-1))*(b-(i-1));
                cout<<i<<"\t" <<(l-(i-1))<<"\t" <<(l-(i-1))*(b-(i-1))<<endl;
            }
        }
    }
    cout << count;
    return 0;
}
