public class TestBlock
{
    public static void main(String[] args)
    {
        int num = 50;

        {
            int num = 100;

            System.out.println("In block, num is: " + num);
        }

        for (int i = 10; i > 0 ; i--)
        {
            int num = 400;
        }


        System.out.println("After block, num is: " + num);
    }
}