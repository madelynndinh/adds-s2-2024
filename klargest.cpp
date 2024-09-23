#include <vector>
#include <queue>

using namespace std;
int kth_largest(vector<int> values, int k)
{
std::priority_queue<int,vector<int>,greater<int>> maxHeap;
for (int i = 0; i < values.size(); i++)
{
    maxHeap.push(values[i]);
if (maxHeap.size()>k)
{

    maxHeap.pop();
}
return maxHeap.top();

}


