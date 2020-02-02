#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;
public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~Array()
    {
        delete []A;
    }
    void Display()
    {
        cout<<"Display Array Element: ";
        for(int i=0; i<length; i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    void Append(int element)
    {
        if(length<size)
        {
            A[length++] = element;
        }
    }
    void Insert(int index, int element)
    {
        if(index >=0 && index<=length)
        {
            for(int i=length; i>index; i--)
            {
                A[i] = A[i-1];
            }
            A[index] = element;
            length++;
        }
    }
    void Delete(int index)
    {
        if(index>=0 && index<=length)
        {
            for(int i=index; i<length-1; i++)
            {
                A[i] = A[i+1];
            }
            length--;
        }
    }
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
    void BubbleSort(int n)
    {
        int i, j;
        for(i = 0; i < n-1; i++)
            for(j = 0; j < n-i-1; j++)
                if (A[j] > A[j+1])
                    swap(&A[j], &A[j+1]);
    }
    bool isSorted()
    {
        for(int i=0; i<length-1; i++)
        {
            if(A[i]>A[i+1])
            {
                return false;
            }
        }
        return true;
    }
    int LinearSearch(int key)
    {
        for(int i=0; i<length; i++)
        {
            if(key == A[i])
            {
                return i;
            }
        }
        return -1;
    }
    int BinarySearch(int key)
    {
        int begin = 0;
        int end = length;
        sort(A,A+length);
        while(begin<=end)
        {
            int mid = (begin+end)/2;
            if(key==A[mid])
            {
                return mid;
            }
            else if(A[mid]>key)
            {
                end = mid-1;
            }
            else
            {
                begin = mid+1;
            }
        }
        return -1;

    }
    int RecursiveBinarySearch(int begin,int end,int key)
    {
        if(begin<=end)
        {
            int mid = (begin+end)/2;
            if(A[mid]==key)
            {
                return mid;
            }
            else if(A[mid]>key)
            {
                return RecursiveBinarySearch(begin,mid-1,key);
            }
            else
            {
                return RecursiveBinarySearch(mid+1,end,key);
            }
        }
        return -1;
    }
    int Get(int index)
    {
        if(index>=0 && index<=length)
        {
            return A[index];
        }
    }
    void Set(int index,int element)
    {
        if(index>=0 && index<=length)
        {
            A[index] = element;
        }
    }
    int Max()
    {
        int max = A[0];
        for(int i=1; i<length; i++)
        {
            if(max<A[i])
                max = A[i];
        }
        return max;
    }
    int Min()
    {
        int min = A[0];
        for(int i=1; i<length; i++)
        {
            if(A[i]<min)
                min = A[i];
        }
        return min;
    }
    int Sum()
    {
        int sum = 0;
        for(int i=0; i<length; i++)
        {
            sum+=A[i];
        }
        return sum;
    }
    void Reverse()
    {
        for(int i=0,j=length-1; i<j; i++,j--)
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    void SortedInsert(int value)
    {
        sort(A,A+length);
        int i= length-1;
        while(A[i]>value)
        {
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = value;
        length++;
    }
    void Arrange()
    {
        int i=0;
        int j = length-1;
        while(i<j)
        {
            while(A[i]<0)
            {
                i++;
            }
            while(A[j]>=0)
            {
                j--;
            }
            if(i<j)
            {
                swap(&A[i],&A[j]);
            }
        }
    }
    double Average()
    {
        double avg;
        double sum = Sum();
        avg = sum/length;
        return avg;
    }

};
int main()
{
    Array obj(10);
    obj.Insert(0,1);
    obj.Insert(1,5);
    obj.Insert(2,3);
    obj.Insert(3,2);
    obj.Delete(3);
    obj.BubbleSort(3);
    cout<<obj.isSorted()<<endl;
    obj.LinearSearch(1);
    obj.Append(9);
    cout<<obj.Average()<<endl;
    obj.Display();

}
