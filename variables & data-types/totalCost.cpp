#include<iostream>
using namespace std;

int main() {
    float pencil, pen , eraser , totalCost;
    cout<< "Enter the cost of pencil , pen , eraser" << endl;
    cin >> pencil >> pen >> eraser;

    totalCost = pencil + pen + eraser;
    cout << "Cost : " << totalCost << endl;
    cout<< "Total cost after gst : " << (totalCost + (0.18 * totalCost))<< endl;

    return 0;
}