#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    char phoneNumber[20];
} Student;

int main() {
    Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("\nNhap thong tin sin vien thu %d:\n", i + 1);

        printf("Ho va ten: ");
        fflush(stdin); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; 

        printf("Tuoi: ");
        scanf("%d", &students[i].age);

        printf("So dien thoai: ");
        fflush(stdin); 
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = 0; 
    }

    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("Ho va ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

