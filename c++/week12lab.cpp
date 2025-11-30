//author@ Chandler Taylor
//date@ 11/03/2025
//purpose@ Use the algebraic equation for a straight line y = mx + b to draw a two quadrant graph for positive x and y values. 

#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_X = 15;
const int MAX_Y = 15;
int main() {
    const int m = 2; // slope
    const int b = 3; // y-intercept

    // Create a 2D array to represent the graph
    char graph[MAX_Y + 1][MAX_X + 1];

    // Initialize the graph with spaces
    for (int i = 0; i <= MAX_Y; ++i) {
        for (int j = 0; j <= MAX_X; ++j) {
            graph[i][j] = ' ';
        }
    }

    // Plot the line y = mx + b for x from 0 to 4
    for (int x = 0; x <= 4; ++x) {
        int y = m * x + b;
        if (y <= MAX_Y) {
            graph[y][x] = 'X'; // Mark the point on the graph
        }
    }

    // Print the graph
    cout << "   Y-axis" << endl;
    for (int i = MAX_Y; i >= 0; --i) {
        cout << setw(2) << i << " | "; // Y-axis labels
        for (int j = 0; j <= MAX_X; ++j) {
            cout << graph[i][j] << ' ';
        }
        cout << endl;
    }

    // Print the X-axis
    cout << "     ";
    for (int j = 0; j <= MAX_X; ++j) {
        cout << "--";
    }
    cout << endl;
    cout << "      ";
    for (int j = 0; j <= MAX_X; ++j) {
        cout << setw(2) << j;
    }
    cout << " <- X-axis" << endl;

    return 0;
}