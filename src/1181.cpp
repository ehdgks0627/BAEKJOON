#include <iostream>
#include <string>
using namespace std;

struct Node
{
	string data;
	struct Node *next;
};

int main(int argc, char *argv[])
{
	Node *s_ptr[51] = { NULL, };
	int N;
	bool skip = false;
	cin >> N;
	for (int i = 0; i<N; i++)
	{
		skip = false;
		Node *new_node = new Node;
		new_node->next = NULL;
		cin >> new_node->data;
		if (s_ptr[new_node->data.length()] == NULL)
		{
			s_ptr[new_node->data.length()] = new_node;
		}
		else
		{
			Node *ptr = s_ptr[new_node->data.length()], *prev_ptr;
			if (ptr->data == new_node->data)
			{
				continue;
			}
			else if (ptr->data.compare(new_node->data) > 0)
			{
				new_node->next = ptr;
				s_ptr[new_node->data.length()] = new_node;
			}
			else
			{
				prev_ptr = ptr;
				ptr = ptr->next;
				while (ptr != NULL)
				{
					int com = ptr->data.compare(new_node->data);
					if (com == 0)
					{
						skip = true;
						break;
					}
					else if (com > 0)
					{
						break;
					}
					prev_ptr = ptr;
					ptr = ptr->next;
				}
				if (skip)
				{
					continue;
				}
				new_node->next = prev_ptr->next;
				prev_ptr->next = new_node;
			}
		}
	}
	for (int i = 0; i<51; i++)
	{
		if (s_ptr[i] != NULL)
		{
			Node *ptr = s_ptr[i];
			while (ptr != NULL)
			{
				cout << ptr->data << '\n';
				ptr = ptr->next;
			}
		}
	}
	return 0;
}
