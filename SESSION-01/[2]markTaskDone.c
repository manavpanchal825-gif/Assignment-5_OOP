#include <stdio.h>

char tasks[5][100];
int taskDone[5] = {0, 0, 0, 0, 0};
int taskCount = 0;

void markTaskDone(int index) {
    if (index >= 0 && index < taskCount) {
        taskDone[index] = 1;
    }
}

int main() {
    int i;

    printf("Enter 5 tasks:\n");

    for (i = 0; i < 5; i++) {
        printf("Task %d: ", i + 1);
        fgets(tasks[i], 100, stdin);
        taskCount++;
    }

    // Mark task 2 as done
    markTaskDone(1);

    printf("\n--- Updated Task List ---\n");

    for (i = 0; i < taskCount; i++) {
        printf("%d. %s", i + 1, tasks[i]);

        if (taskDone[i] == 1) {
            printf(" - DONE");
        }
    }

    return 0;
}