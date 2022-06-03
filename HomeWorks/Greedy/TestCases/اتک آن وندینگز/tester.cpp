/*
 * tester.cpp
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char const *argv[])
{

	ifstream test_in(argv[1]);	/* This stream reads from test's input file   */
	ifstream test_out(argv[2]); /* This stream reads from test's output file  */
	ifstream user_out(argv[3]); /* This stream reads from user's output file  */

	/* Your code here */
	/* If user's output is correct, return 0, otherwise return 1       */
	/* e.g.: Here the problem is: read n numbers and print their sum:  */

	int n, m, s, d;
	test_in >> n >> m >> s >> d;
	int slots_in[s];
	int slots_out[s];
	string ust;
	getline(user_out, ust);
	if (ust == "bakhtim!")
	{
		string test_ans;
		test_out >> test_ans;
		return (test_ans != ust);
	}
	else
	{
		stringstream ss(ust);
		for (int i = 0; i < s; i++)
		{
			test_in >> slots_in[i];
		}
		for (int i = 0; i < s; i++)
		{
			ss >> slots_out[i];
		}
		int coldCans = 0;
		int newCans = 0;
		bool flag = true;
		for (int i = 0; i < s; i++)
		{
			int slotOut = slots_out[i];
			int slotIn = slots_in[i];
			if (slotOut + slotIn > d)
			{
				flag = false;
				break;
			}
			if (slotOut == 0)
			{
				coldCans += slotIn;
			}
			else
			{
				newCans += slotOut;
			}
		}

		if ((flag) and (coldCans >= m) and (newCans == n))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}