#include <iostream>
using namespace std;

int main() {
    try {
        int arr[3] = {1, 2, 3};
        cout << arr[5] << endl;
    } catch (out_of_range &e) {
        cout << "Out of range error!" << endl;
    } catch (exception &e) {
        cout << "General exception: " << e.what() << endl;
    }
    
    return 0;
}
/* Output:
(No exception caught - array access is not bounds checked)
*/
