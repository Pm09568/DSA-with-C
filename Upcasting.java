class Parent{
    String name;
    void display(){
        System .out.println("Hello Parent" );
    }
}
class Child extends Parent{
    int age;
    void display(){
        System.out.println("Child class \n" +name);
    }
}
public class Upcasting {
    public static void main(String args[]){
        Parent sc=new Child();
     sc.name="Prashant";
//        sc.age=24; it is not accessible from sc object because parent class holds string and this is integer ,only same things can
//        access ,method are same so accesse easily ;
        sc.display();
    }
}
