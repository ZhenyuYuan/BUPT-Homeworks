#include <stdio.h>
#include <string.h>
struct Student 
{
	char Name[20];
	char StudentNumber[20];
	int Score;
};
typedef struct Student STUDENT;

void DeleteRecord (FILE * fptr, int);    

main()
{
	int n;
	FILE * aPtr;      	
	if ((aPtr=fopen ("file1.dat", "w+"))== NULL)
	  printf("FAIL!");
    else
    {
	  fread(&n, sizeof (int), 1, aPtr);
      DeleteRecord (aPtr, n);
    }  
	fclose (aPtr);    
	return 0;
}

void DeleteRecord (FILE * fPtr, int n)
{	
	int i=0,b=0;
	char StudentNumber[20];
	STUDENT student[100];
	fseek (fPtr, sizeof (int), SEEK_SET);
	for (i=0; !feof(fPtr); i++)
		fread (&student[i], sizeof (STUDENT), 1, fPtr);	
	printf ("Please input the studentnumber of the student you want to delete :");   
	scanf ("%s", StudentNumber);
	fread (&student[0], sizeof (STUDENT), 1, fPtr);	
	if (strcmp (student[0].StudentNumber, StudentNumber)!=0)
	{    
	    i=1;
		while (b!=1 && !feof (fPtr) ) 
		   {fread (&student[i], sizeof (STUDENT), 1, fPtr);
			if(strcmp(student[i].StudentNumber,StudentNumber)==0)
				b=1;
			else 
			    i++;
		   }
  	   }
	else 
	  b=1;  
	if (b==1)
    {
	   if(i=n-1)
	     n=n-1;	
	   else if(i<n-1) 
       {  while (i<=n-2) 
          {   student[i]=student[i+1];
			  i++;
    	   }
			n=n-1;
        }		
     }
	for (i=0;i<=n-1;i++)
		fwrite (&student[i], sizeof (STUDENT), 1, fPtr);
	
}

