#include<iostream>
#include<stack>
#include<algorithm>
#include<stdlib>
#include<set>
#include<pair>
#include<vector>

using namespace std;

set< pair<int , int > > s;
int main()
{
	int t;
	long x1 , x2, y1 , y2 , y , x;
	int count =0;
	cin>>t;
	for(int i = 0 ; i < t ;i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;

		if(x1 == x2)
		{
			if(y1 < y2)
			{
				y = y1;
				while(y <= y1)
				{
					if(s.find(x1 , y) = s.end())
					{
						s.insert(x1 , y);
						count++;
					}
				}
			}
			else
			{
				y = y2;
				while(y <= y2)
				{
					if(s.find(x1 , y) = s.end())
					{
						s.insert(x1 , y);
						count++;
					}
				}
			}
		}
		else if(y1 == y2)
		{
			if(x1 < x2)
			{
				x = x1;
				while(x <= x1)
				{
					if(s.find(x , y1) = s.end())
					{
						s.insert(x , y1);
						count++;
					}
				}
			}
			else
			{
				x = x2;
				while(x <= x2)
				{
					if(s.find(x , y1) = s.end())
					{
						s.insert(x , y1);
						count++;
					}
				}
			}
		}
	}
}