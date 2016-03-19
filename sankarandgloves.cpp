#include<bits/stdc++.h>

using namespace std;
int main()
{
    int sizea[1001];
    int sizeb[1001];
    for(int i=0;i<1001;i++)
    {
        sizea[i] =0;
        sizeb[i] =0;
    }
    int n,t,count = 0;
    cin >> n;
    for(int i =0;i<n;i++)
    {
        cin >> t;
        sizea[t]++;
    }
    for(int i =0;i<n;i++)
    {
        cin >> t;
        sizeb[t]++;
    }
    for(int i = 0 ;i<1001;i++)
    {
        count +=abs(sizea[i] - sizeb[i]);
    }
    count /=2;
    cout << count<<endl;
    return 0;
}
