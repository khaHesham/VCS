#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> &A)
{
    int sum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
    }
    return sum;
}

int main()
{
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 55
    cout << getSum(A) << endl;

    return 0;
}