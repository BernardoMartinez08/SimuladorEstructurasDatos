#pragma once
#include "ListaSimple.h"
#include "ListaDoble.h"
#include "ListaCircular.h"
#include <iostream>
using namespace std;
namespace ProyectoSimuladorEstructurasDatosBernardoMartinez {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// <summary>
	/// Resumen de PanelAcciones
	/// </summary>
	public ref class PanelAcciones : public System::Windows::Forms::Form
	{
		ListaSimple *lsSimple = new ListaSimple();
		ListaDoble *lsDoble = new ListaDoble();;
		ListaCircular* lsCircular = new ListaCircular();
	public:
		PanelAcciones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~PanelAcciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ gbOpciones;
	private: System::Windows::Forms::TextBox^ txtValor;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cbOperaciones;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cbEstructuras;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtTotalE;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btUpdate;

	private: System::Windows::Forms::TextBox^ txtPosicion;
	private: System::Windows::Forms::Label^ lbPosicion;
	private: System::Windows::Forms::Label^ lbPosicionWarning;



	private: System::Windows::Forms::Label^ lbValorWarning;
	private: System::Windows::Forms::Label^ lbOperacionWarning;
	private: System::Windows::Forms::Label^ lbEstructuraWarning;


	private: System::Windows::Forms::Label^ lbActualizarWarning;
	private: System::Windows::Forms::Panel^ panelNodos;




	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gbOpciones = (gcnew System::Windows::Forms::GroupBox());
			this->lbActualizarWarning = (gcnew System::Windows::Forms::Label());
			this->lbPosicionWarning = (gcnew System::Windows::Forms::Label());
			this->lbValorWarning = (gcnew System::Windows::Forms::Label());
			this->lbOperacionWarning = (gcnew System::Windows::Forms::Label());
			this->lbEstructuraWarning = (gcnew System::Windows::Forms::Label());
			this->txtTotalE = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btUpdate = (gcnew System::Windows::Forms::Button());
			this->txtPosicion = (gcnew System::Windows::Forms::TextBox());
			this->lbPosicion = (gcnew System::Windows::Forms::Label());
			this->txtValor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbOperaciones = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cbEstructuras = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelNodos = (gcnew System::Windows::Forms::Panel());
			this->gbOpciones->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(377, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SIMULADOR DE ESTRUCTURAS DE DATOS";
			// 
			// gbOpciones
			// 
			this->gbOpciones->Controls->Add(this->lbActualizarWarning);
			this->gbOpciones->Controls->Add(this->lbPosicionWarning);
			this->gbOpciones->Controls->Add(this->lbValorWarning);
			this->gbOpciones->Controls->Add(this->lbOperacionWarning);
			this->gbOpciones->Controls->Add(this->lbEstructuraWarning);
			this->gbOpciones->Controls->Add(this->txtTotalE);
			this->gbOpciones->Controls->Add(this->label6);
			this->gbOpciones->Controls->Add(this->btUpdate);
			this->gbOpciones->Controls->Add(this->txtPosicion);
			this->gbOpciones->Controls->Add(this->lbPosicion);
			this->gbOpciones->Controls->Add(this->txtValor);
			this->gbOpciones->Controls->Add(this->label4);
			this->gbOpciones->Controls->Add(this->cbOperaciones);
			this->gbOpciones->Controls->Add(this->label3);
			this->gbOpciones->Controls->Add(this->cbEstructuras);
			this->gbOpciones->Controls->Add(this->label2);
			this->gbOpciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbOpciones->ForeColor = System::Drawing::Color::MidnightBlue;
			this->gbOpciones->Location = System::Drawing::Point(12, 68);
			this->gbOpciones->Name = L"gbOpciones";
			this->gbOpciones->Size = System::Drawing::Size(307, 437);
			this->gbOpciones->TabIndex = 1;
			this->gbOpciones->TabStop = false;
			this->gbOpciones->Text = L"OPCIONES";
			// 
			// lbActualizarWarning
			// 
			this->lbActualizarWarning->AutoSize = true;
			this->lbActualizarWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbActualizarWarning->ForeColor = System::Drawing::Color::DarkRed;
			this->lbActualizarWarning->Location = System::Drawing::Point(187, 337);
			this->lbActualizarWarning->Name = L"lbActualizarWarning";
			this->lbActualizarWarning->Size = System::Drawing::Size(105, 15);
			this->lbActualizarWarning->TabIndex = 15;
			this->lbActualizarWarning->Text = L"Falta Informacion.";
			this->lbActualizarWarning->Visible = false;
			// 
			// lbPosicionWarning
			// 
			this->lbPosicionWarning->AutoSize = true;
			this->lbPosicionWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPosicionWarning->ForeColor = System::Drawing::Color::DarkRed;
			this->lbPosicionWarning->Location = System::Drawing::Point(117, 271);
			this->lbPosicionWarning->Name = L"lbPosicionWarning";
			this->lbPosicionWarning->Size = System::Drawing::Size(175, 15);
			this->lbPosicionWarning->TabIndex = 14;
			this->lbPosicionWarning->Text = L"Recuerda Ingresar la Posicion.";
			this->lbPosicionWarning->Visible = false;
			// 
			// lbValorWarning
			// 
			this->lbValorWarning->AutoSize = true;
			this->lbValorWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbValorWarning->ForeColor = System::Drawing::Color::DarkRed;
			this->lbValorWarning->Location = System::Drawing::Point(132, 212);
			this->lbValorWarning->Name = L"lbValorWarning";
			this->lbValorWarning->Size = System::Drawing::Size(160, 15);
			this->lbValorWarning->TabIndex = 13;
			this->lbValorWarning->Text = L"Recuerda Ingresar un Valor.";
			// 
			// lbOperacionWarning
			// 
			this->lbOperacionWarning->AutoSize = true;
			this->lbOperacionWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbOperacionWarning->ForeColor = System::Drawing::Color::DarkRed;
			this->lbOperacionWarning->Location = System::Drawing::Point(92, 146);
			this->lbOperacionWarning->Name = L"lbOperacionWarning";
			this->lbOperacionWarning->Size = System::Drawing::Size(205, 15);
			this->lbOperacionWarning->TabIndex = 12;
			this->lbOperacionWarning->Text = L"Recuerda Seleccionar la Operacion.";
			// 
			// lbEstructuraWarning
			// 
			this->lbEstructuraWarning->AutoSize = true;
			this->lbEstructuraWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEstructuraWarning->ForeColor = System::Drawing::Color::DarkRed;
			this->lbEstructuraWarning->Location = System::Drawing::Point(92, 77);
			this->lbEstructuraWarning->Name = L"lbEstructuraWarning";
			this->lbEstructuraWarning->Size = System::Drawing::Size(203, 15);
			this->lbEstructuraWarning->TabIndex = 11;
			this->lbEstructuraWarning->Text = L"Recuerda Seleccionar la Estructura.";
			// 
			// txtTotalE
			// 
			this->txtTotalE->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtTotalE->Enabled = false;
			this->txtTotalE->ForeColor = System::Drawing::Color::Maroon;
			this->txtTotalE->Location = System::Drawing::Point(159, 399);
			this->txtTotalE->Name = L"txtTotalE";
			this->txtTotalE->Size = System::Drawing::Size(69, 22);
			this->txtTotalE->TabIndex = 10;
			this->txtTotalE->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 402);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Total de Elementos:";
			this->label6->Visible = false;
			// 
			// btUpdate
			// 
			this->btUpdate->BackColor = System::Drawing::Color::MidnightBlue;
			this->btUpdate->Enabled = false;
			this->btUpdate->ForeColor = System::Drawing::Color::AliceBlue;
			this->btUpdate->Location = System::Drawing::Point(173, 295);
			this->btUpdate->Name = L"btUpdate";
			this->btUpdate->Size = System::Drawing::Size(119, 39);
			this->btUpdate->TabIndex = 8;
			this->btUpdate->Text = L"ACTUALIZAR";
			this->btUpdate->UseVisualStyleBackColor = false;
			this->btUpdate->Click += gcnew System::EventHandler(this, &PanelAcciones::btUpdate_Click);
			// 
			// txtPosicion
			// 
			this->txtPosicion->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtPosicion->Enabled = false;
			this->txtPosicion->ForeColor = System::Drawing::Color::Sienna;
			this->txtPosicion->Location = System::Drawing::Point(82, 246);
			this->txtPosicion->Name = L"txtPosicion";
			this->txtPosicion->Size = System::Drawing::Size(69, 22);
			this->txtPosicion->TabIndex = 7;
			this->txtPosicion->Visible = false;
			this->txtPosicion->TextChanged += gcnew System::EventHandler(this, &PanelAcciones::txtPosicion_TextChanged);
			// 
			// lbPosicion
			// 
			this->lbPosicion->AutoSize = true;
			this->lbPosicion->Location = System::Drawing::Point(6, 227);
			this->lbPosicion->Name = L"lbPosicion";
			this->lbPosicion->Size = System::Drawing::Size(145, 16);
			this->lbPosicion->TabIndex = 6;
			this->lbPosicion->Text = L"Ingrese la Posicion:";
			this->lbPosicion->Visible = false;
			// 
			// txtValor
			// 
			this->txtValor->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtValor->Enabled = false;
			this->txtValor->ForeColor = System::Drawing::Color::Sienna;
			this->txtValor->Location = System::Drawing::Point(82, 187);
			this->txtValor->Name = L"txtValor";
			this->txtValor->Size = System::Drawing::Size(69, 22);
			this->txtValor->TabIndex = 5;
			this->txtValor->TextChanged += gcnew System::EventHandler(this, &PanelAcciones::txtValor_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ingrese el Valor:";
			// 
			// cbOperaciones
			// 
			this->cbOperaciones->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->cbOperaciones->Enabled = false;
			this->cbOperaciones->ForeColor = System::Drawing::Color::Peru;
			this->cbOperaciones->FormattingEnabled = true;
			this->cbOperaciones->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Insertar al Inicio", L"Insertar al Final",
					L"Insertar en Posicion", L"Eliminar por Valor", L"Eliminar por Posicion", L"Buscar un Valor"
			});
			this->cbOperaciones->Location = System::Drawing::Point(47, 119);
			this->cbOperaciones->Name = L"cbOperaciones";
			this->cbOperaciones->Size = System::Drawing::Size(245, 24);
			this->cbOperaciones->TabIndex = 3;
			this->cbOperaciones->SelectedIndexChanged += gcnew System::EventHandler(this, &PanelAcciones::cbOperaciones_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(251, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Seleciona una de las Operaciones:";
			// 
			// cbEstructuras
			// 
			this->cbEstructuras->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->cbEstructuras->ForeColor = System::Drawing::Color::Peru;
			this->cbEstructuras->FormattingEnabled = true;
			this->cbEstructuras->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"VECTOR", L"LISTA ENLAZADA SIMPLE", L"LISTA ENLAZADA DOBLE",
					L"LISTA ENLAZADA DOBLE CIRCULAR"
			});
			this->cbEstructuras->Location = System::Drawing::Point(47, 50);
			this->cbEstructuras->Name = L"cbEstructuras";
			this->cbEstructuras->Size = System::Drawing::Size(245, 24);
			this->cbEstructuras->TabIndex = 1;
			this->cbEstructuras->SelectedIndexChanged += gcnew System::EventHandler(this, &PanelAcciones::cbEstructuras_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Seleciona la Estructura:";
			// 
			// panelNodos
			// 
			this->panelNodos->AutoScroll = true;
			this->panelNodos->Location = System::Drawing::Point(328, 128);
			this->panelNodos->Name = L"panelNodos";
			this->panelNodos->Size = System::Drawing::Size(657, 377);
			this->panelNodos->TabIndex = 4;
			// 
			// PanelAcciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(994, 517);
			this->Controls->Add(this->panelNodos);
			this->Controls->Add(this->gbOpciones);
			this->Controls->Add(this->label1);
			this->Name = L"PanelAcciones";
			this->Text = L"PanelAcciones";
			this->gbOpciones->ResumeLayout(false);
			this->gbOpciones->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cbEstructuras_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		panelNodos->Controls->Clear();
		if (cbEstructuras->SelectedItem->ToString() == "VECTOR" || cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA SIMPLE" ||
			cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE" || cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE CIRCULAR") {
			cbOperaciones->Enabled = true;
			lbEstructuraWarning->Visible = false;
		}
		else {
			cbOperaciones->Enabled = false;
			lbEstructuraWarning->Visible = true;
		}
	}
		   int num = 0;
		   int distancia = 0;
		 
