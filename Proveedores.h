#pragma once

namespace FacturadorC {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Proveedores
	/// </summary>
	public ref class Proveedores : public System::Windows::Forms::Form
	{
	public:
		int Id = 1;
		Proveedores(void)
		{
			InitializeComponent();
			dataGridView1->Columns->Add("IdProveedor", "Id Proveedor");
			dataGridView1->Columns->Add("Apellido", "Apellido");
			dataGridView1->Columns->Add("Nombre", "Nombre");
			dataGridView1->Columns->Add("DNI", "DNI");
			dataGridView1->Columns->Add("Direccion", "Dirección");
			dataGridView1->Columns->Add("Telefono", "Teléfono");
			dataGridView1->Columns->Add("Mail", "Mail");
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Proveedores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonClientes;
	protected:
	private: System::Windows::Forms::Button^ buttonProveedores;
	private: System::Windows::Forms::Button^ buttonCargar;
	private: System::Windows::Forms::Button^ buttonSalir;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBoxMail;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxTelefono;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxDireccion;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxDni;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxNombre;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxApellido;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxIdProveedor;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonEliminar;
	private: System::Windows::Forms::Button^ buttonEditar;
	private: System::Windows::Forms::Button^ buttonAgregar;
	private: System::Windows::Forms::Button^ buttonFacturacion;
	private: System::Windows::Forms::Button^ buttonEmpleados;
	private: System::Windows::Forms::Button^ buttonStock;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonClientes = (gcnew System::Windows::Forms::Button());
			this->buttonProveedores = (gcnew System::Windows::Forms::Button());
			this->buttonCargar = (gcnew System::Windows::Forms::Button());
			this->buttonSalir = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBoxMail = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxDireccion = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxDni = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxApellido = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxIdProveedor = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->buttonEditar = (gcnew System::Windows::Forms::Button());
			this->buttonAgregar = (gcnew System::Windows::Forms::Button());
			this->buttonFacturacion = (gcnew System::Windows::Forms::Button());
			this->buttonEmpleados = (gcnew System::Windows::Forms::Button());
			this->buttonStock = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonClientes
			// 
			this->buttonClientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientes->Location = System::Drawing::Point(152, 42);
			this->buttonClientes->Name = L"buttonClientes";
			this->buttonClientes->Size = System::Drawing::Size(105, 36);
			this->buttonClientes->TabIndex = 98;
			this->buttonClientes->Text = L"Clientes";
			this->buttonClientes->UseVisualStyleBackColor = true;
			this->buttonClientes->Click += gcnew System::EventHandler(this, &Proveedores::buttonClientes_Click);
			// 
			// buttonProveedores
			// 
			this->buttonProveedores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonProveedores->Location = System::Drawing::Point(414, 42);
			this->buttonProveedores->Name = L"buttonProveedores";
			this->buttonProveedores->Size = System::Drawing::Size(105, 36);
			this->buttonProveedores->TabIndex = 97;
			this->buttonProveedores->Text = L"Proveedores";
			this->buttonProveedores->UseVisualStyleBackColor = true;
			// 
			// buttonCargar
			// 
			this->buttonCargar->Location = System::Drawing::Point(727, 192);
			this->buttonCargar->Name = L"buttonCargar";
			this->buttonCargar->Size = System::Drawing::Size(105, 36);
			this->buttonCargar->TabIndex = 96;
			this->buttonCargar->Text = L"Cargar";
			this->buttonCargar->UseVisualStyleBackColor = true;
			this->buttonCargar->Click += gcnew System::EventHandler(this, &Proveedores::buttonCargar_Click);
			// 
			// buttonSalir
			// 
			this->buttonSalir->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonSalir->FlatAppearance->BorderSize = 2;
			this->buttonSalir->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonSalir->Location = System::Drawing::Point(756, 377);
			this->buttonSalir->Name = L"buttonSalir";
			this->buttonSalir->Size = System::Drawing::Size(75, 23);
			this->buttonSalir->TabIndex = 95;
			this->buttonSalir->Text = L"Salir";
			this->buttonSalir->UseVisualStyleBackColor = true;
			this->buttonSalir->Click += gcnew System::EventHandler(this, &Proveedores::buttonSalir_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(152, 440);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(680, 178);
			this->dataGridView1->TabIndex = 94;
			// 
			// textBoxMail
			// 
			this->textBoxMail->Location = System::Drawing::Point(295, 381);
			this->textBoxMail->Name = L"textBoxMail";
			this->textBoxMail->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBoxMail->Size = System::Drawing::Size(337, 20);
			this->textBoxMail->TabIndex = 93;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(152, 381);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 16);
			this->label7->TabIndex = 92;
			this->label7->Text = L"Mail";
			// 
			// textBoxTelefono
			// 
			this->textBoxTelefono->Location = System::Drawing::Point(295, 337);
			this->textBoxTelefono->Name = L"textBoxTelefono";
			this->textBoxTelefono->Size = System::Drawing::Size(337, 20);
			this->textBoxTelefono->TabIndex = 91;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(152, 337);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 16);
			this->label6->TabIndex = 90;
			this->label6->Text = L"Telefono";
			// 
			// textBoxDireccion
			// 
			this->textBoxDireccion->Location = System::Drawing::Point(295, 296);
			this->textBoxDireccion->Name = L"textBoxDireccion";
			this->textBoxDireccion->Size = System::Drawing::Size(337, 20);
			this->textBoxDireccion->TabIndex = 89;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(152, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 16);
			this->label5->TabIndex = 88;
			this->label5->Text = L"Direccion";
			// 
			// textBoxDni
			// 
			this->textBoxDni->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxDni->Location = System::Drawing::Point(295, 251);
			this->textBoxDni->Name = L"textBoxDni";
			this->textBoxDni->Size = System::Drawing::Size(337, 20);
			this->textBoxDni->TabIndex = 87;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(152, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 16);
			this->label4->TabIndex = 86;
			this->label4->Text = L"DNI";
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Location = System::Drawing::Point(295, 208);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(337, 20);
			this->textBoxNombre->TabIndex = 85;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(152, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 84;
			this->label3->Text = L"Nombre";
			// 
			// textBoxApellido
			// 
			this->textBoxApellido->Location = System::Drawing::Point(295, 164);
			this->textBoxApellido->Name = L"textBoxApellido";
			this->textBoxApellido->Size = System::Drawing::Size(337, 20);
			this->textBoxApellido->TabIndex = 83;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(152, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 16);
			this->label2->TabIndex = 82;
			this->label2->Text = L"Apellido";
			// 
			// textBoxIdProveedor
			// 
			this->textBoxIdProveedor->Enabled = false;
			this->textBoxIdProveedor->Location = System::Drawing::Point(295, 117);
			this->textBoxIdProveedor->Name = L"textBoxIdProveedor";
			this->textBoxIdProveedor->Size = System::Drawing::Size(337, 20);
			this->textBoxIdProveedor->TabIndex = 81;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(152, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 16);
			this->label1->TabIndex = 80;
			this->label1->Text = L"Id Proveedor";
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(726, 306);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(105, 36);
			this->buttonEliminar->TabIndex = 79;
			this->buttonEliminar->Text = L"Eliminar";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &Proveedores::buttonEliminar_Click);
			// 
			// buttonEditar
			// 
			this->buttonEditar->Location = System::Drawing::Point(726, 251);
			this->buttonEditar->Name = L"buttonEditar";
			this->buttonEditar->Size = System::Drawing::Size(105, 36);
			this->buttonEditar->TabIndex = 78;
			this->buttonEditar->Text = L"Editar";
			this->buttonEditar->UseVisualStyleBackColor = true;
			this->buttonEditar->Click += gcnew System::EventHandler(this, &Proveedores::buttonEditar_Click);
			// 
			// buttonAgregar
			// 
			this->buttonAgregar->Location = System::Drawing::Point(726, 124);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(105, 36);
			this->buttonAgregar->TabIndex = 77;
			this->buttonAgregar->Text = L"Agregar";
			this->buttonAgregar->UseVisualStyleBackColor = true;
			this->buttonAgregar->Click += gcnew System::EventHandler(this, &Proveedores::buttonAgregar_Click);
			// 
			// buttonFacturacion
			// 
			this->buttonFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFacturacion->Location = System::Drawing::Point(691, 42);
			this->buttonFacturacion->Name = L"buttonFacturacion";
			this->buttonFacturacion->Size = System::Drawing::Size(140, 65);
			this->buttonFacturacion->TabIndex = 76;
			this->buttonFacturacion->Text = L"Facturacion";
			this->buttonFacturacion->UseVisualStyleBackColor = true;
			this->buttonFacturacion->Click += gcnew System::EventHandler(this, &Proveedores::buttonFacturacion_Click);
			// 
			// buttonEmpleados
			// 
			this->buttonEmpleados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEmpleados->Location = System::Drawing::Point(283, 42);
			this->buttonEmpleados->Name = L"buttonEmpleados";
			this->buttonEmpleados->Size = System::Drawing::Size(105, 36);
			this->buttonEmpleados->TabIndex = 75;
			this->buttonEmpleados->Text = L"Empleados";
			this->buttonEmpleados->UseVisualStyleBackColor = true;
			this->buttonEmpleados->Click += gcnew System::EventHandler(this, &Proveedores::buttonEmpleados_Click);
			// 
			// buttonStock
			// 
			this->buttonStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStock->Location = System::Drawing::Point(558, 42);
			this->buttonStock->Name = L"buttonStock";
			this->buttonStock->Size = System::Drawing::Size(105, 36);
			this->buttonStock->TabIndex = 74;
			this->buttonStock->Text = L"Stock";
			this->buttonStock->UseVisualStyleBackColor = true;
			this->buttonStock->Click += gcnew System::EventHandler(this, &Proveedores::buttonStock_Click);
			// 
			// Proveedores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(984, 661);
			this->Controls->Add(this->buttonClientes);
			this->Controls->Add(this->buttonProveedores);
			this->Controls->Add(this->buttonCargar);
			this->Controls->Add(this->buttonSalir);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBoxMail);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxTelefono);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxDireccion);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxDni);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxNombre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxApellido);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxIdProveedor);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonEditar);
			this->Controls->Add(this->buttonAgregar);
			this->Controls->Add(this->buttonFacturacion);
			this->Controls->Add(this->buttonEmpleados);
			this->Controls->Add(this->buttonStock);
			this->Name = L"Proveedores";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Proveedores";
			this->Load += gcnew System::EventHandler(this, &Proveedores::Proveedores_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	System::Void buttonClientes_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void buttonEmpleados_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void buttonStock_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void buttonFacturacion_Click(System::Object ^ sender, System::EventArgs ^ e);
	private: System::Void buttonSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dni = textBoxDni->Text;
	String^ telefono = textBoxTelefono->Text;

	if (!ValidarDniTel::Ejecutar(dni, telefono)) {
		return; // Detenemos el proceso si los datos no son válidos
	}
	dataGridView1->Rows->Add(
		Id.ToString(),
		textBoxApellido->Text,
		textBoxNombre->Text,
		textBoxDni->Text,
		textBoxDireccion->Text,
		textBoxTelefono->Text,
		textBoxMail->Text
	);
	Id++;
	/*
	textBoxIdProveedor->Clear();
	textBoxApellido->Clear();
	textBoxNombre->Clear();
	textBoxDni->Clear();
	textBoxDireccion->Clear();
	textBoxTelefono->Clear();
	textBoxMail->Clear();*/
}
private: System::Void buttonCargar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {
		// Obtener la fila seleccionada
		DataGridViewRow^ fila = dataGridView1->SelectedRows[0];

		// Modificar los valores de la fila con los datos de los TextBox
		textBoxIdProveedor->Text = Convert::ToString(fila->Cells[0]->Value);
		textBoxApellido->Text = Convert::ToString(fila->Cells[1]->Value);
		textBoxNombre->Text = Convert::ToString(fila->Cells[2]->Value);
		textBoxDni->Text = Convert::ToString(fila->Cells[3]->Value);
		textBoxDireccion->Text = Convert::ToString(fila->Cells[4]->Value);
		textBoxTelefono->Text = Convert::ToString(fila->Cells[5]->Value);
		textBoxMail->Text = Convert::ToString(fila->Cells[6]->Value);

	}
	else {
		MessageBox::Show("Seleccioná una fila para cargar.");
	}
}
private: System::Void buttonEditar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {

		String^ dni = textBoxDni->Text;
		String^ telefono = textBoxTelefono->Text;

		if (!ValidarDniTel::Ejecutar(dni, telefono)) {
			return; // Detenemos el proceso si los datos no son válidos
		}

		// Obtener la fila seleccionada
		DataGridViewRow^ fila = dataGridView1->SelectedRows[0];

		// Modificar los valores de la fila con los datos de los TextBox
		fila->Cells[0]->Value = textBoxIdProveedor->Text;
		fila->Cells[1]->Value = textBoxApellido->Text;
		fila->Cells[2]->Value = textBoxNombre->Text;
		fila->Cells[3]->Value = textBoxDni->Text;
		fila->Cells[4]->Value = textBoxDireccion->Text;
		fila->Cells[5]->Value = textBoxTelefono->Text;
		fila->Cells[6]->Value = textBoxMail->Text;
	}
	else {
		MessageBox::Show("Seleccioná una fila para editar.");
	}
}
private: System::Void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {
		dataGridView1->Rows->RemoveAt(dataGridView1->SelectedRows[0]->Index);
	}
	else {
		MessageBox::Show("Seleccioná una fila para eliminar.");
	}
}
private: System::Void Proveedores_Load(System::Object^ sender, System::EventArgs^ e) {
		   dataGridView1->ReadOnly = true;
		   dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		   dataGridView1->MultiSelect = false;
		   dataGridView1->AllowUserToAddRows = false;
		   dataGridView1->AllowUserToDeleteRows = false;
		   dataGridView1->AllowUserToOrderColumns = false;
}
};
}
