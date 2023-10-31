#include<iostream>
#include<vector>
#include<limits>
using namespace std;
vector<string> Task;
vector<string> status;

void addTask() {
    string task;
    cout << "Enter the task: ";
    getline(cin, task);
    Task.push_back(task);
    status.push_back("Pending");
    cout << endl << "Task has been added successfully." << endl;
}
void complete() {
    int task;
    cout << "Enter the task no: ";
    cin >> task;
    task = task - 1;
    status[task] = "Completed";
    cout << "Task " << task + 1 << " has been marked as completed." << endl;
}
void viewTask() {
    cout << "Displaying the tasks..." << endl;
    for (int i = 0; i < Task.size(); i++) {
        cout << i + 1 << ". " << Task[i] << "( " << status[i] << " )" << endl;
    }
}
void removeTask() {
    int task;
    cout << "Enter the task no you want to remove:";
    cin >> task;
    task = task - 1;
    Task.erase(Task.begin() + task);
    status.erase(status.begin() + task);
}
int main()
{
    cout << "Welcome to the To-Do List:" << endl;
    while (1) {
        int choise;
        cout << "\n1. Add Task\n2. Remove Task\n3. Mark as Completed\n4. View Task\n5. Exit" << endl; 
        cout << "Enter your choise:";
        cin >> choise;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choise) {
            case 1:
                addTask();
                break;
            case 2:
                removeTask();
                break;
            case 3:
                complete();
                break;
            case 4:
                viewTask();
                break;
            case 5:
                exit(0);
            default:
                cout << "Enter Invalid Choise." << endl;
                break;
        }
    }
    return 0;
}