#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t, n , a ,b;
    int sum ;
    set<int> arr;

    cin >> t;
    for(int i =0;i<t;i++)
    {
        cin >> n >> a>>b;
        for(int j = 0 ;j<=n-1;j++)
        {
            sum = a*j + b*(n-j - 1);
            arr.insert(sum);
          //  cout<<sum<<" ";
        }
//        sort(arr.begin(),  arr.end());
        for(set<int>::iterator it = arr.begin(); it != arr.end();it++)
        {
            cout<<*it<<" ";
        }
        cout << endl;
        arr.clear();
    }

    return 0;
}
