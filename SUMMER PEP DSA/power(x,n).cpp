#include<bits/stdc++.h>
using namespace std;
void generateSet(vector<vector<int>> &result, vector<int> &setSofar, const vector<int> &vec, int index) {
    if (index >=vec.size()) {
        result.push_back(setSofar);
    } else {
      setSofar.push_back(vec[index]);
      generateSet(result, setSofar, vec, index + 1);
     setSofar.pop_back();
generateSet(result, setSofar, vec, index + 1);
    }
}
vector<vector<int>> generateSet(vector<int> &vec) {
  if (vec.size() == 0) {
      return {};
   }
  vector<vector<int>> result;
  vector<int> setSofar;
  generateSet(result, setSoFar, vec, 0);
  return result;
}
int main()
{
    
}