#include<iostream> //Calculating no. of zeros in array using binary search which is application of Divide and Conquer
using namespace std;
int main()
{
    int a[20],n; // Array to store elements and variable for the number of elements
    int count=0;
    cout<<"Enter the no of element::";
    cin>>n;
    cout<<"Enter the element of array::";
    for(int i=0;i<n;i++)
   {
    cin>>a[i];  // Reading array elements
   }
   int low=0; // Initialize the start of the search range
   int high=n-1; // Initialize the end of the search range
   while(high>=low)
    {
        int mid=(low+high)/2;
        if(a[mid]==0)
        {
             // Check if it is the first zero in the array
            if(a[mid-1]==1 ||  mid==0)
            {
                count=n-mid;  // Count the number of zeros
                break;
            }
            else
            {
                high=mid-1; // Continue searching in the left half
            }
        }

        else
        {
            low=mid+1;  // Continue searching in the right half

        }
    }

   if (count==0)
   {
    cout<<"There is no zero in array"<<endl; // No zeros found
   } 
   else
   {
    cout<<"Number of zeros present are::"<<count; // Print the count of zeros
   }
}
