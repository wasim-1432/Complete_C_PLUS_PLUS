#include<iostream>
using namespace std;
void Sort_Array_Using_Default_Argument(int* nums,int numsSize,int k=1);
int main()
{
    int size;
    cout<<"Enter the size of the array\n";
    cin>>size;
    int* nums=new int[size];
    cout<<"Enter the element of the array\n";
    int i;
    for(i=0;i<size;i++)
    {
        cin>>nums[i];
    }
    /*int k;
    cout<<"Enter 1 for asc/f0 for descending\n";
    cin>>k;*/
    Sort_Array_Using_Default_Argument(nums,size);
    cout<<endl;
    return 0;
}
void Sort_Array_Using_Default_Argument(int* nums,int numsSize,int k)
{
    int round,i;
    if(k==1)
    {
        for(round=0;round<numsSize-1;round++)
        {
            for(i=0;i<numsSize-round-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    int temp=nums[i];
                    nums[i]=nums[i+1];
                    nums[i+1]=temp;
                }
            }
        }
        for(i=0;i<numsSize;i++)
        {
            cout<<nums[i]<<" ";
        }
    }
    else
    {
        for(round=0;round<numsSize-1;round++)
        {
            for(i=0;i<numsSize-round-1;i++)
            {
                if(nums[i]<nums[i+1])
                {
                    int temp=nums[i];
                    nums[i]=nums[i+1];
                    nums[i+1]=temp;
                }
            }
        }
        for(i=0;i<numsSize;i++)
        {
            cout<<nums[i]<<" ";
        }
    }
}