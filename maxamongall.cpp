#include<iostream>
#include<stack>
#include<vector>
#include<set>

using namespace std;

int main()
{
    int n ,i , j , max,q, value;
    vector<int> arr;
    cin >> n;
    for(int i = 0 ; i<n ;i++)
    {
        cin>>value;
        arr.push_back(value);
    }
    cin >> q;
    for(int k = 0 ; k< q ;k++)
    {
        cin >> i >> j;
        max = arr[i];
        for(int l = i ; l<= j ;l++ )
        {
            if(max < arr[l])
            {
                max = arr[l];
            }
        }
        cout << max << endl;
    }
    return 0;
}
