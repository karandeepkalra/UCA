public class priority_queue
{
	private Integer[] pq;
	private int n;
	priority_queue(int capacity)
	{
		this.pq=new Integer[capacity+1];
	}
	public void insert(int x)
	{
		this.pq[++n]=x;
		swim(n);
	}
	private void swim(int k)
	{
		while(k>1&&pq[k/2]<pq[k])
		{
			this.exchange(k,k/2);
			k=k/2;
		}
			
	}
	private void exchange(int i,int j)
	{
		int temp=this.pq[i];
		this.pq[i]=this.pq[j];
		this.pq[j]=temp;
	}

	public Integer delMax()
	{
		int maxm=this.pq[1];
		exchange(1,n--);
		sink(1);
		this.pq[n+1]=null;
		return maxm;
	}
	private void sink(int k)
	{
		while(2*k<=n)
		{
		        int j=2*k;
			if(j<n&&this.pq[j]<this.pq[j+1])
			{ j++;}
			if(this.pq[k]>=this.pq[j])
			break;
			exchange(k,j);
			k=j;
			
		}
	}
	public boolean isempty()
	{
		return this.n==0;
	}
	public Integer size()
	{
		return this.n;
	}
	public static void main(String[] args)
	{
		priority_queue pq=new priority_queue(10);
		pq.insert(5);
		pq.insert(11);
		pq.insert(7);
		assert pq.delMax()==11;
		assert pq.size()==2;
		pq.insert(15);
		pq.insert(11);
		pq.insert(19);
		assert pq.delMax()==19;
		assert pq.delMax()==87;

	}

}
