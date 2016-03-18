#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n , a ,b;

    cin>> n >> a >> b;
    int w = 1;
    int k = 0;
    if(n > a*b)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        for(int i = 0 ;i<a;i++)
        {
            if(k==0)
            {
               for(int j =0 ;j<b;j++)
                {
                    if(w <= n)
                    {
                        cout<<w++<<" ";
                    }
                    else
                    {
                        cout<<0<<" ";
                    }
                }
                cout<<endl;
                k = 1-k;
            }
            else
            {
                w--;
                for(int j = b;j>0;j--)
                {
                     if(w+j <= n)
                    {
                        cout<<w+j<<" ";

                    }
                    else
                    {
                        cout<<0<<" ";
                    }
                }
                cout<<endl;
                w = w+b+1;
                k = 1 - k;
            }
        }

    }



    return 0;
}
