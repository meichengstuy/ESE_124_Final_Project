#define MAX_ACTIONS 25
#define MAX_SIZE 15
#include <stdio.h>
#include <stdlib.h>

int num_step = 0, m;
int left = 0,right = 0,up =0, down = 0;

typedef struct
{
	int curr_x;
	int curr_y;
	int check_left;
	int check_right;
	int check_down;
	int check_up;

}VA_Action;

typedef struct
{
	int x;
	int y;
}VA_Memory;


int top =-1;
VA_Memory Mike_Memory[MAX_SIZE];
VA_Action Mike_Action[MAX_ACTIONS];

void push(int x, int y)
	{
	
	    if (top == MAX_SIZE - 1)
	    {
	        printf("\nOverflow!!");
	    }
	    else
	    {
	        top = top + 1;
	        Mike_Memory[top].x = x;
	        Mike_Memory[top].y = y;
	    }
	
	};

VA_Memory pop(){
	if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        top = top - 1;
        return Mike_Memory[top+1];																																													
    }

}


VA_Memory peek (){
	return Mike_Memory[top];	
}

void clear()
{
	while (top!=-1)
	{
    	pop(Mike_Memory);
		top-=1;
	}
};


void CWL(char *mazeArray[])
{
	m=0;
	
	while ((mazeArray[Mike_Action[num_step].curr_x-1][Mike_Action[num_step].curr_y]) != '*')
	{
		
		if (mazeArray[Mike_Action[num_step].curr_x-1][Mike_Action[num_step].curr_y] == 'x')
		{
			left = 1;
			Mike_Action[num_step].check_left==m;
		}
		else
		{
			m+=1;
		}
	}
};

void CWR(char *mazeArray[])
{
	m=0;
	
	while (mazeArray[Mike_Action[num_step].curr_x+1][Mike_Action[num_step].curr_y] != '*')
	{
		if (mazeArray[Mike_Action[num_step].curr_x+1][Mike_Action[num_step].curr_y] == 'x')
		{
			right = 1;
			Mike_Action[num_step].check_right==m;
		}
		else
		{
			m+=1;
		}
	}
};

void CWD(char *mazeArray[])
{
	m=0;
	
	while (mazeArray[Mike_Action[num_step].curr_x][Mike_Action[num_step].curr_y-1] != '*')
	{
		if (mazeArray[Mike_Action[num_step].curr_x][Mike_Action[num_step].curr_y-1] == 'x')
		{
			down = 1;
			Mike_Action[num_step].check_down==m;
		}
		else
		{
			m+=1;
		}
	}
};

void CWU(char *mazeArray[])
{	
	m=0;
	
	while (mazeArray[Mike_Action[num_step].curr_x][Mike_Action[num_step].curr_y+1] != '*')
	{
		if (mazeArray[Mike_Action[num_step].curr_x][Mike_Action[num_step].curr_y+1] == 'x')
		{
			up = 1;
			Mike_Action[num_step].check_up==m;
		}
		else
		{
			m+=1;	
		}
	}
};
	       
void mark(char *mazeArray[])
{
	mazeArray[Mike_Action[num_step].curr_x][Mike_Action[num_step].curr_y] == 'x';
};

int check_good_deed(char *mazeArray[]){
	char c =mazeArray[Mike_Action[num_step].curr_x][Mike_Action[num_step].curr_y];
	int current = atoi(c);
	
	if (current > 0 && current < 10){
		return current;
	}
	else 
		return 0;
}

	       
int move_F(char *mazeArray[])
{
	if (*mazeArray[Mike_Action[num_step+1].curr_x,Mike_Action[num_step+1].curr_y + 1] !='*')
	    {
		num_step+=1;
		Mike_Action[num_step].curr_x = Mike_Action[num_step+1].curr_x;
		Mike_Action[num_step].curr_y = Mike_Action[num_step+1].curr_y + 1;
	    }
	check_good_deed(mazeArray);
};

int move_B(char *mazeArray[])
{
	if (*mazeArray[Mike_Action[num_step+1].curr_x,Mike_Action[num_step+1].curr_y - 1] !='*')
	    {
		num_step+=1;
		Mike_Action[num_step].curr_x = Mike_Action[num_step+1].curr_x;
		Mike_Action[num_step].curr_y = Mike_Action[num_step+1].curr_y - 1;
		}
	check_good_deed(mazeArray);
};

int move_R(char *mazeArray[])
{
	if (*mazeArray[Mike_Action[num_step+1].curr_x+1,Mike_Action[num_step+1].curr_y] !='*')
	    {
		num_step+=1;
		Mike_Action[num_step].curr_x = Mike_Action[num_step+1].curr_x + 1;
		Mike_Action[num_step].curr_y = Mike_Action[num_step+1].curr_y;
	}
	check_good_deed(mazeArray);
};

int move_L(char *mazeArray[])
{
	if (*mazeArray[Mike_Action[num_step+1].curr_x-1,Mike_Action[num_step+1].curr_y] !='*')
	    {
		num_step+=1;
		Mike_Action[num_step].curr_x = Mike_Action[num_step+1].curr_x -1;
		Mike_Action[num_step].curr_y = Mike_Action[num_step+1].curr_y;
	}
	check_good_deed(mazeArray);
};

int BJPI(char *mazeArray[])
{
	int sum = 0;
	
	if (left){
		for (int i = 0; i < Mike_Action[num_step].check_left; i++)
			sum += move_L(mazeArray);
		left = 0;
	}
	
	else if (right){
		for (int i = 0; i < Mike_Action[num_step].check_right; i++)
			sum += move_R(mazeArray);
		right = 0;
	}
	else if (up){
		for (int i = 0; i < Mike_Action[num_step].check_up; i++)
			sum += move_F(mazeArray);
		up = 0;
	}
	else if (down){
		for (int i = 0; i < Mike_Action[num_step].check_down; i++)
			sum += move_B(mazeArray);
		down = 0;
	}
	return sum;
};
int CJPI(char *mazeArray[])
{
	int sum = 0;
	if (left){
		sum += move_L(mazeArray);
		left = 0;
	}
	
	else if (right){
		sum += move_R(mazeArray);
		right = 0;
	}
	else if (up){
		sum += move_F(mazeArray);
		up = 0;
	}
	else if (down){
		sum += move_B(mazeArray);
		down = 0;
	}
	return sum;
};

void backtrack(){
	num_step += 1;
	Mike_Action[num_step].curr_x = pop().x;
	Mike_Action[num_step].curr_y = pop().y;
}	
