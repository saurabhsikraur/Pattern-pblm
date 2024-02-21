#include <iostream>
using namespace std;
int main() {
  //   int n,m;
  //   cin>>n;
  //   cin>>m;
  //   for(int row=0; row<n; row+=1)
  //     {
  //       if(row==0 || row==n-1)
  //       {
  //         for(int col=0; col<m; col+=1)
  //           {
  //             cout<<"*";
  //           }
  //       }
  //       else
  //       {
  //       cout<<"*";
  //         for(int col=0; col<m-2; col+=1)
  //           {
  //             cout<<" ";
  //           }
  //         cout<<"*";
  //       }
  //       cout<<endl;
  //     }
  /*
  int n;
  cin>>n;
  for(int r=0; r<n; r++){
    for(int c=0; c<n; c++){
      if(r==0 || c==0 || c==n-r-1){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
    */

  // pyramid

  // int n;
  // cin>>n;
  // for(int i=0; i<n; i++)
  // {
  //   int k=0;
  //   for(int j=0; j<((2*n)-1); j++)
  //   {
  //     if(j<n-i-1)
  //     {
  //       cout<<" ";
  //     }
  //     else if(k<2*i+1)
  //     {
  //       cout<<"*";
  //       k++;
  //     }
  //     else
  //     {
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }

  // prime no. problem

  // int n;
  // cin>>n;
  // for(int i=2; i<n; i++)
  //   {
  //     if(n%i==0){
  //       cout<<"not prime"<<endl;
  //       }
  //     else{
  //       cout<<"prime"<<endl;
  //       }
  //   }
  //   }
  // int n;
  // cin>>n;
  // int i;
  // while(i<n)
  //   {
  //     i++;
  //   }
  // if(i==2){
  //   cout<<"prime"<<endl;
  // }
  // else{
  //   cout<<"not prime"<<endl;
  // } a=5
  // float f=2.7;
  // int n=157;
  // int diff = n-f;
  // cout<<diff;
  // if(cout<<"babbar")
  // {
  //   cout<<"love";
  // }
  // char n;
  // if(cin>>n)
  // {
  //   cout<<"babbar";
  // }
  // factorial problem

  // int n;
  // long fact=1.0;
  // cout<<"Enter a Positive number"<<endl;
  // cin>>n;
  // if(n<0)
  //   cout<<"Error! factorial of  negative number does not exist"<<endl;
  // else
  // {
  // for(int i=1; i<=n; i++)
  //   fact*=i;
  // }
  // cout<<fact<<endl;

  // hollow pyramid
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int k = 0;
    for (int j = 0; j < ((2 * n) - 1); j++) {
      if (j < n - i - 1) {
        cout << " ";
      } else if (k < 2 * i + 1) {
        if (k == 0 || k == 2 * i || i == n - 1) {
          cout << "*";
        } else {
          cout << " ";
        }
        k++;
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}