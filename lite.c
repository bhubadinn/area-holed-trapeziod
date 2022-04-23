#include<stdio.h>
#include<math.h>
double Data[4];
void input() {
    char var_name[4] = {'a', 'b', 'h', 'r'};
    printf("\nPlease input..\n");
    for(int i = 0; i < 4; i++) {
        printf("  %c: ", var_name[i]);    
        scanf("%lf", &Data[i]); getchar();}
}
void output(double a, double b, double h, double r) {
    if( a > (r*2) && b > (r*2) && h > (r*2)) { 
        printf("\n\"Holed trapezium area = %.2lf unit.\"\n\n", ((a + b)/2 * h) - (M_PI * pow(r, 2)));} 
    else { 
        printf("\n\"INPUT ERROR!!\"\n\n");}    
}
int main() {
    input();
    output(Data[0], Data[1], Data[2], Data[3]);
    printf("Please 'Enter' button to exit..  "); getchar(); 
    return 0;
}




