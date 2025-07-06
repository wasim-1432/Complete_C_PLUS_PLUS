#include<iostream>
#include<cstring>
using namespace std;
char* Print_SubString_of_A_Given_String(char* s,int a,int b);
int main()
{
    char str[30];
    cout<<"Enter any string\n";
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int a,b;
    cout<<"Enter starting and ending point\n";
    cin>>a>>b;
    cout<<"String is="<<Print_SubString_of_A_Given_String(str,a,b);
    cout<<endl;
    return 0;
}
char* Print_SubString_of_A_Given_String(char* s,int a,int b)
{
    int i,len,k=0;
    len=strlen(s);
    char* temp=new char[len+1];
    for(i=a;i<b;i++)
    {
        if(i==len-1)
        {
            break;
        }
        temp[k++]=s[i];
    }
    temp[k]='\0';
    for(i=0;i<=k;i++)
    {
        s[i]=temp[i];
    }
    free(temp);
    return s;
}