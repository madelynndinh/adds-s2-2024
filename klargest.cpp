#include <vector>
#include <queue>

using namespace std;
int kth_largest(vector<int> values, int k)
{
std::priority_queue<int> maxHeap;
for (int i = 0; i < values.size(); i++)
{
    maxHeap.push(values[i]);
}
for (size_t i = 0; i < k; i++)
{
    maxHeap.pop();
}
return maxHeap.top();

}


