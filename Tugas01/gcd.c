#include <stdio.h>

int gcd(int a, int b) {
    while(b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    int a, b;
    printf("Masukkan Nilai A: "); scanf("%d", &a);
    printf("Masukkan Nilai B: "); scanf("%d", &b);

if(a != 0 && b != 0){
    a = (a);
    b = (b);
    printf("Nilai GCD adalah %d", a, b, gcd(a, b));
    main();

}else{
    printf("Mohon Maaf Nilai Tidak Boleh Sama Dengan Nol (0)!\n");
    main();
    }
}
