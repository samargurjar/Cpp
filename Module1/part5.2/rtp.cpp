#include <stdio.h>

class Window
{
public:
	void setWindowclosing() { printf("assume window closed");}
	virtual void copy() { printf("copying text"); }
	virtual void whatWillAppearInWindow()=0;
private:
		int cursorType;

};

	class PaintBrushWindow:public Window
	{
	public:
		void  setWindowclosing() {  printf("dont close window"); }
		void copy() { printf("copying graphics"); }

	private:
				int noofcolorssupported; 

	};

	class Notepadwindow:public Window
	{
	public:
		void setnoc(int n) { numberofchacractersallowed=n; }

	private:
			int numberofchacractersallowed;

	};

Window* get()
{
	int choice =0;
	printf("\n1. Window \n2. PaintBrushWindow \n3. Notepad");
	scanf("%d",&choice);
	Window *x =NULL;
	if( choice ==1 )
			x =new Window;
	else if(choice ==2 )
			x =new PaintBrushWindow;
	else if(choice ==3)
			x=new Notepadwindow;
	return x;

}

int main()
{

	Window *x =get();
	x->copy();
	return 0;
}












