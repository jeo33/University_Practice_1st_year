package showbits;

public class showbits
{
	int bits;
	dda(int x)
	{
		bits=x;
	}
	void show(long val)
	{
		long mask=1;
		mask<<=bits-1;
		int space=0;
		for(;mask!=0;mask>>=1)
		{
			if((val&mask)!=0)System.out.print("1");
			else System.out.print("0");
			space++;
			if(space%8==0) 
				{
					System.out.print(" ");
					space=0;
				}
		}
	}
public static void main(String[] args)
	{
		showbits a= new showbits(32);
		
			a.show(555555);
	
	
	}
}
