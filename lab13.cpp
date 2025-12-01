#include <iostream> //include i/o library
#include <vector> //include vector library
using namespace std; //use std namespace

bool faillecture(const vector<int>& attendance_records) { //buggy function from lab
    int absentcount = 0; //track number of absences
    for (int i = 1; i < attendance_records.size(); ++i) { //bug: loop wrongly starts at index 1 instead of 0
        absentcount += (attendance_records[i] == 0); //increase count if student absent
    }
    return absentcount >= 3; //return true if student should fail based on absences
}

void printAttendance(const vector<int>& v) { //helper to print attendance vector
    cout << "[ "; //print opening bracket
    for (int x : v) { //iterate through vector values
        cout << x << " "; //print each value
    }
    cout << "]"; //print closing bracket
}

int main() { //program entry point
    cout << boolalpha; //print booleans as true/false

    vector<int> test3 = {1,1,1,1,1,1,1,1,1,1}; //q3: executes fault but no error state since skipping index 0 changes nothing

    vector<int> test4 = {0,0,1,1,1,1,1,1,1,1}; //q4: error state but no failure since incorrect count still < 3 so output remains false

    vector<int> test5 = {0,0,0,1,1,1,1,1,1,1}; //q5: failure because skipping index 0 causes wrong absence count and incorrect output

    cout << "=== Lab 13: Debugging faillecture() ===\n\n"; //print header

    cout << "Test 3 (executes fault, no error state): "; //label for test 3
    printAttendance(test3); //print test 3 vector
    cout << "\nBuggy faillecture() output: " //print buggy output label
         << faillecture(test3) << " (expected: false)\n\n"; //show actual vs expected

    cout << "Test 4 (error state, no failure): "; //label for test 4
    printAttendance(test4); //print test 4 vector
    cout << "\nBuggy faillecture() output: " //print buggy output label
         << faillecture(test4) << " (expected: false)\n\n"; //show actual vs expected

    cout << "Test 5 (failure): "; //label for test 5
    printAttendance(test5); //print test 5 vector
    cout << "\nBuggy faillecture() output: " //print buggy output label
         << faillecture(test5) << " (expected: true)\n\n"; //show actual vs expected

    return 0; //end program
}
