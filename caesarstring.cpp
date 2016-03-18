#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n , k;
    char arr[101];
    int arrint[101];

    cin >> n;
    for(int i =0; i < n;i++)
    {
        cin>>arr[i];
    }
    cin >> k;

    for(int i = 0 ; i < n;i++)
    {
        arrint[i] = (int)arr[i];
        if(arrint[i] == 45)
        {

        }
        else if(arrint[i] == 90 || arrint[i] == 122 )
        {
            arrint[i] = arrint[i] - (26 - k);
        }
        else if(arrint[i] == 89 || arrint[i] == 121)
        {
            arrint[i] = arrint[i] - (26 - k +1);
        }
        else
        {
            arrint[i] = arrint[i] +2;
        }
    }
    for(int i=0;i< n;i++)
    {
        cout << (char)arrint[i];    }
    return 0;
}
