Amoeba multiplication
The Environmental Eco Club has discovered a new Amoeba that grows in the order of a Fibonacci series every month. They are exhibiting this amoeba in a national conference. They want to know the size of the amoeba at a particular time instant. If a particular month’s index is given, write a program to display the amoeba’s size. For Example, the size of the amoeba on month 1, 2, 3, 4, 5, 6,... will be 0, 1, 1, 2, 3, 5, 8.... respectively.
INPUT & OUTPUT FORMAT:

The input is an integer which denotes the count of the month.

The output is an integer denoting the amoeba size.

Refer the sample output for formatting.

SAMPLE INPUT:

7

SAMPLE OUTPUT:

8

Input (stdin)
13

Output (stdout)
144

Input (stdin)
12

Output (stdout)
89

Input (stdin)
9

Output (stdout)
21

PROGRAM IN CPP

#include <iostream>
using namespace std;

int main() 
{
  int n1=0, n2=1, n3;
  int month;
  cin>>month;
  for(int i=1;i<=month-2;i++)
  {
   	n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
  }
   cout<<n3; 
  return 0;
}
