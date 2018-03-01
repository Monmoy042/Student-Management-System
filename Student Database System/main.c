#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int cgpa(int);
int scholarship(float , float , float );
int tutionfee(int);
int routine(int);
int gres(int);
int facultyevaluation(int);
struct
{
    int roll_no;
    char firstname[20];
    char lastname[20];
    int mark;
}student;

int main()
{
    system ("Color F0");
    float add=0,ex,ans; // For CGPA
    int t; // For CGPA
    float g1,g2,g3,d=0.0; // For Scholarship
    int i,subnum,tution,total=0,fee; //For Tution Fee
    char S[20],week[10];//Exam Day
    int sec,room;//Exam Day
     int grade,v; //Grade Result
     char k3[10];
    int k1,m;
    int l,k2,sum=0,sum1=0,sum2=0,sum3=0,sum4=0;
    int flag,choice,shift,rollnumber,found,continu,length;
    char studentname[20];
    printf("\t\t\tSTUDENT DATABASE SYSTEM\n\t\t\tCreated By: \n\t\t\tKhaled Md. Saifullah\n\t\t\tRifat Hossain\n\n\n");
    FILE *fp;
    printf("STUDENT DATABASE SYSTEM\n\n");
    Label1:
          printf("1> Store a new record in database\n");
          printf("2> Search a student record by Student First Name\n");
          printf("3> Check CGPA\n");
          printf("4> Check Scholarship\n");
          printf("5> Check tuition fee\n");
          printf("6> Check Exam Day\n");
          printf("7> Check Grade Result of nth students\n");
          printf("8> Faculty Evaluation\n");
          printf("9> Exit\n\n\n");
          printf("Enter your choice \n");
          scanf("%d",&choice);
      switch(choice)
      {
       case  1:
       Label2:
            printf("\nEnter Student Details:\n\nRoll number: ");
            scanf("%d",&student.roll_no);
            printf("\nFirst Name:");
            scanf("%s",student.firstname);
            printf("\nLast name:");
            scanf("%s",student.lastname);
            printf("\nMark(0 - 100 ) : ");
            scanf("%d",&student.mark);
            fp=fopen("studentfile.txt","a+");
            fprintf(fp,"\n%d\t%s\t%s\t%d\t",student.roll_no,student.firstname,student.lastname,student.mark);
            fclose(fp);
            printf("\nA student record has been added successfully.\n\n");
            printf("\n1-> Wish to add another record to database");
            printf("\n2-> Wish to move to Main Menu");
            printf("\n3-> Exit from Program\n");
            scanf("%d",&shift);
            if(shift==1)
            goto Label2;
            if(shift==2)
            goto Label1;
            if(shift==3)
            break;
            if(shift!=1&&2&&3){
            printf("Exiting\n");
            break;
        }

       case 2:
       Label4:
            printf("\nEnter student first name: ");
            scanf("%s",&studentname);
            printf("Searching record with student name=%s\n",studentname);
            found=0;
            if((fp=fopen("studentfile.txt","r"))==NULL)
                {
                printf(" ! The File is Empty...\n\n");
                }
        else
        {
            while(!feof(fp)&& found==0){

                fscanf(fp,"\n%d\t%s\t%s\t%d\t",&student.roll_no,student.firstname,student.lastname,&student.mark);
                length = strlen(student.firstname);
                if(student.firstname[length]==studentname[length])
                found=1;
        }
            }
       if(found){

         printf("\nThe record is found.");
         printf("\nRoll no: %d\nName: %s\nSurname: %s\nMark: %d \n",student.roll_no,student.firstname,student.lastname,student.mark);
    }
       else
        {
         printf("Not found.\n\n");
        }
       Label5:
            printf("\n1-> Wish to search another record");
            printf("\n2-> Wish to move to Main Menu");
            printf("\n3-> Exit from Program\n");
            scanf("%d",&shift);
            if(shift==1)
            goto Label4;
            if(shift==2)
            goto Label1;
            if(shift==3)
            break;
            if(shift!=1&&2&&3){
            printf("\nEnter a valid choice\n");
            goto Label5;
    }

        case 3:
        Label6:
            printf("\nEnter the number of subject\n");
            scanf("%d",&t);
            ans=cgpa(t);
            printf("Your CGPA : %0.2f\n",ans);
            printf("\nA student record has been added successfully.\n\n");
            printf("\n1-> Want to add another record to database");
            printf("\n2-> Want to move to Main Menu");
            printf("\n3-> Exit from Program\n");
            scanf("%d",&shift);
            if(shift==1)
            goto Label2;
            if(shift==2)
            goto Label1;
            if(shift==3)
            break;
            if(shift!=1&&2&&3){
            printf("Exiting.\n");
            break;
        }
            case 4:
            Labe6 :
                printf("Enter last 3 semester's results of a student\n");
                scanf("%f%f%f",&g1,&g2, &g3);
                d=scholarship(g1,g2,g3);
                printf("\nA student record has been added successfully.\n\n");
                printf("\n1-> Want to add another record to database");
                printf("\n2-> Want to move to Main Menu");
                printf("\n3-> Exit from Program\n");
                scanf("%d",&shift);
                if(shift==1)
                goto Label2;
                if(shift==2)
                goto Label1;
                if(shift==3)
                break;
                if(shift!=1&&2&&3){
                printf("Exiting.\n");
                break;
    }
            case 5:
            Labe7 :
                printf("\nEnter the subject number\n");
                scanf("%d",&subnum);
                fee=tutionfee(subnum);
                printf("\nA student record has been added successfully.\n\n");
                printf("\n1-> Want to add another record to database");
                printf("\n2-> Want to move to Main Menu");
                printf("\n3-> Exit from Program\n");
                scanf("%d",&shift);
                if(shift==1)
                goto Label2;
                if(shift==2)
                goto Label1;
                if(shift==3)
                break;
                if(shift!=1&&2&&3){
                printf("Exiting.\n");
                break;
        }
        case 6:
        Label8:
            printf("Enter subject\n");
            scanf("%s",&S[20]);
            printf("Enter section\n");
            scanf("%d",&sec);
            room=routine(sec);
            printf("\nA student record has been added successfully.\n\n");
            printf("\n1-> Want to add another record to database");
            printf("\n2-> Want to move to Main Menu");
            printf("\n3-> Exit from Program\n");
            scanf("%d",&shift);
            if(shift==1)
            goto Label2;
            if(shift==2)
            goto Label1;
            if(shift==3)
            break;
            if(shift!=1&&2&&3){
            printf("Exiting.\n");
            break;
                    }

        case 7:
        Lebel9:
                 printf("Enter your obtained grade OR -1 to exit:\n");
                scanf("%d",&grade);
                v = gres (grade);
                 printf("\nA student record has been added successfully.\n\n");
            printf("\n1-> Want to add another record to database");
            printf("\n2-> Want to move to Main Menu");
            printf("\n3-> Exit from Program\n");
            scanf("%d",&shift);
            if(shift==1)
            goto Label2;
            if(shift==2)
            goto Label1;
            if(shift==3)
            break;
            if(shift!=1&&2&&3){
            printf("Exiting.\n");
            break;
                    }
       case 8:
           Label10:
           printf("Enter a number OR [-1] to exit\n");
           scanf("%d",&k1);
           m=facultyevaluation(k1);
            printf("\nA student record has been added successfully.\n\n");
            printf("\n1-> Want to add another record to database");
            printf("\n2-> Want to move to Main Menu");
            printf("\n3-> Exit from Program\n");
            scanf("%d",&shift);
            if(shift==1)
            goto Label2;
            if(shift==2)
            goto Label1;
            if(shift==3)
            break;
            if(shift!=1&&2&&3){
            printf("Exiting.\n");
            break;
                    }
       case 9:
       break;
       default :
            printf(" Sorry You Entered A Wrong Key\n");
            goto Label1;
    }
      return 0;
}
// Function For CGPA
int cgpa(int t)
{
int i,m;
float n,add=0,ex,c=0;
for(i=1 ; i<=t; i++){
printf("Enter the Obtained grade\n");
scanf("%f",&n);
printf("Enter the credits\n");
scanf("%d",&m);
c+=m;
add+=n*m;
ex=add/c;
    }
}
 // Function For Scholarship
