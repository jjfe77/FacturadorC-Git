#pragma once

#include "ValidarSyP.h"
#include <iostream>
#include <string>



namespace FacturadorC {

	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	using namespace System::Globalization;
	using namespace System::Drawing::Printing;

	/// <summary>
	/// Resumen de Facturacion
	/// </summary>
	public ref class Facturacion : public System::Windows::Forms::Form
	{
	public:
		int item = 1;
		Facturacion(void)
		{
			InitializeComponent();
			dataGridView1->Columns->Add("Item", "Item");
			dataGridView1->Columns->Add("IdProducto", "Id Producto");
			dataGridView1->Columns->Add("Cantidad", "Cantidad");
			dataGridView1->Columns->Add("Nombre", "Nombre");
			dataGridView1->Columns->Add("PrecioUnitario", "Precio Unitario");
			dataGridView1->Columns->Add("TotalItem", "Total Item");

			comboBox1->Items->Add("Efectivo");
			comboBox1->Items->Add("Debito");
			comboBox1->Items->Add("Transferencia");
			comboBox1->Items->Add("Tarjeta de Credito");  
			comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;
			comboBox1->SelectedIndex = 0;

			comboBoxDescuento->Items->Add("0");
			comboBoxDescuento->Items->Add("5");
			comboBoxDescuento->Items->Add("10");
			comboBoxDescuento->Items->Add("15");
			comboBoxDescuento->Items->Add("20");
			comboBoxDescuento->DropDownStyle = ComboBoxStyle::DropDownList;
			comboBoxDescuento->SelectedIndex = 0;

			

			
		}
	private: System::Drawing::Printing::PrintDocument^ printTicket;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Facturacion()
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

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxCantidad;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxNombreProducto;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxIdProducto;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxNombre;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxApellido;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxIdCliente;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonEliminar;
	private: System::Windows::Forms::Button^ buttonEditar;
	private: System::Windows::Forms::Button^ buttonAgregar;
	private: System::Windows::Forms::Button^ buttonFacturacion;
	private: System::Windows::Forms::Button^ buttonEmpleados;
	private: System::Windows::Forms::Button^ buttonStock;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBoxTotal;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxSubtotal;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ comboBoxDescuento;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ buttonCalcular;
	private: System::Windows::Forms::Button^ buttonImprimir;

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
			this->textBoxPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxNombreProducto = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxIdProducto = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxApellido = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxIdCliente = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->buttonEditar = (gcnew System::Windows::Forms::Button());
			this->buttonAgregar = (gcnew System::Windows::Forms::Button());
			this->buttonFacturacion = (gcnew System::Windows::Forms::Button());
			this->buttonEmpleados = (gcnew System::Windows::Forms::Button());
			this->buttonStock = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxTotal = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxSubtotal = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBoxDescuento = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->buttonCalcular = (gcnew System::Windows::Forms::Button());
			this->buttonImprimir = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonClientes
			// 
			this->buttonClientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientes->Location = System::Drawing::Point(152, 26);
			this->buttonClientes->Name = L"buttonClientes";
			this->buttonClientes->Size = System::Drawing::Size(105, 36);
			this->buttonClientes->TabIndex = 148;
			this->buttonClientes->Text = L"Clientes";
			this->buttonClientes->UseVisualStyleBackColor = true;
			this->buttonClientes->Click += gcnew System::EventHandler(this, &Facturacion::buttonClientes_Click);
			// 
			// buttonProveedores
			// 
			this->buttonProveedores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonProveedores->Location = System::Drawing::Point(414, 26);
			this->buttonProveedores->Name = L"buttonProveedores";
			this->buttonProveedores->Size = System::Drawing::Size(105, 36);
			this->buttonProveedores->TabIndex = 147;
			this->buttonProveedores->Text = L"Proveedores";
			this->buttonProveedores->UseVisualStyleBackColor = true;
			this->buttonProveedores->Click += gcnew System::EventHandler(this, &Facturacion::buttonProveedores_Click);
			// 
			// buttonCargar
			// 
			this->buttonCargar->Location = System::Drawing::Point(727, 176);
			this->buttonCargar->Name = L"buttonCargar";
			this->buttonCargar->Size = System::Drawing::Size(105, 36);
			this->buttonCargar->TabIndex = 146;
			this->buttonCargar->Text = L"Cargar";
			this->buttonCargar->UseVisualStyleBackColor = true;
			this->buttonCargar->Click += gcnew System::EventHandler(this, &Facturacion::buttonCargar_Click);
			// 
			// buttonSalir
			// 
			this->buttonSalir->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonSalir->FlatAppearance->BorderSize = 2;
			this->buttonSalir->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonSalir->Location = System::Drawing::Point(756, 361);
			this->buttonSalir->Name = L"buttonSalir";
			this->buttonSalir->Size = System::Drawing::Size(75, 23);
			this->buttonSalir->TabIndex = 145;
			this->buttonSalir->Text = L"Salir";
			this->buttonSalir->UseVisualStyleBackColor = true;
			this->buttonSalir->Click += gcnew System::EventHandler(this, &Facturacion::buttonSalir_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(152, 428);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(680, 136);
			this->dataGridView1->TabIndex = 144;
			// 
			// textBoxPrecio
			// 
			this->textBoxPrecio->Location = System::Drawing::Point(295, 377);
			this->textBoxPrecio->Name = L"textBoxPrecio";
			this->textBoxPrecio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBoxPrecio->Size = System::Drawing::Size(337, 20);
			this->textBoxPrecio->TabIndex = 143;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(152, 377);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 16);
			this->label7->TabIndex = 142;
			this->label7->Text = L"Precio Unitario";
			// 
			// textBoxCantidad
			// 
			this->textBoxCantidad->Location = System::Drawing::Point(295, 342);
			this->textBoxCantidad->Name = L"textBoxCantidad";
			this->textBoxCantidad->Size = System::Drawing::Size(337, 20);
			this->textBoxCantidad->TabIndex = 141;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(152, 342);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 16);
			this->label6->TabIndex = 140;
			this->label6->Text = L"Cantidad";
			// 
			// textBoxNombreProducto
			// 
			this->textBoxNombreProducto->Location = System::Drawing::Point(295, 306);
			this->textBoxNombreProducto->Name = L"textBoxNombreProducto";
			this->textBoxNombreProducto->Size = System::Drawing::Size(337, 20);
			this->textBoxNombreProducto->TabIndex = 139;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(152, 306);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 16);
			this->label5->TabIndex = 138;
			this->label5->Text = L"Nombre Producto";
			// 
			// textBoxIdProducto
			// 
			this->textBoxIdProducto->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxIdProducto->Location = System::Drawing::Point(295, 267);
			this->textBoxIdProducto->Name = L"textBoxIdProducto";
			this->textBoxIdProducto->Size = System::Drawing::Size(337, 20);
			this->textBoxIdProducto->TabIndex = 137;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(152, 268);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 16);
			this->label4->TabIndex = 136;
			this->label4->Text = L"Id Producto";
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Location = System::Drawing::Point(295, 175);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(337, 20);
			this->textBoxNombre->TabIndex = 135;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(152, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 134;
			this->label3->Text = L"Nombre";
			// 
			// textBoxApellido
			// 
			this->textBoxApellido->Location = System::Drawing::Point(295, 149);
			this->textBoxApellido->Name = L"textBoxApellido";
			this->textBoxApellido->Size = System::Drawing::Size(337, 20);
			this->textBoxApellido->TabIndex = 133;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(152, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 16);
			this->label2->TabIndex = 132;
			this->label2->Text = L"Apellido";
			// 
			// textBoxIdCliente
			// 
			this->textBoxIdCliente->Enabled = false;
			this->textBoxIdCliente->Location = System::Drawing::Point(295, 123);
			this->textBoxIdCliente->Name = L"textBoxIdCliente";
			this->textBoxIdCliente->Size = System::Drawing::Size(337, 20);
			this->textBoxIdCliente->TabIndex = 131;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(152, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 16);
			this->label1->TabIndex = 130;
			this->label1->Text = L"Id Cliente";
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(726, 290);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(105, 36);
			this->buttonEliminar->TabIndex = 129;
			this->buttonEliminar->Text = L"Eliminar";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &Facturacion::buttonEliminar_Click);
			// 
			// buttonEditar
			// 
			this->buttonEditar->Location = System::Drawing::Point(726, 235);
			this->buttonEditar->Name = L"buttonEditar";
			this->buttonEditar->Size = System::Drawing::Size(105, 36);
			this->buttonEditar->TabIndex = 128;
			this->buttonEditar->Text = L"Editar";
			this->buttonEditar->UseVisualStyleBackColor = true;
			this->buttonEditar->Click += gcnew System::EventHandler(this, &Facturacion::buttonEditar_Click);
			// 
			// buttonAgregar
			// 
			this->buttonAgregar->Location = System::Drawing::Point(726, 108);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(105, 36);
			this->buttonAgregar->TabIndex = 127;
			this->buttonAgregar->Text = L"Agregar";
			this->buttonAgregar->UseVisualStyleBackColor = true;
			this->buttonAgregar->Click += gcnew System::EventHandler(this, &Facturacion::buttonAgregar_Click);
			// 
			// buttonFacturacion
			// 
			this->buttonFacturacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFacturacion->Location = System::Drawing::Point(691, 26);
			this->buttonFacturacion->Name = L"buttonFacturacion";
			this->buttonFacturacion->Size = System::Drawing::Size(140, 65);
			this->buttonFacturacion->TabIndex = 126;
			this->buttonFacturacion->Text = L"Facturacion";
			this->buttonFacturacion->UseVisualStyleBackColor = true;
			// 
			// buttonEmpleados
			// 
			this->buttonEmpleados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEmpleados->Location = System::Drawing::Point(283, 26);
			this->buttonEmpleados->Name = L"buttonEmpleados";
			this->buttonEmpleados->Size = System::Drawing::Size(105, 36);
			this->buttonEmpleados->TabIndex = 125;
			this->buttonEmpleados->Text = L"Empleados";
			this->buttonEmpleados->UseVisualStyleBackColor = true;
			this->buttonEmpleados->Click += gcnew System::EventHandler(this, &Facturacion::buttonEmpleados_Click);
			// 
			// buttonStock
			// 
			this->buttonStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStock->Location = System::Drawing::Point(558, 26);
			this->buttonStock->Name = L"buttonStock";
			this->buttonStock->Size = System::Drawing::Size(105, 36);
			this->buttonStock->TabIndex = 124;
			this->buttonStock->Text = L"Stock";
			this->buttonStock->UseVisualStyleBackColor = true;
			this->buttonStock->Click += gcnew System::EventHandler(this, &Facturacion::buttonStock_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(407, 84);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 36);
			this->label8->TabIndex = 149;
			this->label8->Text = L"Cliente";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(386, 213);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 40);
			this->label9->TabIndex = 150;
			this->label9->Text = L"Producto";
			// 
			// textBoxTotal
			// 
			this->textBoxTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTotal->Location = System::Drawing::Point(295, 697);
			this->textBoxTotal->Name = L"textBoxTotal";
			this->textBoxTotal->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBoxTotal->Size = System::Drawing::Size(179, 35);
			this->textBoxTotal->TabIndex = 156;
			this->textBoxTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(152, 710);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 16);
			this->label10->TabIndex = 155;
			this->label10->Text = L"Total a Pagar";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(157, 667);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 16);
			this->label11->TabIndex = 153;
			this->label11->Text = L"Descuento";
			// 
			// textBoxSubtotal
			// 
			this->textBoxSubtotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxSubtotal->Location = System::Drawing::Point(295, 626);
			this->textBoxSubtotal->Name = L"textBoxSubtotal";
			this->textBoxSubtotal->Size = System::Drawing::Size(179, 26);
			this->textBoxSubtotal->TabIndex = 152;
			this->textBoxSubtotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(152, 626);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 16);
			this->label12->TabIndex = 151;
			this->label12->Text = L"Subtotal";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(711, 659);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 157;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(724, 626);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(113, 16);
			this->label13->TabIndex = 158;
			this->label13->Text = L"Medio de Pago";
			// 
			// comboBoxDescuento
			// 
			this->comboBoxDescuento->FormattingEnabled = true;
			this->comboBoxDescuento->Location = System::Drawing::Point(295, 662);
			this->comboBoxDescuento->Name = L"comboBoxDescuento";
			this->comboBoxDescuento->Size = System::Drawing::Size(48, 21);
			this->comboBoxDescuento->TabIndex = 159;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(349, 659);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 24);
			this->label14->TabIndex = 160;
			this->label14->Text = L"%";
			// 
			// buttonCalcular
			// 
			this->buttonCalcular->Location = System::Drawing::Point(558, 696);
			this->buttonCalcular->Name = L"buttonCalcular";
			this->buttonCalcular->Size = System::Drawing::Size(105, 36);
			this->buttonCalcular->TabIndex = 161;
			this->buttonCalcular->Text = L"Calcular";
			this->buttonCalcular->UseVisualStyleBackColor = true;
			this->buttonCalcular->Click += gcnew System::EventHandler(this, &Facturacion::buttonCalcular_Click);
			// 
			// buttonImprimir
			// 
			this->buttonImprimir->Location = System::Drawing::Point(727, 697);
			this->buttonImprimir->Name = L"buttonImprimir";
			this->buttonImprimir->Size = System::Drawing::Size(105, 36);
			this->buttonImprimir->TabIndex = 162;
			this->buttonImprimir->Text = L"Imprimir";
			this->buttonImprimir->UseVisualStyleBackColor = true;
			
			// 
			// Facturacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(984, 811);
			this->Controls->Add(this->buttonImprimir);
			this->Controls->Add(this->buttonCalcular);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->comboBoxDescuento);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBoxTotal);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBoxSubtotal);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->buttonClientes);
			this->Controls->Add(this->buttonProveedores);
			this->Controls->Add(this->buttonCargar);
			this->Controls->Add(this->buttonSalir);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBoxPrecio);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxCantidad);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxNombreProducto);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxIdProducto);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxNombre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxApellido);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxIdCliente);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonEditar);
			this->Controls->Add(this->buttonAgregar);
			this->Controls->Add(this->buttonFacturacion);
			this->Controls->Add(this->buttonEmpleados);
			this->Controls->Add(this->buttonStock);
			this->Name = L"Facturacion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Facturacion";
			this->Load += gcnew System::EventHandler(this, &Facturacion::Ventas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	System::Void buttonClientes_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void buttonEmpleados_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void buttonProveedores_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void buttonStock_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void Ventas_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ReadOnly = true;
		dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		dataGridView1->MultiSelect = false;
		dataGridView1->AllowUserToAddRows = false;
		dataGridView1->AllowUserToDeleteRows = false;
		dataGridView1->AllowUserToOrderColumns = false;
	}
