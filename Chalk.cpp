Chalk
Raj's teacher Anu uses chalk to write on the board. When the chalk reduces to 1/squareroot(n) of its original size, she keeps the chalk aside as it gets too small. She joins all the small pieces of the chalk and makes another chalk of the same size and uses it. If she uses one chalk each day, in how many days will she use the given n number of chalks?
INPUT & OUTPUT FORMAT:

Input consists of 1 integer which corresponds to the number of chalks given. Output corresponds to the number of days in which the given number of chalks will be used.

SAMPLE INPUT:

16

SAMPLE OUTPUT:

21


Input (stdin)
15

Output (stdout)
19

Input (stdin)
21

Output (stdout)
26

Input (stdin)
17

Output (stdout)
22

PROGRAM IN CPP

#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main() 
{
  int n,ans;
  cin>>n;
  float root, count = 0.00;
  root =( 1/ sqrt(n));
  for(int i=1;i<=n;i++)
  {
    count = root + count;
  }
  ans = n + count + 1; //{4 8 12 16 = 4} and again 1/4 * 4 = 1
  cout<<ans;
  return 0;
}  





  
