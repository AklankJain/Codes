#include<iostream>

using namespace std;

int main()
{
    int n , m , val , no;
    int arr[101];
    int flag = 1;
    cin >> n >> m;
    for(int i =0 ; i< 101;i++)
    {
        arr[i] =0;
    }
    for(int i =0 ; i<n;i++)
    {
        flag = 1;
        cin >> no;
        for(int j = 0 ; j<no;j++)
        {
            cin>>val;
            arr[val] = 1;
        }
        for(int j =1 ; j<=m;j++)
        {
            if(arr[j]!=1)
            {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
    {
        cout <<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
