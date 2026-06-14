public class functionalRecur {
    public static void main(String[] args){
        System.out.println(Pr(100));
    }
    public static int Pr(int n){
        if(n == 0){
            return 0;
        }
        else {
            return Pr(n-1) + n;
        }
    }
}
