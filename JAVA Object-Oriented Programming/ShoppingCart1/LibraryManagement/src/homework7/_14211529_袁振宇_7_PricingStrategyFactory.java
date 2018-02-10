package homework7;

public class _14211529_袁振宇_7_PricingStrategyFactory {
	/*策略工厂， 工厂模式， 单子模式*/
	 private static _14211529_袁振宇_7_PricingStrategyFactory instance;
	 private _14211529_袁振宇_7_StrategyCatalog catalog;

	 private _14211529_袁振宇_7_PricingStrategyFactory(){
		 //this.catalog=catalog;
	 }
	    
	 public static _14211529_袁振宇_7_PricingStrategyFactory getInstance(){
	     /* 单子模式，保证只有一个实例 */
	     if(instance==null){
	         instance = new _14211529_袁振宇_7_PricingStrategyFactory();
	     }
	     return instance;
	 }

	 public _14211529_袁振宇_7_IPricingStrategy getPricingStrategy(_14211529_袁振宇_7_BookType bookType){ 
		 /* 根据书的类型返回不同策略 */  
		 _14211529_袁振宇_7_IPricingStrategy strategy = catalog.getStrategies().get(bookType);
		 if(strategy!=null){
	         return strategy;
	     }
	     else return new _14211529_袁振宇_7_NoDiscountStrategy();
	 }

	 public void setCatalog(_14211529_袁振宇_7_StrategyCatalog catalog){
	     this.catalog=catalog;
	 }
}
