#pragma once
extern int f;
extern int g;
namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Zvonok
	/// </summary>
	public ref class Zvonok : public System::Windows::Forms::Form
	{
	public:
		Zvonok(void)
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
		~Zvonok()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Zvon_text;
	private: System::Windows::Forms::TextBox^ Otvet_zvon;

	protected:

	protected:

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
			this->Zvon_text = (gcnew System::Windows::Forms::TextBox());
			this->Otvet_zvon = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Zvon_text
			// 
			this->Zvon_text->Location = System::Drawing::Point(0, 0);
			this->Zvon_text->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Zvon_text->Multiline = true;
			this->Zvon_text->Name = L"Zvon_text";
			this->Zvon_text->ReadOnly = true;
			this->Zvon_text->Size = System::Drawing::Size(212, 55);
			this->Zvon_text->TabIndex = 0;
			this->Zvon_text->TabStop = false;
			// 
			// Otvet_zvon
			// 
			this->Otvet_zvon->Location = System::Drawing::Point(0, 50);
			this->Otvet_zvon->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Otvet_zvon->Name = L"Otvet_zvon";
			this->Otvet_zvon->ReadOnly = true;
			this->Otvet_zvon->Size = System::Drawing::Size(212, 20);
			this->Otvet_zvon->TabIndex = 1;
			// 
			// Zvonok
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(238, 166);
			this->Controls->Add(this->Otvet_zvon);
			this->Controls->Add(this->Zvon_text);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Zvonok";
			this->Text = L"Zvonok";
			this->Load += gcnew System::EventHandler(this, &Zvonok::Zvonok_Activated);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Zvonok_Activated(System::Object^ sender, System::EventArgs^ e) {
		auto d = System::IO::File::OpenText("Zvon_text.txt");
		auto s = d->ReadToEnd();
		Zvon_text->Text = s;
		d->Close();
		
		if (f == 0) {
			String^ str_otvet = gcnew String("Номер не существует.");
			this->Otvet_zvon->Text = str_otvet;
		}
		else if (f == 2) {
			String^ str_otvet = gcnew String("Нет ответа.");
			this->Otvet_zvon->Text = str_otvet;
		}
		else if (f) {
			if (g == 0) {
				String^ str_otvet = gcnew String("Я дома!");
				this->Otvet_zvon->Text = str_otvet;
			}
			else {
				String^ str_otvet = gcnew String("Нет ответа.");
				this->Otvet_zvon->Text = str_otvet;
			}
		}
	}
	};
}
