struct player
{
	boolean status=true;
};

class egame
{
	int m=0 ,cur_pos=0 , rend=0;
	cout<<"Enter number of student:";
	cin>>m;
	do
	{
		cout<<"Enter Random Number:";
		cin>>rend;
	}while(rend>m);
	
	struct player s[]=new struct[m];
	
	for(int j=0;j<m-2;j++)
	{
		for(int k=0;k<rand;k++)
		{
			outpos=cur_pos;
			do
			{
				if(cur_pos==m-1)
				{
					cur_pos=-1;
				}
				else
				{
					cur_pos++;
				}
			}while(s[cur_pos].status!=true);
		}
			s[outpos].status=false;
	}
	
	j=0;
	while(s[j].status!=true)
	{
		j++;		
	}
	cout<<"Position "<<(j-1)<<"is a Winning position From where Counting started";
}
