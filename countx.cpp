#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    string arr;
    int cnt = 0;
    int flag = 0;
    for(int i =0;i<t;i++)
    {
        cin>>arr;
        for(int j=0;j< arr.size();j++)
        {
            if(arr[j] == '-')
            {

                if(flag == 0)
                {
                    flag = 1;
                }
                else
                {
                   cout<<cnt;
                   cnt =0 ;
                }
            }
            if(arr[j] == 'X')
            {
                cnt++;
            }
        }
        cout<<endl;
        flag =0 ;
    }



    return 0;
}

