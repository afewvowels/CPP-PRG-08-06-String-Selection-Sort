//
//  main.cpp
//  PRG-8-6-String-Selection-Sort
//
//  Created by Keith Smith on 10/8/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Modify the selectionSort function presented in this chapter so it sorts an array
//  of strings instead of an array of ints. Test the function with a driver program. Use
//  Program 8-8 as a skeleton to complete.


#include <iostream>
#include <string>

using namespace std;

const int INT_NUM_NAMES = 20;

void sortNameArray(string[]);
void displayNames(const string[]);
void exitHold();

int main()
{
    string strNames[INT_NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
                                        "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                        "Taylor, Terri", "Johnson, Jill",
                                        "Allison, Jeff", "Looney, Joe", "Wolfe, Bille",
                                        "James, Jean", "Weaver, Jim", "Pore, Bob",
                                        "Rutherford, Greg", "Javens, Renee",
                                        "Harrison, Rose", "Setzer, Cathy",
                                        "Pike, Gordon", "Holland, Beth" };
    
    sortNameArray(strNames);
    
    displayNames(strNames);
    
    exitHold();
    
    return 0;
}

void sortNameArray(string names[])
{
    int minIndex;
    
    string minValue;
    string temp;
    
    for (int start = 0; start < (INT_NUM_NAMES - 1); start++)
    {
        minIndex = start;
        minValue = names[start];
        for (int index = start + 1; index < INT_NUM_NAMES; index++)
        {
            if (names[index] < minValue)
            {
                minValue = names[index];
                minIndex = index;
            }
        }
        temp = names[minIndex];
        names[minIndex] = names[start];
        names[start] = temp;
    }
}

void displayNames(const string names[])
{
    for (int i = 0; i < INT_NUM_NAMES; i++)
    {
        cout << names[i] << endl;
    }
}

void exitHold()
{
    string strExit;
    
    cout << "Enter any key to exit:\n";
    cin >> strExit;
}

