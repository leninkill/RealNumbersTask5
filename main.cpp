#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n = 1;

    double sum = 0;
    int count = 0;

    while (n != 0) {
        cin >> n;

        sum += n;
        count += 1;
    }

    count -= 1;
    double middle = sum / count;

    cout << setprecision(11) << middle << endl;

    return 0;
}