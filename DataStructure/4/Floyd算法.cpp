#include<iostream>
#include<cstdlib>
using namespace std;

#define INFINITY 1000               //最大值
#define MAX_VERTEX_NUM 100          //最大顶点数
#define TRUE  1
#define FALSE 0  

typedef enum{                       //四种图类型 
	DG, DN, UDC, UDN
}GraphKind; 

typedef struct MGraph{            
    string vexs[MAX_VERTEX_NUM];      //顶点向量
	int  arcs[MAX_VERTEX_NUM][MAX_VERTEX_NUM];    //邻接矩阵
	int  vexnum, arcnum;            //图当前顶点数和弧数
	GraphKind kind;                 //图的种类标志 
}MGraph;

void ShortestPath_Floyd(MGraph G, int D[][MAX_VERTEX_NUM], string P[][MAX_VERTEX_NUM])
{
	int v, w, k;
	for(v = 1; v <= G.vexnum; v++)
		for(w = 1; w <= G.vexnum; w++)
		{
			D[v][w] = G.arcs[v][w];
			P[v][w] = '*';
			if(D[v][w] < INFINITY)
			    P[v][w] = G.vexs[v] + G.vexs[w];
		}	
	for(k = 1; k <=G.vexnum; k++)
		for(v = 1; v <= G.vexnum; v++)
			for(w = 1; w <= G.vexnum; w++)
				if(D[v][k] + D[k][w] < D[v][w])
				{
					D[v][w] = D[v][k] + D[k][w];
					string S = P[k][w];
					S = S.substr(1,S.length()-1);
					P[v][w] = P[v][k] + S;
				}	    
}
int LocateVex(MGraph G, string vex)
{
	for(int i=1; i <=G.vexnum; i++)
	{
		if( vex == G.vexs[i])
		    return i;
	}
	return 0;
}

int main()
{
	MGraph G;
	int D[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
	string P[MAX_VERTEX_NUM][MAX_VERTEX_NUM], S;
	int v, w, k, weight;
	string V1, V2;
	 
	cout << "请输入图的顶点数和弧数:" << endl;
	cin  >> G.vexnum >> G.arcnum;
	if(G.vexnum >= MAX_VERTEX_NUM)
    {
    	cout << "顶点过多(输入100以下个顶点),请重新输入顶点数和弧数:";
        cin  >> G.vexnum >> G.arcnum;
    }     
	cout << "请按顶点序号顺序输入顶点:" << endl;
	for(v = 1; v <= G.vexnum; v++)
	   cin >> G.vexs[v];

	for(v = 1; v <= G.vexnum; v++)             //初始化邻接矩阵 
	    for(w = 1; w <= G.vexnum; w++)
	    {
	    	if(v == w)
	        	G.arcs[v][w] = 0;
	        else
	            G.arcs[v][w] = INFINITY;
	    }
	   
    cout << "请输入各弧尾弧头及其路径的权值:" << endl;  
	for(k = 1; k <= G.arcnum; k++)             //输入相关联的顶点及其权值 
	{
		cin >> V1 >> V2 >> weight;
		v = LocateVex(G, V1);
		w = LocateVex(G, V2);
		G.arcs[v][w] = weight;
	}    

	ShortestPath_Floyd(G, D, P);
			
    cout << "\n每一对顶点的最短路径是:" << endl;
    for(v = 1; v <= G.vexnum; v++)
		for(w = 1; w <= G.vexnum; w++)
		    if(v != w && D[v][w] != INFINITY)
		    {
		    	cout << G.vexs[v] << G.vexs[w] << "间的最短路径为: " << P[v][w] 
			         << "\t\t\t" << "长度为: " << D[v][w] << endl;
		    }
		
	system("pause");
	return 0;
}
