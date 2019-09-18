#include<iostream>
using namespace std;
int main()
{
  int a[3][4];
  cout<<"Enter 12 elements to get 3*4 mtx"<<endl;
  for(int i=0;i<3;i++)
  {for(int j=0;j<4;j++)
    {
      cin>>a[i][j];
    }
    cout<<"The matrix is"<<endl;
    for(int i=0;i<3;i++)
    {for(int j=0;j<4;j++)
      {
        cout<<a[i][j]<<" ";
      }
      cout<<endl;

  }

}
}
