//
// Created by HERVE GT IT on 1/30/2026.
//
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec1 = {1,2,3,4,5};
    vector<int> vec2{1,2,3,4,5};
    vector<int> vec3(5,12);
    cout << "Vector from method 1 = ";
    for (int i : vec1) {
        cout << i << " " ;
    }
    cout << endl;
    cout << "Vector from method 2 = ";
    for (int i : vec2) {
        cout << i << " " ;
    }
    cout << endl;
    cout << "Vector from method 3 = ";
    for (int i : vec3) {
        cout << i << " " ;
    }
    return 0;
}
