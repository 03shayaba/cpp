#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;

    // Allocate memory for row pointers
    int** arr = new int*[row];
    int* columnSizes = new int[row]; // Array to store the size of each row

    // Input elements for each row
    for (int i = 0; i < row; i++)
    {
        cout << "Enter the number of columns for row " << i + 1 << ": ";
        cin >> col;

        columnSizes[i] = col; // Store the number of columns for this row
        arr[i] = new int[col]; // Allocate memory for this row

        cout << "Enter " << col << " elements for row " << i + 1 << ": ";
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Print the jagged array
    cout << "\nJagged Array:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < columnSizes[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free allocated memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i]; // Free each row
    }
    delete[] arr; // Free the row pointers
    delete[] columnSizes; // Free the column sizes array

    return 0;
}
