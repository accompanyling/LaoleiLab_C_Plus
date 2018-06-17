
//�����ࣺ��������Ԫ�ء����� 
class Point{
    public:
        Point();
        Point(float x, float y);
        float x, y;
};

//Բ�� 
class Circle{
    public:
        Circle(); //Ĭ�Ϲ��캯�� 
        Circle(Point p); //���ع��캯�� 
        Circle(Point p,Point q); //���ع��캯�� 
        
        void SetCenterPoint(Point p); //����Բ��
        void SetCenterPoint(float x, float y); //����Բ������ ��*���أ� 
        void SetPoint(Point q);//����Բ��һ�� 
        void SetPoint(float x,float y); //����Բ������� 
        void Draw(); //����Բ�� 
    private:
        Point p; //Բ�� 
        Point q;//Բ��һ��  
};

//���� 
class Rectangle{
    public:
        Rectangle(); //Ĭ�Ϲ��캯�� 
        Rectangle(Point left,Point right,float angle); //���ع��캯�� 
        void SetLeft_UpPoint(Point a);//�������Ͻǵ� 
        void SetRight_DownPoint(Point b);//�������½ǵ�
		void SetAngle(float x);//����һ���Ƕ�
		//��֪���Ͻǵ�����½ǵ㣬��������һ���߶Σ�ȡ�е㣬ȡ�߶�һ��ĳ���Ϊ�뾶�����е�ΪԲ�ģ��ýǶ�ȷ�����������λ�á�����ȷ��һ������ 
		float getArea(); //��ȡ�������  0.5abSinC 
        void Draw(); //���ƾ��� 
    private:
        float x;
		Point a;
		Point b; 
};

//��Բ 
class Ellipse{
    public:
        Ellipse(); //Ĭ�Ϲ��캯�� 
        Ellipse(Point p1,Point p2, float l_axis); //���ع��캯�� 
        
        void SetCenterPoint(Point p1,Point p2); //������Բ����1,����2 
        void SetSemiLongAxis(float l_axis); //������Բ�볤�᳤ 
        float GetEccentricity(); //��ȡ��Բ�������� 
        void Draw(); //������Բ 
    private:
        Point center_point; //��ԲԲ�� 
        float semi_long_axis; //�볤�᳤ 
}; 

//������ 
class Triangle{
    public:
        Triangle();//Ĭ�Ϲ��캯�� 
        
        void SetVertex1(Point v1); //���ö���1������ 
        void SetVertex2(Point v2); //���ö���2������ 
        void SetVertex3(Point v3); //���ö���3������ 
        void Draw(); //���������� 
    private:
        Point vertex1; //����1 
        Point vertex2; //����2 
        Point vertex3; //����3 
};

//�ı��� 
class Quadrilateral{
    public:
        Quadrilateral();
        
        void SetVertex(int i, Point v); //���õ�i����������� 
        void SetVertexes(Point v1, Point v2, Point v3, Point v4); //�����ĸ���������� 
        void Draw(); //�����ı��� 
    private:
        Point vertexes[4]; //���㼯�� 
};
