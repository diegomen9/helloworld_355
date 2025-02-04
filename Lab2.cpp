#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Matrix {

    private: 
        const int x = 10;
        const int y = 10;
        int value[10][10];
        int target_row_idx = 0;
        int max;
        int min;

    public:
        int linear_search() {
            for (int i = 0; i < y; i++){
                for (int j = 0; j < x; j++){
                    if (value[0][0] == value[j][i]){
                        target_row_idx = y;
                    }
                    else {
                        target_row_idx = 0;
                    }
                }
            }
            return target_row_idx;
        }

        int max_search() {
            for (int i = 0; i < y; i++){
                for (int j = 0; j < x; j++){
                    if (value[j][i] > max){
                        max = value[j][i];
                    }
                    else {
                        target_row_idx = 0;
                    }
                }
            }
            return max;
        } 

        int min_search() {
            for (int i = 0; i < y; i++){
                for (int j = 0; j < x; j++){
                    if (value[j][i] < min){
                        min = value[j][i];
                    }

                }
            }
            return min;
        }

        void matrix_addition(Matrix &m2, int matrix_sum[10][10]){
            for (int i = 0; i < y; i++){
                for (int j = 0; j < x; j++){
                    matrix_sum[j][i] = value[j][i] + m2.get_value(j,i);
                }
            }
        }

        void matrix_mul(Matrix &m2, int matrix_prod[10][10]){
                for (int i = 0; i < y; i++){
                    for (int j = 0; j < x; j++){
                        int sum = 0;
                        for (int k = 0; k < x; k++){
                            sum = sum + value[j][k] * m2.get_value(k,i); 
                        }
                    matrix_prod[j][i] = sum;
                }
            }
        }

        void set_value(string file){
            ifstream num(file);
            for (int i = 0; i < y; i++){
                for (int j = 0; j < x; j++){
                    num >> value[j][i];
                }
            }
        }

        int get_value(int i, int j){
            return value[i][j];
        }


};

int main() {

    Matrix m1;
    Matrix m2;

    m1.set_value("matrix_1.txt");
    m2.set_value("matrix_2.txt");

    int m1_firstnum = m1.linear_search();
    int m2_firstnum = m2.linear_search();

    int m1_max = m1.max_search();
    int m2_max = m2.max_search();

    int m1_min = m1.min_search();
    int m2_min = m2.min_search();

    if (m1_firstnum != 0) cout << "Target Value in Matrix is shown in row " << m1_firstnum << endl;
    if (m1_firstnum == 0) cout << "Target Value in Matrix is not shown " << endl;
    cout << "Maximum Value is: " << m1_max << endl;
    cout << "Minimum Value is: " << m1_min << endl; 
}




