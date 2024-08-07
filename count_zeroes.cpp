#include<iostream>
using namespace std;
int main()
{
    int a[20],n;
    int count=0;
    cout<<"Enter the no of element::";
    cin>>n;
    cout<<"Enter the element of array::";
    for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int low=0;
   int high=n-1;
   while(high>=low)
    {
        int mid=(low+high)/2;
        if(a[mid]==0)
        {
            if(a[mid-1]==1 ||  mid==0)
            {
                count=n-mid;
                break;
            }
            else
            {
                high=mid-1;
            }
        }

        else
        {
            low=mid+1;
        }
    }

   if (count==0)
   {
    cout<<"There is no zero in array"<<endl;
   } 
   else
   {
    cout<<"Number of zeros present are::"<<count;
   }
}