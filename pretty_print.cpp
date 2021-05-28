#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A;
    cin >> A;
    double B;
    cin >> B;
    double C;
    cin >> C;
		/* Enter your code here */
// FIRST LINE
    int AA = (int)A;   
    cout << std::setw(0) << 0 << "x" << std::hex << AA << endl;

// SECOND LINE
    float value = (int)(B * 100 + .5);
    double BB = (float)value / 100;
    if (BB > 0){
        int len = sizeof(BB);
        int under_scores_nums = 15 - len;
        string under_scores;
        for(int i = 0; i < under_scores_nums; i++) {
            under_scores.append("_");
        }
        under_scores = under_scores + "+";
        cout << under_scores;
        cout << BB << endl;
    } else if (BB < 0) {
        int len = sizeof(BB);
        int under_scores_nums = 15 - len;
        string under_scores;
        for(int i = 0; i < under_scores_nums; i++) {
            under_scores.append("_");
        }
        under_scores = under_scores + "-";
        cout << under_scores;
        cout << BB << endl;
    }

// THIRD LINE

cout << std::setprecision(9) << std::scientific << C << endl;
return 0;
}