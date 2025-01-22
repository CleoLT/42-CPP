//protected: c est un autre niveau d encapsulation utilise 
//dans le cadre de l heritage

class	Quadruped {
private:
	std::string	name; //only accessible from an Quadruped object

protected:
	Leg	legs[4]; //accessible from an Quadruped or derived object

public:
	void	run(); //accessible from wherever
};

class	Dog : public Quadruped {
	//can access run() and legs
};

int	main() {
	//can only access run()
}
