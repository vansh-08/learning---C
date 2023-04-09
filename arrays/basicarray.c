// #include<stdio.h>
// int main(){
//     // int arr[5] = {2,4,6,8,1};
//     // arr[4] = 100; // {2,4,6,8,100}
//     // arr[1] = 1; // {2,1,6,8,100}
//     // printf("%d",arr[-1]);
//     // float a[3] = {1.2,3.4,5.7};
//     // printf("%f",a[2]);
//     // char arr[4] = {'a','n','Y','%'};
//     // printf("%c",arr[3]);

//     // printf("Enter array lenght: ");
//     // int l;
//     // scanf("%d",&l);
//     // int c;
//     // int arr[l];
//     // for(int i=0;i<l;i++){
//     //     printf("Enter %d element: ",i);
//     //     scanf("%d",&c);
//     //     arr[i] = c;
//     // }
//     // for(int j=0;j<l;j++){
//     //     printf("%d ",arr[j]);
//     // }

//     // int c[3] = {1,2,3};
//     // printf("%d",c[0]);
//     int arr[5] = {1,1,2,1,1};
//     for(int i=0;i<5;i++){
//         printf("%p\n",&arr[i]);
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int i=0;
//     while(i<3)
//     i++;
//     printf("In while loop\n");
//     return 0;
// }





// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[1000];  
//     int i,vowels=0,consonants=0;
//     printf("Enter  the string : ");
//     gets(s);
//     for(i=0;s[i];i++)  
//     {
//         if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122)){
		
//             if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U') vowels++;
//             else consonants++;
//         }
//     }
//     printf("vowels = %d\n",vowels);
//     printf("consonants = %d\n",consonants);
//     return 0;
// }