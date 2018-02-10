package homework5;

public abstract class _14211529_‘¨’Ò”Ó_5_Employee {
	private String firstName;
	private String lastName;
	private String socialSecurityNumber;
	public _14211529_‘¨’Ò”Ó_5_Employee(String firstName, String lastName, String socialSecurityNumber){
		this.firstName = firstName;
		this.lastName = lastName;
		this.socialSecurityNumber = socialSecurityNumber;
	}
	public void setFirstName(String firstName){
		this.firstName = firstName;
	}
	public void setLastName(String lastName){
		this.lastName = lastName;
	}
	public String getFirstName(){
		return firstName;
	}
	public String getLastName(){
		return lastName;
	}
	public String getSocialSecurityNumber(){
		return socialSecurityNumber;
	} 
	abstract public double earning(); 
	abstract public String toString();
}