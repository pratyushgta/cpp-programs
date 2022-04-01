#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;

int marks[100];
int prob[100];
int n = 0;
int sum = 0;

void input()
{
    cout << "Enter the total number of students: " << endl;
    cin >> n;
    cout << "Enter " << n << " marks" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
}

void probability()
{
    int counter = 0;
    int m = 0;
    cout << "Find probability of which score?" << endl;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        prob[i] = marks[i] / sum;
    }
    for (int i = 0; i < n; i++)
    {
        if (prob[i] == m)
            counter++;
    }
    cout << "Probability that student scores " << m << " marks is:" << counter << "/" << m;
}

void probable_score()
{
    int prob[100];
    int max_prob = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           // if ()
             //   max_prob++;
        }
    }
}

double median(int arr[], int size)
{
    sort(arr, arr + size);
    if (size % 2 != 0)
        return (double)arr[size / 2];
    return (double)(arr[(size - 1) / 2] + arr[size / 2]) / 2.0;
}

void sumx()
{
    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }
}

void avg_sq_score()
{
    int sq_sum = 0;
    int sq_avg = 0;

    for (int i = 0; i < n; i++)
    {
        sq_sum = sqrt(marks[i]);
    }

    sq_avg = sq_sum / n;
}

void average()
{
    int avg = sum / n;
    cout << "Average is: " << avg;
}

void std_dev()
{

}

int main()
{
}