#include <iostream>
using namespace std;
int main()
{
    int p,q;
    cout<<"Enter the Size of First Array :";
    cin>>p;
    cout<<"Enter the size of Second Array :";
    cin>>q;

    int arr1[p];
    int arr2[q];
    int arr3[q];
    cout<<"Please Enter Elements of First  Array :"<<endl;
    int count=0,count2=0;
    for(int i=0;i<p;i++)
    {
        cin>>arr1[i];
    }
     cout<<"Please Enter Elements of Second Array :"<<endl;
    for(int j=0;j<q;j++)
    {
        cin>>arr2[j];
    }
    for(int k=0;k<p;k++)
    {
        for(int m=0;m<q;m++)
        {
            if(arr1[k]==arr2[m])
            {
            arr3[count]=arr1[k];
            count++;
            }
        }
    }
        if(count>0)
        {
            cout<<"Common Elements Have"<<endl;
             for(int n=0;n<count;n++)
        {
             int count2=0;
            for(int s=n+1;s<count;n++)
            {
                if(arr3[n]!=arr3[s])
                {
                    count2++;
                }
            }
            if(count2==(count-n-1))
            {
                cout<<arr3[n]<< " ";
            }
        }
    }

        else
        {
            cout<<"No Common Element"<<endl;
        }
        return 0;
    }
