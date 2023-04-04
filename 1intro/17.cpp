// Coding Ninjas
// C++ solution to 8 queens problem using backtracking
#include <bits/stdc++.h>
using namespace std;
int countt = 0;

// Function to check whether a position is valid or not
bool isValid(int board[][8], int row, int col)
{

    if (board[row][col] == -1)
        return false;
    else
    {

        // loop to check horizontal positions
        for (int i = col; i >= 0; i--)
        {
            if (board[row][i])
                return false;
        }
        int i = row, j = col;

        // loop to check the upper left diagonal
        while (i >= 0 && j >= 0)
        {
            if (board[i][j])
                return false;
            i--;
            j--;
        }
        i = row;
        j = col;

        // loop to check the lower left diagonal
        while (i < 8 && j >= 0)
        {
            if (board[i][j])
                return false;
            i++;
            j--;
        }
        return true;
    }
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
    int board[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, -1, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, -1, -1, 0},
                       {0, 0, 0, -1, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0, 0}};
    ninjaQueens(board, 0);
    /* In total, 92 solutions exist for 8x8 board. This statement will verify our code*/
    cout << countt << endl;
    return 0;
}