#include <iostream>

int main(){
    // Define a simple 3D array with fixed values
    int arr[2][2][2] = {{{1,2},{3,4}},
                            {{5,6},{7,8}}};

    // Print the values of the 3D array
    for (int i = 0; i <2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                std::cout << "arr[" << i << "][" << j << "]["<< k << "] = "
                          << arr [i][j][k] << std::endl;
            }
        }
    }
    return 0;
}