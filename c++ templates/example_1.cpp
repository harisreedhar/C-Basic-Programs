#include <iostream>

// MaxNumber template
template<typename T>
T MaxNumber(T x, T y)
{
    return x > y ? x : y;
}

// AddTwoNumber template
template<typename T>
T AddTwoNumber(T x, T y)
{
    return x + y;
}

// Array Sum
template<typename T>
T ArraySum(T *ptr, int arraySize)
{
    T sum = 0;

    for(int i=0; i<arraySize; i++)
    {
        sum += *ptr + i;
    }

    return sum;
}

template<typename T>
T MaxArray(T *ptr, int arraySize)
{
    T maxNum = *ptr;

    for(int i=1; i<arraySize; i++)
    {
        maxNum = MaxNumber(maxNum, *ptr + i);
    }

    return maxNum;
}

int main()
{
    // Find Max 0f two numbers
    int a = 5;
    int b = 10;
    std::cout<< MaxNumber(a, b);
    std::cout<<std::endl;

    float c = 1.5;
    float d = 2.5;
    std::cout<< MaxNumber(c, d);
    std::cout<<std::endl;

    // Add two numbers
    int n1 = 5;
    int n2 = 10;
    std::cout<< AddTwoNumber(n1, n2);
    std::cout<<std::endl;

    // Array Sum
    int arrSize = 5;

    int arr[] = {1,2,3,4,5};
    std::cout<< ArraySum(arr, arrSize);
    std::cout<<std::endl;

    float *arr2 = new float(5);
    for(int i=0; i<arrSize; i++)
    {
        arr2[i] = 0.5 + i;
    }
    std::cout<< ArraySum(arr2, arrSize);
    std::cout<<std::endl;

    // Max Array
    std::cout<< MaxArray(arr, arrSize);
    std::cout<<std::endl;

    std::cout<< MaxArray(arr2, arrSize);
    std::cout<<std::endl;

    return 0;
}
