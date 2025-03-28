#include "Task.h"
#include <sstream>

// Constructor: Initializes a Task object with provided values.
Task::Task(int id, const std::string& title, const std::string& description, const std::string& dueDate)
    : id(id), title(title), description(description), status("To Do"), dueDate(dueDate) {}

// Getter function for Task ID
int Task::getId() const {
    return id;
}

// Getter function for Task title
std::string Task::getTitle() const {
    return title;
}

// Getter function for Task description
std::string Task::getDescription() const {
    return description;
}

// Getter function for Task status
std::string Task::getStatus() const {
    return status;
}

// Getter function for Task due date
std::string Task::getDueDate() const {
    return dueDate;
}

// Setter function to update the Task status
void Task::setStatus(const std::string& newStatus) {
    status = newStatus;
}