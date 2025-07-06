#include<iostream>
using namespace std;
void Swap_Two_String(int* nums1,int* nums2,int numsSize);
int main()
{
    int size1,i;
    cout<<"Enter the size\n";
    cin>>size1;
    int* nums1=new int[size1];
    cout<<"Enter the first array elements\n";
    for(i=0;i<size1;i++)
    {
        cin>>nums1[i];
    }
    int* nums2=new int[size1];
    cout<<"Enter the second array elements\n";
    for(i=0;i<size1;i++)
    {
        cin>>nums2[i];
    }
    Swap_Two_String(nums1,nums2,size1);
    cout<<endl;
    return 0;
}
void Swap_Two_String(int* nums1,int* nums2,int numsSize)
{
    int* temp=new int[numsSize];
    temp=nums1;
    nums1=nums2;
    nums2=temp;
    int i;
    for(i=0;i<numsSize;i++)
    {
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<numsSize;i++)
    {
        cout<<nums2[i]<<" ";
    }
}