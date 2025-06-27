#include "pch.h"
#include "Clientes.h"
#include "Empleados.h"
#include "Proveedores.h"
#include "Stock.h"
#include "Facturacion.h"

using namespace FacturadorC;

System::Void Clientes::buttonEmpleados_Click(System::Object^ sender, System::EventArgs^ e)
{
    Empleados^ emp = gcnew Empleados();
    emp->Show();
    this->Hide();
}

System::Void Clientes::buttonProveedores_Click(System::Object^ sender, System::EventArgs^ e)
{
    Proveedores^ pro = gcnew Proveedores();
    pro->Show();
    this->Hide();
}

System::Void Clientes::buttonStock_Click(System::Object^ sender, System::EventArgs^ e)
{
    Stock^ sto = gcnew Stock();
    sto->Show();
    this->Hide();
}
System::Void Clientes::buttonFacturacion_Click(System::Object^ sender, System::EventArgs^ e)
{
    Facturacion^ sto = gcnew Facturacion();
    sto->Show();
    this->Hide();
}

