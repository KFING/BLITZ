// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
std::fstream fin("input.txt");
std::ofstream fout("output.txt");
std::vector<std::vector<int>> nums;
int main()
{
    int sizeMatrix;
    int countReb;
    fin >> sizeMatrix;
    fin >> countReb;
    int a;
    int b;
    nums.resize(sizeMatrix, std::vector<int>(sizeMatrix));
    for (int i = 0; i < countReb; i++) {
        fin >> a;
        fin >> b;
        nums[a - 1][b - 1] = 1;
        nums[b - 1][a - 1] = 1;
    }
    for (int i = 0; i < sizeMatrix; i++) {
        for (int j = 0; j < sizeMatrix; j++) {
            fout << nums[i][j] << ' ';
        }
        fout << '\n';
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file