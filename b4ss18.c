#include <stdio.h>
#include <string.h>

typedef struct {
    int id;             
    char name[100];     
    int age;            
    char phoneNumber[15]; 
} Student;

int main() {
    Student students[50]; 
    int studentCount = 5; 

    printf("Nhap thong tin cua %d sinh vien:\n", studentCount);

    for (int i = 0; i < studentCount; i++) {
        students[i].id = i + 1; 

        printf("\nSinh vien %d:\n", students[i].id);
        printf("Nhap ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);

        printf("Nhap so dien thoai: ");
        scanf("%s", students[i].phoneNumber);

        getchar(); 
    }
    printf("\nDanh sach sinh vien:\n");
    printf("%-5s %-20s %-5s %-15s\n", "ID", "Ten", "Tuoi", "So dien thoai");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < studentCount; i++) {
        printf("%-5d %-20s %-5d %-15s\n", 
            students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}
