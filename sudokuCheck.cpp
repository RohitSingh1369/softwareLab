#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

char maze[9][9];

int checkRow(char maze[9][9],int row, char num)
{
	int k=0;
	for(int j=0; j<9; j++)
	{
		if(maze[row][j] == '.'){
			continue;
		}
		else if(maze[row][j] == num){
			cout << "\nError!!! Not Correct Number!\n";
			return 0;
		}
	}
	
	
	

}

void checkSudoku(char maze[9][9],int row,int column, char num)
{
	if(maze[row][column] == '.')
	{
		if(checkRow(maze,row,num)==0){
			return;
		}
			
		
	}
	else
	{
		cout << "\nSelected Box is Not Empty!\n\n";
	
	}	

}

int main()
{
    
    ifstream in;
    in.open("maze.txt");
    if(!in)
    {
        cout<<"File not opened";
        exit(0);
    }
    int rw,col;
    in>>rw;
    in>>col;
    for(int i=0;i<rw;i++)
    {
        for(int j=0;j<col;j++)
        {
            in>>maze[i][j];
        }
    }
    cout<<"MAZE"<<endl;
    for(int i=0;i<rw;i++)
    {
        for(int j=0;j<col;j++)
        {
                cout<<maze[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    int row, column;
    char num;
	    cout << "\nAgain Select The Empty Box row, column: " ;
	    cin >> row;
	    cin >> column;
	    cout << "\nEnter the Number You Want to Fill: ";
    	    cin >> num; 
    	    
    	    checkSudoku(maze,row,column,num);

}
