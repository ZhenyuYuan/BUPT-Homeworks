package homework6;

public interface IPricingStrategy {
	public double getSubTotal(SaleLineItem salelineitem);
	public int getStrategyNumber();
	public int getStrategyType();
	public String toString();
}
