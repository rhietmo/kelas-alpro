#include <stdio.h>

int HitungLuasBujurSangkar(int sisi)
{
	int L;
	L = sisi * sisi;
	return L;
}

int main (void)
{
	int S, Luas;

	S=10;

	Luas = HitungLuasBujurSangkar(S);

	printf("Luas bujur sangkar dengan sisi %d adalah %d", S, Luas);

	return 0;

}
