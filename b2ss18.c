#include <stdio.h>
	
	struct sinhVien{
		char name[50];
		int age;
		char phoneNumber[20];
	};
int main(){
	struct sinhVien v1;
	printf("Moi ban nhap vao ho ten: ");
	fgets(v1.name, sizeof(v1.name), stdin);
	printf("Moi ban nhap vao tuoi: ");
	scanf("%d", &v1.age);
	fflush(stdin);
	printf("Moi ban nhap vao sdt: ");
	fgets(v1.phoneNumber,sizeof(v1.phoneNumber), stdin);
	printf("Thong tin cua sinh vien\n");
	printf("Ten cua sinh vien: %s",v1.name);
	printf("Tuoi cua sinh vien: %d\n",v1.age);
	printf("So dien thoai cua sinh vien: %s\n", v1.phoneNumber);
	

	return 0;
}
