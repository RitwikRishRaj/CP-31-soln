#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int tasks[m]; 
    for (int i = 0; i < m; i++) {
        scanf("%d", &tasks[i]);
    }

    long long total_time = 0;
    int current_position = 1;  // Xenia starts at house 1

    for (int i = 0; i < m; i++) {
        if (tasks[i] >= current_position) {
            // Move directly to the next task house
            total_time += tasks[i] - current_position;
        } else {
            // Move around the ring road to reach the house
            total_time += (n - current_position) + tasks[i];
        }
        // Update the current position to the house of the completed task
        current_position = tasks[i];
    }

    printf("%lld\n", total_time);

    return 0;
}
