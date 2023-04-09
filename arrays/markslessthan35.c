// Ques: Given an array of marks of students, if the mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array.]
// #include<stdio.h>
// int main(){
//     int marks[10] = {95, 90, 31, 25, 100, 50, 15, 89, 97, 30};
//     for(int i=0;i<10;i++){
//         if(marks[i]<35){
//             printf("%d ",i); 
//         }
//     }
//     return 0;
// }


// HOMEWORK: same question bs user se input lo
#include<stdio.h>
int main(){
    int l,ele;
    printf("Enter number of students : ");
    scanf("%d",&l);
    int marks[l];
    for(int q=0;q<l;q++){
        printf("Enter %d element : ",q+1);
        scanf("%d",&ele);
        marks[q] = ele;
    }
    //int marks[10] = {95, 90, 31, 25, 100, 50, 15, 89, 97, 30};
    for(int i=0;i<l;i++){
        if(marks[i]<35){
            printf("%d ",i); 
        }
    }
    return 0;
}