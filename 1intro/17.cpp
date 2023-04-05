// Coding Ninjas
// C++ solution to 8 queens problem using backtracking
#include <bits/stdc++.h>
using namespace std;
int countt = 0;

// Function to check whether a position is valid or not
bool isValid(int board[][8], int row, int col)
{

    if (board[row][col] != 2)
    {
        // loop to check horizontal positions
        for (int i = col; i >= 0; i--)
        {
            if (board[row][i] == 1)
                return false;
        }
        int i = row, j = col;

        // loop to check the upper left diagonal
        while (i >= 0 && j >= 0)
        {
            if (board[i][j] == 1)
                return false;
            i--;
            j--;
        }
        i = row;
        j = col;

        // loop to check the lower left diagonal
        while (i < 8 && j >= 0)
        {
            if (board[i][j] == 1)
                return false;
            i++;
            j--;
        }
        return true;
    }
    return false;
}

// function to check all the possible solutions
void ninjaQueens(int board[][8], int currentColumn)
{
    if (currentColumn >= 8)
        return;
    // loop to cover all the columns
    for (int i = 0; i < 8; i++)
    {
        if (isValid(board, i, currentColumn))
        {
            board[i][currentColumn] = 1;
            if (currentColumn == 7)
            {
                countt++;
            }
            // recursively calling the function
            ninjaQueens(board, currentColumn + 1);
            // backtracking
            board[i][currentColumn] = 0;
        }
    }
}
int main()
{

    // initial board situation
    int board[8][8];
    char s;

    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            cin >> s;
            if (s == '.')
            {
                board[i][j] = 0;
            }
            else
            {
                board[i][j] = 2;
            }
        }
    }

    ninjaQueens(board, 0);
    cout << countt << endl;
    return 0;
}