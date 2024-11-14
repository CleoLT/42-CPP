#ifndef CLASS_H
# define CLASS_H

class Sample {

	public:
		Sample(void);
		~Sample(void);

		int		getFoo(void) const;
		void	setFoo(int value);

	private:
		int		_Foo;
};

#endif
