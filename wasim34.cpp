#include<iostream>
using namespace std;
void Merge_Two_Sorted_Array(int* nums1,int* nums2,int numsSize);
int main()
{
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int* nums1=new int[size];
    cout<<"Enter the first array element\n";
    int i;
    for(i=0;i<size;i++)
    {
        cin>>nums1[i];
    }
    int* nums2=new int[size];
    cout<<"Enter the second array element\n";
    for(i=0;i<size;i++)
    {
        cin>>nums2[i];
    }
    Merge_Two_Sorted_Array(nums1,nums2,size);
    cout<<endl;
    return 0;
}
void Merge_Two_Sorted_Array(int* nums1,int* nums2,int numsSize)
{
    int* temp=new int[numsSize*2];
    int i,k=0;
    for(i=0;i<numsSize;i++)
    {
        temp[k++]=nums1[i];
    }
    for(i=0;i<numsSize;i++)
    {
        temp[k++]=nums2[i];
    }
    for(i=0;i<k;i++)
    {
        cout<<temp[i]<<" ";
    }
    free(temp);
}