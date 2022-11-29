import java.util.Scanner;
public class second {
    public static void main(String[] args) {
        int arr[]={4,3,6,8,33,444,999,22,1,65};
        for (int i : arr) {
            System.out.println(i);
        }
        insertionSort(arr);
        for (int i : arr) {
            System.out.println(i);
        }
    }
    static void insertionSort(int arr[]){
        for(int i=1;i<arr.length-1;i++){
             int temp = arr[i];
             int j=i-1;
                for(;i>=0;j--){
                    if(arr[j]>temp){
                        arr[j+1]=arr[j];
                    }
                    else{
                        break;
                    }
                   
                }
                arr[j+1]=temp;
            } 
    }
} 
