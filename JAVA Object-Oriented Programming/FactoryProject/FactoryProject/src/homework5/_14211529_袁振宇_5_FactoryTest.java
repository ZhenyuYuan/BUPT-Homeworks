package homework5;

import java.util.Scanner;

public class _14211529_Ԭ����_5_FactoryTest {
	public static void main(String[] args) {
		String firstName;
		String lastName;
		String socialSecurityNumber;
		_14211529_Ԭ����_5_Factory work = new _14211529_Ԭ����_5_Factory();
		_14211529_Ԭ����_5_Employee tem0;
		work.initEmployee();

		while(true)
		{
			System.out.println("1:Look up employee   2:Updata employee");
			System.out.println("3:Delete employee    4:Printemployee");
			System.out.println("0:exit");
			Scanner sc = new Scanner(System.in);
			int key = sc.nextInt();
			switch (key){
				case 1:
					System.out.println("Please input SocialSecurityNumber of employee you want to look up:");  
					socialSecurityNumber =sc.next();
					tem0 = work.getEmployee(socialSecurityNumber);
					if(tem0 ==null){
						System.out.println("This employee doesn't exist��");
					}
					else{
						System.out.println(tem0.toString());
					}
					break;
				case 2:
					System.out.println("Please input SocialSecurityNumber of employee you want to updata:");  
					socialSecurityNumber =sc.next();
					tem0 = work.getEmployee(socialSecurityNumber);
					if(tem0 ==null){
						System.out.println("This employee doesn't exist��");
					}
					else{
						System.out.println("Updata firstName:"); 
						firstName = sc.next();
					
						System.out.println("Updata lastName:");  
						lastName =sc.next();
					
						int key_j =0;
						System.out.println("Please select type of employee you want to updata:");  
						System.out.println("1��SalaridEmployee  2��CommisionEmployee");  
						System.out.println("3��HourlyEmployee   4��BasePlusCommisionEmployee");  
						key_j =sc.nextInt();
						switch (key_j){
							case 1:
								System.out.println("[SalaridEmployee] Please input weeklySalary:");
								double WeeklySalary = sc.nextDouble();
								_14211529_Ԭ����_5_SalaridEmployee semp;
								semp = new _14211529_Ԭ����_5_SalaridEmployee(firstName, lastName, socialSecurityNumber, WeeklySalary);
								work.updateEmployee(socialSecurityNumber, semp);
								break;
							case 2:
								System.out.println("[CommisionEmployee] Please input grossSales, commissionRate:");
								double GrossSales;			//���۶�
								double CommissionRate;		//��ɱ���
								GrossSales = sc.nextDouble(); 	
								CommissionRate = sc.nextDouble();
								_14211529_Ԭ����_5_CommissionEmployee cemp;
								cemp = new _14211529_Ԭ����_5_CommissionEmployee(firstName, lastName, socialSecurityNumber, GrossSales, CommissionRate);
								work.updateEmployee(socialSecurityNumber, cemp);
								break;
							case 3:
								System.out.println("[BasePlusCommissionEmployee] Please input grossSales, commissionRate, baseSalary:");
								double GrossSales1;		//���۶�
								double CommissionRate1;	//��ɱ���
								double BaseSalary;		//�»�������
								GrossSales1 = sc.nextDouble();
								CommissionRate1 = sc.nextDouble();
								BaseSalary = sc.nextDouble();	
								_14211529_Ԭ����_5_BasePlusCommissionEmployee bcemp;
								bcemp = new _14211529_Ԭ����_5_BasePlusCommissionEmployee(firstName, lastName, socialSecurityNumber, GrossSales1, CommissionRate1, BaseSalary);
								work.updateEmployee(socialSecurityNumber, bcemp);
								break;
							case 4:
								System.out.println("[HourlyEmployee] Please input wage and hours:");
								double Wage;    //ÿСʱ�Ĺ�Ǯ
								double Hours;	//�¹���Сʱ��
								Wage = sc.nextDouble(); 	
								Hours = sc.nextDouble();
								_14211529_Ԭ����_5_HourlyEmployee hemp;
								hemp = new _14211529_Ԭ����_5_HourlyEmployee(firstName, lastName, socialSecurityNumber, Wage, Hours);
								work.updateEmployee(socialSecurityNumber, hemp);
								break;
							default:
								System.out.println("Error!Please select again!");
								break;
						}
					System.out.println("Updata successful!");
					}
					break;
				case 3:
					System.out.println("Please input SocialSecurityNumber of employee you want to delete:");  
					socialSecurityNumber =sc.next();
					tem0 = work.getEmployee(socialSecurityNumber);
					if(tem0 ==null){
						System.out.println("This employee doesn't exist!");
					}
					else{
						work.deleteEmployee(socialSecurityNumber);
						System.out.println("Delete successful!");
					}
					break;
				case 4:
					System.out.println("Information of employees:");  
					work.printEmployees();
					break;
				case 0:
					System.out.println("exit!");
					System.exit(0);
					break;
				default:
					System.out.println("Error!Please select again!");  
					break;
			}
			
		}
	}
}