#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void filter(int a[], int n)
{
    int last_negative = 0, curr_negative = 0;
    while (curr_negative < n)
    {
        if (a[curr_negative] < 0)
        {
            swap(a[curr_negative], a[last_negative]);
            last_negative++;
            curr_negative++;
        }
        else
        {
            curr_negative++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    filter(a, n);
    cout << endl;
    for (int x : a)
    {
        cout << x << " ";
    }
    return 0;
}
