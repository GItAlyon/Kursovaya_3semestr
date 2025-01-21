#pragma once
#include <Windows.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h> 
#include <locale.h> 
#include <conio.h> 
#include <math.h> 
#include <malloc.h>
#include <ctype.h>
#include <string.h>
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Nach_igra = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Nach_igra
			// 
			this->Nach_igra->BackColor = System::Drawing::Color::Transparent;
			this->Nach_igra->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Nach_igra->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Nach_igra->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Nach_igra->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Nach_igra->ForeColor = System::Drawing::Color::Maroon;
			this->Nach_igra->Location = System::Drawing::Point(218, 190);
			this->Nach_igra->Margin = System::Windows::Forms::Padding(2);
			this->Nach_igra->Name = L"Nach_igra";
			this->Nach_igra->Size = System::Drawing::Size(286, 64);
			this->Nach_igra->TabIndex = 0;
			this->Nach_igra->Text = L"Начать игру";
			this->Nach_igra->UseVisualStyleBackColor = false;
			this->Nach_igra->Click += gcnew System::EventHandler(this, &MyForm::Nach_igra_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Transparent;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit->ForeColor = System::Drawing::Color::Maroon;
			this->Exit->Location = System::Drawing::Point(285, 284);
			this->Exit->Margin = System::Windows::Forms::Padding(2);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(143, 64);
			this->Exit->TabIndex = 1;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point(175, 125);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1434, 900);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1831, 1009);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Nach_igra);
			this->Controls->Add(this->pictureBox1);
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Главное меню";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
