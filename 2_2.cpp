
//����ʱ��
class DigitalColck{ 
    public: 
        DigitalColck(); //Ĭ�Ϲ��캯�� 
        void SetDate(int year, int month, int date); //�������� 
        void SetTime(int hour, int minute, int second); //����ʱ�� 
        int GetYear();  //��ȡ��� 
        int GetMonth(); //��ȡ�·� 
        int GetDate();  //��ȡ���� 
        int GetHour();  //��ȡСʱ 
        int GetMinute();//��ȡ���� 
        int GetSecond();//��ȡ���� 
        int GetDayInWeek(); //��ȡ������������ֵ��Χ[1,7] 
        void Show(); // ��ʾ���ֽ��� 
    private:
        int year;
        int month;
        int date;
        int hour;
        int minute;
        int second;
};
 //����ȡů��
class HomeThermostat{
    public:
        Thermostat();
        
        void TemperatureUp(); // �����¶� 
        void TemperatureDown(); // �����¶�
        int GetTemperature(); // ��ȡ��ǰ�¶� 
        void On(); // ����ȡů�� 
        void Off(); // �ر�ȡů�������˺͹����¶�Ӱ�� 
    private:
        float temperature; // ��ǰ�ⲿ�¶� 
        float innertemperature;//��ǰ�����¶� 
        bool state; // ȡů������״̬ 
};
 //�������
class DigitalTimer{
    enum State{
        STOP, // ���ֹͣ״̬ 
        RUNNING, // ����ʱ״̬ 
        PAUSED //�����ͣ״̬ 
    };
    public:
        DigitalTimer(); // Ĭ�Ϲ��캯�� 
        
        void Start(); // ��ʼ��ʱ 
        void Pause(); // ��ͣ��ʱ�� 
		void Stop(); //ֹͣ��ʱ�� 
		void Reset();//���� 
        void Resume(); // �ָ���ʱ 
        long long getPassTime(); //��ȡ�����ĺ����� 
        int Times()//��¼���� 
        void Show(); // ��ʾ���ֽ��� 
    private:
        long long start_time; // ���ʼʱ�䣬��λ����
        long long pass_time; // ����¼ʱ�䣬��λ���� 
        State timer_state; // ���ǰ״̬��ֹͣ/����/��ͣ 
};
 //MP3������
class MP3Player{
	class play_list{
		MP3File list[99];
		public:
			void GetinMP3(MP3File);//�������
			void GetoutMP3();//�Ƴ����� 
			void MoveMP3();//�ƶ�����˳�� 
	};
    class MP3File{ //mp3�ļ� 
        public:
            MP3File(string name); // mp3�ļ����캯�� 
            string GetName(); // ��ȡmp3�ļ�·�� 
        private:
            string name; //mp3�ļ�·�� 
    };
    
    enum PlayMode{ // mp3����ģʽ 
        ORDER,        //˳�򲥷� 
        SINGLE_CYCLE, //����ѭ�� 
        LIST_LOOP,    //�б�ѭ�� 
        RANDOM        //������� 
    };
    
    public:
        MP3Player();
        
        void PlayNext(); // ������һ�� 
        void PlayLast(); // ������һ�� 
        void Play(); // ��ʼ���� 
        void Pause(); // ��ͣ���� 
        void SetPlayMode(PlayMode mode); // ���ò���ģʽ 
        void GetPlayingMusicName(); // ��ȡ���ڲ��ŵ��������� 
        void Show(); // ��ʾ����//��ʾ��� 
        
        void SetVolumnUp(); // ����+ 
        void SetVolumnDown(); // ����- 
        void LoveThis();//ϲ��������//��ϲ�������� 
        void ChangeList();//���Ĳ����б� 
        void Import(MP3File[] files, int n); // ������������
        void Delete(int position); // ɾ��position�������� 
    private:
        MP3File play_list[MAX_PLAY_LIST_SIZE]; // ���ֲ����б� 
        int current_index; // ��ǰ�������ֵ�����ֵ 
        int volumn; // MP3��ǰ���� 
        PlayMode mode; // mp3����ģʽ 
};