int scholarship(float g1, float g2, float g3)
{
float avg=0.0,addition=0.0,min=3.8;
addition= g1 +g2 +g3;
avg=(addition/3.0);
if(avg>=min){
printf("Student eligible for scholarship\n");
    }
else
    {
printf("Sorry! Try next time\n");
    }
return 0;
}

// Function For Tuition Fee
int tutionfee(int subnum)
   {
int i,credit,tution,total=0;
char sub[100];
for(i=1;i<=subnum;i++){
printf("Enter the subject's name\n");
scanf("%s",&sub[i]);
printf("Enter the subject's credit number\n");
scanf("%d",&credit);
if(credit==1){
tution=5000;
     }
if(credit==3){
tution=15000;
     }
if(credit==4){
tution=20000;
     }
total+=tution;
    }
printf("%d Taka\n",total);
   }

// Function For Exam Day
int routine(int S)
{
switch(S)
{
case 1:
printf("Weekday: SR\n");
printf("Exam Day: R\n");
break;
case 2:
printf("Weekday: MW\n");
printf("Exam Day: W\n");
break;
case 3:
printf("Weekday: ST\n");
printf("Exam Day: S\n");
break;
case 4:
printf("Weekday: TR\n");
printf("Exam Day: T\n");
break;
default:
printf("You entered a wrong input\n");
break;
    }
}

