#include <stdio.h>
struct Student
{
	char Name[20];
	char StudentNumber[20];
	int Score;
};
typedef struct Student STUDENT;

void InputRecord (FILE * fPtr, int n);

main()
{
	int n;
	FILE * aPtr;	
	if ((aPtr = fopen ("file1.dat", "wb")) != NULL) 
    {     
	  printf ("Please input the number of student:");      
	  scanf ("%d", &n);
	  fwrite (&n, sizeof (int), 1, aPtr);
	  printf ("Please input the information of the students:\n");
	  InputRecord (aPtr, n);
     } 
	else printf ("FAIL!");     	
	fclose (aPtr);           
}

void InputRecord (FILE * fPtr, int n)
{   
    int i =1;
	STUDENT newRecord;
	while (i<=n) 
    {      
	  scanf ("%s", newRecord.Name);   
	  scanf ("%s", newRecord.StudentNumber);   
	  scanf ("%d", &newRecord.Score);   
	  fwrite (&newRecord, sizeof (STUDENT), 1, fPtr);
	  i++;    
    }
}

