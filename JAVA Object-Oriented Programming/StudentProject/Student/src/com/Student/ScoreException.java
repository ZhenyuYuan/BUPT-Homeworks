package com.Student;

import java.io.IOException;

public class ScoreException extends IOException{
	private static final long serialVersionUID = 1L;
	public ScoreException() {
		super("成绩数据有误，请重新输入！");
	};
}
