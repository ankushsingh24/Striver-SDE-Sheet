class Queue {

	int front, rear;
	vector<int> arr;

public:
	Queue()
	{
		front = 0;
		rear = 0;
		arr.resize(100001);
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
		// Write your code here.
		arr[rear++] = e;
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		// Write your code here.
		if(front != rear)
		{
			int x = arr[front];
			front++;
			return x;
		}

		return -1;
	}
};
