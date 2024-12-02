#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(0<n<=20 && n%2==1)
    {
        int a=(n+1)/2;
        for(int q=1;q<=n;q++)
        { 
            for(int i=1;;i++)
            {   if(n/2+q<=n) 
                {   if(i>n/2+q)  break;
                    if(i>a-q)
                    {
                        cout<<'*';
                    }
                    else cout<<' ';
                }  
                else 
                {   
                    if(i>n/2+n-q+1) break;
                    if(i>q-a)
                    {
                        cout<<'*';
                    }
                    else cout<<' ';
                }         
            }
            cout<<endl;
        }
        cout<<endl;
    }
    system ("pause");
    return 0;
}
