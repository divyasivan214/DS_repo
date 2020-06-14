#include<bits/stdc++.h> 
using namespace std;  
int n,m;
int isSafe(int M[][m], int row, int col, 
           bool visited[][m]) 
{ 
    return (row >= 0) && (row < n) && 
           (col >= 0) && (col < m) && 
           (M[row][col] && !visited[row][col]); 
} 

void DFS(int M[][m], int row, int col, 
         bool visited[][m], int &count) 
{ 
    static int rowNbr[] = {-1, -1, -1, 0, 0, 1, 1, 1}; 
    static int colNbr[] = {-1, 0, 1, -1, 1, -1, 0, 1}; 
    visited[row][col] = true; 
    for (int k = 0; k < 8; ++k) 
    { 
        if (isSafe(M, row + rowNbr[k], col + colNbr[k], 
                                              visited)) 
        { 
            count++; 
            DFS(M, row + rowNbr[k], col + colNbr[k], 
                                    visited, count); 
        } 
    } 
} 
  

int  findlarge(int M[][m]) 
{ 
    bool visited[n][m]; 
    memset(visited, 0, sizeof(visited)); 
    int result  = INT_MIN; 
    for (int i = 0; i < n; ++i) 
    { 
        for (int j = 0; j < m; ++j) 
        { 
            if (M[i][j] && !visited[i][j]) 
            {  
                int count = 1 ; 
                DFS(M, i, j, visited , count);  
                result = max(result , count); 
            } 
         } 
    } 
    return result ; 
} 
  
int main() 
{ 
    int t;
    cout<<"Enter no of testcase:"<<endl;
    cin>>t;
    while(t--)
    {
	cout<<"Enter n and m:"<<endl;
	cin>>n>>m;		
	int i,j;
	cout<<"Enter elements"<<endl;
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<findlarge(a); 
    }
    return 0; 
} 

