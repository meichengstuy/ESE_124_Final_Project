int num_step=0;

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


int top=-1,VA_memory[Mem_size];

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

void clear()
{

};

int CWL()
{
	while (maze[x-1][y] != '*'
	{
		if (maze[x-1][y] == 'x')
		{
			VA_Action.check_left[num_step]==1;
		}
		else
		{
			VA_Action.check_left[num_step]==0;
		}
	}
};

int CWR()
{
	while (maze[x+1][y] != '*'
	{
		if (maze[x+1][y] == 'x')
		{
			VA_Action.check_right[num_step]==1;
		}
		else
		{
			VA_Action.check_right[num_step]==0;
		}
	}
};

int CWD()
{
	while (maze[x][y-1] != '*'
	{
		if (maze[x][y-1] == 'x')
		{
			VA_Action.check_down[num_step]==1;
		}
		else
		{
			VA_Action.check_down[num_step]==0;
		}
	}
};

int CWU()
{
	while (maze[x][y+1] != '*'
	{
		if (maze[x][y+1] == 'x')
		{
			VA_Action.check_up[num_step]==1;
		}
		else
		{
			VA_Action.check_up[num_step]==0;
		}
	}
};
	       
void mark()
{
	maze[VA_Action[].curr_x][VA_Action[].curr_y] == 'x';
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
};
void CJPI()
{
};
