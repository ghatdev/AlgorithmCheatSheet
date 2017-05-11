void quicksort(int * arr){
	int len_arr = sizeof(arr);
	for (int j=0; j<len_arr;j++){
		for (int i=0;i<(len_arr-1);i++){
			if (arr[i]>arr[i+1]) {
				int tmp = arr[i];
				arr[i] =arr[i+1];
				arr[i+1]=tmp;
			}
		}
	}
}
