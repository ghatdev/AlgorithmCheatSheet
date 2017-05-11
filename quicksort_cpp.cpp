/**
 quick sorting 알고리즘
 main함수 위에 붙여넣어서 쓰면 됩니다.
 정렬하고픈 int형 배열 주소를 인수로 주면 됩니다.
 이건 오름차순이에요. 내림차순으로 하려면 i<(len_arr-1) 부분의 부등호 >로 바꿔주면 됩니다.
 ex) 
 int main(void)
 {
 	int test[] = {1,4,2,3,5};
	quicksort(test);
	return 0;
 }
*/

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
