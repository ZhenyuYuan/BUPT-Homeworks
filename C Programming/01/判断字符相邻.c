#include<stdio.h>
main()
{
      char a;
      char b;
      char c;
      printf("please input three char:\n");
      scanf("%c%c%c",&a,&b,&c);
    if(a>='a',a<='z',a>='A',a<='Z',b>='a',b<='z',b>='A',b<='Z',c>='a',c<='z',c>='A',c<='Z')
       {
       if(a-b==-1,b-c==-1)
              printf("the letters are adjacent with each other.\n");
         else
              printf("the letters are not adjacent with each other.\n");
      }
	else
        printf("the letters are not adjacent with each other.\n");
      system("pause");
      return 0;
}
