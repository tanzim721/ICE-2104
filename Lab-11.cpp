#include <stdio.h>
#include <math.h>
#include <windows.h>
COORD coord = {0, 0};
void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
    float ax[20], ay[20], xp, yp = 0, dr, nr;
    int no_data, i, j;
    printf("How many data? ");
    scanf("%d", &no_data);
    printf("Enter Data: ");
    for(i =0; i < no_data; i++){
        gotoxy(1,2+i); printf("X%d: ", i+1);
        scanf("%f", &ax[i]);
        gotoxy(10, 2+i);printf("Y%d: ", i+1);
        scanf("%f", &ay[i]);
    }
    printf("\nEnter value of x to find corresponding y ");-ppp
    scanf("%f", &xp);
    for(i = 0; i < no_data; i++){
        dr = 1;
        nr = 1;
        for(j = 0; j<no_data; j++){
            if(i!=j){
                nr *= xp - ax[j];
                dr *= ax[i] - ax[j];
            }
        }
        yp += nr/dr*ay[i];
    }
    printf("\nrequired value of y is: %f", yp);
    return 0;
