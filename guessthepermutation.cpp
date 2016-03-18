#include<bits/stdc++.h>

using namespace std;

int arr[51][51];
int perm[51];
int main()
{
    int n;
    cin>>n;

    for(int i = 0 ; i <n;i++)
    {
        for(int j = 0 ; j < n;j++)
        {
            cin>>arr[i][j];
        }
    }
    perm[0] = 1;
    int index = 0;
    int findmin = 99;
    for(int i = 1 ; i<n;i++)
    {
        if(findmin > arr[0][i])
        {
            findmin = arr[0][i];
            index = i;
        }
        if(findmin > arr[1][0])
        {
            findmin = arr[1][0];
            index = 0;
        }
    }

    for(int i = 0 ; i<n;i++)
    {
        for(int k = i+1;k<n;k++)
            {
                if(i == index)
                {
                    break;
                }
                if(perm[i] < arr[i][k])
                {
                    perm[i] = arr[i][k];
                }
            }
        for(int j = i+1;j<n;j++)
        {

           if(perm[i] == arr[i][j])
            {
                if(perm[j]<perm[i])
                {
                    perm[j] = perm[i]+1;
                }

            }
            else if(perm[i] > arr[i][j])
            {
                perm[j] = arr[i][j];
            }
        }
    //    for(int i = 0; i <n;i++)
   // {
    //    cout<<perm[i]<<" ";
    //}
    //cout<<endl;
    }
    for(int i = 0; i <n;i++)
    {
        cout<<perm[i]<<" ";
    }
return 0;
}
