#pragma once
#include <Windows.h>
#include <stdio.h>
#include <locale.h>
#include "Igra.h"

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Nach_igra;
	protected:
	private: System::Windows::Forms::Button^ Exit;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Nach_igra = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Nach_igra
			// 
			this->Nach_igra->Location = System::Drawing::Point(332, 117);
			this->Nach_igra->Name = L"Nach_igra";
			this->Nach_igra->Size = System::Drawing::Size(158, 46);
			this->Nach_igra->TabIndex = 0;
			this->Nach_igra->Text = L"Начать игру";
			this->Nach_igra->UseVisualStyleBackColor = true;
			this->Nach_igra->Click += gcnew System::EventHandler(this, &MyForm::Nach_igra_Click);
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(354, 251);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(117, 61);
			this->Exit->TabIndex = 1;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 375);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Nach_igra);
			this->Name = L"MyForm";
			this->Text = L"Главное меню";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	private: System::Void Nach_igra_Click(System::Object^ sender, System::EventArgs^ e) {
		Igra^ glav_igra = gcnew Igra();
		glav_igra->Show();
		//this->Visible = FALSE;
	}
	};
}
