#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <set>
#include <cstring>
using namespace sol681;
using namespace std;

string Solution::find(string time)
{
  /* allowed digits plus ':' */
  /*C++ notes
    - later we use "includes" to check if a
      set is a subset of another, we need
      both sets to be sorted hence we
      use set
  */
  auto allowed = set<char>(time.begin(), time.end());
  auto hour = stoi(time.substr(0, 2));
  auto min = stoi(time.substr(3, 2));
  char closest[5];
  while (true)
  {
    if (++min == 60)
    {
      min = 0;
      hour++;
      hour = hour % 24;
    }

    /* format it to hh:mm */
    sprintf(closest, "%02d:%02d", hour, min);
    /* a set of chars used to construct the time */
    auto used = set<char>(closest, closest + sizeof(closest));
    auto included = includes(allowed.begin(), allowed.end(), used.begin(), used.end());
    if (included)
      return string(closest);
  }

  return time;
}