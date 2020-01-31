#include<bits/stdc++.h>
using namespace std;
class Array{
public:
    int A[10];
    int length;

    void Display(Array arr){
        cout<<"Display Array Element: ";
        for(int i=0; i<arr.length; i++){
            cout<<arr.A[i]<<" ";
        }
        cout<<endl;
    }
    void Append(Array *arr,int element){
        if(arr->length<10){
            arr->A[arr->length++] = element;
        }
    }
    void Insert(Array *arr,int index, int element){
        if(index >=0 && index<=arr->length){
            for(int i=arr->length; i>index; i--){
                arr->A[i] = arr->A[i-1];
            }
            arr->A[index] = element;
            length++;
        }
    }
    void Delete(Array *arr,int index){
        if(index>=0 && index<=arr->length){
            for(int i=index; i<arr->length-1; i++){
                arr->A[i] = arr->A[i+1];
            }
            length--;
        }
    }
    int LinearSearch(Array *arr,int key){
        for(int i=0; i<arr->length; i++){
            if(key == arr->A[i])
                return i;
        }
        return -1;
    }
    int BinarySearch(Array *arr,int key){
        int begin = 0;
        int end = arr->length;
        sort(arr->A,arr->A+arr->length);
        while(begin<=end){
            int mid = (begin+end)/2;
            if(key==arr->A[mid]){
                   return mid;
            }
            else if(arr->A[mid]>key){
                end = mid-1;
            }else{
                begin = mid+1;
            }
        }
        return -1;

    }
    int RecursiveBinarySearch(Array *arr,int begin,int end,int key){
        if(begin<=end){
            int mid = (begin+end)/2;
            if(arr->A[mid]==key){
                return mid;
            }else if(arr->A[mid]>key){
                return RecursiveBinarySearch(arr,begin,mid-1,key);
            }else{
                return RecursiveBinarySearch(arr,mid+1,end,key);
            }
        }
        return -1;
    }
    int Get(Array *arr,int index){
        if(index>=0 && index<=arr->length){
            return arr->A[index];
        }
    }
    void Set(Array *arr,int index,int element){
        if(index>=0 && index<=arr->length){
            arr->A[index] = element;
        }
    }
    int Max(Array *arr){
        int max = arr->A[0];
        for(int i=1; i<arr->length; i++){
            if(max<arr->A[i])
                max = arr->A[i];
        }
        return max;
    }
     int Min(Array *arr){
        int min = arr->A[0];
        for(int i=1; i<arr->length; i++){
            if(arr->A[i]<min)
                min = arr->A[i];
        }
        return min;
    }
    int Sum(Array *arr){
        int sum = 0;
        for(int i=0; i<arr->length; i++){
            sum+=arr->A[i];
        }
        return sum;
    }
    double Average(Array *arr){
        double avg;
        double sum = Sum(arr);
        avg = sum/arr->length;
        return avg;
    }
    void Reverse(Array *arr){
        for(int i=0,j=arr->length-1; i<j; i++,j--){
            int temp = arr->A[i];
            arr->A[i] = arr->A[j];
            arr->A[j] = temp;
        }
    }
    void SortedInsert(Array *arr, int value){
        sort(arr->A,arr->A+arr->length);
        int i= length-1;
        while(arr->A[i]>value){
            arr->A[i+1] = arr->A[i];
            i--;
        }
        arr->A[i+1] = value;
        arr->length++;
    }
    bool isSorted(Array *arr){
        for(int i=0; i<arr->length-1; i++){
            if(arr->A[i]>arr->A[i+1]){
                return false;
            }
        }
        return true;
    }
    void Arrange(Array *arr){
        int i=0;
        int j = arr->length-1;
        while(i<j){
            while(arr->A[i]<0){
                i++;
            }
            while(arr->A[j]>=0){
                j--;
            }
            if(i<j){
                swap(arr->A[i],arr->A[j]);
            }
        }
    }
};
int main()
{
    Array arr = {1,2,-3,4,-5};
    arr.length = 5;
    arr.Append(&arr,6);
    arr.Insert(&arr,0,40);
    arr.Delete(&arr,0);

    arr.Display(arr);
    cout<<arr.LinearSearch(&arr,50)<<endl;
    cout<<arr.BinarySearch(&arr,6)<<endl;
    cout<<arr.RecursiveBinarySearch(&arr,0,arr.length,4)<<endl;
    cout<<arr.Get(&arr,2)<<endl;
    arr.Set(&arr,3,33);
    arr.Display(arr);
    cout<<"Max: "<<arr.Max(&arr)<<endl;
    cout<<"Min: "<<arr.Min(&arr)<<endl;
    cout<<"Sum: "<<arr.Sum(&arr)<<endl;
    cout<<"Avg: "<<arr.Average(&arr)<<endl;
    arr.Reverse(&arr);
    arr.Display(arr);
    //arr.SortedInsert(&arr,7);
    arr.Arrange(&arr);
    arr.Display(arr);
    cout<<arr.isSorted(&arr)<<endl;

}
