#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <string.h>
#include <Windows.h>
extern int totalActualResidents;
extern int totalMonsters;
extern int totalActResNOT;
extern int totalMonsNOT;

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для resultat
	/// </summary>
	public ref class resultat : public System::Windows::Forms::Form
	{
	public:
		resultat(void)
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
		~resultat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ActualResidents;
	private: System::Windows::Forms::Label^ Monsters;
	private: System::Windows::Forms::Label^ Rezult;
	private: System::Windows::Forms::Label^ ActResNOT;
	private: System::Windows::Forms::Label^ MonsNOT;
	private: System::Windows::Forms::TextBox^ textBox_ActualResidents;
	private: System::Windows::Forms::TextBox^ textBox_Monsters;
	private: System::Windows::Forms::TextBox^ textBox_ActResNOT;
	private: System::Windows::Forms::TextBox^ textBox_MonsNOT;
	private: System::Windows::Forms::Button^ Vihod;
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
			this->ActualResidents = (gcnew System::Windows::Forms::Label());
			this->Monsters = (gcnew System::Windows::Forms::Label());
			this->Rezult = (gcnew System::Windows::Forms::Label());
			this->ActResNOT = (gcnew System::Windows::Forms::Label());
			this->MonsNOT = (gcnew System::Windows::Forms::Label());
			this->textBox_ActualResidents = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Monsters = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ActResNOT = (gcnew System::Windows::Forms::TextBox());
			this->textBox_MonsNOT = (gcnew System::Windows::Forms::TextBox());
			this->Vihod = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ActualResidents
			// 
			this->ActualResidents->AutoSize = true;
			this->ActualResidents->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ActualResidents->Location = System::Drawing::Point(9, 32);
			this->ActualResidents->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ActualResidents->Name = L"ActualResidents";
			this->ActualResidents->Size = System::Drawing::Size(173, 13);
			this->ActualResidents->TabIndex = 0;
			this->ActualResidents->Text = L"Настоящих жильцов пропущено:";
			// 
			// Monsters
			// 
			this->Monsters->AutoSize = true;
			this->Monsters->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Monsters->Location = System::Drawing::Point(9, 58);
			this->Monsters->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Monsters->Name = L"Monsters";
			this->Monsters->Size = System::Drawing::Size(176, 13);
			this->Monsters->TabIndex = 1;
			this->Monsters->Text = L"Монстров-двойников пропущено:";
			// 
			// Rezult
			// 
			this->Rezult->AutoSize = true;
			this->Rezult->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Rezult->Location = System::Drawing::Point(64, 11);
			this->Rezult->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Rezult->Name = L"Rezult";
			this->Rezult->Size = System::Drawing::Size(116, 13);
			this->Rezult->TabIndex = 2;
			this->Rezult->Text = L"Результат этой игры:";
			// 
			// ActResNOT
			// 
			this->ActResNOT->AutoSize = true;
			this->ActResNOT->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ActResNOT->Location = System::Drawing::Point(9, 89);
			this->ActResNOT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ActResNOT->Name = L"ActResNOT";
			this->ActResNOT->Size = System::Drawing::Size(188, 13);
			this->ActResNOT->TabIndex = 3;
			this->ActResNOT->Text = L"Настоящих жильцов не пропущено:";
			// 
			// MonsNOT
			// 
			this->MonsNOT->AutoSize = true;
			this->MonsNOT->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->MonsNOT->Location = System::Drawing::Point(9, 120);
			this->MonsNOT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MonsNOT->Name = L"MonsNOT";
			this->MonsNOT->Size = System::Drawing::Size(191, 13);
			this->MonsNOT->TabIndex = 4;
			this->MonsNOT->Text = L"Монстров-двойников не пропущено:";
			// 
			// textBox_ActualResidents
			// 
			this->textBox_ActualResidents->Location = System::Drawing::Point(204, 29);
			this->textBox_ActualResidents->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_ActualResidents->Name = L"textBox_ActualResidents";
			this->textBox_ActualResidents->ReadOnly = true;
			this->textBox_ActualResidents->Size = System::Drawing::Size(76, 20);
			this->textBox_ActualResidents->TabIndex = 5;
			// 
			// textBox_Monsters
			// 
			this->textBox_Monsters->Location = System::Drawing::Point(204, 55);
			this->textBox_Monsters->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_Monsters->Name = L"textBox_Monsters";
			this->textBox_Monsters->ReadOnly = true;
			this->textBox_Monsters->Size = System::Drawing::Size(76, 20);
			this->textBox_Monsters->TabIndex = 6;
			// 
			// textBox_ActResNOT
			// 
			this->textBox_ActResNOT->Location = System::Drawing::Point(204, 86);
			this->textBox_ActResNOT->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_ActResNOT->Name = L"textBox_ActResNOT";
			this->textBox_ActResNOT->ReadOnly = true;
			this->textBox_ActResNOT->Size = System::Drawing::Size(76, 20);
			this->textBox_ActResNOT->TabIndex = 7;
			// 
			// textBox_MonsNOT
			// 
			this->textBox_MonsNOT->Location = System::Drawing::Point(204, 117);
			this->textBox_MonsNOT->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_MonsNOT->Name = L"textBox_MonsNOT";
			this->textBox_MonsNOT->ReadOnly = true;
			this->textBox_MonsNOT->Size = System::Drawing::Size(76, 20);
			this->textBox_MonsNOT->TabIndex = 8;
			// 
			// Vihod
			// 
			this->Vihod->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Vihod->Location = System::Drawing::Point(97, 157);
			this->Vihod->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Vihod->Name = L"Vihod";
			this->Vihod->Size = System::Drawing::Size(64, 29);
			this->Vihod->TabIndex = 9;
			this->Vihod->Text = L"Закрыть";
			this->Vihod->UseVisualStyleBackColor = false;
			this->Vihod->Click += gcnew System::EventHandler(this, &resultat::Vihod_Click);
			// 
			// resultat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(291, 213);
			this->Controls->Add(this->Vihod);
			this->Controls->Add(this->textBox_MonsNOT);
			this->Controls->Add(this->textBox_ActResNOT);
			this->Controls->Add(this->textBox_Monsters);
			this->Controls->Add(this->textBox_ActualResidents);
			this->Controls->Add(this->MonsNOT);
			this->Controls->Add(this->ActResNOT);
			this->Controls->Add(this->Rezult);
			this->Controls->Add(this->Monsters);
			this->Controls->Add(this->ActualResidents);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"resultat";
			this->Text = L"resultat";
			this->Load += gcnew System::EventHandler(this, &resultat::resultat_Activated);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void resultat_Activated(System::Object^ sender, System::EventArgs^ e) {
	this->textBox_ActualResidents->Text = Convert::ToString(totalActualResidents);
	this->textBox_Monsters->Text = Convert::ToString(totalMonsters);
	this->textBox_ActResNOT->Text = Convert::ToString(totalActResNOT);
	this->textBox_MonsNOT->Text = Convert::ToString(totalMonsNOT);
}
private: System::Void Vihod_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
