#include "pch.h"
#include "Clientes.h"
#include "Proveedores.h"
#include "Stock.h"
#include "Facturacion.h"
#include "Empleados.h"

using namespace FacturadorC;

System::Void Stock::buttonEmpleados_Click(System::Object^ sender, System::EventArgs^ e)
{
    Empleados^ emp = gcnew Empleados();
    emp->Show();
    this->Hide();
}

System::Void Stock::buttonProveedores_Click(System::Object^ sender, System::EventArgs^ e)
{
    Proveedores^ pro = gcnew Proveedores();
    pro->Show();
    this->Hide();
}

System::Void Stock::buttonClientes_Click(System::Object^ sender, System::EventArgs^ e)
{
    Clientes^ sto = gcnew Clientes();
    sto->Show();
    this->Hide();
}
System::Void Stock::buttonFacturacion_Click(System::Object^ sender, System::EventArgs^ e)
{
    Facturacion^ sto = gcnew Facturacion();
    sto->Show();
    this->Hide();
}