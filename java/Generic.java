class Box<T>{
    private T object;
    public void setObject(T object){
        this.object=object;
    }
    public T getobject(){
        return object;
    }
}
public class Generic {
    public static void main(String[] args){
        Box<Integer> obj=new Box<Integer>();
        obj.setObject(1);
        obj.setObject(2);
        obj.setObject(3);
    }
}
