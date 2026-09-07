#include <iostream>
using namespace std;
int fact(int n)
{
    int res = 1;
    for (int i = n; i >= 1; i--)
    res = res * i;
    return res;
}
int BinoCoeff(int n, int r)
{ 
    int ans = fact(n)/(fact(r)*fact(n-r));
    return ans;
}
void printPascal(int d)
{
    for(int i=0;i<d; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"\t"<<BinoCoeff(i,j);
        }
        cout<<endl;
    }
}
int main(){
    int rows;
    cout<<"Enter number of rows :";
    cin>>rows;
    printPascal(rows);
    return 0;
}
