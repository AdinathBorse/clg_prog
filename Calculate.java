public class Calculate{
    public static void main(String[] args) {
        Addition add = new Addition();
        int result = add.Add(5, 7);

        System.out.println(result);
    }
}


class Addition{
    public int Add(int a, int b)
    {
        int sum = a+b;
        return sum;
    }
}

