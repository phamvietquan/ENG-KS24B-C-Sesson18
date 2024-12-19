#include <stdio.h>
	
	struct sinhVien{
		char name[50];
		int age;
		char phoneNumber[20];
	};
int main(){
	struct sinhVien v1;
	strcpy(v1.name, "Pham Viet Quan");
	v1.age=18;
	strcpy(v1.phoneNumber, "0332277006");
	printf("Thong tin cua sinh vien\n");
	printf("Ten cua sinh vien: %s\n", v1.name);
	printf("Tuoi cua sinh vien: %d\n",v1.age);
	printf("So dien thoai cua sinh vien: %s\n", v1.phoneNumber);
	

	return 0;
}
