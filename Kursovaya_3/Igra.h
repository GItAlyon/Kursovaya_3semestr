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
#include "Resident.h"
#include "VisitorPass.h"
const int MAX_NAME_LENGTH = 50;
const int MAX_APPEARANCE_LENGTH = 50;
const int MAX_PHONE_LENGTH = 15;
const int RESIDENTS_COUNT = 5;
/*const char* FILENAME = "residents2.txt";
const char* RESULT_FILENAME = "results2.txt";*/

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::Runtime::InteropServices; // для извлечения текста из textbox

	/// <summary>
	/// Сводка для Igra
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
            this->KeyPreview = true; // Разрешаем обработку клавиш на уровне формы
            this->KeyDown += gcnew KeyEventHandler(this, &Igra::Igra_KeyDown); // Подключаем обработчик
        }

    protected:
        ~Igra()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Button^ Nach_igra;
        System::Windows::Forms::Button^ Exit;
    private: System::Windows::Forms::Button^ NaGlavnuu;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ Question1;
    private: System::Windows::Forms::TextBox^ Answer1;

    private: System::Windows::Forms::Label^ Question2;
    private: System::Windows::Forms::TextBox^ Answer2;


    private: System::Windows::Forms::Label^ Question3;
    private: System::Windows::Forms::MaskedTextBox^ Answer3;
    private: System::Windows::Forms::Label^ Question4;
    private: System::Windows::Forms::TextBox^ Answer4;
    private: System::Windows::Forms::Label^ Question5;
    private: System::Windows::Forms::TextBox^ Answer5;
    private: System::Windows::Forms::Button^ Knopka_ok;





           System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Igra::typeid));
            this->NaGlavnuu = (gcnew System::Windows::Forms::Button());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->Question1 = (gcnew System::Windows::Forms::Label());
            this->Answer1 = (gcnew System::Windows::Forms::TextBox());
            this->Question2 = (gcnew System::Windows::Forms::Label());
            this->Answer2 = (gcnew System::Windows::Forms::TextBox());
            this->Question3 = (gcnew System::Windows::Forms::Label());
            this->Answer3 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->Question4 = (gcnew System::Windows::Forms::Label());
            this->Answer4 = (gcnew System::Windows::Forms::TextBox());
            this->Question5 = (gcnew System::Windows::Forms::Label());
            this->Answer5 = (gcnew System::Windows::Forms::TextBox());
            this->Knopka_ok = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // NaGlavnuu
            // 
            this->NaGlavnuu->BackColor = System::Drawing::Color::Transparent;
            this->NaGlavnuu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->NaGlavnuu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->NaGlavnuu->ForeColor = System::Drawing::Color::Maroon;
            this->NaGlavnuu->Location = System::Drawing::Point(95, 108);
            this->NaGlavnuu->Name = L"NaGlavnuu";
            this->NaGlavnuu->Size = System::Drawing::Size(181, 64);
            this->NaGlavnuu->TabIndex = 0;
            this->NaGlavnuu->Text = L"Главная";
            this->NaGlavnuu->UseVisualStyleBackColor = false;
            this->NaGlavnuu->Click += gcnew System::EventHandler(this, &Igra::NaGlavnuu_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox2->Location = System::Drawing::Point(-3, -3);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(1514, 1032);
            this->pictureBox2->TabIndex = 1;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(37, 178);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(387, 529);
            this->pictureBox1->TabIndex = 2;
            this->pictureBox1->TabStop = false;
            // 
            // Question1
            // 
            this->Question1->AutoSize = true;
            this->Question1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Question1->Location = System::Drawing::Point(1169, 134);
            this->Question1->Name = L"Question1";
            this->Question1->Size = System::Drawing::Size(172, 16);
            this->Question1->TabIndex = 3;
            this->Question1->Text = L"Введите имя посетителя:";
            // 
            // Answer1
            // 
            this->Answer1->Location = System::Drawing::Point(1172, 168);
            this->Answer1->Name = L"Answer1";
            this->Answer1->Size = System::Drawing::Size(100, 22);
            this->Answer1->TabIndex = 4;
            // 
            // Question2
            // 
            this->Question2->AutoSize = true;
            this->Question2->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Question2->Location = System::Drawing::Point(1140, 214);
            this->Question2->Name = L"Question2";
            this->Question2->Size = System::Drawing::Size(210, 16);
            this->Question2->TabIndex = 5;
            this->Question2->Text = L"Введите фамилию посетителя:";
            // 
            // Answer2
            // 
            this->Answer2->Location = System::Drawing::Point(1172, 247);
            this->Answer2->Name = L"Answer2";
            this->Answer2->Size = System::Drawing::Size(100, 22);
            this->Answer2->TabIndex = 6;
            // 
            // Question3
            // 
            this->Question3->AutoSize = true;
            this->Question3->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Question3->Location = System::Drawing::Point(1154, 295);
            this->Question3->Name = L"Question3";
            this->Question3->Size = System::Drawing::Size(159, 16);
            this->Question3->TabIndex = 7;
            this->Question3->Text = L"Введите id посетителя:";
            // 
            // Answer3
            // 
            this->Answer3->Location = System::Drawing::Point(1172, 331);
            this->Answer3->Mask = L"00";
            this->Answer3->Name = L"Answer3";
            this->Answer3->Size = System::Drawing::Size(100, 22);
            this->Answer3->TabIndex = 8;
            // 
            // Question4
            // 
            this->Question4->AutoSize = true;
            this->Question4->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Question4->Location = System::Drawing::Point(1154, 377);
            this->Question4->Name = L"Question4";
            this->Question4->Size = System::Drawing::Size(118, 16);
            this->Question4->TabIndex = 9;
            this->Question4->Text = L"Введите одежду:";
            // 
            // Answer4
            // 
            this->Answer4->Location = System::Drawing::Point(1172, 412);
            this->Answer4->Name = L"Answer4";
            this->Answer4->Size = System::Drawing::Size(100, 22);
            this->Answer4->TabIndex = 10;
            // 
            // Question5
            // 
            this->Question5->AutoSize = true;
            this->Question5->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Question5->Location = System::Drawing::Point(1154, 451);
            this->Question5->Name = L"Question5";
            this->Question5->Size = System::Drawing::Size(142, 16);
            this->Question5->TabIndex = 11;
            this->Question5->Text = L"Введите цвет волос:";
            // 
            // Answer5
            // 
            this->Answer5->Location = System::Drawing::Point(1172, 480);
            this->Answer5->Name = L"Answer5";
            this->Answer5->Size = System::Drawing::Size(100, 22);
            this->Answer5->TabIndex = 12;
            // 
            // Knopka_ok
            // 
            this->Knopka_ok->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Knopka_ok->Location = System::Drawing::Point(1172, 560);
            this->Knopka_ok->Name = L"Knopka_ok";
            this->Knopka_ok->Size = System::Drawing::Size(109, 44);
            this->Knopka_ok->TabIndex = 13;
            this->Knopka_ok->Text = L"Проверить";
            this->Knopka_ok->UseVisualStyleBackColor = false;
            this->Knopka_ok->Click += gcnew System::EventHandler(this, &Igra::Knopka_ok_Click);
            // 
            // Igra
            // 
            this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->ClientSize = System::Drawing::Size(1920, 1055);
            this->Controls->Add(this->Knopka_ok);
            this->Controls->Add(this->Answer5);
            this->Controls->Add(this->Question5);
            this->Controls->Add(this->Answer4);
            this->Controls->Add(this->Question4);
            this->Controls->Add(this->Answer3);
            this->Controls->Add(this->Question3);
            this->Controls->Add(this->Answer2);
            this->Controls->Add(this->Question2);
            this->Controls->Add(this->Answer1);
            this->Controls->Add(this->Question1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->NaGlavnuu);
            this->Name = L"Igra";
            this->Load += gcnew System::EventHandler(this, &Igra::Igra_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private: System::Void Igra_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        // Проверяем, была ли нажата клавиша Esc
        if (e->KeyCode == Keys::Escape) {
            this->Close(); // Закрываем форму
        }
    }

    private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
        exit(0);
    }

    private: System::Void Nach_igra_Click(System::Object^ sender, System::EventArgs^ e) {
        Igra^ glav_igra = gcnew Igra();
        glav_igra->Show();
    }
    private: System::Void Igra_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void Igra_Activated(System::Object^ sender, System::EventArgs^ e) {
        
    }
    private: System::Void NaGlavnuu_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    private: System::Void Knopka_ok_Click(System::Object^ sender, System::EventArgs^ e) {
        FILE* Rez_list = fopen("residents2.txt", "r");
        // Инициализация жильцов
        Resident residents[5];
        int residentCount = 0;
        while (Rez_list) {
            char first[MAX_NAME_LENGTH], last[MAX_NAME_LENGTH], id[3], hair[MAX_NAME_LENGTH], cloth[MAX_APPEARANCE_LENGTH], phone[MAX_PHONE_LENGTH];
            fflush(stdin);
            fscanf(Rez_list, "%s %s %s %s %s %s", first, last, id, hair, cloth, phone);
            residents[residentCount].setResident(first, last, id, hair, cloth, phone);
            residentCount++;
        }
        if (residentCount == 0) {
            std::cout << "Ой. Похоже, что в этом доме ещё никто не живёт!\n";
            fclose(Rez_list);
            exit(1);
        }
        fclose(Rez_list);

        // Инициализация прешедшего жильца
        VisitorPass visitor;
        // Переменные для считывания ответов из textbox
        char *pr_name;
        char *pr_surname;
        char *pr_id;
        char* pr_hair;
        char *pr_clothers;
        IntPtr ptr1 = Marshal::StringToHGlobalAnsi(this->Answer1->Text); //преобразовать информацию из TextBox в массив char
        pr_name = (char*)ptr1.ToPointer();
        IntPtr ptr2 = Marshal::StringToHGlobalAnsi(this->Answer2->Text); //преобразовать информацию из TextBox в массив char
        pr_surname = (char*)ptr2.ToPointer();
        IntPtr ptr3 = Marshal::StringToHGlobalAnsi(this->Answer3->Text); //преобразовать информацию из TextBox в массив char
        pr_id = (char*)ptr3.ToPointer();
        IntPtr ptr4 = Marshal::StringToHGlobalAnsi(this->Answer5->Text); //преобразовать информацию из TextBox в массив char
        pr_hair = (char*)ptr4.ToPointer();
        IntPtr ptr5 = Marshal::StringToHGlobalAnsi(this->Answer4->Text); //преобразовать информацию из TextBox в массив char
        pr_clothers = (char*)ptr5.ToPointer();
        visitor.setVisitor(pr_name, pr_surname, pr_id, pr_hair, pr_clothers);

        
    }
};
}
