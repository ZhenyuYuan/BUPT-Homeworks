#include <iostream>
#include <cstdlib>
using namespace std;

const int maxn = 1000;
int a[maxn][maxn],b[maxn];              
//a为循环赛日程表数组，b为辅助数组，在n/2为奇数时辅助填充日程表 

bool IsOdd(int n)                  //判断参赛选手数n是否为奇数 
{
     return n&1; //奇数返回1
}

/*
	算法copy将左上角递归计算出的小块中的所有数字按其
相对位置抄到右下角，将左上角小块中所有数字加n/2，后
按其相对位置抄到左下角和右上角，就完成了比赛日程表。
*/
void Copy(int n)                 	//若n为偶数则直接拷贝数组 
{
    int m=n/2;
    for(int i=1; i<=m; i++)
    	for(int j=1; j<=m; j++)
    	{
        	a[i][j+m] = a[i][j]+m;	//通过找规律，拷贝相应位置的元素 
        	a[i+m][j] = a[i][j+m];		
    		a[i+m][j+m] = a[i][j];  //将左上角相应位置的数赋给右下角
   		}
}

void CopyOdd(int n)                 //处理n/2为奇数的情况 
{
	int m=n/2;
	for(int i=1; i<=m; i++)
	{
    	b[i]=m+i;
		b[m+i]=b[i];
	}
	for(int i=1; i<=m; i++)
	{
   		for(int j=1; j<=m+1 ;j++)
    	{
            if(a[i][j]>m)
			{
				a[i][j] = b[i];
				a[m+i][j] = (b[i]+m)%n;
			}
            else 
				a[m+i][j] = a[i][j]+m;
    	}
    	for(int k=2; k<=m;k++)
    	{
      		a[i][m+k]=b[i+k-1];
      		a[b[i+k-1]][m+k]=i;
    	}
	}
}

void MakeCopy(int n)       		//根据情况进行元素拷贝 
{
     if(n/2>=2 && IsOdd(n/2))
	 	CopyOdd(n);
     else 
	 	Copy(n);
}

void Tournament(int n)
{
	if(n==1)
 		a[1][1]=1;
    else if(IsOdd(n))
	 	Tournament(n+1);
    else 
	{
		Tournament(n/2);
    	MakeCopy(n);
	}
}

int main()
{
    int n;
    bool b = 0;              //作为判断参赛选手是否为奇数的标记 
    cout << "请输入参赛队员个数n(n>=2): ";
    cin  >> n;
	while(n < 2)
	{
		cout << "输入不合法，请输入大于或等于2的整数!" << endl;
		cout << "请输入参赛队员个数n(n>=2): ";
		cin  >> n;
	}
        
    Tournament(n);
    if(IsOdd(n))  //n为奇数
    {
    	n++;
    	cout << "0号选手为虚拟增加，实际编排赛程时不予考虑。" << endl; 
    	b = 1;
    }   
    
	for(int i=1; i<=n; i++)
    {
    	for(int j=1; j<=n; j++)
    	{
    		
			if(j == 1)
    		    cout << "选手";
			if(a[i][j]==n && b)
				a[i][j] = 0; 
			cout<<a[i][j]<< "  ";
    	}		
    	cout<<endl;
    }
    
    system("pause");
    return 0;
}
