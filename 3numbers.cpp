import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc= new Scanner(System.in);
		int t; t=sc.nextInt();
		for(int i=1;i<=t;i++)
		{
		    int a;
		    int b; int c;
		    a=sc.nextInt();
		    b=sc.nextInt();
		    c=sc.nextInt(); int even=0; int odd=0;
		    if(a%2==0)
		    even++;
		    else
		    odd++;
		    if(b%2==0)
		    even++;
		    else
		    odd++;
		    if(c%2==0)
		    even++;
		    else
		    odd++;
		    int ans=even<odd?even:odd;
		    System.out.println(ans);
		}
	}
}