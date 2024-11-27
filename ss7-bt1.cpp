#include <stdio.h>

int main() {
    int numbers[5] = {3, 4, 5, 6, 7};
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    int n = sizeof(numbers) / sizeof(numbers[0]);
    printf("\nDo dai cua mang la: %d\n", n);

    return 0;
}
