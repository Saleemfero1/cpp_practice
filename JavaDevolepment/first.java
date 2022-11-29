import javax.xml.transform.Source;

public class first {

  int val=10;
  String naam ="hesaru";

  //static class 
  static class demo{
    String hum ="saleem";
    String adaaNam ="Fero";
  }

//method or function
  static boolean boolfun(int age){
    boolean value = (age<30)? true:false;
    return value;
  }

  //recursion
  public static int sum(int s, int e){
    int value=0;
    if(s>e){
      return 0;
    }
    return s+ sum(s+1,e);
  }

  public static void main(String[] args) {
   

    /*
     * DATA TYPES
     * short 2byte, range from -127 to 128
     * int 4byte , genral range upto 9 digit
     * long 8 byte
     * double 8byte
     * float 4byte
     * char 2byte
     * boolean 1 byte
     */

    short a = 10;
    int b = 5;
    long c = 1000000000000000L;// if we not add L at the end of number compiler assume it is int
    char alpha = 'A';
    float d = 1000.23f;// if we not add f at the end it assume float
    double e = 100.0000000d;// if we not add d at the end it assume float
    String name = "O bhai mai hi hun saleem";
    System.out.println(name.length());
    System.out.println(name.indexOf("saleem"));
    System.out.println(name.toLowerCase());
    System.out.println(name.toUpperCase());
    System.out.println(name.substring(3, 7));
    System.out.println((int) e);
    System.out.println(e);
    System.out.println((float) b);
    System.out.println((int) alpha);

    // concatination of two strings
    String firstname = "Saleem";
    String Lastname = "Ferozabad";
    int age = 21;

    // if we try to add number with string number concatinate with string
    System.out.println(firstname + " " + Lastname + " is " + age + " year old");
    System.out.println(firstname.concat(Lastname));
    int random = (int) (Math.random() * 321);
    System.out.println(random);

    // if short hand properties
    age = (age < 23) ? 19 : 200;
    System.out.println(age);
    int arr[] = { 1, 2, 3, 400, 5, 6, 7, 8, 9 };
    for (int i : arr) {
      System.out.println(i);
    }
    System.out.println(arr.length);
    //methods or function 
    System.out.println(boolfun(20));

    //recursion 
    System.out.println(sum(5,10));

     //create an object so here class name is first
    //oopas concept
    first myObj = new first();
    System.out.println(myObj.val);
    System.out.println(myObj.naam); 
    demo myDem =new demo();
    System.out.println(myDem.hum);
    System.out.println(myDem.adaaNam);
    second a1 = new second(); 
  
  }  

}