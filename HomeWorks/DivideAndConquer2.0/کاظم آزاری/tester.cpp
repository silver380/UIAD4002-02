
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
      
      
	ifstream test_in(argv[1]);    /* This stream reads from test's input file   */
	ifstream test_out(argv[2]);   /* This stream reads from test's output file  */
	ifstream user_out(argv[3]);
      double a, b, c, d;       /* This stream reads from user's output file  */
      user_out >> a >> b;
      test_out >> c >> d;
      if ((fabs(a - c) < 3e-5) && (fabs(b - d) < 3e-5)){
            return 0;
      }
      return 1;
}