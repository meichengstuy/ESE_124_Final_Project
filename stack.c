#define MAX_SIZE 15

int num_step = 0, m;
int left = right = up = down = 0;

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


int top =-1 ,VA_memory[MAX_SIZE];

void push(int x, int y)
	{
	
	    if (top == MAX_SIZE - 1)
	    {
	        printf("\nOverflow!!");
	    }
	    else
	    {
	        top = top + 1;
	        VA_Memory[top].x = x;
	        VA_Memory[top].y = y;
	    }
	
	};

VA_memory pop(){
	if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        top = top - 1;
        return VA_memory[top+1];																																													
    }

}


int peek (){
	return VA_memory[top];	
}

void clear()
{
while (VA_memory[top] != NULL)
    pop(theStack);
};


void CWL(char mazeArray[])
{
	m=0;
	
	while (mazeArray[x-1][y] != '*'
	{
		
		if (mazeArray[x-1][y] == 'x')
		{
			left = 1;
			VA_Action.check_left[num_step]==m;
		}
		else
		{
			m+=1;
		}
	}
};

void CWR(char mazeArray[])
{
	m=0;
	
	while (mazeArray[x+1][y] != '*'
	{
		if (mazeArray[x+1][y] == 'x')
		{
			right = 1;
			VA_Action.check_right[num_step]==m;
		}
		else
		{
			m+=1;
		}
	}
};

void CWD(char mazeArray[])
{
	m=0;
	
	while (mazeArray[x][y-1] != '*'
	{
		if (mazeArray[x][y-1] == 'x')
		{
			down = 1;
			VA_Action.check_down[num_step]==m;
		}
		else
		{
			m+=1;
		}
	}
};

void CWU(char mazeArray[])
{	
	m=0;
	
	while (mazeArray[x][y+1] != '*'
	{
		if (mazeArray[x][y+1] == 'x')
		{
			up = 1;
			VA_Action.check_up[num_step]==m;
		}
		else
		{
			m+=1;	
		}
	}
};
	       
void mark(char mazeArray[])
{
	mazArray[VA_Action[num_step].curr_x][VA_Action[num_step].curr_y] == 'x';
};
	       
void move_F(char mazeArray[])
{
	if (mazeArray[VA_Action[num_step+1].curr_x,VA_Action[num_step+1].curr_y + 1] !='*')
	    {
		num_step+=1;
		VA_Action[num_step].curr_x = VA_Action[num_step+1].curr_x;
		VA_Action[num_step].curr_y = VA_Action[num_step+1].curr_y + 1;
	    }
};

void move_B(char mazeArray[])
{
	if (mazeArray[VA_Action[num_step+1].curr_x,VA_Action[num_step+1].curr_y - 1] !='*')
	    {
		num_step+=1;
		VA_Action[num_step].curr_x = VA_Action[num_step+1].curr_x;
		VA_Action[num_step].curr_y = VA_Action[num_step+1].curr_y - 1;
		}
};

void move_R(char mazeArray[])
{
	if (mazeArray[VA_Action[num_step+1].curr_x+1,VA_Action[num_step+1].curr_y] !='*')
	    {
		num_step+=1;
		VA_Action[num_step].curr_x = VA_Action[num_step+1].curr_x + 1;
		VA_Action[num_step].curr_y = VA_Action[num_step+1].curr_y;
	}
};

void move_L(char mazeArray[])
{
	if (mazeArray[VA_Action[num_step+1].curr_x-1,VA_Action[num_step+1].curr_y] !='*')
	    {
		num_step+=1;
		VA_Action[num_step].curr_x = VA_Action[num_step+1].curr_x -1;
		VA_Action[num_step].curr_y = VA_Action[num_step+1].curr_y;
	}
};

void BJPI()
{
	
	if (left){
		for (int i = 0; i < VA_Action.check_left[num_step], i++)
			move_L();
		left = 0;
	}
	
	else if (right){
		for (int i = 0; i < VA_Action.check_right[num_step], i++)
			move_R();
		right = 0;
	}
	else if (up){
		for (int i = 0; i < VA_Action.check_up[num_step], i++)
			move_F();
		up = 0;
	}
	else if (down){
		for (int i = 0; i < VA_Action.check_down[num_step], i++)
			move_B();
		down = 0;
	}
};
void CJPI()
{
	if (left){
		move_L();
		left = 0;
	}
	
	else if (right){
		move_R();
		right = 0;
	}
	else if (up){
		move_F();
		up = 0;
	}
	else if (down){
		move_B();
		down = 0;
	}
};

void backtrack(){
	num_step += 1;
	VA_Action[num_step].curr_x = pop().x;
	VA_Action[num_step].curr_y = pop().y;
}	

int check_good_deed(){
	int x = VA_Action[num_step].curr_x;
	int y = VA_Action[num_step].curr_y;
	
	int current = atoi(maze[x][y]);
	
	if (current > 0 && current < 10){
		return current;
	}
}
