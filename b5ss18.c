#include <stdio.h>
#include <string.h>
	struct sinhVien{
		int id;
		char name[50];
		int age;
		char phoneNumber[15];
	};
int main(){
	struct sinhVien sv[50]={
	{
		1,
		"Pham viet a",
		18,
		"0332270706"
		
	},
	{
		2,
		"Pham viet b",
		19,
		"0332200006"
		
	},
	{
		3,
		"Pham viet c",
		20,
		"0332200001"
		
	},
	{
		4,
		"Pham viet d",
		19,
		"0332200005"	
	},
	{
		5,
		"Pham viet e",
		19,
		"0332200009"
	}
	
	};
	//tim kiem sinh vien 
	int n;
	int flag=-1;
		printf("Moi ban nhap vao id sinh vien: ");
		scanf("%d", &n);
	for(int i=0;i<5;i++){
		if(sv[i].id==n){
			flag=1;
			printf("Da tim thay sinh vien %d\n", n);
			fflush(stdin);
			printf("Moi ban nhap ten moi: ");
			fgets(sv[i].name,sizeof(sv[i].name), stdin);
			printf("Moi ban nhap tuoi: ");
			scanf("%d", &sv[i].age);
			break;
		}
	}
	if(flag!=1){
		printf("Khong tim thay sinh vien");
	}
	
// in ra thong tin toan bo sinh vien
	for(int i=0;i<5;i++){
		printf("thong tin sinh vien %d\n", i+1);
		printf("%d\n", sv[i].id);
		printf("%s\n", sv[i].name);
		printf("%d\n", sv[i].age);
		printf("%s\n", sv[i].phoneNumber);
	}
	return 0;
}
