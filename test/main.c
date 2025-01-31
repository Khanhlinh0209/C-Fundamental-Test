#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//-----------------------------------------------------
int isPrime(int n) {
    //Begin your codes here=====================
    for(int i = 2; i <= n - 1; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return n >= 2;
    //End your codes============================
    return 0;
}

//-----------------------------------------------------
long long factorial(int n) {
    //Begin your codes here=====================
    long long tmp = 1;
    for(int i = 1; i <= n; i++){
        tmp = tmp * i;
    }
    return tmp;
    //End your codes============================
    return 1;
}

//-----------------------------------------------------
int sumEvenInRange(int start, int end) {
    //Begin your codes here=====================
    int sum = 0;
    for(int i = start; i <= end; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
    //End your codes============================
    return 0;
}

//-----------------------------------------------------
int gcd(int a, int b) {
    //Begin your codes here=====================
    if(b == 0) {
        return abs(a);
    }
    return gcd(b, a % b);
    //End your codes============================
    return 1;
}

//-----------------------------------------------------
void swap(int *a, int *b) {
    //Begin your codes here=====================
    int tmp = *a;
    *a = *b;
    *b = tmp;
    //End your codes============================
}

//-----------------------------------------------------
void sortArrayAscending(int arr[], int size) {
    //Begin your codes here=====================
    for (int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    //End your codes============================
}

//-----------------------------------------------------
int countVowels(const char *str) {
    //Begin your codes here=====================
    int count = 0;
    while(*str) {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
            }
        str++;
    }

    return count;
    //End your codes============================
    return 0;
}

//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION============
int main() {
    system("cls");
    int choice;
    do {
        printf("\n================ MENU ================\n");
        printf("1. Test Q1 (isPrime)\n");
        printf("2. Test Q2 (factorial)\n");
        printf("3. Test Q3 (sumEvenInRange)\n");
        printf("4. Test Q4 (gcd)\n");
        printf("5. Test Q5 (swap)\n");
        printf("6. Test Q6 (sortArrayAscending)\n");
        printf("7. Test Q7 (countVowels)\n");
        printf("0. Exit\n");
        printf("======================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("\nTEST Q1 (isPrime):\n");
                int n;
                printf("Enter n: ");
                scanf("%d", &n);
                printf("OUTPUT: %d\n", isPrime(n));
                break;
            }
            case 2: {
                printf("\nTEST Q2 (factorial):\n");
                int n;
                printf("Enter n: ");
                scanf("%d", &n);
                printf("OUTPUT: %lld\n", factorial(n));
                break;
            }
            case 3: {
                printf("\nTEST Q3 (sumEvenInRange):\n");
                int start, end;
                printf("Enter start and end: ");
                scanf("%d %d", &start, &end);
                printf("OUTPUT: %d\n", sumEvenInRange(start, end));
                break;
            }
            case 4: {
                printf("\nTEST Q4 (gcd):\n");
                int a, b;
                printf("Enter a and b: ");
                scanf("%d %d", &a, &b);
                printf("OUTPUT: %d\n", gcd(a, b));
                break;
            }
            case 5: {
                printf("\nTEST Q5 (swap):\n");
                int a, b;
                printf("Enter a and b: ");
                scanf("%d %d", &a, &b);
                swap(&a, &b);
                printf("OUTPUT: a = %d, b = %d\n", a, b);
                break;
            }
            case 6: {
                printf("\nTEST Q6 (sortArrayAscending):\n");
                int size;
                printf("Enter size of array: ");
                scanf("%d", &size);
                int arr[size];
                printf("Enter %d elements: ", size);
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                sortArrayAscending(arr, size);
                printf("OUTPUT: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            case 7: {
                printf("\nTEST Q7 (countVowels):\n");
                char str[100];
                printf("Enter a string: ");
                scanf(" %[^\n]s", str);
                printf("OUTPUT: %d\n", countVowels(str));
                break;
            }
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    system("pause");
    return 0;
}
//============================================================
