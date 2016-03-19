#include<bits/stdc++.h>

using namespace std;

char arr[15][15];
int cnt[15][15];
int main()
{
    int n ,m,k;
    cin>>n>>m;

    for(int i = 0; i < n;i++)
    {
        for(int j =0 ; j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(arr[i][j]=='G')
            {
                cnt[i][j] = 1;
                k =1;
                while(i-k >=0 && j-k >=0 && i+k <n && j+k <m)
                {
                    if(arr[i-1][j]=='G' && arr[i+1][j]=='G' && arr[i][j-1]=='G' && arr[i][j+1]=='G')
                    {
                        cnt[i][j]+=4;
                        k++;

                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                cnt[i][j] = 0;
            }
        }
    }
    int maxi1 =0 , maxi2 = 0 ,maxi1i ,maxi2i,maxi1j,maxi2j,r,p;
    for(int i = 0; i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            if(cnt[i][j]>0)
            {
                if(cnt[i][j] > maxi1)
                {
                    maxi2 = maxi1;
                    maxi2i = maxi1i;
                    maxi2j = maxi1j;
                    maxi1 = cnt[i][j];
                    maxi1i = i;
                    maxi1j = j;
                }
                else if(cnt[i][j]>maxi2)
                {
                    maxi2 = cnt[i][j];
                    maxi2i = i;
                    maxi2j = j;
                }
            }
            r = maxi1/4;
            p = maxi2/4;
            while(maxi2i-p > maxi1i+r || maxi2i -p < maxi1i+r ||maxi2i-p > maxi1i-r || maxi2i-p < maxi1i-r || maxi2i+p > maxi1i+r || maxi2i +p < maxi1i+r ||maxi2i+p > maxi1i-r || maxi2i+p < maxi1i-r||maxi2j-p > maxi1j+r || maxi2j -p < maxi1j+r ||maxi2j-p > maxi1j-r || maxi2j-p < maxi1j-r || maxi2j+p > maxi1j+r || maxi2j +p < maxi1j+r ||maxi2j+p > maxi1j-r || maxi2j+p < maxi1j-r)
            {
               if((maxi1 - 4)*maxi2 > (maxi2-4)*maxi1)
               {
                   maxi1 -=4;
                   r = maxi1/4;

               }
               else
               {
                   maxi2 -=4;
                   p = maxi2/4;
               }
            }
        }
    }
    cout<<maxi1*maxi2;


}
