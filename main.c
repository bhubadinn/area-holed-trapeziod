#include<stdio.h>
#include<math.h>

// ประกาศตัวแปรสำหรับฟังก์ชั่นอินพุตและเอาต์พุต
double Data[4];

// ฟังก์ชั่นอินพุต
void input() {
    char var_name[4] = {'a', 'b', 'h', 'r'};

    printf("\nPlease input..\n");

    // รับค่าอินพุตด้วยการวนซํ้า (Looping)
    for(int i = 0; i < 4; i++) {
        // เก็บค่าไว้ในตัวแปรอาเรย์ Data[]
        printf("  %c: ", var_name[i]);    
        scanf("%lf", &Data[i]); getchar();
    }
}

// ฟังก์ชั่นเอาต์พุต
void output(double a, double b, double h, double r) {
    // กำหนดเงื่อนไข
    if( a > (r*2) && b > (r*2) && h > (r*2)) {
        // การคำนวณและแสดงผลการคำนวณ
        printf("\n\"Holed trapezium area = %.2f unit.\"\n\n", ((a + b)/2 * h) - (M_PI * pow(r, 2)));
    } else {
        // กรณีที่ข้อมูลอินพุตไม่เป็นไปตามเงื่อนไข
        printf("\n\"INPUT ERROR!!\"\n\n");
    }    
}

int main() {
    // เรียกใช้ฟังก์ชั่นอินพุต
    input();
    // เรียกใช้ฟังก์ชั่นเอาต์พุต
    output(Data[0], Data[1], Data[2], Data[3]);

    printf("Please 'Enter' button to exit..  ");
    getchar(); 
    return 0;
}