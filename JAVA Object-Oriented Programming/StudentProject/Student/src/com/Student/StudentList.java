package com.Student;

import java.util.ArrayList;

public class StudentList {
	private ArrayList<Student> list;	//list存储学生对象
	private int total;			//学生总人数
	public StudentList(){		//length是数组长度
		list = new ArrayList<>(100);
		total = list.size();
	}
	public boolean Add(Student stu){//增加 stu 到数组中，成功，返回 true，否则 false
	    return list.add(stu);
	}
	public boolean Remove(int no){//删除第 no个数组元素，删除成功，返回 true，否则 false
		if(no >= 0 && list.remove(no) != null)
			return true;
		else
			return false;
	}
	public boolean Remove(String number){//删除学号为 number的学生，删除成功， 返回 true，否则 false 
		int no = -1;
		for(int i=0; i <= list.size()-1;i++){
			if(list.get(i).getNumber().equals(number)){
				no = i;
				break;
			}	
		}
		if((no >= 0) && (list.remove(no) != null))
			return true;
		else 
			return false;
	}
	public boolean isEmpty(){//判断数组是否为空，若是，返回 true，否则 false 
		return list.isEmpty();
	}
	public Student getItem(int no){//返回第 no个学生 
		return list.get(no);
	}
	public Student getItem(String number){//返回学号为 number 的学生，若该生不存在，返回 null。 
		int no = -1;
		for(int i=0; i <= list.size()-1; i++){
			if(list.get(i).getNumber().equals(number)){
				no = i;
				break;
			}
		}
		if((no >= 0) && (no <= list.size()-1))
			return list.get(no);
		else 
			return null;
	}
	public int getTotal(){//返回学生总人数
		total = list.size();
		return total;
	}
}