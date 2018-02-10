package com.Student;

import java.io.IOException;

public class StudentNumberException extends IOException{
	private static final long serialVersionUID = 1L;
	public StudentNumberException() {
		super("学号格式不正确，请重新输入！");
	};
}