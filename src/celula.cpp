#include "../include/celula.hpp"
#include "../include/grid.hpp"

Celula::Celula(int i, int j) {
	set_Posicion(i, j);
	set_Estado(0);
}

int Celula::get_Estado(void) const {
	return estado_;
}

std::pair<int, int> Celula::get_Posicion(void) {
	return posicion_;
}

int Celula::get_VecinasVivas(void) {
	return num_vecinas_vivas_;
}

void Celula::set_Estado(int estado) {
	estado_ = estado;
}

void Celula::set_Posicion(std::pair<int, int> pos) {
	posicion_ = pos;
}

void Celula::set_Posicion(int i, int j) {
	posicion_ = std::make_pair(i, j);
}

void Celula::set_VecinasVivas(int num) {
	num_vecinas_vivas_ = num;
}

int Celula::actualizarEstado(void)  {
	if(get_Estado() == 0) {
		if(get_VecinasVivas() == 3) {
			set_Estado(1);
			return 1;
		}

		else
			return 0;
	}
	else {
		if(get_VecinasVivas() == 2 || get_VecinasVivas() == 3) {
			set_Estado(1);
			return 0;
		}
		else {
			set_Estado(0);
			return 1;
		}
	}
}

int Celula::contarVecinas(const Grid& board) {
	int counter = 0;
	//bucle para mirar todas las posiciones de las vecinas
	for(int i = get_Posicion().first - 1; i <= get_Posicion().first + 1; i++)
		for(int j = get_Posicion().second - 1; j <= get_Posicion().second + 1; j++)
		//evitamos contar la posicion en la que estamos
			if(i != get_Posicion().first || j != get_Posicion().second)
			//comprobamos si esta viva
				if(board.get_Malla()[i * board.get_Columnas() + j]->get_Estado() == 1)
					counter++;

 	set_VecinasVivas(counter);
	return get_VecinasVivas();
}

std::ostream& operator<<(std::ostream& cout, const Celula cel) {
	if(cel.get_Estado() == 0)
		cout << " ";
	else
		cout << "X";

	return cout;
}