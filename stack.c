int num_step = 0, m;
int left = 0,right = 0,up = 0,down = 0;

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


int top =-1 ,VA_memory[Mem_size];

void push()
{
int x;

    if (top == Mem_size - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        VA_memory[top] = x;
    }

};

void pop()
{
if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", inp_array[top]);
        top = top - 1;
    }

};

int peek (){
	return VA_memory[top];	
}


void clear()
{
	VA_memory = [];
};

int CWL()
{
	m=0;
	left = 1;
	while (maze[x-1][y] != '*'
	{
		
		if (maze[x-1][y] == 'x')
		{
			VA_Action.check_left[num_step]==m;
		}
		else
		{
			m+=1;
		}
	}
};

int CWR()
{
	m=0;
	right = 1;
	while (maze[x+1][y] != '*'
	{
		if (maze[x+1][y] == 'x')
		{
			VA_Action.check_right[num_step]==m;
		}
		else
		{
			m+=1;
		}
	}
};

int CWD()
{
	m=0;
	down = 1;
	while (maze[x][y-1] != '*'
	{
		if (maze[x][y-1] == 'x')
		{
			VA_Action.check_down[num_step]==m;
		}
		else
		{
			m+=1;
		}
	}
};

int CWU()
{	
	m=0;
	up = 1;
	while (maze[x][y+1] != '*'
	{
		if (maze[x][y+1] == 'x')
		{
			VA_Action.check_up[num_step]==m;
		}
		else
		{
			m+=1;	
		}
	}
};
	       
void mark()
{
	maze[VA_Action[num_step].curr_x][VA_Action[num_step].curr_y] == 'x';
};
	       
void move_F()
{
	num_step+=1;
	VA_Action[num_step].curr_x = VA_Action[num_step+1].curr_x;
	VA_Action[num_step].curr_y = VA_Action[num_step+1].curr_y + 1;
};

void move_B()
{
	num_step+=1;
	VA_Action[num_step].curr_x = VA_Action[num_step+1].curr_x;
	VA_Action[num_step].curr_y = VA_Action[num_step+1].curr_y - 1;
};

void move_R()
{
	num_step+=1;
	VA_Action[num_step].curr_x = VA_Action[num_step+1].curr_x + 1;
	VA_Action[num_step].curr_y = VA_Action[num_step+1].curr_y;
};

void move_L()
{
	num_step+=1;
	VA_Action[num_step].curr_x = VA_Action[num_step+1].curr_x - 1;
	VA_Action[num_step].curr_y = VA_Action[num_step+1].curr_y;
};

void BJPI()
{
	if (left){
		for (int i = 0; i < VA_Action.check_left[num_step], i++)
			move_L();
		left = 0;
	}
	
	if (right){
		for (int i = 0; i < VA_Action.check_right[num_step], i++)
			move_R();
		right = 0;
	}
	if (up){
		for (int i = 0; i < VA_Action.check_up[num_step], i++)
			move_F();
		up = 0;
	}
	if (down){
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
	
	if (right){
		move_R();
		right = 0;
	}
	if (up){
		move_F();
		up = 0;
	}
	if (down){
		move_B();
		down = 0;
	}
};
