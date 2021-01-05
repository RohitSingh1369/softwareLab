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
			return 1;
		}
	}	
return 0;
}

int checkColumn(char maze[9][9],int column, char num)
{
	int k=0;
	for(int i=0; i<9; i++)
	{
		if(maze[i][column] == '.'){
			continue;
		}
		else if(maze[i][column] == num){
			cout << "\nError!!! Not Correct Number!\n";
			return 1;
		}
	}	
return 0;
}

int checkSquare(char maze[9][9],int row, int column, char num)
{
	int r_strt = 3*(row/3);
	int c_strt = 3*(column/3);
	int k=0;
	for(int i = r_strt; i < r_strt+3; i++)
	{
		for(int j = c_strt; j < c_strt+3; j++)
		{
			if(maze[i][j] == '.'){
				continue;
			}
			else if(maze[i][j] == num){
				cout << "\nError!!! Not Correct Number!\n";
				return 1;
			}	
		}
	}
		
return 0;
}

void checkSudoku(char maze[9][9],int row,int column, char num)
{
	if(maze[row][column] == '.')
	{
		if(checkRow(maze,row,num)==1){
			return;
		}
		
		if(checkColumn(maze,column,num)==1){
			return;
		}	
		
		if(checkSquare(maze,row,column,num) == 1){
			return;
		}
		cout<<"\nEntered Number is Correct\n";
	}
	else
	{
		cout << "\nSelected Box is Not Empty!\n\n";
	
	}	

}

int main()
{
    
    ifstream in;
    in.open("sudoku3.txt");
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
    cout<<"SUDOKU:"<<endl;
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
	    cout << "\nSelect The Empty Box row, column: " ;
	    cin >> row;
	    cin >> column;
	    cout << "\nEnter the Number You Want to Fill: ";
    	    cin >> num; 
    	    
    checkSudoku(maze,row,column,num);
return 0;
}
