#include<iostream>
using namespace std;
void selection_sort(int *a,int n)
{
	int index=0;
	int j=0;
	int small=a[j];
	int FLAG=0;
	while(j<n-1)
	{
		FLAG=0;
		small=a[j];
		for(int i=j;i<n;i++)
		{
			if(a[i]<small)
			{
				small=a[i];
				index=i;
				FLAG=1;
			}
		}
		if(FLAG==1)
		{
			for(int i=index-1;i>=j;i--)
			{
				a[i+1]=a[i];
			}
			a[j]=small;
		}
		j++;
	}		
}


void show(int *a,int n)
{
for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


int main()
{
	int a[50];
	int n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	cout<<"enter the element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	selection_sort(a,n);
	show(a,n);
}
