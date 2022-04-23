#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol681;

/*
Input: "19:34"
Output: "19:39"
Explanation: The next closest time choosing from digits 1, 9, 3, 4,
is 19:39, which occurs 5 minutes later.
It is not 19:33, because this occurs 23 hours
and 59 minutes later.
*/

void test1()
{
  cout << "Expect to see 19:39" << endl;
  Solution sol;
  cout << sol.find("19:34") << endl;
}

/*
Input: "23:59"
Output: "22:22"
Explanation: The next closest time choosing
from digits 2, 3, 5, 9, is 22:22.
It may be assumed that the returned time
is next day's time since it is smaller than
the input time numerically.
*/

void test2()
{
  cout << "Expect to see 22:22" << endl;
  Solution sol;
  cout << sol.find("22:22") << endl;
}

main()
{
  test1();
  test2();
  return 0;
}