#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;

int fibonacci (int i)
{
    if (i <= 0) 
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    return fibonacci(i - 1) + fibonacci(i - 2);
}

void time_consumption()
{
    int n = 30;
    std::cout << "hello world" << std::endl;
    for (int i = 1; i < n; i++)
    {
        milliseconds start_time = duration_cast<milliseconds>(system_clock::now().time_since_epoch());

        fibonacci(n);

        milliseconds end_time = duration_cast<milliseconds>(system_clock::now().time_since_epoch());

        std:cout << milliseconds(end_time).count() - milliseconds(start_time).count() << "ms" << std::endl; 
    }
}

int binary_search(int arr[], int l, int r, int x)
{
    if (r >= 1)
    {
        int mid = l + (r - 1) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return binary_search(arr, l, mid - 1, x);
        }
        return binary_search(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{
    time_consumption();
    return 0;
}