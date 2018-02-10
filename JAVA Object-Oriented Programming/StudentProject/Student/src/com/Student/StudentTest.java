package com.Student;

import java.util.Scanner;

public class StudentTest {
	private static Scanner sc;

	public static void main(String[] args){
		Student stu;
		String stuNum = null;
		String stuName = null;
		int MathsMark = -1;
		int EnglishMark = -1;
		int ScienceMark = -1;
		
		
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
		System.out.println("学生信息如下");
		System.out.println("学号："+stu.getNumber());
	    System.out.println("姓名："+stu.getName());
	    System.out.println("数学成绩："+stu.getMathsMark());
	    System.out.println("英语成绩："+stu.getEnglishMark());
	    System.out.println("科学成绩："+stu.getScienceMark());
	    System.out.println("平均成绩："+stu.calculateAverage());
	}	
}