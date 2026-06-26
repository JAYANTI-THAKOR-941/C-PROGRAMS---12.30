#include<stdio.h>
int main(){

    int studentId = 111;//int
    char studentName[] = "Jayanti Thakor"; //string
    char courseName[] = "Full Stack Development"; //string
    double coursePrice = 46998.99;//double
    float duration = 9.5;//float
    char grade = 'A';//char


    printf("\n\n||---=== STUDENT INFO ===---||");
    printf("\nstudentId:%d",studentId);
    printf("\nstudentName:%s",studentName);
    printf("\ncourseName:%s",courseName);
    printf("\ncoursePrice:%.2lf",coursePrice);
    printf("\nDuration:%.1f months.",duration);
    printf("\nGrade:%c",grade);

    return 0;
}