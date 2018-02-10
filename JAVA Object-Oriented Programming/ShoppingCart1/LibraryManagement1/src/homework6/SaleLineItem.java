package homework6;

public class SaleLineItem {
	private int copies;
	private ProductSpecification prodSpec;
	private IPricingStrategy strategy;
	
	public SaleLineItem(int copies, ProductSpecification prodSpec, IPricingStrategy strategy){
		this.copies = copies;
		this.prodSpec = prodSpec;
		this.strategy = strategy;
	}
	
	public double getSubTotal() {
		//return strategy.;
	}

}
