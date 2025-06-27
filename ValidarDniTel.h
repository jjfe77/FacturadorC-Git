#pragma once

using namespace System;
using namespace System::Windows::Forms;

public ref class ValidarDniTel abstract sealed
{
public:
    static bool Ejecutar(String^ dni, String^ telefono)
    {
        bool dniValido = dni->Length == 8;
        for (int i = 0; i < dni->Length && dniValido; i++) {
            if (!Char::IsDigit(dni[i])) {
                dniValido = false;
            }
        }

        bool telefonoValido = telefono->Length == 10;
        for (int i = 0; i < telefono->Length && telefonoValido; i++) {
            if (!Char::IsDigit(telefono[i])) {
                telefonoValido = false;
            }
        }

        if (!dniValido || !telefonoValido) {
            MessageBox::Show(
                "Verifique sus datos numéricos:\n- DNI debe tener 8 dígitos\n- Teléfono debe tener 10 dígitos",
                "Error de validación", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return false;
        }

        return true;
    }
};