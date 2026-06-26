#include<stdio.h>
int main(){
    int studentId = 112;//store numbers // %d
    char studentName[] = "Jayanti Thakor";//string // %s
    float percentage = 98.55; // store real numbers // %f
    char grade = 'A'; // Store single character // %c
    double courseFees = 5444.33; // %lf

    printf("\n\n||---==== STUDENT INFO ====---||");
    printf("\n\tstudentId:%d",studentId);
    printf("\n\tstudentName:%s",studentName);
    printf("\n\tpercentage:%f",percentage);
    printf("\n\tGrade:%c",grade);
    
    return 0;

}