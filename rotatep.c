//Take an array of size N and a number K from the user as input, and print the elements of an array in a rotated manner with a gap of K. Eg, let us say the array is - 3, 6, 7, 5, 10. And the value of //k= 3. The output should be - 7, 3, 10, 6, 5. If k = 2, the output should be - 6, 5, 3, 10, 7

 #include <stdio.h>
 int main(){
      int n,k;
      printf("Enter the number of n : ");
      scanf("%d",&n);
      printf("Enter the number of k : ");
      scanf("%d",&k);
      int arr[n];
      
      printf("Enter the elements : \n");
      for (int i=0; i<n; i++){
          scanf("%d",&arr[i]);
      }
      int j=0, c=1;
      int brr[n];
      for(int m=0; m<n; m++){
      if(j==n){
          for(int p=0; p<n; p++){
           printf("%d ",brr[p]);
           }
      }
      else{
      int i=0;
      while (i<n){
          int s=0;
          while(s<j){             
          if(arr[i]==brr[s]){
             i++;
             break;
          }
          else{
            s++;
          }
          }
          if(c==k){
            brr[j]= arr[i];
            j++;
            c=1;
            i++;
         }
         else{
            c++;
            i++;
         }
      }
     }
     }
     return 0;
 }
