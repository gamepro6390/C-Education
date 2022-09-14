#include <stdio.h>
#include <malloc.h>

struct Node
{
	int Value;
	Node* Next;
	Node* front;
};

Node* Begin;
Node* End;
int size = 0;

void erase(int _where);
void push_back(int _Value);
int pop_back();
void Output();
void Output_r();
void clear();

int main(void)
{
	Node* List = (Node*)malloc(sizeof(Node));
	Begin = List;
	End = List;
	List->Value = 1;
	size = 1;

	for (int i = 1; i < 50; ++i)
		push_back(i + 1);

	//clear();

	Output();
	Output_r();

	return 0;
}

void erase(int _where)
{
	// ** ��尡 1�����϶����� ����Ʈ�� ��ü����.
	if (size == 1)
		// ** ����� �׽�Ʈ�� ���ؼ� ������.
		return;

	// ** ù��° ���� ���� ��尡 ���� ������ ���� ���� ���� �� �� ����. (������ ��尡 ����)
	// ** ù��° ���� begin �� �ȴ�.
	if (_where == 1)
	{
		Node* left = Begin;
		Begin = Begin->Next;

		free(left);
	}
	// ** ������ ���� ���� ��尡 ���� ������ ���� ���� ���� �� �� ����. (������ ��尡 ����)
	// ** ������ ���� end �� �ȴ�.
	else if (_where == size)
	{
		pop_back();
	}
	// ** �߰��� �ִ� ������ _where �� ī������ �ؼ� 
	else
	{
		Node* left = Begin;
		Node* current = nullptr;
		Node* right = nullptr;

		for (int i = 1; i < _where - 1; ++i)
			left = left->Next;

		current = left->Next;
		right = current->Next;

		left->Next = right;
		free(current);
	}
}


void push_back(int _Value)
{
	End->Next = (Node*)malloc(sizeof(Node));
	End->Next->front = End;


	End = End->Next;

	End->Next = nullptr;
	End->Value = _Value;
	++size;
}


int pop_back()
{
	// ** ù��° ��ġ�� ��带 �޾ƿ´�.
	int Value = End->Value;

	// ** ó�� ��带 ����
	Node* pList = Begin;

	// ** ����Ʈ�� ��ü �����ŭ �ݺ�
	for (int i = 0; i < size; ++i)
	{
		// ** �������� ���� ���� ���� ���� ��带 ã�´�.
		if (pList->Next->Value == Value)
		{
			// ** ������� ������ ����� ���� ����̹Ƿ�, ������ ���� �ʱ�ȭ.
			End = pList;

			// ** ���� ��带 ������ ���� ����.
			pList = pList->Next;

			// ** �ݺ����� Ż���Ѵ�.
			break;
		}

		// ** if������ ������ ��带 ã�� ���ߴٸ� �������� �̵�.
		pList = pList->Next;
	}

	// ** �ݺ����� ����Ǿ��ٸ� ���� ���� ������ ��� �̹Ƿ� �������ش�.
	free(pList);

	// ** �׸��� ������ ����� ��ġ�� nullptr�� �ʱ�ȭ �Ѵ�.
	End->Next = nullptr;

	// ** ���Ұ� �����Ǿ����Ƿ�, ����� �ٿ��ش�.
	--size;

	// ** ������ ������ ��� ���� ��ȯ�ϰ� �Լ��� �����Ѵ�.
	return Value;
}

void Output()
{
	Node* NodeList = Begin;

	printf("<��ü �����͸� ��� �մϴ�.>\n");
	while (NodeList != nullptr)
	{
		printf("%d\n", NodeList->Value);
		NodeList = NodeList->Next;
	}
	printf("\n");
}
void Output_r()
{
	Node* NodeList = Begin;

	printf("<��ü �����͸� ��� �մϴ�.>\n");
	while (NodeList != nullptr)
	{
		printf("%d\n", NodeList->Value);
		NodeList = NodeList->front;

	}
	printf("\n");
}


void clear()
{
	//���Ӱ� �����ϰ� Begin�� �ش�.
	Node* NodeList = Begin;

	//NodeList �� nullptr  �� �ƴ϶�� �ݺ�
	while (NodeList != nullptr) 
	{
		//���� ������ �̹� NodeList�� �Ѱ� �־��� ������ Begin �� ���� ��带 ����Ű���� ���ش�.
		Begin = Begin->Next;
		//���� ����� ������ �����.
		free(NodeList);
		NodeList = nullptr;
		//�ٽ� Begin�� NodeList�� �Ѱ��ش�.
		NodeList = Begin;
		
	}


	/*for (int i = 1; size-1; ++i)
		pop_back();
	Node* left = Begin;

	Begin = Begin->Next;
	free(left);*/
}