#include<stdio.h>
#include<string.h>
#include<math.h>

// ประกาศตัวแปรสำหรับฟังก์ชั่นอินพุตและเอาต์พุต
float Data[4], result;

// ฟังก์ชั่นอินพุต
void input() {
    char var_name[1];

    printf("\nPlease input..\n");

    // รับค่าอินพุตด้วยการวนซํ้า (Looping)
    for(int i = 0; i < 4; i++) {
        switch (i) {
            case 0:
                var_name[0] = 'a'; break;
            case 1:
                var_name[0] = 'b'; break;
            case 2:
                var_name[0] = 'h'; break;
            case 3:
                var_name[0] = 'r'; break;
        }

        // เก็บค่าไว้ในตัวแปรอาเรย์ Data[]
        printf("  %c: ", var_name[0]);    
        scanf("%f", &Data[i]); getchar();
    }
    memset(var_name, 0, 1);
}


// ฟังก์ชั่นในการคำนวณ
void calculation(float a, float b, float h, float r) {
    result = ((a + b)/2 * h) - (M_PI * pow(r, 2));
}

// ฟังก์ชั่นเอาต์พุต
void output() {
    float a = Data[0];
    float b = Data[1];
    float h = Data[2];
    float r = Data[3];

    // กำหนดเงื่อนไข
    if( a > (r*2) && b > (r*2) && h > (r*2)) {
        calculation(a, b, h, r);
        printf("\n\"Holed trapezium area = %.2f unit.\"\n\n", result);
    } else {
        // กรณีที่ข้อมูลอินพุตไม่เป็นไปตามเงื่อนไข
        printf("\n\"INPUT ERROR!!\"\n\n");
    }    
}


int main() {
    // เรียกใช้ฟังก์ชั่นอินพุต
    input();
    // เรียกใช้ฟังก์ชั่นเอาต์พุต
    output();

    printf("Please 'Enter' to exit..  ");
    getchar(); 
    return 0;
}