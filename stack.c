typedef struct
{
	int curr_x;
	int curr_y;
	int wall_check;

}VA_Action;

typedef struct
{
	int x;
	int y;
}VA_Memory;


int top=-1,VA_memory[Mem_size];

void push
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

void pop
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

Void clear
{

};

Int CWL
{

};

Int CWR
{

};

Int CWF
{

};

Int CWB
{

};

