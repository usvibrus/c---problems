#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reversear(int T) {


    for (int iy1 = 0; iy1 < T; iy1++) {


        int number1, given2num;
        cin >> number1 >> given2num;

        vector<int> tempvec(number1);


        for (int i = 0; i < number1; i++) {


            cin >> tempvec[i];


        }

        vector<pair<int, int>> pairsc(given2num);


        for (int i = 0; i < given2num; i++) {

            cin >> pairsc[i].first >> pairsc[i].second;

        }

        vector<long long> sumation(number1 + 1, 0);


        for (int i = 1; i <= number1; i++) {


            sumation[i] = sumation[i - 1] + tempvec[i - 1];

        }

        sort(tempvec.rbegin(), tempvec.rend());

        long long nnn1 = 0;
        for (int i = 0; i < given2num; i++) {


            int lej = pairsc[i].first;

            int rigt = pairsc[i].second;

            nnn1 += sumation[rigt] - sumation[lej - 1];
        }

        cout << nnn1 << endl;
        
        for (int i = 0; i < number1; i++) {
            cout << tempvec[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T;

    reversear(T);

    return 0;
}