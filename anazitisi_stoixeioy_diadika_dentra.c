//anazitisi_stoixeioy_diadika_dentra

TreeNode*search(TreeNode*t,int value){//epistrefi ton kombo poy periexei to stoixeio anazitisis
	
	if(value<t->key){
		return(NULL)
		
	else
	return(search(t->left,value));	//aristera
	}else if(value>t->key){
		if(t->right==NULL)
		return(NULL);
		else
		return(search(t->right,value));//deksia
	}
	else return t;//epestrece komvo
}
