
//附加类：描述几何元素——点 
class Point{
    public:
        Point();
        Point(float x, float y);
        float x, y;
};

//圆形 
class Circle{
    public:
        Circle(); //默认构造函数 
        Circle(Point p); //重载构造函数 
        Circle(Point p,Point q); //重载构造函数 
        
        void SetCenterPoint(Point p); //设置圆心
        void SetCenterPoint(float x, float y); //设置圆心坐标 （*重载） 
        void SetPoint(Point q);//设置圆外一点 
        void SetPoint(float x,float y); //设置圆外点坐标 
        void Draw(); //绘制圆形 
    private:
        Point p; //圆心 
        Point q;//圆外一点  
};

//矩形 
class Rectangle{
    public:
        Rectangle(); //默认构造函数 
        Rectangle(Point left,Point right,float angle); //重载构造函数 
        void SetLeft_UpPoint(Point a);//设置左上角点 
        void SetRight_DownPoint(Point b);//设置右下角点
		void SetAngle(float x);//设置一个角度
		//已知左上角点和右下角点，过两点作一条线段，取中点，取线段一半的长度为半径，以中点为圆心，用角度确定第三个点的位置。即可确定一个矩形 
		float getArea(); //获取矩形面积  0.5abSinC 
        void Draw(); //绘制矩形 
    private:
        float x;
		Point a;
		Point b; 
};

//椭圆 
class Ellipse{
    public:
        Ellipse(); //默认构造函数 
        Ellipse(Point p1,Point p2, float l_axis); //重载构造函数 
        
        void SetCenterPoint(Point p1,Point p2); //设置椭圆焦点1,焦点2 
        void SetSemiLongAxis(float l_axis); //设置椭圆半长轴长 
        float GetEccentricity(); //获取椭圆的离心率 
        void Draw(); //绘制椭圆 
    private:
        Point center_point; //椭圆圆心 
        float semi_long_axis; //半长轴长 
}; 

//三角形 
class Triangle{
    public:
        Triangle();//默认构造函数 
        
        void SetVertex1(Point v1); //设置顶点1的坐标 
        void SetVertex2(Point v2); //设置顶点2的坐标 
        void SetVertex3(Point v3); //设置顶点3的坐标 
        void Draw(); //绘制三角形 
    private:
        Point vertex1; //顶点1 
        Point vertex2; //顶点2 
        Point vertex3; //顶点3 
};

//四边形 
class Quadrilateral{
    public:
        Quadrilateral();
        
        void SetVertex(int i, Point v); //设置第i个顶点的坐标 
        void SetVertexes(Point v1, Point v2, Point v3, Point v4); //设置四个顶点的坐标 
        void Draw(); //绘制四边形 
    private:
        Point vertexes[4]; //顶点集合 
};
