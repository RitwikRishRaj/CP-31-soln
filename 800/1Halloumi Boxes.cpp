
#include <stdio.h>
#include <stdlib.h>
 
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
 
int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        int a[n], sorted_a[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            sorted_a[i] = a[i];
        }
        
        qsort(sorted_a, n, sizeof(int), compare);
        
        if (k >= n) {
            printf("YES\n");
        } else {
            int is_sorted = 1;
            for (int i = 0; i < n; i++) {
                if (a[i] != sorted_a[i]) {
                    is_sorted = 0;
                    break;
                }
            }
            
            if (is_sorted) {
                printf("YES\n");
            } else if (k >= 2) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    
    return 0;
}