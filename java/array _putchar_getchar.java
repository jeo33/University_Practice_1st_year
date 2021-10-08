
public class ABC 
{
	char q[];
	int putloc,getloc;
	ABC(int size)
	{
		q=new char[size+1];
		putloc=getloc=0;	
	};
	void put(char ch)
	{
		if(putloc==q.length-1)
		{
			System.out.print("Queue is full \n");
			return ;
		}
		putloc++;
		q[putloc]=ch;
	};
	char get()
	{
		if(getloc==putloc)
		{
			System.out.print("the queue is empty\n");
			return (char)0;
		}
		getloc++;
		return q[getloc];
	};
	

	public static void main(String args[])
		{
			ABC bigQ=new ABC(100);
			ABC smallQ=new ABC(100);
			char ch=0;
			int i;
			System.out.println("Use big to store the alphabet");
			for(i=0;i<26;i++)
				bigQ.put((char)('A'+i));
			for(i=0;i<26;i++)
				{ch=bigQ.get();
			if(ch!=(char)0)System.out.print(ch);}

			
			
			
		};
}
