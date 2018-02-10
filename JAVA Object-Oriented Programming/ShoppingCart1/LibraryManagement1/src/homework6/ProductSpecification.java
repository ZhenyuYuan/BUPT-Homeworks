package homework6;

public class ProductSpecification {
	private String isbn;
	private double price;
	private String title;
	private BookType type;
	
	public ProductSpecification(String isbn, double price, String title, BookType type){
		this.isbn = isbn;
		this.price = price;
		this.title = title;
		this.type = type;
	}

	public String getIsbn() {
		return isbn;
	}

	public double getPrice() {
		return price;
	}


	public String getTitle() {
		return title;
	}

	public BookType getType() {
		return type;
	}

}
