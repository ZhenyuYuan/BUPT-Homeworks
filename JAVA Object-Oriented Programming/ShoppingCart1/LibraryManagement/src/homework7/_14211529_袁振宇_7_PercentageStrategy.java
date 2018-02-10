package homework7;

public class _14211529_‘¨’Ò”Ó_7_PercentageStrategy implements _14211529_‘¨’Ò”Ó_7_IPricingStrategy{
	private int strategyNumber;
	private int strategyType = 1;
	private double discountPercentage;
	
	public _14211529_‘¨’Ò”Ó_7_PercentageStrategy(int strategyNumber, double discountPercentage){
		this.setStrategyNumber(strategyNumber);
		this.discountPercentage = discountPercentage;
	}
	
	public double getSubTotal(_14211529_‘¨’Ò”Ó_7_SaleLineItem saleLineItem) {
		return saleLineItem.prodSpec.getPrice() * (1 - discountPercentage);

    }
	
	public void setDiscountPercentage(double discountPercentage) {
        this.discountPercentage = discountPercentage;
    }
	
	public int getStrategyNumber() {
		return strategyNumber;
	}

	public int getStrategyType() {
		return strategyType;
	}
	
	public void setStrategyNumber(int strategyNumber) {
		this.strategyNumber = strategyNumber;
	}

	public void setStrategyType(int strategyType) {
		this.strategyType = strategyType;
	}
	
    public String toString() {
        return "¥Ú" + String.format("%.0f",100 * (1 - discountPercentage)) + "%’€";
    }
}
