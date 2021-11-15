#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct items
{
	int weight;
	int value;
	float WV;
};


bool compare(items x , items y)
{
	return(x.WV > y.WV);
}

float knapsack(int n,int W,items item[])
{
	float t_value = 0, t_weight = 0, frac;
	int rem;
	for(int i=0;i<n;i++)
	{
		if(item[i].WV = item[i].value/item[i].weight);
	}
	
	sort(item,item+n,compare);
	for(int j = 0; j < n ; j++)
	{
		if(item[j].weight+t_weight <= W)
		{
			t_weight+=item[j].weight;
			t_value+= item[j].value;
			 
		}
		else
		{
			
			rem = W - t_weight;
			frac = float(rem)/float(item[j].weight);
			t_value+= item[j].value * (frac);	
			break;
		}
	}
	return (t_value);
}


int main()
{
	int t,bag;
	float ans;
	cout<<"enter the total number of objects: ";
	cin>>t;
	cout<<endl<<"enter the capacity of knapsack: " ;
	cin>>bag;
	items tot[t];
	cout<<endl<<"enter the value and weight"<<endl;
	for(int i = 0;i<t;i++)
	{
		cin>>tot[i].value>>tot[i].weight;
		cout<<endl;
	}
	ans = knapsack(t,bag,tot);
	cout<<endl<<"highest value that can be taken in the knapsack is: "<<ans;
}
