package homework7;

public class _14211529_Ô¬ÕñÓî_7_FlatRateStrategy implements _14211529_Ô¬ÕñÓî_7_IPricingStrategy{
	private int discountPerBook;
	private int strategyNumber = 0;
	private int strategyType = 0;
	
	public _14211529_Ô¬ÕñÓî_7_FlatRateStrategy(int strategyNumber, int discountPerBook){
		this.strategyNumber = strategyNumber;
		this.discountPerBook = discountPerBook;
	}

	public double getSubTotal(_14211529_Ô¬ÕñÓî_7_SaleLineItem saleLineItem) {
		double total = saleLineItem.prodSpec.getPrice() - this.discountPerBook;
		if(total > 0)
			return total;
		else
			return 0;
	}

	@Override
	public int getStrategyNumber() {
		return strategyNumber;
	}

	@Override
	public int getStrategyType() {
		return strategyType;
	}

	public int getDiscountPerBook() {
		return discountPerBook;
	}

	public void setDiscountPerBook(int discountPerBook) {
		this.discountPerBook = discountPerBook;
	}

	public void setStrategyNumber(int strategyNumber) {
		this.strategyNumber = strategyNumber;
	}

	public void setStrategyType(int strategyType) {
		this.strategyType = strategyType;
	}
	
	public String toString(){
	    return "Ã¿±¾Êé¼õ"+String.valueOf(discountPerBook)+"Ôª";
	}
}