private: System::Void buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ cantidad = textBoxCantidad->Text;
	String^ precio = textBoxPrecio->Text;

	if (!ValidarSyP::Ejecutar(cantidad, precio)) {
		return; // Detenemos el proceso si los datos no son válidos
	}
	dataGridView1->Rows->Add(
		item.ToString(),
		textBoxIdProducto->Text,
		textBoxCantidad->Text,
		textBoxNombreProducto->Text,
		textBoxPrecio->Text,
		TotalItem(cantidad, precio)
	);
	item++;
	SubTotal();
	Total();
}
private: System::Void buttonCargar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {
		// Obtener la fila seleccionada
		DataGridViewRow^ fila = dataGridView1->SelectedRows[0];

		// Modificar los valores de la fila con los datos de los TextBox
		textBoxIdProducto->Text = Convert::ToString(fila->Cells[1]->Value);
		textBoxNombreProducto->Text = Convert::ToString(fila->Cells[3]->Value);
		textBoxCantidad->Text = Convert::ToString(fila->Cells[2]->Value);
		textBoxPrecio->Text = Convert::ToString(fila->Cells[4]->Value);
	

	}
	else {
		MessageBox::Show("Seleccioná una fila para cargar.");
	}
}
private: System::Void buttonEditar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {

		String^ cantidad = textBoxCantidad->Text;
		String^ precio = textBoxPrecio->Text;

		if (!ValidarSyP::Ejecutar(cantidad, precio)) {
			return; // Detenemos el proceso si los datos no son válidos
		}

		// Obtener la fila seleccionada
		DataGridViewRow^ fila = dataGridView1->SelectedRows[0];

		// Modificar los valores de la fila con los datos de los TextBox
		fila->Cells[1]->Value = textBoxIdProducto->Text;
		fila->Cells[2]->Value = textBoxCantidad->Text;
		fila->Cells[3]->Value = textBoxNombreProducto->Text;
		fila->Cells[4]->Value = textBoxPrecio->Text;
		fila->Cells[5]->Value = TotalItem(cantidad, precio);
		SubTotal();
		Total();
	}
	else {
		MessageBox::Show("Seleccioná una fila para editar.");
	}
}
private: System::Void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {
		/*item = dataGridView1->SelectedRows->Count;*/
		dataGridView1->Rows->RemoveAt(dataGridView1->SelectedRows[0]->Index);
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
			item = i + 2;
		}
		SubTotal();
		Total();
	}
	else {
		MessageBox::Show("Seleccioná una fila para eliminar.");
	}
}

	   static String^ TotalItem(String^ cantidad, String^ precio)
	   {
		   double cant = Convert::ToDouble(cantidad);
		   double prec = Convert::ToDouble(precio);
		   double total = cant * prec;

		   return total.ToString("F2", CultureInfo::InvariantCulture);
	   }

	   void SubTotal()
	   {
		   int totalFilas = dataGridView1->Rows->Count;
		   double subTotal = 0;
		   for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			   subTotal = subTotal + Convert::ToDouble(dataGridView1->Rows[i]->Cells[5]->Value->ToString(), CultureInfo::InvariantCulture);
			   
		   }
		   textBoxSubtotal->Text = subTotal.ToString("F2", CultureInfo::InvariantCulture);
		   
	   }
	   
	   void Total()
	   {
		   double pagar = 0;
		   double subTotal = Convert::ToDouble(textBoxSubtotal->Text, CultureInfo::InvariantCulture);
		   pagar = subTotal * (1 - Convert::ToDouble(comboBoxDescuento->Text, CultureInfo::InvariantCulture)/100);
		   textBoxTotal->Text = pagar.ToString("F2", CultureInfo::InvariantCulture);
		   
	   }

private: System::Void buttonCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
	Total();
}
 
	   

};
}
