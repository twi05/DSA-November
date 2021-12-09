#include <iostream>
#include <vector>
using namespace std;
void diceThrow(string p, vector<int> &arr, int target)
{

    if (target ==0)
    {
        cout << p << " ";
        return;
    }
    if(target<0){
        return;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        {
            char ch = arr[i];         
            diceThrow(p + to_string(arr[i]), arr, target - arr[i]);
        }   
    }
}
int main()
{

    int target = 7;
    vector<int> nums = {5,2};
    diceThrow("", nums, target);
    return 0;
}