//Grade Result Count
int gres(int grade)
{

    int A=0,B=0,C=0,D=0,Fail=0,pass=0;
    int count=0, count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0;
    while(grade!=-1){
        count+=1;
    if(grade>=97 && grade<=100){
    printf("You scored A+\n[Excellent! Keep it up.]\n",grade);
    count1+=1;
    }
    if(grade>=90 && grade<97){
    printf("You scored A\n[Excellent! Keep it up.]\n",grade);
    A+=1;
    }
    if(grade>=87 && grade<90){
    printf("You scored A-\n[Very Good! Carry on.]\n",grade);
    count2+=1;
    }
    if(grade>=83 && grade<87){
    printf("You scored B+\n[Good! Keep trying.]\n",grade);
    count3+=1;
    }
    if(grade>=80 && grade<83){
    printf("You scored B\n[Good! Keep trying.]\n",grade);
    B+=1;
    }
    if(grade>=77 && grade<80){
    printf("You scored B-\n[Good! Keep trying.]\n",grade);
    count4+=1;
    }
    if(grade>=73 && grade<77){
    printf("You scored C+\n[Fair! You should work hard.]\n",grade);
    count5+=1;
    }
    if(grade>=70 && grade<73){
    printf("You scored C\n[Fair! You should work hard.]\n",grade);
    C+=1;
    }
    if(grade>=67 && grade<70){
    printf("You scored C-\n[Fair! You should work hard.]\n",grade);
    count6+=1;
    }
    if(grade>=63 && grade<67){
    printf("You scored D+\n[Passing! You should practice a lot.]\n",grade);
    count7+=1;
    }
    if(grade>=60 && grade<63){
    printf("You scored D\n[Passing! You should practice a lot.]\n",grade);
    D+=1;
    }
    if(grade>=0 && grade<60){
    printf("Fail\n",grade);
    Fail+=1;
    printf("You must take this course again.\n");
    }
    if(grade>=60 && grade<=100){
    printf("Passed\n",grade);
    pass=A+B+C+D+count1+count2+count3+count4+count5+count6+count7;
    }
    else{
        printf("Please Enter your grade between 1 to 100.\n");
        }
    printf("Enter your obtained grade OR -1 to exit:\n");
    scanf("%d",&grade);
    }
    printf("Total A+          = %d\n",count1);
    printf("Total A            = %d\n",A);
    printf("Total A-           = %d\n",count2);
    printf("Total B+          = %d\n",count3);
    printf("Total B            = %d\n",B);
    printf("Total B-           = %d\n",count4);
    printf("Total C+          = %d\n",count5);
    printf("Total C            = %d\n",C);
    printf("Total C-           = %d\n",count6);
    printf("Total D+          = %d\n",count7);
    printf("Total D            = %d\n",D);
    printf("Total passers  = %d\n",pass);
    printf("Total Failures = %d\n",Fail);
    if(A>=3){
        printf("Course instructor will arrange a class party.\n");
    }
    else{
        printf("Students will arrange a class party.\n");
    }
}

// Function For Faculty Evaluation
int facultyevaluation(int k1)
{

    char k3[10];
    int l,k2,sum=0,sum1=0,sum2=0,sum3=0,sum4=0;
    while(k1!=-1){
    for(l=1;l<=k1;l++){
        printf("Enter the course code\n");
        scanf("%s",&k3[l]);
       printf("Enter the mark of evaluation[1,2,3,4,5]\n");
        scanf("%d",&k2);
        switch(k2)
    {
        case 1:
        printf("Excellent\n");
        sum+=1;
        break;
        case 2:
         printf("Very Good\n");
         sum1+=1;
         break;
         case 3:
         printf("Good\n");
         sum2+=1;
         break;
         case 4:
         printf("Fair\n");
         sum3+=1;
         break;
         case 5:
         printf("Poor\n");
         sum4+=1;
         break;
         case 6:
         default:
            printf("You entered wrong option\n");
            }
        }
    printf("Enter a number OR [-1] to exit\n");
    scanf("%d",&k1);
    }
    printf("Total number of option [1] =%d\n",sum);
    printf("Total number of option [2] =%d\n",sum1);
    printf("Total number of option [3] =%d\n",sum2);
    printf("Total number of option [4] =%d\n",sum3);
    printf("Total number of option [5] =%d\n",sum4);
    if(sum>=4)
    {
        printf("\nThe course instructor will be rewarded by the faculty.\n");
    }
    else
    {
        printf("\nKeep trying!\n");
    }
}

