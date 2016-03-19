#include<iostream>
#include<stdlib.h>
#include<string>


using namespace std;

int main()
{

    int arr[100][100];
    int n ;
    string str;
    cin >>n;
    for(int i=0;i<n;i++)
    {
       cin>>str;
       for(int j =0;j<n;j++)
       {
           arr[i][j] = (int)str[j] - '0';
       }
    }

    for(int i =1 ;i<n-1;i++)
    {
        for(int j =1 ;j< n-1;j++)
        {
            if(arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i][j+1] && arr[i][j] > arr[i][j-1])
            {
                arr[i][j] = 'X';
            }
        }
    }

    for(int i = 0 ;i<n;i++)
    {
        for(int j =00;j<n;j++)
        {
            if((char)arr[i][j] == 'X')
            {
                cout<<"X";
            }
            else
            {
                cout<<arr[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}
