
//数字时钟
class DigitalColck{ 
    public: 
        DigitalColck(); //默认构造函数 
        void SetDate(int year, int month, int date); //设置日期 
        void SetTime(int hour, int minute, int second); //设置时间 
        int GetYear();  //获取年份 
        int GetMonth(); //获取月份 
        int GetDate();  //获取日期 
        int GetHour();  //获取小时 
        int GetMinute();//获取分钟 
        int GetSecond();//获取秒钟 
        int GetDayInWeek(); //获取星期数，返回值范围[1,7] 
        void Show(); // 显示数字界面 
    private:
        int year;
        int month;
        int date;
        int hour;
        int minute;
        int second;
};
 //家用取暖器
class HomeThermostat{
    public:
        Thermostat();
        
        void TemperatureUp(); // 调高温度 
        void TemperatureDown(); // 调低温度
        int GetTemperature(); // 获取当前温度 
        void On(); // 开启取暖器 
        void Off(); // 关闭取暖器，受人和工作温度影响 
    private:
        float temperature; // 当前外部温度 
        float innertemperature;//当前工作温度 
        bool state; // 取暖器开启状态 
};
 //数字秒表
class DigitalTimer{
    enum State{
        STOP, // 秒表停止状态 
        RUNNING, // 秒表计时状态 
        PAUSED //秒表暂停状态 
    };
    public:
        DigitalTimer(); // 默认构造函数 
        
        void Start(); // 开始计时 
        void Pause(); // 暂停计时器 
		void Stop(); //停止计时器 
		void Reset();//归零 
        void Resume(); // 恢复计时 
        long long getPassTime(); //获取经过的毫秒数 
        int Times()//记录次数 
        void Show(); // 显示数字界面 
    private:
        long long start_time; // 秒表开始时间，单位毫秒
        long long pass_time; // 秒表记录时间，单位毫秒 
        State timer_state; // 秒表当前状态，停止/运行/暂停 
};
 //MP3播放器
class MP3Player{
	class play_list{
		MP3File list[99];
		public:
			void GetinMP3(MP3File);//添加音乐
			void GetoutMP3();//移除音乐 
			void MoveMP3();//移动音乐顺序 
	};
    class MP3File{ //mp3文件 
        public:
            MP3File(string name); // mp3文件构造函数 
            string GetName(); // 获取mp3文件路径 
        private:
            string name; //mp3文件路径 
    };
    
    enum PlayMode{ // mp3播放模式 
        ORDER,        //顺序播放 
        SINGLE_CYCLE, //单曲循环 
        LIST_LOOP,    //列表循环 
        RANDOM        //随机播放 
    };
    
    public:
        MP3Player();
        
        void PlayNext(); // 播放下一首 
        void PlayLast(); // 播放上一首 
        void Play(); // 开始播放 
        void Pause(); // 暂停播放 
        void SetPlayMode(PlayMode mode); // 设置播放模式 
        void GetPlayingMusicName(); // 获取正在播放的音乐名字 
        void Show(); // 显示封面//显示歌词 
        
        void SetVolumnUp(); // 音量+ 
        void SetVolumnDown(); // 音量- 
        void LoveThis();//喜欢此音乐//不喜欢此音乐 
        void ChangeList();//更改播放列表 
        void Import(MP3File[] files, int n); // 批量导入音乐
        void Delete(int position); // 删除position处的音乐 
    private:
        MP3File play_list[MAX_PLAY_LIST_SIZE]; // 音乐播放列表 
        int current_index; // 当前播放音乐的索引值 
        int volumn; // MP3当前音量 
        PlayMode mode; // mp3播放模式 
};
