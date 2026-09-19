#------------4. Create TaskList Class------------------------------




class Task:
    def __init__(self, title):
        self.title = title
        self.isDone = False

    def markDone(self):
        self.isDone = True

    def display(self):
        if self.isDone:
            print(self.title, "- DONE")
        else:
            print(self.title, "- NOT DONE")


class TaskList:
    def __init__(self):
        self.tasks = []

    def addTask(self, title):
        task = Task(title)
        self.tasks.append(task)

    def markTaskDone(self, index):
        if index >= 0 and index < len(self.tasks):
            self.tasks[index].markDone()

    def showTasks(self):
        print("--- Task List ---")

        for i, task in enumerate(self.tasks):
            print(i + 1, end=". ")
            task.display()


# Create TaskList
taskList = TaskList()

# Add 3 tasks
taskList.addTask("Study Python")
taskList.addTask("Complete assignment")
taskList.addTask("Practice coding")

# Mark second task as done
taskList.markTaskDone(1)

# Display tasks
taskList.showTasks()