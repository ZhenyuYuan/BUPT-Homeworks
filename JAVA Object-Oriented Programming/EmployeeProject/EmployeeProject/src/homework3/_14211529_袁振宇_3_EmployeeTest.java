package homework3;

import java.util.Scanner;
import java.util.Random;

public class _14211529_Ԭ����_3_EmployeeTest {
	private static Scanner sc;
	public static void main(String[] args){
		String FirstName;
		String LastName;
		String SocialSecurityNumber;
		_14211529_Ԭ����_3_EmployeeList empList;
		empList = new _14211529_Ԭ����_3_EmployeeList();
		for(int i = 1; i <= 10; i++){
			Random random = new Random();
	        int type = random.nextInt(100)%4 + 1;
	
			sc = new Scanner(System.in);
			System.out.println(i+": ");
			System.out.println(type);
			switch(type){
			case 1:
				System.out.println("[SalaridEmployee] Please input FirstName, LastName, SocialSecurityNumber, weeklySalary:");
				double WeeklySalary;
				FirstName = sc.nextLine();
				LastName = sc.nextLine();
				SocialSecurityNumber = sc.nextLine();
				WeeklySalary = sc.nextDouble();
				_14211529_Ԭ����_3_SalaridEmployee semp;
				semp = new _14211529_Ԭ����_3_SalaridEmployee(FirstName, LastName, SocialSecurityNumber, WeeklySalary);
				empList.Add(semp);
				break;
			case 2:
				System.out.println("[CommissionEmployee] Please input FirstName, LastName, SocialSecurityNumber, grossSales and commissionRate:");
				double GrossSales;			//���۶�
				double CommissionRate;		//��ɱ���
				FirstName = sc.nextLine();
				LastName = sc.nextLine();
				SocialSecurityNumber = sc.nextLine();
				GrossSales = sc.nextDouble(); 	
				CommissionRate = sc.nextDouble();
				_14211529_Ԭ����_3_CommissionEmployee cemp;
				cemp = new _14211529_Ԭ����_3_CommissionEmployee(FirstName, LastName, SocialSecurityNumber, GrossSales, CommissionRate);
				empList.Add(cemp);
				break;
			case 3:
				System.out.println("[BasePlusCommissionEmployee] Please input FirstName, LastName, SocialSecurityNumber, grossSales, commissionRate, baseSalary:");
				double GrossSales1;		//���۶�
				double CommissionRate1;	//��ɱ���
				double BaseSalary;		//�»�������
				FirstName = sc.nextLine();
				LastName = sc.nextLine();
				SocialSecurityNumber = sc.nextLine();
				GrossSales1 = sc.nextDouble();
				CommissionRate1 = sc.nextDouble();
				BaseSalary = sc.nextDouble();	
				_14211529_Ԭ����_3_BasePlusCommissionEmployee bcemp;
				bcemp = new _14211529_Ԭ����_3_BasePlusCommissionEmployee(FirstName, LastName, SocialSecurityNumber, GrossSales1, CommissionRate1, BaseSalary);
				empList.Add(bcemp);
				break;
			case 4:
				System.out.println("[HourlyEmployee] Please input FirstName, LastName, SocialSecurityNumber, wage and hours:");
				double Wage;    //ÿСʱ�Ĺ�Ǯ
				double Hours;	//�¹���Сʱ��
				FirstName = sc.nextLine();
				LastName = sc.nextLine();
				SocialSecurityNumber = sc.nextLine();
				Wage = sc.nextDouble(); 	
				Hours = sc.nextDouble();
				_14211529_Ԭ����_3_HourlyEmployee hemp;
				hemp = new _14211529_Ԭ����_3_HourlyEmployee(FirstName, LastName, SocialSecurityNumber, Wage, Hours);
				empList.Add(hemp);
				break;
			}
		}
		System.out.println("---------Employees' information:---------");
		for(int i = 0; empList.getTotal()>0 && i <= empList.getTotal()-1; i++){
			System.out.println(empList.getItem(i));
		}
	}
}