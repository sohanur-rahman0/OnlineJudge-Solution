public class Main {
    public static void main(String[] args) {
        Array A = new Array(10);
        A.Append(2);
        A.Append(6);
        A.Append(4);
        A.Insert(3,7);
        A.Insert(4,10);
        A.Delete(4);
        System.out.println(A.isSorted());
        System.out.println(A.Max());
        System.out.println(A.Min());
        System.out.println(A.Sum());
        A.Display();
    }
}
