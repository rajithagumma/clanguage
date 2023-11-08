#include <stdio.h>

int main(){
    int j,c;
    j=0;
    while (j<24){
    int num;
    num=4;
    int arrray[num];
    for (int i=0;i<num;i++){
    	scanf("%d",&arrray[i]);
    }
    int min = 0;
    int log_val = num;

    while (log_val > 1){
        log_val = log_val / 2;
        min++;
    }

    int log_array[min][num];
    int index_arr[num];

    for (int i = 0; i < num; i++){
        index_arr[i] = i;
    }

    int i = 0;
    c=0;
    while (i < min){
        int j = 0;
        int val = 0;
        int mini_arr[num / 2];
        
        while (j <= num - 2){
            if (arrray[index_arr[j]] > arrray[index_arr[j+1]]){
                mini_arr[val] = index_arr[j];
                log_array[i][index_arr[j]] = index_arr[j+1];
            }
            else{
                mini_arr[val] = index_arr[j+1];
                log_array[i][index_arr[j+1]] = index_arr[j];
            }
            val = val + 1;
            j = j + 2;
            c=c+1;
        }
        
        int arr_ind = 0;
        for (int i = 0; i < num / 2; i++){
            index_arr[arr_ind] = mini_arr[arr_ind];
            arr_ind++;
        }

        i = i + 1;
        num = num / 2;
    }

    int s_max;
    int k = min - 1;
    int first = index_arr[0];

    if (arrray[log_array[k][first]] > arrray[log_array[k-1][first]]){
        s_max = arrray[log_array[k][first]];
        k = k - 2;
    }
    else{
        s_max = arrray[log_array[k-1][first]];
        k = k - 2;
    }
    c=c+1;

    while (k >= 0){
        if (arrray[log_array[k][first]] > s_max){
            s_max = arrray[log_array[k][first]];
        }
        k = k - 1;
        c=c+1;
    }

    printf("Second max is -:%d", s_max);
    printf("comparisons is %d\n",c);
    j=j+1;
    }
    return 0;
}
