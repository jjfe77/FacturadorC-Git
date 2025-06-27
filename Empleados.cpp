#include "pch.h"
#include "Clientes.h"
#include "Empleados.h"
#include "Proveedores.h"
#include "Stock.h"
#include "Facturacion.h"

using namespace FacturadorC;

System::Void Empleados::buttonClientes_Click(System::Object^ sender, System::EventArgs^ e) {
    Clientes^ cli = gcnew Clientes();
    cli->Show();
    this->Hide();
}

System::Void Empleados::buttonProveedores_Click(System::Object^ sender, System::EventArgs^ e)
{
    Proveedores^ pro = gcnew Proveedores();
    pro->Show();
    this->Hide();
}

System::Void Empleados::buttonStock_Click(System::Object^ sender, System::EventArgs^ e)
{
    Stock^ sto = gcnew Stock();
    sto->Show();
    this->Hide();
}
System::Void Empleados::buttonFacturacion_Click(System::Object^ sender, System::EventArgs^ e)
{
    Facturacion^ sto = gcnew Facturacion();
    sto->Show();
    this->Hide();
}