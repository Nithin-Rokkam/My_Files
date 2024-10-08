#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function prototypes
void displayStudents(const string students[], int size); // Display existing students
bool searchStudent(const string students[], int size, const string& name); // Search for a student
void addStudent(string*& students, int& size, const string& name); // Add a new student

int main() {
    const int initialSize = 10;
    string* students = new string[initialSize] {"Mary", "Cynthia", "Minnie", "Sasha", "Laila", "Kimberly", "Sal", "Alexus", "Sean", "Crystal"};
    int size = initialSize;

    cout << "Existing students:" << endl;
    displayStudents(students, size); // Step 2: Display existing students

    string input;
    while (true) {
        cout << "\nEnter a student name to search or add (type 'exit' to quit): ";
        getline(cin, input); // Step 3: Prompt user input

        if (input == "exit") {
            break; // Exit loop if user wants to quit
        }

        transform(input.begin(), input.end(), input.begin(), ::tolower); // Convert input to lowercase for case-insensitive comparison

        if (searchStudent(students, size, input)) { // Step 4: Search for student
            cout << "Returning student.\n";
        } else {
            addStudent(students, size, input); // Step 5: Add new student if not found
            cout << "New student added.\n";
        }
    }

    delete[] students; // Step 6: Cleanup

    return 0;
}

void displayStudents(const string students[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << students[i] << endl;
    }
}

bool searchStudent(const string students[], int size, const string& name) {
    for (int i = 0; i < size; ++i) {
        string temp = students[i];
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        if (temp == name) {
            return true; // Student found
        }
    }
    return false; // Student not found
}

void addStudent(string*& students, int& size, const string& name) {
    string* temp = new string[size + 1]; // Allocate memory for new array
    for (int i = 0; i < size; ++i) {
        temp[i] = students[i]; // Copy existing student names to new array
    }
    temp[size] = name; // Add new student to new array
    delete[] students; // Free memory of old array
    students = temp; // Update pointer to new array
    ++size; // Increment size
}

