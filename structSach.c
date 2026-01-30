#include <stdio.h>
typedef struct Sach
{
	char maSach [10];
	char tieuDe [100];
	char Tacgia [30];
	int namXuatban;
	long long Giaban;
	char loaiSach [50];
	char NXB [100];
	int Sotrang;
}Sach;
void nhap(Sach *a);
void xuat(Sach a);

int main (void)
{
	Sach a;
	nhap(&a);
	xuat(a);
	return 0;
}

void nhap(Sach *a)
{
	fflush (stdin);
	printf ("\nNhap Ma Sach: ", a);
	scanf ("%s", &a->maSach);
	
	fflush (stdin);
	printf ("\nNhap Tieu De: ", a);
	gets (a->tieuDe);
	
	fflush (stdin);
	printf ("\nNhap Tac Gia: ", a);
	gets (a->Tacgia);
	
	fflush (stdin);
	printf ("\nNhap Nam Xuat Ban: ", a);
	scanf ("%d", &a->namXuatban);
	
	fflush (stdin);
	printf ("\nNhap Gia Ban: ", a);
	scanf ("%lld", &a->Giaban);
	
	fflush (stdin);
	printf ("\nNhap Loai Sach: ", a);
	scanf ("%s", &a->loaiSach);
	
	fflush (stdin);
	printf ("\nNhap Nha Xuat Ban: ", a);
	gets (a->NXB);
	
	fflush (stdin);
	printf ("\nNhap So Trang: ", a);
	scanf ("%d", &a->Sotrang);
	
}

void xuat (Sach a) 
{
	printf ("\n%s\t%s\t%s\t%d\t%lld\t%s\t%s\t%d", a.maSach, a.tieuDe, a.Tacgia, a.namXuatban, a.Giaban, a.loaiSach, a.NXB, a.Sotrang);
}
