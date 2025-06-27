#include "pch.h"
#include "Clientes.h"
#include "Proveedores.h"
#include "Stock.h"
#include "Facturacion.h"
#include "Empleados.h"

using namespace FacturadorC;


System::Void Facturacion::buttonEmpleados_Click(System::Object^ sender, System::EventArgs^ e)
{
    Empleados^ emp = gcnew Empleados();
    emp->Show();
    this->Hide();
}

System::Void Facturacion::buttonProveedores_Click(System::Object^ sender, System::EventArgs^ e)
{
    Proveedores^ pro = gcnew Proveedores();
    pro->Show();
    this->Hide();
}

System::Void Facturacion::buttonStock_Click(System::Object^ sender, System::EventArgs^ e)
{
    Stock^ sto = gcnew Stock();
    sto->Show();
    this->Hide();
}
System::Void Facturacion::buttonClientes_Click(System::Object^ sender, System::EventArgs^ e)
{
    Clientes^ sto = gcnew Clientes();
    sto->Show();
    this->Hide();
}