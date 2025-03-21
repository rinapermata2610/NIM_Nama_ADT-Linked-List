#include <graphics.h>
#include <conio.h>

int main() {
    // Inisialisasi mode grafik
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Menggambar lingkaran di tengah layar
    int x = getmaxx() / 2;  // Koordinat X tengah layar
    int y = getmaxy() / 2;  // Koordinat Y tengah layar
    int radius = 100;       // Jari-jari lingkaran

    setcolor(WHITE);  // Mengatur warna lingkaran
    circle(x, y, radius);

    getch();  // Menunggu input sebelum keluar
    closegraph();  // Menutup mode grafik
    return 0;
}
