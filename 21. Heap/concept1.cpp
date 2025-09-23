// study from note bool
#include <iostream>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        // value insert karo end me
        size = size + 1;
        // value insert
        int index = size;
        arr[index] = val;
        // value go to at correct position
        while (index > 1)
        {
            // greater than 1 bcz 0 me parent nhi hai
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                // ab index parent ke upr jayega and ye process hoga till the root or first element
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deleteFromHeap()
    {
        if (size == 0)
            return ;
            //replace root node value with last node data
        arr[1] = arr[size];
        //can't access last element(last value deleted)
        size--;
        // take root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i; //left element
            int rightIndex = 2 * i + 1; //right element
            if (leftIndex <= size && arr[i] < arr[leftIndex])
            {//left element bada hai isliye replace
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex <= size && arr[i] < arr[rightIndex])
            {//right element bada hai isliye replace
                swap(arr[i], arr[rightIndex]);
                i=rightIndex;
            }else{
                return ;
            }
        }
    }
};
int main()
{
    heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.size = 2; // we enter data in arr directly so we need to update size . if we insert data the size is increase automatic
    h.print();
    h.insert(54); // good practice because it do correct position
    h.insert(154);
    for (int i = 1; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
  cout<<endl;
   h.deleteFromHeap();
   h.print();
    return 0;
}