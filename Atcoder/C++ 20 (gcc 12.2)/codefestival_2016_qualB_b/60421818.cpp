#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    string S;
    cin >> S;

    int total_passed = 0; // Total number of participants who have passed
    int overseas_rank = 0; // Rank of overseas students who have passed

    for (int i = 0; i < N; ++i) {
        if (S[i] == 'a') {
            // Japanese student
            if (total_passed < A + B) {
                cout << "Yes" << endl;
                total_passed++;
            } else {
                cout << "No" << endl;
            }
        } else if (S[i] == 'b') {
            // Overseas student
            if (total_passed < A + B && overseas_rank < B) {
                cout << "Yes" << endl;
                total_passed++;
                overseas_rank++;
            } else {
                cout << "No" << endl;
            }
        } else {
            // Neither (not a student)
            cout << "No" << endl;
        }
    }

    return 0;
}
