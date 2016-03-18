#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n ;
    int arr[1001];


    cin>>n;
    for(int i=0;i<1001;i++)
    {
        arr[i] = 0;
    }

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr+n);

    int i =0;
    int no = n;
    cout << n<<endl;
    while(no > 0)
    {
        if(arr[i] == 0)
        {
            while(arr[i] == 0)
            {
                i++;
                no--;
            }
            if(no >0)
            cout << no << endl;
        }
        else
        {
            int key = arr[i];
            for(int j = i;j<n;j++)
            {
                arr[j] =  arr[j] - key;
            }
        }

    }


    return 0;
}
