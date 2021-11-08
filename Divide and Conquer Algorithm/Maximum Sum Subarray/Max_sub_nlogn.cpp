#include<iostream>
using namespace std;

struct output
{
	int max_sum;
	int start;
	int end;
};

class max_sub_array
{
	private:
		int sum,m,mid,lsum,rsum,lmax,rmax;
		output p1,pl,pr,pc,pm;
	public:

		output cross_sum(int z[],int x,int y)
		{
			mid = (x+y)/2;
			sum = z[mid];
			lsum = z[mid];
			lmax = mid;
			for(int i=mid-1;i>=x;i--)
			{
				sum = sum + z[i];
				if(sum > lsum)
				{
					lsum = sum;
					lmax = i;
				}
			}
			
			sum = z[mid+1];
			rsum = z[mid+1];
			rmax = mid+1;
			
			for(int j=mid+2;j<=y;j++)
			{
				sum = sum + z[j];
				if(sum > rsum)
				{
					rsum = sum;
					rmax = j;
				}
			}
			pm.max_sum = lsum+rsum;
			pm.start = lmax;
			pm.end = rmax;
			
			return pm;	
		}
		output sub_array(int a[],int l,int h)
		{
			if(l==h)
			{
				p1.max_sum = a[l];
				p1.start = l;
				p1.end = h;
				return p1;
			}
			else
			{
				m=(l+h)/2;
				pl = sub_array(a,l,m);
				pr = sub_array(a,m+1,h);
				pc = cross_sum(a,l,h);
				
				if(pl.max_sum > pr.max_sum)
				{
					if(pl.max_sum >= pc.max_sum)
					{
						return pl;
					}
					else
					{
						return pc;
					}
				}
				else
				{
					if(pr.max_sum >= pc.max_sum)
					{
						return pr;
					}
					else
					{
						return pc;
					}
				}
			}
		}
};


int main()
{
	int n;
	output ans;
	max_sub_array o;
	cout<<"Enter the array size: ";
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	} 
	ans = o.sub_array(a,0,n-1);
	cout<<"Max sum: "<<ans.max_sum<<" from "<<ans.start+1<<" - "<<ans.end+1;
}
