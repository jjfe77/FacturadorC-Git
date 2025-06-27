#pragma once
#include "ValidarSyP.h"



namespace FacturadorC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Stock
	/// </summary>
	public ref class Stock : public System::Windows::Forms::Form
	{
	public:
		int Id = 1;
		Stock(void)
		{
			InitializeComponent();
			dataGridView1->Columns->Add("IdProducto", "Id Producto");
			dataGridView1->Columns->Add("NombreProducto", "Nombre Producto");
			dataGridView1->Columns->Add("Categoria", "Categoria");
			dataGridView1->Columns->Add("Stock", "Stock");
			dataGridView1->Columns->Add("PrecioUniratio", "Precio Unitatio");

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Stock()
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




	private: System::Windows::Forms::TextBox^ textBoxPrecio;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxStock;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxCategoria;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxNombreProducto;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxIdProducto;
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
		System::ComponentModel::Container^ components;

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
			this->textBoxPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxStock = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxCategoria = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxNombreProducto = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxIdProducto = (gcnew System::Windows::Forms::TextBox());
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
			this->buttonClientes->TabIndex = 123;
			this->buttonClientes->Text = L"Clientes";
			this->buttonClientes->UseVisualStyleBackColor = true;
			this->buttonClientes->Click += gcnew System::EventHandler(this, &Stock::buttonClientes_Click);
			// 
			// buttonProveedores
			// 
			this->buttonProveedores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonProveedores->Location = System::Drawing::Point(414, 42);
			this->buttonProveedores->Name = L"buttonProveedores";
			this->buttonProveedores->Size = System::Drawing::Size(105, 36);
			this->buttonProveedores->TabIndex = 122;
			this->buttonProveedores->Text = L"Proveedores";
			this->buttonProveedores->UseVisualStyleBackColor = true;
			this->buttonProveedores->Click += gcnew System::EventHandler(this, &Stock::buttonProveedores_Click);
			// 
			// buttonCargar
			// 
			this->buttonCargar->Location = System::Drawing::Point(727, 192);
			this->buttonCargar->Name = L"buttonCargar";
			this->buttonCargar->Size = System::Drawing::Size(105, 36);
			this->buttonCargar->TabIndex = 121;
			this->buttonCargar->Text = L"Cargar";
			this->buttonCargar->UseVisualStyleBackColor = true;
			this->buttonCargar->Click += gcnew System::EventHandler(this, &Stock::buttonCargar_Click);
			// 
			// buttonSalir
			// 
			this->buttonSalir->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonSalir->FlatAppearance->BorderSize = 2;
			this->buttonSalir->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonSalir->Location = System::Drawing::Point(756, 377);
			this->buttonSalir->Name = L"buttonSalir";
			this->buttonSalir->Size = System::Drawing::Size(75, 23);
			this->buttonSalir->TabIndex = 120;
			this->buttonSalir->Text = L"Salir";
			this->buttonSalir->UseVisualStyleBackColor = true;
			this->buttonSalir->Click += gcnew System::EventHandler(this, &Stock::buttonSalir_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(152, 440);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(680, 178);
			this->dataGridView1->TabIndex = 119;
			// 
			// textBoxPrecio
			// 
			this->textBoxPrecio->Location = System::Drawing::Point(295, 296);
			this->textBoxPrecio->Name = L"textBoxPrecio";
			this->textBoxPrecio->Size = System::Drawing::Size(337, 20);
			this->textBoxPrecio->TabIndex = 114;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(152, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 16);
			this->label5->TabIndex = 113;
			this->label5->Text = L"Precio Unitario";
			// 
			// textBoxStock
			// 
			this->textBoxStock->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxStock->Location = System::Drawing::Point(295, 251);
			this->textBoxStock->Name = L"textBoxStock";
			this->textBoxStock->Size = System::Drawing::Size(337, 20);
			this->textBoxStock->TabIndex = 112;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(152, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 16);
			this->label4->TabIndex = 111;
			this->label4->Text = L"Stock";
			// 
			// textBoxCategoria
			// 
			this->textBoxCategoria->Location = System::Drawing::Point(295, 208);
			this->textBoxCategoria->Name = L"textBoxCategoria";
			this->textBoxCategoria->Size = System::Drawing::Size(337, 20);
			this->textBoxCategoria->TabIndex = 110;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(152, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 16);
			this->label3->TabIndex = 109;
			this->label3->Text = L"Categoria";
			// 
			// textBoxNombreProducto
			// 
			this->textBoxNombreProducto->Location = System::Drawing::Point(295, 164);
			this->textBoxNombreProducto->Name = L"textBoxNombreProducto";
			this->textBoxNombreProducto->Size = System::Drawing::Size(337, 20);
			this->textBoxNombreProducto->TabIndex = 108;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(152, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 107;
			this->label2->Text = L"Nombre";
			// 
			// textBoxIdProducto
			// 
			this->textBoxIdProducto->Enabled = false;
			this->textBoxIdProducto->Location = System::Drawing::Point(295, 117);
			this->textBoxIdProducto->Name = L"textBoxIdProducto";
			this->textBoxIdProducto->Size = System::Drawing::Size(337, 20);
			this->textBoxIdProducto->TabIndex = 106;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(152, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 16);
			this->label1->TabIndex = 105;
			this->label1->Text = L"Id Producto";
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(726, 306);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(105, 36);
			this->buttonEliminar->TabIndex = 104;
			this->buttonEliminar->Text = L"Eliminar";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &Stock::buttonEliminar_Click);
			// 
			// buttonEditar
			// 
			this->buttonEditar->Location = System::Drawing::Point(726, 251);
			this->buttonEditar->Name = L"buttonEditar";
			this->buttonEditar->Size = System::Drawing::Size(105, 36);
			this->buttonEditar->TabIndex = 103;
			this->buttonEditar->Text = L"Editar";
			this->buttonEditar->UseVisualStyleBackColor = true;
			this->buttonEditar->Click += gcnew System::EventHandler(this, &Stock::buttonEditar_Click);
			// 
			// buttonAgregar
			// 
			this->buttonAgregar->Location = System::Drawing::Point(726, 124);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(105, 36);
			this->buttonAgregar->TabIndex = 102;
			this->buttonAgregar->Text = L"Agregar";
			this->buttonAgregar->UseVisualStyleBackColor = true;
			this->buttonAgregar->Click += gcnew System::EventHandler(this, &Stock::buttonAgregar_Click);
			// 
			// buttonFacturacion
			// 
			this->buttonFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFacturacion->Location = System::Drawing::Point(691, 42);
			this->buttonFacturacion->Name = L"buttonFacturacion";
			this->buttonFacturacion->Size = System::Drawing::Size(140, 65);
			this->buttonFacturacion->TabIndex = 101;
			this->buttonFacturacion->Text = L"Facturacion";
			this->buttonFacturacion->UseVisualStyleBackColor = true;
			this->buttonFacturacion->Click += gcnew System::EventHandler(this, &Stock::buttonFacturacion_Click);
			// 
			// buttonEmpleados
			// 
			this->buttonEmpleados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEmpleados->Location = System::Drawing::Point(283, 42);
			this->buttonEmpleados->Name = L"buttonEmpleados";
			this->buttonEmpleados->Size = System::Drawing::Size(105, 36);
			this->buttonEmpleados->TabIndex = 100;
			this->buttonEmpleados->Text = L"Empleados";
			this->buttonEmpleados->UseVisualStyleBackColor = true;
			this->buttonEmpleados->Click += gcnew System::EventHandler(this, &Stock::buttonEmpleados_Click);
			// 
			// buttonStock
			// 
			this->buttonStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStock->Location = System::Drawing::Point(558, 42);
			this->buttonStock->Name = L"buttonStock";
			this->buttonStock->Size = System::Drawing::Size(105, 36);
			this->buttonStock->TabIndex = 99;
			this->buttonStock->Text = L"Stock";
			this->buttonStock->UseVisualStyleBackColor = true;
			// 
			// Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SandyBrown;
			this->ClientSize = System::Drawing::Size(984, 661);
			this->Controls->Add(this->buttonClientes);
			this->Controls->Add(this->buttonProveedores);
			this->Controls->Add(this->buttonCargar);
			this->Controls->Add(this->buttonSalir);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBoxPrecio);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxStock);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxCategoria);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxNombreProducto);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxIdProducto);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonEditar);
			this->Controls->Add(this->buttonAgregar);
			this->Controls->Add(this->buttonFacturacion);
			this->Controls->Add(this->buttonEmpleados);
			this->Controls->Add(this->buttonStock);
			this->Name = L"Stock";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Stock";
			this->Load += gcnew System::EventHandler(this, &Stock::Stock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void buttonClientes_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonEmpleados_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonProveedores_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonFacturacion_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stock = textBoxStock->Text;
		String^ precio = textBoxPrecio->Text;

		if (!ValidarSyP::Ejecutar(stock, precio)) {
			return; // Detenemos el proceso si los datos no son válidos
		}
			dataGridView1->Rows->Add(
			Id.ToString(),
			textBoxNombreProducto->Text,
			textBoxCategoria->Text,
			textBoxStock->Text,
			textBoxPrecio->Text
		);
			Id++;
		/*
		textBoxIdProducto->Clear();
		textBoxNombreProducto->Clear();
		textBoxCategoria->Clear();
		textBoxStock->Clear();
		textBoxPrecio->Clear();*/
	}
	private: System::Void buttonCargar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			// Obtener la fila seleccionada
			DataGridViewRow^ fila = dataGridView1->SelectedRows[0];

			// Modificar los valores de la fila con los datos de los TextBox
			textBoxIdProducto->Text = Convert::ToString(fila->Cells[0]->Value);
			textBoxNombreProducto->Text = Convert::ToString(fila->Cells[1]->Value);
			textBoxCategoria->Text = Convert::ToString(fila->Cells[2]->Value);
			textBoxStock->Text = Convert::ToString(fila->Cells[3]->Value);
			textBoxPrecio->Text = Convert::ToString(fila->Cells[4]->Value);

		}
		else {
			MessageBox::Show("Seleccioná una fila para cargar.");
		}
	}
	private: System::Void buttonEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {

			String^ stock = textBoxStock->Text;
			String^ precio = textBoxPrecio->Text;

			if (!ValidarSyP::Ejecutar(stock, precio)) {
				return; // Detenemos el proceso si los datos no son válidos
			}

			// Obtener la fila seleccionada
			DataGridViewRow^ fila = dataGridView1->SelectedRows[0];

			// Modificar los valores de la fila con los datos de los TextBox
			fila->Cells[0]->Value = textBoxIdProducto->Text;
			fila->Cells[1]->Value = textBoxNombreProducto->Text;
			fila->Cells[2]->Value = textBoxCategoria->Text;
			fila->Cells[3]->Value = textBoxStock->Text;
			fila->Cells[4]->Value = textBoxPrecio->Text;
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
	private: System::Void Stock_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ReadOnly = true;
		dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		dataGridView1->MultiSelect = false;
		dataGridView1->AllowUserToAddRows = false;
		dataGridView1->AllowUserToDeleteRows = false;
		dataGridView1->AllowUserToOrderColumns = false;
	}
};
}

	   
