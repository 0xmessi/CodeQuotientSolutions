/*
Write a program to find the 2nd maximum element in an array.

Input

Assume the size of array as 5. Each test case will have 5 elements in five different lines.

Output

For each test case, print the 2nd maximum element in the list

Sample Input 1

3
10 
20 
4
7

Sample Output 1

10

Sample Input 2

20 
10 
40 
4 
100

Sample Output 2

40

Return 0 , if all the values are same.

*/

#include<iostream>
using namespace std;

int main()
{
    int ar[5];
    cin >> ar[0];
    int max=ar[0], max2=0;
  
   for(int i=1 ; i<5 ; i++)
   {
     cin >>ar[i];
     if( ar[i] > max)
     {
       max2 = max;
       max = ar[i];
     }
     else
     {
       if( ar[i] > max2 && ar[i] != max)
       {
         max2 = ar[i];
       }
     }   
   }
  cout << max2;
  
    return 0;
}
