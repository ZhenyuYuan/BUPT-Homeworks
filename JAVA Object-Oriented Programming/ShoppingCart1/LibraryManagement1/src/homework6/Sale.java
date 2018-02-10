package homework6;

import java.util.ArrayList;

public class Sale {
	private ArrayList<SaleLineItem> items;
	
	public Sale(){
		items = new ArrayList<SaleLineItem>();
	}
	
    void addSaleLineItem(SaleLineItem item){
        items.add(item);
    }
	
	public double getTotal(){
		double total = 0;
        double thisTime = 0;
        for (SaleLineItem saleLineItem : items) {
            thisTime = saleLineItem.getSubTotal();
            total += thisTime;
            System.out.println(saleLineItem.prodSpec.getTitle());
            System.out.println(String.format("%.2f", thisTime));
        }
        return total;
	}

	public ArrayList<SaleLineItem> getItems() {
		return items;
	}
}
