#include <iostream>
using namespace std;
int main() {
    int n; cout << "How many subjects? "; cin >> n;
    double sum = 0, m;
    for (int i = 1; i <= n; i++) { cout << "Marks " << i << ": "; cin >> m; sum += m; }
    double avg = sum / n;
    char g = avg >= 80 ? 'A' : avg >= 70 ? 'B' : avg >= 60 ? 'C' : avg >= 50 ? 'D' : 'F';
    cout << "Average: " << avg << "  Grade: " << g << endl;
}
