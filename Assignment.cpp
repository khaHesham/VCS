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

int getMin(vector<int> &A)
{
    int min = A[0];
    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

int main()
{
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 55
    cout << getSum(A) << endl;

    cout << getMin(A) << endl;

    return 0;
}