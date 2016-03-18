#include<bits/stdc++.h>

using namespace std;
int pre[100000];
int suff[100000];
bool dist[100000];
int mini[100000];
vector<int> space;
vector<int> anti_space;
int main()
{
    int n ,m , t;

    cin>>n>>m;
    for(int i = 0 ; i< m ;i++)
    {
        cin>>t;
        space.push_back(t);
        anti_space.push_back(t);
    }
    sort(space.begin() , space.end());
    sort(anti_space.begin() , anti_space.end(),greater<int>());
    vector<int>::iterator up,lw;
    int maxi = 0;
    for(int i = 0 ; i< n;i++)
    {
        if(binary_search(space.begin(), space.end() , i))
        {

        }
        else
        {
            lw = lower_bound(space.begin(),space.end(),i);
            up = upper_bound(space.begin(),space.end() ,i);
            if((i - *(lw -1) < (*(up) - i)))
               {
                   if(maxi < (i - *(lw -1)))
                      {
                          maxi = (i - *(lw -1));
                      }
               }
            else
                {
                    if(maxi < (*(up) - i))
                    {
                        maxi  = (*(up) - i);
                    }
                }
        }
    }
    if(!space.empty())
    {
        if(maxi < (n-1 - space.back()))
        {
            maxi = n-1 - space.back();
        }
    }
    if(!space.empty())
    {
        if(maxi < (*(space.begin()) - 0))
        {
            maxi = (*(space.begin()) - 0);
        }
    }
    cout<<maxi;
}
