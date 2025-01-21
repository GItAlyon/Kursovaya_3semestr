#pragma once
#include <Windows.h>
#include <stdio.h>
#include <locale.h>

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Igra
	/// </summary>
	public ref class Igra : public System::Windows::Forms::Form
	{
	public:
		Igra(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Igra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Menu;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Menu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Menu
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Menu->Location = System::Drawing::Point(12, 12);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(181, 42);
			this->Menu->TabIndex = 0;
			this->Menu->Text = L"√лавное меню";
			this->Menu->UseVisualStyleBackColor = true;
			this->Menu->Click += gcnew System::EventHandler(this, &Igra::Menu_Click);
			// 
			// Igra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(642, 356);
			this->Controls->Add(this->Menu);
			this->Name = L"Igra";
			this->Text = L"Igra";
			this->Load += gcnew System::EventHandler(this, &Igra::Igra_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Igra_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Igra_Activated(System::Object^ sender, System::EventArgs^ e) {

	}
	
	private: System::Void Menu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		/*MyForm^ glav = gcnew MyForm();
		glav->Show();*/
	}
	};
}
