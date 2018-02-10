package com.Student;

import java.util.Scanner;

public class StudentListTest {
	private static Scanner sc;

	public static void main(String[] args){
		Student stu;
		StudentList stulist;
		String stuNum = null;
		String stuName = null;
		int MathsMark = -1;
		int EnglishMark = -1;
		int ScienceMark = -1;
		int operation = 0;
		int seq = -1;
		
		sc = new Scanner(System.in);
		
		stulist = new StudentList();
		
		System.out.println("菜单如下，请输入1~8代表您要执行的操作：");
		System.out.println("1.增加一个学生      2.根据学号删除学生      3.根据位置删除学生");
		System.out.println("4.判断是否为空      5.根据位置返回学生      6.根据学号返回学生");
		System.out.println("7.输出全部学生信息      8.退出程序");
		
		while(true){
			System.out.println("请输入您的操作：");
			operation = sc.nextInt();
			sc = new Scanner(System.in);
			
			switch(operation){
			case 1:
				while(true){
					sc = new Scanner(System.in);
					try{
						System.out.println("请输入学生学号：");
						stuNum = sc.nextLine();		//读取一个字符串
						boolean isOK = true;
						for(int i=0; i<stuNum.length(); i++){
							if(!(('0'<=stuNum.charAt(i))&&(stuNum.charAt(i)<='9')) ){
								isOK = false;
								break;
							}
						}
						if(!((stuNum.length()==10)&&(stuNum.charAt(0)=='2')&&(stuNum.charAt(1)=='0')&&(isOK))){
							throw new StudentNumberException();
						}
						break;
					}
					catch(StudentNumberException e){
						System.out.println(e.getMessage());
					}
					catch(Exception e){
						System.out.println(e.getMessage());
					}
				}
						System.out.println("请输入学生姓名：");
						stuName = sc.nextLine();
				while(true){
					sc = new Scanner(System.in);
					try{	
						System.out.println("请输入学生三门课成绩（数学，英语，科学）：");
						MathsMark = sc.nextInt(); 	//读取一个整数
						EnglishMark = sc.nextInt();
						ScienceMark = sc.nextInt();
						if(!((MathsMark>=0)&&(MathsMark<=100)&&(EnglishMark>=0)&&(EnglishMark<=100)&&(ScienceMark>=0)&&(ScienceMark<=100))){
							throw new ScoreException();
						}
						break;
					}
					catch(ScoreException e){
						System.out.println(e.getMessage());
					}
					catch(Exception e){
						System.out.println(e.getMessage());
					}
				}
				stu = new Student(stuNum, stuName);
				stu.enterMarks(MathsMark, EnglishMark, ScienceMark);
				if(stulist.Add(stu)){
					System.out.println("--目前有"+stulist.getTotal()+"个学生，信息为--");
					for(int i=0; i<=stulist.getTotal()-1; i++){
						stu = (Student) stulist.getItem(i);
						System.out.println("学号："+stu.getNumber());
						System.out.println("姓名："+stu.getName());
						System.out.println("数学成绩："+stu.getMathsMark());
						System.out.println("英语成绩："+stu.getEnglishMark());
						System.out.println("科学成绩："+stu.getScienceMark());
						System.out.println("平均成绩："+stu.calculateAverage());
					}
				}
				break;
			case 2:
				if(stulist.getTotal() == 0)
					System.out.println("当前学生数为0，不可删除");
				else{
					while(true){
						sc = new Scanner(System.in);
						try{
							System.out.println("请输入学生学号：");
							stuNum = sc.nextLine();		//读取一个字符串
							boolean isOK = true;
							for(int i=0; i<stuNum.length(); i++){
								if(!(('0'<=stuNum.charAt(i))&&(stuNum.charAt(i)<='9')) ){
									isOK = false;
									break;
								}
							}
							if(!((stuNum.length()==10)&&(stuNum.charAt(0)=='2')&&(stuNum.charAt(1)=='0')&&(isOK))){
								throw new StudentNumberException();
							}
							break;
						}
						catch(StudentNumberException e){
							System.out.println(e.getMessage());
						}
						catch(Exception e){
							System.out.println(e.getMessage());
						}
					}
					if(stulist.Remove(stuNum) == true){
						System.out.println("删除成功");
						System.out.println("--目前有"+stulist.getTotal()+"个学生，信息为--");
						for(int i=0; stulist.getTotal()>0 && i<=stulist.getTotal()-1; i++){
							stu = (Student) stulist.getItem(i);
							System.out.println("学号："+stu.getNumber());
							System.out.println("姓名："+stu.getName());
							System.out.println("数学成绩："+stu.getMathsMark());
							System.out.println("英语成绩："+stu.getEnglishMark());
							System.out.println("科学成绩："+stu.getScienceMark());
							System.out.println("平均成绩："+stu.calculateAverage());
						}
					}
					else {
						System.out.println("对不起，没有对应的学生。");
					}					
				}
				break;
			case 3:
				if(stulist.getTotal() == 0)
					System.out.println("当前学生数为0，不可删除");
				else{
					System.out.println("请输入要删除第几个学生：");
					seq = sc.nextInt();
					if(seq <= stulist.getTotal()){
						if(stulist.Remove(seq-1))
							System.out.println("删除成功");
						else 
							System.out.println("删除失败");
						System.out.println("--目前有"+stulist.getTotal()+"个学生，信息为--");
						for(int i=0; stulist.getTotal()>0 && i<=stulist.getTotal()-1; i++){
							stu = (Student) stulist.getItem(i);
							System.out.println("学号："+stu.getNumber());
							System.out.println("姓名："+stu.getName());
							System.out.println("数学成绩："+stu.getMathsMark());
							System.out.println("英语成绩："+stu.getEnglishMark());
							System.out.println("科学成绩："+stu.getScienceMark());
							System.out.println("平均成绩："+stu.calculateAverage());
						}
					}
					else{
						System.out.println("对不起，没有对应的学生。");
					}
				}
				break;
			case 4:
				if(stulist.isEmpty())
					System.out.println("当前学生数为0");
				else
					System.out.println("当前学生数为："+stulist.getTotal());
				break;
			case 5:
				if(stulist.getTotal() == 0)
					System.out.println("当前学生数为0，不可查找");
				else{
					System.out.println("请输入要查找学生的位置序号：");
					seq = sc.nextInt();
					if((seq > 0) && (seq <= stulist.getTotal())){
						stu = stulist.getItem(seq-1);
						System.out.println("学号："+stu.getNumber());
						System.out.println("姓名："+stu.getName());
						System.out.println("数学成绩："+stu.getMathsMark());
						System.out.println("英语成绩："+stu.getEnglishMark());
						System.out.println("科学成绩："+stu.getScienceMark());
						System.out.println("平均成绩："+stu.calculateAverage());
					}
					else{
						System.out.println("对不起，没有对应的学生");
					}			
				}
				break;
			case 6:
				if(stulist.getTotal() == 0)
					System.out.println("当前学生数为0，不可查找");
				else{
					System.out.println("请输入要查找学生的学号：");
					stuNum = sc.nextLine();
					stu = stulist.getItem(stuNum);
					if(stu != null){
						System.out.println("学号："+stu.getNumber());
						System.out.println("姓名："+stu.getName());
						System.out.println("数学成绩："+stu.getMathsMark());
						System.out.println("英语成绩："+stu.getEnglishMark());
						System.out.println("科学成绩："+stu.getScienceMark());
						System.out.println("平均成绩："+stu.calculateAverage());
					}
					else{
						System.out.println("对不起，没有对应的学生");
					}
				}
				
				break;	
			case 7:
				System.out.println("--目前有"+stulist.getTotal()+"个学生，信息为--");
				for(int i=0; stulist.getTotal()>0 && i<=stulist.getTotal()-1; i++){
					stu = (Student) stulist.getItem(i);
					System.out.println("学号："+stu.getNumber());
					System.out.println("姓名："+stu.getName());
					System.out.println("数学成绩："+stu.getMathsMark());
					System.out.println("英语成绩："+stu.getEnglishMark());
					System.out.println("科学成绩："+stu.getScienceMark());
					System.out.println("平均成绩："+stu.calculateAverage());
				}
				break;
			case 8:
				System.out.println("退出程序。");
				System.exit(0);
				break;
			}
		}
	}
}