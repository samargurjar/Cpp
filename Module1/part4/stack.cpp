#include <stdio.h>

class Stack
{
public:
	Stack()  {  top =NULL;  }


	int pop()
	{
			int data=0;
			if(top == NULL)
					return -1;
			else
			{
					Node *temp = top;
					top=top->next;
					data = temp->data;
					delete temp;
			}
			return data;
	}

	void push(int data) {

				Node *temp = new Node;
				temp->data = data;
				temp->next=NULL;
				if(top == NULL)
				{
					 top = temp;
				}
				else
				{
						temp->next=top;
						top = temp;
				}
				printf("hope stack works");
	}

	~Stack()
	{
			if(top ==NULL)
					return;
			Node *temp =NULL;
			while( top != NULL )
			{
					printf("hello");
					temp = top;
					top = top->next;
					delete temp;

			}


	}

private:
		struct Node
		{
				Node *next;
				int data;

		}*top;
};

int main()
{
	Stack obj1;
	obj1.push(3);
	obj1.push(4);
#if 0
	printf("%d",obj1.pop());
		printf("%d",obj1.pop());
		printf("%d",obj1.pop());
#endif


		

	return 0;
}

