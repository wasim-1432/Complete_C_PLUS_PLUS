#include<iostream>
#include<cstring>
using namespace std;
void Sort_An_String_Using_Default_Argument(char* s,int k=0);
int main()
{
    char* str=new char[30];
    cout<<"Enter any string\n";
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Sort_An_String_Using_Default_Argument(str);
    cout<<endl;
    return 0;
}
void Sort_An_String_Using_Default_Argument(char* s,int k)
{
    int len=strlen(s);
    int round,i;
    bool found=false;
    if(k==1)
    {
        for(round=0;round<len-1;round++)
        {
            for(i=0;i<len-round-1;i++)
            {
                if(s[i]>s[i+1])
                {
                    char temp=s[i];
                    s[i]=s[i+1];
                    s[i+1]=temp;
                    found=true;
                }
            }
            if(found==false)
            {
                break;
            }
        }
        for(i=0;i<len;i++)
        {
            cout<<s[i];
        }
    }
    else
    {
        for(round=0;round<len;round++)
        {
            for(i=0;i<len-round-1;i++)
            {
                if(s[i]<s[i+1])
                {
                    char temp=s[i];
                    s[i]=s[i+1];
                    s[i+1]=temp;
                    found=true;
                }
            }
            if(found==false)
            {
                break;
            }
        }
        for(i=0;i<len;i++)
        {
            cout<<s[i];
        }
    }
}