	private: System::Void btUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cbEstructuras->SelectedItem->ToString() == "VECTOR") {

		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA SIMPLE" && cbOperaciones->SelectedItem->ToString() == "Insertar al Inicio") {
			if (txtValor->ToString() != " ") {
				if(lsSimple->agregarNodoInicio(Convert::ToInt32(txtValor->Text)))
					imprimirListaSimple();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA SIMPLE" && cbOperaciones->SelectedItem->ToString() == "Insertar al Final") {
			if (txtValor->ToString() != " ") {
				if(lsSimple->agregarNodoFinal(Convert::ToInt32(txtValor->Text)))
					imprimirListaSimple();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA SIMPLE" && cbOperaciones->SelectedItem->ToString() == "Insertar en Posicion") {
			if (txtValor->ToString() != " " && txtPosicion->ToString() != " ") {
				if(lsSimple->agregarNodoPosicion(Convert::ToInt32(txtValor->Text), Convert::ToInt32(txtPosicion->Text)))
					imprimirListaSimple();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA SIMPLE" && cbOperaciones->SelectedItem->ToString() == "Eliminar por Valor") {
			//cout << "Valor Eliminar " << Convert::ToInt32(txtValor->ToString());
			if (txtValor->ToString() != " ") {
				if(lsSimple->eliminarNodoValor(Convert::ToInt32(txtValor->Text)))
					imprimirListaSimple();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA SIMPLE" && cbOperaciones->SelectedItem->ToString() == "Eliminar por Posicion") {
			if (txtPosicion->ToString() != " ") {
				if(lsSimple->eliminarNodoPosicion(Convert::ToInt32(txtPosicion->Text)))
					imprimirListaSimple();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA SIMPLE" && cbOperaciones->SelectedItem->ToString() == "Insertar al Inicio") {
			if (txtValor->ToString() != " ") {
				if(lsSimple->agregarNodoInicio(Convert::ToInt32(txtValor->Text)))
					imprimirListaSimple();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA SIMPLE" && cbOperaciones->SelectedItem->ToString() == "Insertar al Final") {
			if (txtValor->ToString() != " ") {
				if(lsSimple->agregarNodoFinal(Convert::ToInt32(txtValor->Text)))
					imprimirListaSimple();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA SIMPLE" && cbOperaciones->SelectedItem->ToString() == "Insertar en Posicion") {
			if (txtValor->ToString() != " " && txtPosicion->ToString() != " ") {
				if(lsSimple->agregarNodoPosicion(Convert::ToInt32(txtValor->Text), Convert::ToInt32(txtPosicion->Text)))
					imprimirListaSimple();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA SIMPLE" && cbOperaciones->SelectedItem->ToString() == "Eliminar por Valor") {
			if (txtValor->ToString() != " ") {
				if(lsSimple->eliminarNodoValor(Convert::ToInt32(txtValor->Text)))
					imprimirListaSimple();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA SIMPLE" && cbOperaciones->SelectedItem->ToString() == "Eliminar pot Posicion") {
			if (txtPosicion->ToString() != " ") {
				if (lsSimple->eliminarNodoPosicion(Convert::ToInt32(txtPosicion->Text)))
					imprimirListaSimple();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE" && cbOperaciones->SelectedItem->ToString() == "Insertar al Inicio") {
			if (txtValor->ToString() != " ") {
				if (lsDoble->agregarNodoInicio(Convert::ToInt32(txtValor->Text)))
					imprimirListaDoble();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE" && cbOperaciones->SelectedItem->ToString() == "Insertar al Final") {
			if (txtValor->ToString() != " ") {
				if (lsDoble->agregarNodoFinal(Convert::ToInt32(txtValor->Text)))
					imprimirListaDoble();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE" && cbOperaciones->SelectedItem->ToString() == "Insertar en Posicion") {
			if (txtValor->ToString() != " " && txtPosicion->ToString() != " ") {
				if (lsDoble->agregarNodoPosicion(Convert::ToInt32(txtValor->Text), Convert::ToInt32(txtPosicion->Text)))
					imprimirListaDoble();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE" && cbOperaciones->SelectedItem->ToString() == "Eliminar por Valor") {
			if (txtValor->ToString() != " ") {
				if (lsDoble->eliminarNodoValor(Convert::ToInt32(txtValor->Text)))
					imprimirListaDoble();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE" && cbOperaciones->SelectedItem->ToString() == "Eliminar por Posicion") {
			if (txtPosicion->ToString() != " ") {
				if (lsDoble->eliminarNodoPosicion(Convert::ToInt32(txtPosicion->Text)))
					imprimirListaDoble();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE CIRCULAR" && cbOperaciones->SelectedItem->ToString() == "Insertar al Inicio") {
			if (txtValor->ToString() != " ") {
				if (lsCircular->agregarNodoInicio(Convert::ToInt32(txtValor->Text)))
					imprimirListaCircular();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE CIRCULAR" && cbOperaciones->SelectedItem->ToString() == "Insertar al Final") {
			if (txtValor->ToString() != " ") {
				if (lsCircular->agregarNodoFinal(Convert::ToInt32(txtValor->Text)))
					imprimirListaCircular();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE CIRCULAR" && cbOperaciones->SelectedItem->ToString() == "Insertar en Posicion") {
			if (txtValor->ToString() != " " && txtPosicion->ToString() != " ") {
				if (lsCircular->agregarNodoPosicion(Convert::ToInt32(txtValor->Text), Convert::ToInt32(txtPosicion->Text)))
					imprimirListaCircular();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE CIRCULAR" && cbOperaciones->SelectedItem->ToString() == "Eliminar Por Valor") {
		if (txtValor->ToString() != " ") {
				if(lsCircular->eliminarNodoValor(Convert::ToInt32(txtValor->Text)))
					imprimirListaCircular();
			}
		}
		else if (cbEstructuras->SelectedItem->ToString() == "LISTA ENLAZADA DOBLE CIRCULAR" && cbOperaciones->SelectedItem->ToString() == "Eliminar en Posicion") {
			if (txtPosicion->ToString() != " ") {
				if (lsCircular->eliminarNodoPosicion(Convert::ToInt32(txtPosicion->Text)))
					imprimirListaCircular();
			}
		}
	}


			private: void imprimirListaSimple() {
				panelNodos->Controls->Clear();
				distancia = 0;
				num = 0;

				if (lsSimple->obtenerTamanio() > 0) {
					for (int i = 0; i < lsSimple->obtenerTamanio(); i++) {
						String^ name = "NodoSimple" + num;
						String^ imagen = " ";
						if (i == 0 && lsSimple->obtenerTamanio() - 1 == 0) {
							imagen = "C:/Users/angie/Desktop/ImagenesNodos/ListaSimple/Nodo_Siguiente_Null.png";
						}
						else if (i == lsSimple->obtenerTamanio() - 1)
							imagen = "C:/Users/angie/Desktop/ImagenesNodos/ListaSimple/Nodo_Siguiente_Null.png";
						else
							imagen = "C:/Users/angie/Desktop/ImagenesNodos/ListaSimple/Nodo_Siguiente.png";


						System::Windows::Forms::PictureBox^ NodoSimple = gcnew PictureBox();
						System::Windows::Forms::Label^ LbNodoSimple = gcnew Label();

						NodoSimple->Image = Image::FromFile(imagen);

						NodoSimple->Location = System::Drawing::Point(0 + distancia, 99);

						NodoSimple->Name = name;
						NodoSimple->Size = System::Drawing::Size(100, 50);
						NodoSimple->TabIndex = 3;
						NodoSimple->TabStop = false;
						NodoSimple->Visible = true;
						
						LbNodoSimple->Parent = NodoSimple;
						LbNodoSimple->BackColor = Color().Transparent;
						LbNodoSimple->ForeColor = Color().MidnightBlue;
						LbNodoSimple->Size = System::Drawing::Size(100, 50);
						LbNodoSimple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						LbNodoSimple->Text = lsSimple->buscarNodoPos(i)->getValor() + "";


						distancia += 100;
						panelNodos->Controls->Add(NodoSimple);
					}
					lsSimple->imprimirLista();
				}
			}

			private: void imprimirListaDoble() {
				panelNodos->Controls->Clear();
				distancia = 0;
				num = 0;

				if (lsDoble->obtenerTamanio() > 0) {
					for (int i = 0; i < lsDoble->obtenerTamanio(); i++) {
						String^ name = "NodoDoble" + num;
						String^ imagen = " ";
						if (i == 0 && lsDoble->obtenerTamanio() - 1 == 0) {
							imagen = "C:/Users/angie/Desktop/ImagenesNodos/ListaDoble/Nodo_AnteriorSiguiente_Null.png";
						}
						else if (i == 0 && lsDoble->obtenerTamanio() - 1 != 0) {
							imagen = "C:/Users/angie/Desktop/ImagenesNodos/ListaDoble/Nodo_Anterior_Null.png";
						}
						else if (i == lsDoble->obtenerTamanio() - 1 && lsDoble->obtenerTamanio() > 1)
							imagen = "C:/Users/angie/Desktop/ImagenesNodos/ListaDoble/Nodo_Siguiente_Null.png";
						else
							imagen = "C:/Users/angie/Desktop/ImagenesNodos/ListaDoble/Nodo_Siguiente.png";


						System::Windows::Forms::PictureBox^ NodoDoble = gcnew PictureBox();
						System::Windows::Forms::Label^ LbNodoDoble = gcnew Label();

						NodoDoble->Image = Image::FromFile(imagen);

						NodoDoble->Location = System::Drawing::Point(0 + distancia, 99);

						NodoDoble->Name = name;
						NodoDoble->Size = System::Drawing::Size(125, 50);
						NodoDoble->TabIndex = 3;
						NodoDoble->TabStop = false;
						NodoDoble->Visible = true;

						LbNodoDoble->Parent = NodoDoble;
						LbNodoDoble->BackColor = Color().Transparent;
						LbNodoDoble->ForeColor = Color().MidnightBlue;
						LbNodoDoble->Size = System::Drawing::Size(100, 50);
						LbNodoDoble->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						LbNodoDoble->Text = lsDoble->buscarNodoPos(i)->getValor() + "";

						distancia += 125;

						panelNodos->Controls->Add(NodoDoble);
					}
				}
			}

		   private: void imprimirListaCircular() {
			   panelNodos->Controls->Clear();
			   distancia = 0;
			   num = 0;

			   if (lsCircular->obtenerTamanio() > 0) {
				   for (int i = 0; i < lsCircular->obtenerTamanio(); i++) {
					   String^ name = "NodoCircular" + num;
					   String^ imagen = " ";
					   if (i == 0 && lsCircular->obtenerTamanio() - 1 == 0) {
						   imagen = "C:/Users/angie/Desktop/ImagenesNodos/ListaCircular/Nodo_Unico.png";
					   }
					   else if (i == 0 && lsCircular->obtenerTamanio() - 1 != 0) {
						   imagen = "C:/Users/angie/Desktop/ImagenesNodos/ListaCircular/Nodo_Siguiente_Primero.png";
					   }
					   else if (i == lsCircular->obtenerTamanio() - 1 && lsCircular->obtenerTamanio() > 1)
						   imagen = "C:/Users/angie/Desktop/ImagenesNodos/ListaCircular/Nodo_Siguiente_Ultimo.png";
					   else
						   imagen = "C:/Users/angie/Desktop/ImagenesNodos/ListaCircular/Nodo_Siguiente.png";


					   System::Windows::Forms::PictureBox^ NodoCircular = gcnew PictureBox();
					   System::Windows::Forms::Label^ LbNodoCircular = gcnew Label();

					   NodoCircular->Image = Image::FromFile(imagen);

					   NodoCircular->Location = System::Drawing::Point(0 + distancia, 99);

					   NodoCircular->Name = name;
					   NodoCircular->Size = System::Drawing::Size(125, 60);
					   NodoCircular->TabIndex = 3;
					   NodoCircular->TabStop = false;
					   NodoCircular->Visible = true;

					   LbNodoCircular->Parent = NodoCircular;
					   LbNodoCircular->BackColor = Color().Transparent;
					   LbNodoCircular->ForeColor = Color().MidnightBlue;
					   LbNodoCircular->Size = System::Drawing::Size(100, 50);
					   LbNodoCircular->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						   static_cast<System::Byte>(0)));
					   LbNodoCircular->Text = lsCircular->buscarNodoPos(i)->getValor() + "";


					   distancia += 125;

					   panelNodos->Controls->Add(NodoCircular);
				   }
			   }
		   }

	private: System::Void cbOperaciones_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cbOperaciones->SelectedItem->ToString() == "Insertar al Inicio" || cbOperaciones->SelectedItem->ToString() == "Insertar al Final" ||
			cbOperaciones->SelectedItem->ToString() == "Eliminar por Valor" || cbOperaciones->SelectedItem->ToString() == "Buscar un Valor" ||
			cbOperaciones->SelectedItem->ToString() == "Insertar en Posicion") {

			txtValor->Enabled = true;
			lbOperacionWarning->Visible = false;

			if (cbOperaciones->SelectedItem->ToString() == "Insertar en Posicion") {
				txtValor->Enabled = true;
				txtPosicion->Enabled = true;
				txtPosicion->Visible = true;
				lbPosicion->Visible = true;
				lbPosicionWarning->Visible = true;
			}
			else if (cbOperaciones->SelectedItem->ToString() == "Eliminar por Posicion") {
				txtValor->Enabled = false;
				txtPosicion->Enabled = true;
				txtPosicion->Visible = true;
				lbPosicion->Visible = true;
				lbPosicionWarning->Visible = true;
			}
			else {
				lbPosicion->Visible = false;
				txtPosicion->Enabled = false;
				txtPosicion->Visible = false;
				lbPosicionWarning->Visible = false;
			}
		}
		else {
			txtValor->Enabled = false;
			lbOperacionWarning->Visible = true;
		}
	}

private: System::Void txtPosicion_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtPosicion->ToString() != "") {
		lbPosicionWarning->Visible = false;
		lbActualizarWarning->Visible = false;
		btUpdate->Enabled = true;
	}
	else {
		lbPosicionWarning->Visible = true;
		lbActualizarWarning->Visible = true;
		btUpdate->Enabled = false;;
	}
}
private: System::Void txtValor_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtValor->ToString() != "") {
		lbValorWarning->Visible = false;
		lbActualizarWarning->Visible = false;
		btUpdate->Enabled = true;
	}
	else {
		lbValorWarning->Visible = true;
		lbActualizarWarning->Visible = true;
		btUpdate->Enabled = false;
	}
}
};
}
