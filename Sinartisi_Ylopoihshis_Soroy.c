//Sinartisi_Ylopoihshis_Soroy

void insert(int A[],int location,int num)
{
	while (location>0)
	{
		int parentnode=(location-1)/2;
		if(num<=A[parentnode])
		{
			A[location]=num;
			return;
			
		}
		A[location]=A[parentnode];
		location=parentnode;
		
	}
	A[0]=num;
}
