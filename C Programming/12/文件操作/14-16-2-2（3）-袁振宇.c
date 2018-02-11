#include <stdio.h>
#include <string.h>
struct Student
 {
	char Name[20];
	char Studentnumber[20];
	int Score;
};
typedef struct Student STUDENT;

void AddRecord (FILE *, int);

main(){
	int n;
	FILE * aPtr;    
	if ((aPtr = fopen ("file1.dat", "ab")) != NULL)    
    {   printf ("Please input the number of student:");
		scanf ("%d", &n);
		fwrite (&n, sizeof (int), 1, aPtr);
		printf ("Please input the information of the students:\n");
		AddRecord (aPtr, n);
    }
	else    
	    printf ("FAIL!");
	fclose(aPtr);            
	return 0;
}

void AddRecord (FILE * fPtr, int n){
	int i=1;
	STUDENT newRecord;
	while (i<=n){   
	    scanf ("%s", newRecord.Name);
		scanf ("%s", newRecord.Studentnumber);
		scanf ("%d", &newRecord.Score);
		fwrite (&newRecord, sizeof (STUDENT), 1, fPtr);
		i++;
    }
}
