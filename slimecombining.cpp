
#include<bits/stdc++.h>

using namespace std;

int arr[100001];
int main()
{
    int n ;

    cin >> n;
    int j = 0;
    arr[j] = 1;
    j++;
    int i = 1;
    while( i < n)
    {
        arr[j]+=1;
        j++;
        for(int k = j; k>0;k--)
        {
            if(arr[k-1] == arr[k])
            {
                arr[k-1]+=1;
                arr[k] = 0;
                j--;
            }
            //else
            //{
             //   break;
            //}
        }
        i++;
    }
    for(int i = 0 ; i < n;i++)
    {
        if(arr[i] !=0)
        {
            cout << arr[i]<< " ";
        }
        else
        {
            break;
        }

    }
    return 0;
}
