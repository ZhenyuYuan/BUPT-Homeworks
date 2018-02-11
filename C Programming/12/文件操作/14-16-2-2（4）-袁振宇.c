#include <stdio.h>
#include <string.h>
struct Student
{
	char Name[20];
	char StudentNumber[20];
	int Score;
};
typedef struct Student STUDENT;

void UpdateRecord (FILE *, int);

main()
{
	int n;
	FILE * aPtr;      
	if ((aPtr = fopen ("file1.dat", "r+")) = NULL) 
  
	   printf ("FAIL!"); 
    else if((aPtr = fopen ("file1.dat", "r+")) != NULL) 
	{
		fread(&n, sizeof (int), 1, aPtr);
		UpdateRecord (aPtr, n);
	}	   	     
	fclose (aPtr);   
	return 0;
}

void UpdateRecord (FILE * fPtr, int n)
{
	int b=0;
	STUDENT TheStudent;
	char StudentNumber[25];
	FILE * fPtr_1;    
	printf ("Please input the ID of the student you want to renew:");
	scanf ("%s", StudentNumber);
	rewind (fPtr);
	fseek (fPtr, sizeof (int), SEEK_SET);
	fPtr_1 = fPtr;
	fread (&TheStudent, sizeof (STUDENT), 1, fPtr);
	if (strcmp (TheStudent.StudentNumber, StudentNumber) == 0)
	   b=1;
	else 
    {  while (b!=1&&!feof (fPtr)) 
         {  fPtr_1 = fPtr;
			fread (&TheStudent, sizeof (STUDENT), 1, fPtr);
			if (strcmp (TheStudent.StudentNumber, StudentNumber) == 0)
			b=1;
          }
    }
	
	if(b==1) 
	{
	   printf("Please input the new information,Name StudentNumber Score\n");
	   scanf("%s %s %d",TheStudent.Name,TheStudent.StudentNumber,&TheStudent.Score);
	   fwrite (&TheStudent, sizeof (STUDENT), 1, fPtr_1);
	}
	else
	    printf ("There is no this student.");	
	fclose (fPtr_1);
}

