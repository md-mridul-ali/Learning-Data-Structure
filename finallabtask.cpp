#include<iostream>
#include<cstring>
using namespace std;

struct Student {
    int n;
    string  name;
    string id;
    float cgpa;
};

void insertionSort(Student arr[], int n) {
    int i, j;
    Student V;
    for (i = 1; i < n; i++) {
        V = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j].cgpa > V.cgpa) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = V;
    }
}

void bubbleSort(Student arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].cgpa > arr[j + 1].cgpa) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(Student arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j].cgpa < arr[min_idx].cgpa)
                min_idx = j;

        swap(arr[min_idx], arr[i]);
    }
}

void showElements(Student arr[], int n) {
    cout << "Student information: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Name: " << arr[i].name << ", ID: " << arr[i].id << ", CGPA: " << arr[i].cgpa << endl;
    }
}

int binarySearch(Student arr[],int l,int r, float x) {

    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid].cgpa == x)
            return mid;

        if (arr[mid].cgpa > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main() {

    int n;
    cout<<"Enter number of students:";
    cin>>n;

    Student students[n];

    for(int i=0;i<n;i++){
    cout<<"Enter name:";
    cin>>students[i].name;

    cout<<"Enter id:";
    cin>>students[i].id;

    cout<<"Enter cg:";
    cin>>students[i].cgpa;

    cout<<endl;




    };

    // Insertion Sort
    insertionSort(students, n );
    cout << "\nAfter Insertion Sort:" <<"\n";
    showElements(students, n );

    // Bubble Sort
    bubbleSort(students, n );
    cout << "\nAfter Bubble Sort:" << endl;
    showElements(students, n);

    // Selection Sort
    selectionSort(students, n );
    cout << "\nAfter Selection Sort:" << endl;
    showElements(students, n);

    // Binary Search
    float searchCGPA = 3.8;
    int result = binarySearch(students, 0, n - 1, searchCGPA);
    if (result == -1)
        cout << "\nElement not found" << endl;
    else
        cout << "\nElement found at index: " << result + 1 << endl;

}
