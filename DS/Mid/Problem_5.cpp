#include <bits/stdc++.h>
using namespace std;
void problem5()
{
    int n;
    cout<<"Please Enter the size of the array: ";
    cin>>n;
    int array[n];
    cout<<"Please Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    int temp = 0;
    for(int j=0;j<n;j++)
    {
        int count=0;
        for(int k=j;k<n;k++)
        {
            if(array[j]==array[k])
            {
                count++;
            }
        }
        if(temp!=array[j])
            {
            cout<<array[j]<<"occurs="<<count;
            if(count>1)
            {
                cout<<"Times"<<endl;
            }
            else
            {
                cout<<"Time"<<endl;
            }
        }
        temp=array[j];
    }
}
int main()
{
    problem5();
    return 0;
}
