//Grigori_Diataksi


void quickSort(int a[],int left,int right)
{
	int j;
	if(left<right)
	{
		//divide and conquer
		j=partition(a,left,right);
		quicksort(a,left,j-1);
		quicksort(a,j+1,right);
		
	
		}
		
	}
********************************************

	int partition(int a[],int left,int right)
		{
			int pivot,i,j,t;
			pivot=a[left];
			i=left;j=right+1;
			while(1){
				do++i;
			while(a[i]<pivot&&i<j);
			do--j;
			while(a[j]>pivot);
			if(i>=j)break;
			t=a[i];a[i]=a[j];a[j]=t;
			return j;	
			}
