#pragma once
using namespace System;
using namespace System::Windows::Forms;

public ref class ValidarSyP abstract sealed
{
public:
	static bool Ejecutar(String^ stock, String^ precio)
	{
		// Validar longitud, por ejemplo mínimo 1 carácter (podés cambiar según reglas)
		/*bool stockValido = (stock->Length > 0);
		for (int i = 0; i < stock->Length && stockValido; i++) {
			if (!Char::IsDigit(stock[i]))
				stockValido = false;
		}*/
		int stockNumero = 0;
		bool stockValido = false;
		// Intentamos parsear precio a double
		if (int::TryParse(stock, stockNumero)) {
			if (stockNumero > 0) {
				stockValido = true;
			}
		}

		double precioNumero = 0;
		bool precioValido = false;

		// Intentamos parsear precio a double
		if (Double::TryParse(precio, precioNumero)) {
			if (precioNumero > 0) {
				precioValido = true;
			}
		}

		if (!stockValido || !precioValido) {
			MessageBox::Show(
				"Verifique sus datos numéricos:\n- Stock debe ser un numero entero mayor que 0\n- Precio unitario ser un número mayyor que 0",
				"Error de validación", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;  // Retorno false si hay error
		}

		return true; // Retorno true si todo está OK
	}



};