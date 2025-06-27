#include "pch.h"
#include "Clientes.h"
#include "Empleados.h"
#include "Proveedores.h"
#include "Stock.h"
#include "Facturacion.h"

using namespace FacturadorC;

System::Void Proveedores::buttonEmpleados_Click(System::Object^ sender, System::EventArgs^ e)
{
    Empleados^ emp = gcnew Empleados();
    emp->Show();
    this->Hide();
}

System::Void Proveedores::buttonClientes_Click(System::Object^ sender, System::EventArgs^ e)
{
    Clientes^ pro = gcnew Clientes();
    pro->Show();
    this->Hide();
}

System::Void Proveedores::buttonStock_Click(System::Object^ sender, System::EventArgs^ e)
{
    Stock^ sto = gcnew Stock();
    sto->Show();
    this->Hide();
}
System::Void Proveedores::buttonFacturacion_Click(System::Object^ sender, System::EventArgs^ e)
{
    Facturacion^ sto = gcnew Facturacion();
    sto->Show();
    this->Hide();
}

