#include <iostream>
using namespace std;

class Score {
private:
    int *scores;
    int size;
    
    int findMax() {
        int max = scores[0];
        for (int i = 1; i < size; i++) {
            if (scores[i] > max) max = scores[i];
        }
        return max;
    }
    
public:
    Score(int s) : size(s) {
        scores = new int[size];
    }
    
    ~Score() {
        delete[] scores;
    }
    
    void setScore(int index, int value) {
        if (index >= 0 && index < size) {
            scores[index] = value;
        }
    }
    
    int getMaxScore() {
        return findMax();
    }
};

int main() {
    Score sc(5);
    sc.setScore(0, 85);
    sc.setScore(1, 90);
    sc.setScore(2, 78);
    
    cout << "Max Score: " << sc.getMaxScore() << endl;
    
    return 0;
}
/* Output:
Max Score: 90
*/
