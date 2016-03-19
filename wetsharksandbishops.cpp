#include<bits/stdc++.h>

using namespace std;
int arr[1001][1001];
int diag2[1001][1001];
int main()
{
    int n;
    cin >>n;
    int left , right;
    for(int i=0;i<n;i++)
    {
        cin>>left>>right;
        arr[left][right] = 1;
    }
    long sum = 0;
    long finalsum =0;
    int N=6;
    for (int slice = 0; slice < N*2-1; ++slice) {
        int z = slice < N ? 0 : slice - N + 1;
        sum =0;
        for (int j = z; j <= slice - z; ++j) {
            int c1=j;
            int c2=(N-1)-(slice-j);
           // printf("%d ", arr[c1][c2]);
            sum+=arr[c1][c2];
        }
        finalsum += (sum*(sum-1))/2;
    }

    for (int slice = 0; slice < N*2-1; ++slice) {
        int z = slice < N ? 0 : slice - N + 1;
        sum =0;
        for (int j = z; j <= slice - z; ++j) {
            int c1=j;
            int c2=slice-j;
           // printf("%d ", arr[c1][c2]);
            sum+=arr[c1][c2];
        }
        finalsum += (sum*(sum-1))/2;
    }
    cout <<finalsum;
    return 0;
}
