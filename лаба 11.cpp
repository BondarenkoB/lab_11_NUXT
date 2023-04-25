#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 2;

class Matrix 
{
public:
    int matrix[ROWS][COLS];

    Matrix() {}

    Matrix(int arr[ROWS][COLS]) 
    {
        for (int i = 0; i < ROWS; i++) 
        {
            for (int j = 0; j < COLS; j++) 
            {
                matrix[i][j] = arr[i][j];
            }
        }
    }

    Matrix operator+(Matrix& m) 
    {
        Matrix result;
        for (int i = 0; i < ROWS; i++) 
        {
            for (int j = 0; j < COLS; j++) 
            {
                result.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
            }
        }
        return result;
    }

    Matrix operator-(Matrix& m) 
    {
        Matrix result;
        for (int i = 0; i < ROWS; i++) 
        {
            for (int j = 0; j < COLS; j++) 
            {
                result.matrix[i][j] = matrix[i][j] - m.matrix[i][j];
            }
        }
        return result;
    }

    Matrix operator*(int scalar) 
    {
        Matrix result;
        for (int i = 0; i < ROWS; i++) 
        {
            for (int j = 0; j < COLS; j++) 
            {
                result.matrix[i][j] = matrix[i][j] * scalar;
            }
        }
        return result;
    }

    Matrix operator*(Matrix& m) 
    {
        Matrix result;
        for (int i = 0; i < ROWS; i++) 
        {
            for (int j = 0; j < COLS; j++) 
            {
                int sum = 0;
                for (int k = 0; k < ROWS; k++) 
                {
                    sum += matrix[i][k] * m.matrix[k][j];
                }
                result.matrix[i][j] = sum;
            }
        }
        return result;
    }

    Matrix transpose() 
    {
        Matrix result;
        for (int i = 0; i < ROWS; i++) 
        {
            for (int j = 0; j < COLS; j++) 
            {
                result.matrix[j][i] = matrix[i][j];
            }
        }
        return result;
    }

    void print() 
    {
        for (int i = 0; i < ROWS; i++) 
        {
            for (int j = 0; j < COLS; j++) 
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() 
{
    int arr1[ROWS][COLS] = { {1, 2}, {3, 4} };
    int arr2[ROWS][COLS] = { {5, 6}, {7, 8} };

    Matrix m1(arr1);
    Matrix m2(arr2);
// додавання матриць
    cout << "Dodavannya matryts:" << endl;
    Matrix addResult = m1 + m2;
    addResult.print();
    // вiднiмання матриць
    cout << "Vidnimannya matryts:" << endl;
    Matrix subResult = m1 - m2;
    subResult.print();
    // множення на скаляр
    cout << "mnodjennya na scalar:" << endl;
    Matrix scalarResult = m1 * 2;
    scalarResult.print();
    //множення матриць
    cout << "mnodjennya matritsi:" << endl;
    Matrix multResult = m1 * m2;
    multResult.print();
    // транспортування матриць
    cout << "transportyvannya matryts:" << endl;
    Matrix transposeResult = m1.transpose();
    transposeResult.print();

    return 0;
}
