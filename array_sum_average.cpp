#include <iostream>
using namespace std;
int main()
{
    int n;
    double sum = 0, average;
    cout << "===== ARRAY SUM AND AVERAGE =====" << endl;
    cout << "Enter number of elements: ";
    cin >> n;
    double arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    average = sum / n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}
