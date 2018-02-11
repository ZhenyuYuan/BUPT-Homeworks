#include <stdio.h>
#include <string.h>
struct Student 
{
	char Name[20];
	char StudentNumber[20];
	int Score;
};

typedef struct Student STUDENT;

void RankRecord (FILE *, int);

main()
{
    int n;
	FILE * aPtr;           
	if ((aPtr = fopen ("file1.dat", "r")) != NULL) 
	   {fread (&n, sizeof (int), 1, aPtr);
		RankRecord (aPtr, n);
       }
	else  
	    printf ("FAIL!");         
	fclose (aPtr);               
	return 0;
}

void RankRecord (FILE * fPtr, int n)
{
	int i = 0,j;
	FILE * fPtr2;
	STUDENT student[100], b;
	for(i=0; !feof(fPtr);i++)
		fread (&student[i], sizeof (STUDENT), 1, fPtr);	
	for(i=1;i<=n-1; i++)
		{
		   for(j=0;j<=n-1-j;j++) 
		   {if(student[i-1].Score<student[i].Score)
		       {b=student[i-1];    
				student[i-1]=student[i];
				student[i]=b;
			   }
		   }
	    }
	for(i=1;i<=n-1;i++)
		for (j=0;j<=n-1-j;j++) 
		   {if (student[i-1].Score == student[i].Score && strcmp (student[i-1].StudentNumber, student[i].StudentNumber)) 
			   {b=student[i-1];
				student[i-1]=student[i];
				student[i]=b;
		       }
		   }
	for(i=0;i<=n-1;i++)
		printf("%s %s %d\n", student[i].Name, student[i].StudentNumber, student[i].Score);
	if((fPtr2=fopen("file2.dat", "w"))==NULL) 
	   printf ("FAIL!");        
    else if((fPtr2=fopen("file2.dat", "w"))!= NULL) 
    {
	    fwrite(&n,sizeof (int),1,fPtr2);
		for(i=0;i<=n-1;i++)
			fwrite(&student[i],sizeof (STUDENT),1,fPtr2);
	   }

}
