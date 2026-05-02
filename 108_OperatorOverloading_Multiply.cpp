#include <iostream>
using namespace std;

class Matrix {
private:
    int data[2][2];
    
public:
    Matrix() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                data[i][j] = 0;
            }
        }
    }
    
    Matrix operator*(const Matrix &m) {
        Matrix result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.data[i][j] = data[i][0] * m.data[0][j] + data[i][1] * m.data[1][j];
            }
        }
        return result;
    }
    
    void setData(int row, int col, int value) {
        data[row][col] = value;
    }
    
    int getData(int row, int col) {
        return data[row][col];
    }
};

int main() {
    Matrix m1, m2;
    m1.setData(0, 0, 1);
    m1.setData(0, 1, 2);
    m1.setData(1, 0, 3);
    m1.setData(1, 1, 4);
    
    m2 = m1;
    
    return 0;
}
/* Output:
(No output)
*/
