class Homyak : public HomePet
{
protected:
	string type;
	string show;

public:
	Homyak()
	{
		type = "Uknown";
		show = "Uknown";
		sound = "Uknown";
	};
	Homyak(string type, string show, string sound)
	{

		this->type = type;
		this->show = show;
		this->sound = sound;
	}

	virtual ~Homyak()
	{
		type.clear();
		show.clear();
		sound.clear();
	};
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
	void about() override
	{
		cout << "Type: " << this->type << endl;
		cout << "Name: " << this->show << endl;
		cout << "Sound: " << this->sound << endl;
		cout << "*****" << endl;
	}
};