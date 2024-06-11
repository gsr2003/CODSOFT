#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string description;
    bool completed = false;
};

std::vector<Task> tasks;

void addTask(const std::string& description) {
    tasks.push_back({description, false});
}

void viewTasks() {
    std::cout << "Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        const Task& task = tasks[i];
        std::cout << "[" << (task.completed ? "X" : " ") << "] " << task.description << "\n";
    }
}

void markTaskCompleted(size_t taskNumber) {
    if (taskNumber >= 1 && taskNumber <= tasks.size()) {
        tasks[taskNumber - 1].completed = true;
        std::cout << "Task marked as completed.\n";
    } else {
        std::cout << "Invalid task number.\n";
    }
}

void removeTask(size_t taskNumber) {
    if (taskNumber >= 1 && taskNumber <= tasks.size()) {
        tasks.erase(tasks.begin() + taskNumber - 1);
        std::cout << "Task removed.\n";
    } else {
        std::cout << "Invalid task number.\n";
    }
}

int main() {
    while (true) {
        std::cout << "1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Remove Task\n5. Exit\n";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter task description: ";
            std::string description;
            std::cin.ignore(); // Clear newline from previous input
            std::getline(std::cin, description);
            addTask(description);
        } else if (choice == 2) {
            viewTasks();
        } else if (choice == 3) {
            std::cout << "Enter task number to mark as completed: ";
            size_t taskNumber;
            std::cin >> taskNumber;
            markTaskCompleted(taskNumber);
        } else if (choice == 4) {
            std::cout << "Enter task number to remove: ";
            size_t taskNumber;
            std::cin >> taskNumber;
            removeTask(taskNumber);
        } else if (choice == 5) {
            break;
        } else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
