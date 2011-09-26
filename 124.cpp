#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
const int MAXN = 2*10*1000 + 10;



int main() {
  int k;
  pair<int, int> h[MAXN], e[MAXN], t;
  scanf("%d", &k);
  for (int i = 0; i < k; ++i)
    scanf("%d%d%d%d", &h[i].first, &h[i].second, &e[i].first, &e[i].second);
  scanf("%d%d", &t.first, &t.second);
  bool mark[MAXN] = {};
  for (int i = 0; i < k; ++i) {
    if (h[i].first == e[i].first == t.first)
      if (t.second <= e[i].second && t.second >= h[i].second) {
        printf("BORDER");
        return 0;
      }
    if (h[i].second == e[i].second == t.second)
      if (t.first <= e[i].first && t.first >= h[i].first) {
        printf("BORDER");
        return 0;
      }
  }
  for (int i = 0; i < k; ++i)
    if (h[i].first == e[i].first)
      mark[h[i].first + 10000] = (t.second <= e[i].second && t.second >= h[i].second);
  int a = 0;
  for (int i = -10000; i < t.first; ++i)
    a += mark[i + 10000];
  if (a % 2)
    printf("INSIDE");	
  else
    printf("OUTSIDE");
  return 0;
}
