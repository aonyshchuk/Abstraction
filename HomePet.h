
class HomePet abstract
{
protected:
	string type;
	string show;
	string sound;

public:
	HomePet()
	{
		type = "Uknown";
		show = "Uknown";
		sound = "Uknown";
	};
	HomePet(string type, string show, string sound)
	{
		cout << "HomePet(string type, string show, string sound)" << endl;
		this->type = type;
		this->show = show;
		this->sound = sound;
	}
	virtual ~HomePet()
	{
		type.clear();
		show.clear();
		sound.clear();
	};
	virtual void about() = 0;

	void setType(string type)
	{
		this->type = type;
	}
	string getType()
	{
		return this->type;
	}
	void setShow(string show)
	{
		this->show = show;
	}
	string getShow()
	{
		return this->show;
	}
	void setSound(string sound)
	{
		this->sound = sound;
	}
	string getSound()
	{
		return this->sound;
	}
};
