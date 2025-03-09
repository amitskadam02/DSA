// Heap

class Heap{
	public:
	int *arr;
	int size;
	int capacity;
	Heap(int capacity){
		this->capacity = capacity;
		this->size = 0;
		this->arr = new int[capacity];
	}
	
	void insert(int val){
		if(capacity == size){
			cout<<"Heap Overflow"<<endl;
			return;
		}
		// size will increase
		size++;
		int index = size;
		arr[index] = val;
		//
		while(index > 1){
			int parentIndex = index/2;
			if(arr[index] > arr[parentIndex]){
				swap(arr[index], arr[parentIndex]);
				index = parentIndex;
			}
			else{
				break;
			}
		}
	}
	
	void printHeap(){
		for(int i=0; i<size; i++){
			cout<<arr[i]<<" ";
		}
	}
};

int main(){
	Heap h(20);
	h.insert(10);
	h.insert(20);
	h.insert(5);
	h.insert(10);
	h.insert(6);
	h.printHeap();
}