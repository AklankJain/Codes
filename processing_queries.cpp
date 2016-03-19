#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;


int main()
{
    queue<long long int> strt;
    queue<long long int> nd;
    long long int p , q ,r , s;
    int n , b;

    cin >> n >> b;
    for(int i =0;i<n;i++)
    {
        if(strt.size()==0 && nd.size() == 0)
        {
            cin >> p >> q;
            cout << p+q<<" ";
        }
        else
        {
            cin >> r >> s;

            if(r < nd.back() )
            {
                if(nd.size() < b)
                {
                    strt.push(r);
                    nd.push(nd.back()+r+s);
                    cout<<" ";
                }
            }
            else
            {
                cout<< r+s;
            }



        }

    }


    return 0;
}
