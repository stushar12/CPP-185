#include<bits/stdc++.h>
using namespace std;
int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0,j=0,res=0;
        while(i<n&&j<m)
        {
            if(arr1[i]<=arr2[j])
            {   res++;
                if(res==k)
                {
                    return arr1[i];
                }
                i++;
            }
            else
            {
                res++;
                if(res==k)
                {
                    return arr2[j];
                }
                j++;
            }
        }
        
        if(i>=n && j<m)
        {
            while(j<m)
            {
                res++;
                if(res==k)
                return arr2[j];
                j++;
            }
        }
        else if(i<n && j>=m)
        {
            while(i<n)
            {
                res++;
                if(res==k)
                return arr1[i];
                i++;
            }
        }
       return 1; 
    }

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int arr[n],arr1[m];

	for(int i=0;i<n;i++)
	cin>>arr[i];

    for(int i=0;i<m;i++)
	cin>>arr1[i];

    cout<<"k-th element in two sorted arrays is : "<<kthElement(arr,arr1,n,m,k);
}
