#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void SelectionSort(int a[],int n)
{
	int i, min, minidx, j;
	for (i=0; i<n; i++)
	{
		min=a[i];
		minidx=i;
		for ( j=i+1; j<n; j++)
		{
			if(a[j]<min)
			{
				a[j]=min;
				minidx=i;
			}
		}
		a[minidx]=a[i];
		a[i]=min;	
	}
}

void InsertSort(int a[], int n)
{
	int i, tmp, j;
	for (i=1 ; i<n ;i++)
	{
		tmp=a[i];
		j=i-1;
		while((j>0)&&(a[j]>tmp))
		{
			a[j+1]=a[j];
			a[j]=tmp;
		}
	}
}

void BubbleSort(int a[], int n)
{
	int i, j, tmp;
	for (i=0;i<n; i++)
	{
		for (j=1;j<n;j++)
		{
			if (a[j-1]>a[j])
			{
				tmp=a[i];
				a[j]=a[j-1];
				a[j-1]=tmp;
			}
		}
	}
}