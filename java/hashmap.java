import java.util.*;
public class hashmap {
    public static void main(String[] args) {
        HashMap<Integer,String> obj=new HashMap<Integer,String>();
        obj.put(1,"Hello");
        obj.put(2,"Hii");
        obj.put(3,"Byee");
        System.out.println(obj);
        obj.replace(2,"Good morning");
        System.out.println(obj);
        System.out.println(obj.size());
        System.out.println(obj.get(1));
        obj.remove(3);
        System.out.println(obj);
        for(Map.Entry<Integer,String> e: obj.entrySet()){
            System.out.println("Key:"+e.getKey()+" Value:"+e.getValue());
        }
    }
}
