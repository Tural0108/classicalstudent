#include <iostream>
#include <vector>
#include "Sort.h"
#include <chrono>
#include <cstdlib> 
#include <iterator>

using namespace std;

template<typename T>
unsigned long long durationFastSort(T& base_vec) // ms
{
    auto copy = base_vec;
    auto start = chrono::high_resolution_clock::now();
    fastSort(copy);
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    return duration.count();
}

template<typename T>
unsigned long long durationQuickSort(T& base_vec) // ms
{
    auto copy = base_vec;
    auto start = chrono::high_resolution_clock::now();
    quickSort(copy);
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    return duration.count();
}

template<typename T>
unsigned long long durationBubbleSort(T& base_vec) // ms
{
    auto copy = base_vec;
    auto start = chrono::high_resolution_clock::now();
    bubbleSort(copy);
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    return duration.count();
}

void display_vector(const vector<double>& v)
{
    copy(v.begin(), v.end(),
        ostream_iterator<double>(cout, " "));
}

int main()
{

    vector<int> int_vec = {};
    for (int i = 0; i < 1000000; i++) {
        int_vec.push_back(rand());
    }
    vector<double> double_vec = {};
    for (int i = 0; i < 1000000; i++) {
        double_vec.push_back(rand()); 
    }

    cout << "\n\tvec<int>[1'000'000] standart fast sort test :\n\n";
    cout << "\ti\t|\tduration\n";
    int min = -1;
    int max = -1;
    double average = 0.;
    int duration;
    for (int i = 0; i < 10; i++) {
        duration = durationFastSort(int_vec);
        cout << "\t" << i + 1 << "\t|\t" << duration << "ms\n";
        if (min < 0) min = duration;
        if (max < 0) max = duration;
        if (max < duration) max = duration;
        if (min > duration) min = duration;
        average += duration;
    }
    average /= 10.;

    cout << "\n";
    cout << "\t" << "min : " << min << endl;
    cout << "\t" << "max : " << max << endl;
    cout << "\t" << "average : " << average << endl;

    cout << "______________________________________________________" << endl;


    cout << "\n\tvec<double>[1'000'000] standart fast sort test :\n\n";
    cout << "\ti\t|\tduration\n";
    min = -1;
    max = -1;
    average = 0.;

    for (int i = 0; i < 10; i++) {
        duration = durationFastSort(double_vec);
        cout << "\t" << i + 1 << "\t|\t" << duration << "ms\n";
        if (min < 0) min = duration;
        if (max < 0) max = duration;
        if (max < duration) max = duration;
        if (min > duration) min = duration;
        average += duration;
    }
    average /= 10.;

    cout << "\n";
    cout << "\t" << "min : " << min << endl;
    cout << "\t" << "max : " << max << endl;
    cout << "\t" << "average : " << average << endl;


    cout << "______________________________________________________" << endl;
    // пузырьковая сортировка для вектора размером 1000000 слишком долгая, возьмем вектор размером 10000
    vector<int> int_vec_bub = {};
    for (int i = 0; i < 10000; i++) {
        int_vec_bub.push_back(rand());
    }
    vector<double> double_vec_bub = {};
    for (int i = 0; i < 10000; i++) {
        double_vec_bub.push_back(rand()); 
    }

    cout << "\n\tvec<int>[10'000] bubble sort test :\n\n";
    cout << "\ti\t|\tduration\n";
    min = -1;
    max = -1;
    average = 0.;

    for (int i = 0; i < 10; i++) {
        duration = durationBubbleSort(int_vec_bub);
        cout << "\t" << i + 1 << "\t|\t" << duration << "ms\n";
        if (min < 0) min = duration;
        if (max < 0) max = duration;
        if (max < duration) max = duration;
        if (min > duration) min = duration;
        average += duration;
    }
    average /= 10.;

    cout << "\n";
    cout << "\t" << "min : " << min << endl;
    cout << "\t" << "max : " << max << endl;
    cout << "\t" << "average : " << average << endl;

    cout << "______________________________________________________" << endl;

    cout << "\n\tvec<double>[10'000] bubble sort test :\n\n";
    cout << "\ti\t|\tduration\n";
    min = -1;
    max = -1;
    average = 0.;

    for (int i = 0; i < 10; i++) {
        duration = durationBubbleSort(double_vec_bub);
        cout << "\t"<<i + 1 << "\t|\t" << duration << "ms\n";
        if (min < 0) min = duration;
        if (max < 0) max = duration;
        if (max < duration) max = duration;
        if (min > duration) min = duration;
        average += duration;
    }
    average /= 10.;

    cout << "\n";
    cout << "\t" << "min : " << min << endl;
    cout << "\t" << "max : " << max << endl;
    cout << "\t" << "average : " << average << endl;

    cout << "______________________________________________________" << endl;
    vector<int> int_vec_q = {};
    for (int i = 0; i < 1000000; i++) {
        int_vec_q.push_back(rand());
    }
    vector<double> double_vec_q = {};
    for (int i = 0; i < 1000000; i++) {
        double_vec_q.push_back(rand());
    }

    cout << "\n\tvec<int>[1'000'000] fast sort test :\n\n";
    cout << "\ti\t|\tduration\n";
    min = -1;
    max = -1;
    average = 0.;

    for (int i = 0; i < 10; i++) {
        duration = durationQuickSort(int_vec_q);
        cout << "\t" << i + 1 << "\t|\t" << duration << "ms\n";
        if (min < 0) min = duration;
        if (max < 0) max = duration;
        if (max < duration) max = duration;
        if (min > duration) min = duration;
        average += duration;
    }
    average /= 10.;

    cout << "\n";
    cout << "\t" << "min : " << min << endl;
    cout << "\t" << "max : " << max << endl;
    cout << "\t" << "average : " << average << endl;

    cout << "______________________________________________________" << endl;


    cout << "\n\tvec<double>[1'000'000] fast sort test :\n\n";
    cout << "\ti\t|\tduration\n";
    min = -1;
    max = -1;
    average = 0.;

    for (int i = 0; i < 10; i++) {
        duration = durationQuickSort(double_vec_q);
        cout << "\t" << i + 1 << "\t|\t" << duration << "ms\n";
        if (min < 0) min = duration;
        if (max < 0) max = duration;
        if (max < duration) max = duration;
        if (min > duration) min = duration;
        average += duration;
    }
    average /= 10.;

    cout << "\n";
    cout << "\t" << "min : " << min << endl;
    cout << "\t" << "max : " << max << endl;
    cout << "\t" << "average : " << average << endl;

    return 0;
}