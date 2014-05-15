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
		virtual void whatWillAppearInWindow()
		{ printf("showing paintbrush options and colors"); }

	private:
				int noofcolorssupported; 

	};

	class Notepadwindow:public Window
	{
	public:
		void setnoc(int n) { numberofchacractersallowed=n; }
		virtual void whatWillAppearInWindow()
		{ printf("assume notepad screen appears to type questions"); }

	private:
			int numberofchacractersallowed;

	};

Window* get()
{
	int choice =0;
	printf("\n2. PaintBrushWindow \n3. Notepad");
	scanf("%d",&choice);
	Window *x =NULL;
	if(choice ==2 )
			x =new PaintBrushWindow;
	else if(choice ==3)
			;
	return x;

}

int main()
{

	Window *x =get();
	x->copy();
	return 0;
}












