#include <iostream>
#include <cstdlib>  // for atoi
#include <cstring>  // for strcmp
using namespace std;

void shape(int rows, int cols, bool hollow = false, bool hollowx = false) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (hollow&&!hollowx) {
                if (i == 1 || i == rows || j == 1 || j == cols) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else if (!hollow&&hollowx || hollowx) {
                if (i == 1 || i == rows || j == 1 || j == cols || i == j || j == cols - i + 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else {
                cout << "*";
            }
        }
        cout << "\n";
    }
}

bool strToBool(const char* str) {
    return strcmp(str, "true") == 0;
}

signed main(int argc, char** argv) {
    if (argc != 5) {
        cout << "Usage: " << argv[0] << " <rows> <cols> <hollow> <hollowx>\n";
        return 1;
    }

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    bool hollow = strToBool(argv[3]);
    bool hollowx = strToBool(argv[4]);

    shape(rows, cols, hollow, hollowx);

    return 0;
}
