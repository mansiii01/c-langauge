#include <stdio.h>

void main() {
    int s1, s2;
    printf("Enter size of first array: ");
    scanf("%d", &s1);
    printf("Enter size of second array: ");
    scanf("%d", &s2);
    int a[s1];
    int b[s2];
    int intersection[s1];
    for (int i = 0; i < s1; i++) {
        printf("Enter elements of first array: ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < s2; i++) {
        printf("Enter elements of second array: ");
        scanf("%d", &b[i]);
    }
    int k = 0;
    for (int i = 0; i < s1; i++) {
        for (int j = 0; j < s2; j++) {
            if (a[i] == b[j]) {
                int flag = 0;
                for (int l = 0; l < k; l++) {
                    if (intersection[l] == a[i]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    intersection[k++] = a[i];
                }
            }
        }
    }
    printf("Intersection of two arrays is: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");
}