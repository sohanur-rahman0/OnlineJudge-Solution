public class Array{
    private int[] A;
    private int size;
    private int length;

    public Array(){
        this.size = 10;
        this.length = 0;
        this.A = new int[size];
    }
    public Array(int size){
        this.size = size;
        this.length = 0;
        this.A = new int[size];
    }
    public void Display(){
        System.out.println("Displaying Array Element:");
        for(int i=0; i<length; i++){
            System.out.print(A[i]+" ");
        }
        System.out.println("");
    }
    public void Append(int element){
        if(length<size) {
            A[length++] = element;
        }
    }
    public void Insert(int index, int element){
        if(index>=0 && index <= length){
            for(int i=length; i>index; i--){
                A[i] = A[i+1];
            }
            A[index] = element;
            length++;
        }
    }
    public void Delete(int index){
        if(index>=0 && index<=length){
            for(int i=index; i<=length-1; i++){
                A[i] = A[i+1];
            }
            length--;
        }
    }
    public boolean isSorted(){
        for(int i=0; i<length-1; i++){
            if(A[i]>A[i+1]){
                return false;
            }
        }
        return true;
    }
    public int LinearSearch(int key)
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
    public int Max()
    {
        int max = A[0];
        for(int i=1; i<length; i++)
        {
            if(max<A[i])
                max = A[i];
        }
        return max;
    }
    public int Min()
    {
        int min = A[0];
        for(int i=1; i<length; i++)
        {
            if(A[i]<min)
                min = A[i];
        }
        return min;
    }
    public int Sum()
    {
        int sum = 0;
        for(int i=0; i<length; i++)
        {
            sum+=A[i];
        }
        return sum;
    }
    public void Reverse()
    {
        for(int i=0,j=length-1; i<j; i++,j--)
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
}
