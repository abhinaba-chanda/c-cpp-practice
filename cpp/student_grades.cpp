#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "How many subjects? ";
    cin >> n;
    vector<double> marks(n);
    double total = 0;
    for (int i = 0; i < n; i++) { cout << "Marks " << i + 1 << ": "; cin >> marks[i]; total += marks[i]; }
    double avg = total / n;
    char grade = avg >= 90 ? 'A' : avg >= 75 ? 'B' : avg >= 60 ? 'C' : avg >= 40 ? 'D' : 'F';
    cout << "Average: " << avg << "  Grade: " << grade << endl;
    return 0;
}
