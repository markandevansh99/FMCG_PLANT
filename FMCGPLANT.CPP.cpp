#include<iostream>
using namespace std;
int main()
{
   int arr[6][5];
   int i,j,c1=0,c2=0;
   cout<<"\n Enter the weights of all the patatoes\n\n";
   for(i=0;i<6;i++)
    { for(j=0;j<5;j++)
        {
          cout<<"Weight of patato of  " << i+1<< "st  belt and "<< j+1 <<"st  number is::";
          cin>>arr[i][j];
        }
        cout<<"\n";
     }

     for(i=0;i<6;i++)
    { for(j=0;j<5;j++)
       {
         if(arr[i][j] >=100 && arr[i][j] <=200)
           c1++;


         else
           c2++;
        }
     }

cout<<"\n Number of patatoes selected are:"<<c1;
cout<<"\n Number of patatoes which are defected are:"<<c2;

return 0;
}


