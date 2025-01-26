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
int i = 0;
int proh = 0;
int f = 0;
int g;
int totalActualResidents = 0;
int totalMonsters = 0;
int totalActResNOT = 0;
int totalMonsNOT = 0;

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
	/// 
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: добавьте код конструктора
            //
            this->KeyPreview = true; // Разрешаем обработку клавиш на уровне формы
            this->KeyDown += gcnew KeyEventHandler(this, &MyForm::MyForm_KeyDown); // Подключаем обработчик
            this->Nach_igra->Click += gcnew EventHandler(this, &MyForm::Nach_igra_Click); // Подключаем обработчик для кнопки "Nach_igra"
            this->Exit->Click += gcnew EventHandler(this, &MyForm::Exit_Click); // Подключаем обработчик для кнопки "Exit"
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Button^ Nach_igra;
        System::Windows::Forms::Button^ Exit;
        System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Label^ Rek;
    private: System::Windows::Forms::Label^ Label_ActualResidents;
    private: System::Windows::Forms::TextBox^ Rek_ActualResidents;
    private: System::Windows::Forms::Label^ Label_Monsters;
    private: System::Windows::Forms::Label^ Label_ActResNOT;
    private: System::Windows::Forms::Label^ Label_MonsNOT;
    private: System::Windows::Forms::TextBox^ Rek_Monsters;
    private: System::Windows::Forms::TextBox^ Rek_ActResNOT;
    private: System::Windows::Forms::TextBox^ Rek_MonsNOT;




           System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->Nach_igra = (gcnew System::Windows::Forms::Button());
            this->Exit = (gcnew System::Windows::Forms::Button());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->Rek = (gcnew System::Windows::Forms::Label());
            this->Label_ActualResidents = (gcnew System::Windows::Forms::Label());
            this->Rek_ActualResidents = (gcnew System::Windows::Forms::TextBox());
            this->Label_Monsters = (gcnew System::Windows::Forms::Label());
            this->Label_ActResNOT = (gcnew System::Windows::Forms::Label());
            this->Label_MonsNOT = (gcnew System::Windows::Forms::Label());
            this->Rek_Monsters = (gcnew System::Windows::Forms::TextBox());
            this->Rek_ActResNOT = (gcnew System::Windows::Forms::TextBox());
            this->Rek_MonsNOT = (gcnew System::Windows::Forms::TextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->SuspendLayout();
            // 
            // Nach_igra
            // 
            this->Nach_igra->BackColor = System::Drawing::Color::Transparent;
            this->Nach_igra->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Nach_igra->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Nach_igra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->Nach_igra->ForeColor = System::Drawing::Color::Maroon;
            this->Nach_igra->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
            this->Nach_igra->Location = System::Drawing::Point(62, 42);
            this->Nach_igra->Name = L"Nach_igra";
            this->Nach_igra->Size = System::Drawing::Size(294, 81);
            this->Nach_igra->TabIndex = 0;
            this->Nach_igra->Text = L"Начать Игру";
            this->Nach_igra->UseVisualStyleBackColor = false;
            this->Nach_igra->Click += gcnew System::EventHandler(this, &MyForm::Nach_igra_Click_1);
            // 
            // Exit
            // 
            this->Exit->BackColor = System::Drawing::Color::Transparent;
            this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->Exit->ForeColor = System::Drawing::Color::Maroon;
            this->Exit->Location = System::Drawing::Point(62, 129);
            this->Exit->Name = L"Exit";
            this->Exit->Size = System::Drawing::Size(294, 79);
            this->Exit->TabIndex = 1;
            this->Exit->Text = L"Выход";
            this->Exit->UseVisualStyleBackColor = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
            this->pictureBox2->Location = System::Drawing::Point(-3, -3);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(1500, 932);
            this->pictureBox2->TabIndex = 2;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
            // 
            // Rek
            // 
            this->Rek->AutoSize = true;
            this->Rek->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Rek->Location = System::Drawing::Point(1135, 192);
            this->Rek->Name = L"Rek";
            this->Rek->Size = System::Drawing::Size(155, 16);
            this->Rek->TabIndex = 3;
            this->Rek->Text = L"Рекорды за всё время:";
            // 
            // Label_ActualResidents
            // 
            this->Label_ActualResidents->AutoSize = true;
            this->Label_ActualResidents->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Label_ActualResidents->Location = System::Drawing::Point(1042, 234);
            this->Label_ActualResidents->Name = L"Label_ActualResidents";
            this->Label_ActualResidents->Size = System::Drawing::Size(276, 16);
            this->Label_ActualResidents->TabIndex = 4;
            this->Label_ActualResidents->Text = L"Рекорд пропускания настоящих жильцов:";
            // 
            // Rek_ActualResidents
            // 
            this->Rek_ActualResidents->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Rek_ActualResidents->Location = System::Drawing::Point(1262, 231);
            this->Rek_ActualResidents->Name = L"Rek_ActualResidents";
            this->Rek_ActualResidents->ReadOnly = true;
            this->Rek_ActualResidents->Size = System::Drawing::Size(100, 22);
            this->Rek_ActualResidents->TabIndex = 5;
            // 
            // Label_Monsters
            // 
            this->Label_Monsters->AutoSize = true;
            this->Label_Monsters->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Label_Monsters->Location = System::Drawing::Point(1031, 284);
            this->Label_Monsters->Name = L"Label_Monsters";
            this->Label_Monsters->Size = System::Drawing::Size(287, 16);
            this->Label_Monsters->TabIndex = 6;
            this->Label_Monsters->Text = L"Рекорд пропускания монстров-двойников:";
            // 
            // Label_ActResNOT
            // 
            this->Label_ActResNOT->AutoSize = true;
            this->Label_ActResNOT->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Label_ActResNOT->Location = System::Drawing::Point(979, 340);
            this->Label_ActResNOT->Name = L"Label_ActResNOT";
            this->Label_ActResNOT->Size = System::Drawing::Size(339, 16);
            this->Label_ActResNOT->TabIndex = 7;
            this->Label_ActResNOT->Text = L"Больше всего не пропущенных настоящих жильцов:";
            // 
            // Label_MonsNOT
            // 
            this->Label_MonsNOT->AutoSize = true;
            this->Label_MonsNOT->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Label_MonsNOT->Location = System::Drawing::Point(968, 397);
            this->Label_MonsNOT->Name = L"Label_MonsNOT";
            this->Label_MonsNOT->Size = System::Drawing::Size(350, 16);
            this->Label_MonsNOT->TabIndex = 8;
            this->Label_MonsNOT->Text = L"Больше всего не пропущенных монстров-двойников:";
            // 
            // Rek_Monsters
            // 
            this->Rek_Monsters->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Rek_Monsters->Location = System::Drawing::Point(1262, 278);
            this->Rek_Monsters->Name = L"Rek_Monsters";
            this->Rek_Monsters->ReadOnly = true;
            this->Rek_Monsters->Size = System::Drawing::Size(100, 22);
            this->Rek_Monsters->TabIndex = 9;
            // 
            // Rek_ActResNOT
            // 
            this->Rek_ActResNOT->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Rek_ActResNOT->Location = System::Drawing::Point(1247, 334);
            this->Rek_ActResNOT->Name = L"Rek_ActResNOT";
            this->Rek_ActResNOT->ReadOnly = true;
            this->Rek_ActResNOT->Size = System::Drawing::Size(100, 22);
            this->Rek_ActResNOT->TabIndex = 10;
            // 
            // Rek_MonsNOT
            // 
            this->Rek_MonsNOT->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Rek_MonsNOT->Location = System::Drawing::Point(1247, 394);
            this->Rek_MonsNOT->Name = L"Rek_MonsNOT";
            this->Rek_MonsNOT->ReadOnly = true;
            this->Rek_MonsNOT->Size = System::Drawing::Size(100, 22);
            this->Rek_MonsNOT->TabIndex = 11;
            // 
            // MyForm
            // 
            this->BackColor = System::Drawing::Color::Black;
            this->ClientSize = System::Drawing::Size(1853, 1002);
            this->Controls->Add(this->Rek_MonsNOT);
            this->Controls->Add(this->Rek_ActResNOT);
            this->Controls->Add(this->Rek_Monsters);
            this->Controls->Add(this->Label_MonsNOT);
            this->Controls->Add(this->Label_ActResNOT);
            this->Controls->Add(this->Label_Monsters);
            this->Controls->Add(this->Rek_ActualResidents);
            this->Controls->Add(this->Label_ActualResidents);
            this->Controls->Add(this->Rek);
            this->Controls->Add(this->Exit);
            this->Controls->Add(this->Nach_igra);
            this->Controls->Add(this->pictureBox2);
            this->Name = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Actiated);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private:
        System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
            // Проверяем, была ли нажата клавиша Esc
            if (e->KeyCode == Keys::Escape) {
                this->Close(); // Закрываем форму
            }
        }

    private:
        System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
            exit(0);
        }

    private:
        System::Void Nach_igra_Click(System::Object^ sender, System::EventArgs^ e) {
            Igra^ glav_igra = gcnew Igra();
            glav_igra->Show();
        }
    private: System::Void Nach_igra_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Actiated(System::Object^ sender, System::EventArgs^ e) {
    i = 0;
    proh = 0;
    f = 0; // Дома или нет
    g = 0;
    totalActualResidents = 0;
    totalMonsters = 0;
    totalActResNOT = 0;
    totalMonsNOT = 0;
    FILE* resultFile = fopen("results2.txt", "r");
    if (resultFile == NULL) {
        std::cout << "Не удалось открыть файл для чтения.\n";
        exit(0);
    }
    char s[40];
    int A[80];
    int i = 0;
    while (fscanf(resultFile, "%[^:]: %d\n", s, &A[i]) != EOF) {
        printf("%d: %d\n", i, A[i]);
        i++;
    }
    fclose(resultFile);

    // Обработка результатов
    int itogI = i;
    i = 0;
    int itog1 = A[0], itog2 = A[1], itog3 = A[2], itog4 = A[3];
    while (i < (itogI - 1)) {
        if (A[i + 4] > itog1) itog1 = A[i + 4];
        i++;
        if (A[i + 4] > itog2) itog2 = A[i + 4];
        i++;
        if (A[i + 4] > itog3) itog3 = A[i + 4];
        i++;
        if (A[i + 4] > itog4) itog4 = A[i + 4];
        i++;
    }
    this->Rek_ActualResidents->Text = Convert::ToString(itog1);
    this->Rek_Monsters->Text = Convert::ToString(itog2);
    this->Rek_ActResNOT->Text = Convert::ToString(itog3);
    this->Rek_MonsNOT->Text = Convert::ToString(itog4);
}
};



}
