package homework7;

import java.util.ArrayList;

public class _14211529_‘¨’Ò”Ó_7_Sale implements _14211529_‘¨’Ò”Ó_7_Subject{
    private ArrayList<_14211529_‘¨’Ò”Ó_7_SaleLineItem> items;
    private ArrayList<_14211529_‘¨’Ò”Ó_7_Observer> observers;

    public _14211529_‘¨’Ò”Ó_7_Sale(){
        items = new ArrayList<_14211529_‘¨’Ò”Ó_7_SaleLineItem>();
        observers = new ArrayList<>();
    }

    void addSaleLineItem(_14211529_‘¨’Ò”Ó_7_SaleLineItem item){
        items.add(item);
    }

    double getTotal(){
        double total = 0;
        double thisTime = 0;
        for (_14211529_‘¨’Ò”Ó_7_SaleLineItem saleLineItem : items) {
            thisTime = saleLineItem.getSubTotal();
            total += thisTime;
            System.out.println(saleLineItem.prodSpec.getTitle());
            System.out.println(String.format("%.2f", thisTime));
        }
        return total;
    }

    public ArrayList<_14211529_‘¨’Ò”Ó_7_SaleLineItem> getItems(){
        return items;
    }
    
    @Override
    public void registerObserver(_14211529_‘¨’Ò”Ó_7_Observer observer) {
        observers.add(observer);
    }

    @Override
    public void removeObserver(_14211529_‘¨’Ò”Ó_7_Observer observer) {
        if(observers.contains(observer)){
            observers.remove(observer);
        }
    }

    @Override
    public void notifyObservers() {
        for(_14211529_‘¨’Ò”Ó_7_Observer observer:observers){
            observer.update(this);
        }
    }
}