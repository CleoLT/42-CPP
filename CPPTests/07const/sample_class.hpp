#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H


//CONST : READ-ONLY CODE
class Sample {
	
	public:
		float const	pi;
		int			qd;

		Sample(float const f);
		~Sample(void);

		void	bar(void) const; //si se define una funcion que no cambia la						//instancia de una clase, definirla siempre como const
	};

#endif
