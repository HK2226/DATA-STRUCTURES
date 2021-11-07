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
		int n,a[100],sum;
	public:
		max_sub_array()
		{
			cout<<"Enter the array size: ";
			cin>>n;
			cout<<endl<<"Enter the array"<<endl;
			for(int x=0;x<n;x++)
			{
				cin>>a[x];
			}
		}
	output func()
	{
		output p1={ a[0], 0, 0 };
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				sum=0;
				for(int k=i;k<=j;k++)
				{
					sum=sum+a[k];
				}
				if(sum > p1.max_sum)
				{
					p1.max_sum = sum;
					p1.start = i;
					p1.end = j;
				}
			}
		}
		return(p1);
	}
};

int main()
{
	output p2;
	max_sub_array m;
	p2=m.func();
	cout<<endl<<"Maximum sum: "<<p2.max_sum<<" from position: "<<p2.start<<" - "<<p2.end;
}
