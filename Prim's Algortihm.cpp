#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Prim's Algorithm for minimum spanning tree\n\n";
	cout << "Enter number of vertices in graph\n";
	cin >> n;
	int G[n][n];
	int flag[n];
	int ST[n][n];
	int edges;
	int i,j,x,y,min;
	cout << "Enter the weighted matrix of graph\n";
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			cin >> G[i][j];
		}
	}
	for(i = 0;i < n;i++){
		flag[i] = false;
	}
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			ST[i][j] = 0;
		}
	}
	flag[0] = true;
	edges = 1;
	while(edges < n){
		min = 10000;
		for(i = 0;i < n;i++){
			if(flag[i] == true){
				for(j = 0;j < n;j++){
					if(flag[j] == false){
						if(min > G[i][j]){
							min = G[i][j];
							x = i;
							y = j;
						}
					}
				}
			}
		}
		ST[x][y] = 1;
		flag[y] = true;
		edges = edges + 1;
	}
	
    cout << "Minimum Spanning Tree is : \n\n";
    for(i = 0;i < n;i++){
    	for(j = 0;j < n;j++){
    		cout << ST[i][j] << "\t";
		}
		cout << "\n";
	}
	return 0;
}
