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
#include "CheckResult.h"
#include "Zvonok.h"
#include "resultat.h"
const int MAX_NAME_LENGTH = 50;
const int MAX_APPEARANCE_LENGTH = 50;
const int MAX_PHONE_LENGTH = 5;
const int RESIDENTS_COUNT = 5;
extern int i;
extern int proh;
extern int f; // Дома или нет
extern int g;
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
    private: System::Windows::Forms::PictureBox^ Dos_pers1;





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
    private: System::Windows::Forms::Label^ Dopusk_razresh;
    private: System::Windows::Forms::Label^ Ne_Dopusk;
    private: System::Windows::Forms::Label^ Pobeda;
    private: System::Windows::Forms::MaskedTextBox^ Telephone;
    private: System::Windows::Forms::Button^ Phone_button;
    private: System::Windows::Forms::Label^ Phone_label;
    private: System::Windows::Forms::Label^ Vopros_zvon;
    private: System::Windows::Forms::Button^ Zvon_da;
    private: System::Windows::Forms::Button^ Zvon_net;
    private: System::Windows::Forms::TextBox^ TextBox_prich;
    private: System::Windows::Forms::Label^ Label_propusk;
    private: System::Windows::Forms::Button^ Propusk_da;
    private: System::Windows::Forms::Button^ Propusk_net;
    private: System::Windows::Forms::PictureBox^ Oboi_pers1;
    private: System::Windows::Forms::PictureBox^ Oboi_pers2;
    private: System::Windows::Forms::PictureBox^ Oboi_pers3;
    private: System::Windows::Forms::PictureBox^ Oboi_pers4;
    private: System::Windows::Forms::PictureBox^ Oboi_pers5;
    private: System::Windows::Forms::PictureBox^ Dos_pers2;
    private: System::Windows::Forms::PictureBox^ Dos_pers3;
    private: System::Windows::Forms::PictureBox^ Dos_pers4;
    private: System::Windows::Forms::PictureBox^ Dos_pers5;

















           System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Igra::typeid));
            this->NaGlavnuu = (gcnew System::Windows::Forms::Button());
            this->Dos_pers1 = (gcnew System::Windows::Forms::PictureBox());
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
            this->Dopusk_razresh = (gcnew System::Windows::Forms::Label());
            this->Ne_Dopusk = (gcnew System::Windows::Forms::Label());
            this->Pobeda = (gcnew System::Windows::Forms::Label());
            this->Telephone = (gcnew System::Windows::Forms::MaskedTextBox());
            this->Phone_button = (gcnew System::Windows::Forms::Button());
            this->Phone_label = (gcnew System::Windows::Forms::Label());
            this->Vopros_zvon = (gcnew System::Windows::Forms::Label());
            this->Zvon_da = (gcnew System::Windows::Forms::Button());
            this->Zvon_net = (gcnew System::Windows::Forms::Button());
            this->TextBox_prich = (gcnew System::Windows::Forms::TextBox());
            this->Label_propusk = (gcnew System::Windows::Forms::Label());
            this->Propusk_da = (gcnew System::Windows::Forms::Button());
            this->Propusk_net = (gcnew System::Windows::Forms::Button());
            this->Oboi_pers1 = (gcnew System::Windows::Forms::PictureBox());
            this->Oboi_pers2 = (gcnew System::Windows::Forms::PictureBox());
            this->Oboi_pers3 = (gcnew System::Windows::Forms::PictureBox());
            this->Oboi_pers4 = (gcnew System::Windows::Forms::PictureBox());
            this->Oboi_pers5 = (gcnew System::Windows::Forms::PictureBox());
            this->Dos_pers2 = (gcnew System::Windows::Forms::PictureBox());
            this->Dos_pers3 = (gcnew System::Windows::Forms::PictureBox());
            this->Dos_pers4 = (gcnew System::Windows::Forms::PictureBox());
            this->Dos_pers5 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dos_pers1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Oboi_pers1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Oboi_pers2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Oboi_pers3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Oboi_pers4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Oboi_pers5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dos_pers2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dos_pers3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dos_pers4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dos_pers5))->BeginInit();
            this->SuspendLayout();
            // 
            // NaGlavnuu
            // 
            this->NaGlavnuu->BackColor = System::Drawing::Color::Transparent;
            this->NaGlavnuu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->NaGlavnuu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->NaGlavnuu->ForeColor = System::Drawing::Color::Maroon;
            this->NaGlavnuu->Location = System::Drawing::Point(-2, 0);
            this->NaGlavnuu->Name = L"NaGlavnuu";
            this->NaGlavnuu->Size = System::Drawing::Size(289, 89);
            this->NaGlavnuu->TabIndex = 0;
            this->NaGlavnuu->Text = L"Главная";
            this->NaGlavnuu->UseVisualStyleBackColor = false;
            this->NaGlavnuu->Click += gcnew System::EventHandler(this, &Igra::NaGlavnuu_Click);
            // 
            // Dos_pers1
            // 
            this->Dos_pers1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Dos_pers1.BackgroundImage")));
            this->Dos_pers1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Dos_pers1->Location = System::Drawing::Point(12, 96);
            this->Dos_pers1->Name = L"Dos_pers1";
            this->Dos_pers1->Size = System::Drawing::Size(516, 539);
            this->Dos_pers1->TabIndex = 2;
            this->Dos_pers1->TabStop = false;
            this->Dos_pers1->Click += gcnew System::EventHandler(this, &Igra::pictureBox1_Click);
            // 
            // Question1
            // 
            this->Question1->AutoSize = true;
            this->Question1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Question1->Location = System::Drawing::Point(1157, 136);
            this->Question1->Name = L"Question1";
            this->Question1->Size = System::Drawing::Size(172, 16);
            this->Question1->TabIndex = 3;
            this->Question1->Text = L"Введите имя посетителя:";
            // 
            // Answer1
            // 
            this->Answer1->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->Answer1->ForeColor = System::Drawing::Color::Maroon;
            this->Answer1->Location = System::Drawing::Point(1172, 166);
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
            this->Answer2->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->Answer2->ForeColor = System::Drawing::Color::Maroon;
            this->Answer2->Location = System::Drawing::Point(1172, 251);
            this->Answer2->Name = L"Answer2";
            this->Answer2->Size = System::Drawing::Size(100, 22);
            this->Answer2->TabIndex = 6;
            // 
            // Question3
            // 
            this->Question3->AutoSize = true;
            this->Question3->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Question3->Location = System::Drawing::Point(1157, 298);
            this->Question3->Name = L"Question3";
            this->Question3->Size = System::Drawing::Size(159, 16);
            this->Question3->TabIndex = 7;
            this->Question3->Text = L"Введите id посетителя:";
            // 
            // Answer3
            // 
            this->Answer3->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->Answer3->ForeColor = System::Drawing::Color::Maroon;
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
            this->Question4->Location = System::Drawing::Point(1169, 377);
            this->Question4->Name = L"Question4";
            this->Question4->Size = System::Drawing::Size(118, 16);
            this->Question4->TabIndex = 9;
            this->Question4->Text = L"Введите одежду:";
            // 
            // Answer4
            // 
            this->Answer4->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->Answer4->ForeColor = System::Drawing::Color::Maroon;
            this->Answer4->Location = System::Drawing::Point(1172, 411);
            this->Answer4->Name = L"Answer4";
            this->Answer4->Size = System::Drawing::Size(100, 22);
            this->Answer4->TabIndex = 10;
            // 
            // Question5
            // 
            this->Question5->AutoSize = true;
            this->Question5->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Question5->Location = System::Drawing::Point(1115, 449);
            this->Question5->Name = L"Question5";
            this->Question5->Size = System::Drawing::Size(285, 16);
            this->Question5->TabIndex = 11;
            this->Question5->Text = L"Введите цвет волос(брюнет,седой,лысый):";
            // 
            // Answer5
            // 
            this->Answer5->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->Answer5->ForeColor = System::Drawing::Color::Maroon;
            this->Answer5->Location = System::Drawing::Point(1172, 480);
            this->Answer5->Name = L"Answer5";
            this->Answer5->Size = System::Drawing::Size(100, 22);
            this->Answer5->TabIndex = 12;
            // 
            // Knopka_ok
            // 
            this->Knopka_ok->BackColor = System::Drawing::Color::Transparent;
            this->Knopka_ok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Knopka_ok->ForeColor = System::Drawing::Color::Maroon;
            this->Knopka_ok->Location = System::Drawing::Point(1172, 560);
            this->Knopka_ok->Name = L"Knopka_ok";
            this->Knopka_ok->Size = System::Drawing::Size(109, 44);
            this->Knopka_ok->TabIndex = 13;
            this->Knopka_ok->Text = L"Проверить";
            this->Knopka_ok->UseVisualStyleBackColor = false;
            this->Knopka_ok->Click += gcnew System::EventHandler(this, &Igra::Knopka_ok_Click);
            // 
            // Dopusk_razresh
            // 
            this->Dopusk_razresh->AutoSize = true;
            this->Dopusk_razresh->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Dopusk_razresh->Location = System::Drawing::Point(658, 331);
            this->Dopusk_razresh->Name = L"Dopusk_razresh";
            this->Dopusk_razresh->Size = System::Drawing::Size(256, 16);
            this->Dopusk_razresh->TabIndex = 14;
            this->Dopusk_razresh->Text = L"Данные совпадают. Допуск разрешён.";
            this->Dopusk_razresh->Visible = false;
            // 
            // Ne_Dopusk
            // 
            this->Ne_Dopusk->AutoSize = true;
            this->Ne_Dopusk->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Ne_Dopusk->Location = System::Drawing::Point(536, 331);
            this->Ne_Dopusk->Name = L"Ne_Dopusk";
            this->Ne_Dopusk->Size = System::Drawing::Size(429, 16);
            this->Ne_Dopusk->TabIndex = 15;
            this->Ne_Dopusk->Text = L"Данные не совпадают. Возможно, это монстр-двойник! Причина:";
            this->Ne_Dopusk->Visible = false;
            // 
            // Pobeda
            // 
            this->Pobeda->AutoSize = true;
            this->Pobeda->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Pobeda->Location = System::Drawing::Point(658, 284);
            this->Pobeda->Name = L"Pobeda";
            this->Pobeda->Size = System::Drawing::Size(255, 16);
            this->Pobeda->TabIndex = 16;
            this->Pobeda->Text = L"Поздравляем! Вы не погибли сегодня!";
            this->Pobeda->Visible = false;
            // 
            // Telephone
            // 
            this->Telephone->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->Telephone->ForeColor = System::Drawing::Color::Maroon;
            this->Telephone->Location = System::Drawing::Point(305, 687);
            this->Telephone->Mask = L"0000";
            this->Telephone->Name = L"Telephone";
            this->Telephone->Size = System::Drawing::Size(100, 22);
            this->Telephone->TabIndex = 17;
            // 
            // Phone_button
            // 
            this->Phone_button->BackColor = System::Drawing::Color::Transparent;
            this->Phone_button->Enabled = false;
            this->Phone_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Phone_button->ForeColor = System::Drawing::Color::Maroon;
            this->Phone_button->Location = System::Drawing::Point(305, 732);
            this->Phone_button->Name = L"Phone_button";
            this->Phone_button->Size = System::Drawing::Size(100, 30);
            this->Phone_button->TabIndex = 18;
            this->Phone_button->Text = L"Позвонить";
            this->Phone_button->UseVisualStyleBackColor = false;
            this->Phone_button->Click += gcnew System::EventHandler(this, &Igra::Phone_button_Click);
            // 
            // Phone_label
            // 
            this->Phone_label->AutoSize = true;
            this->Phone_label->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Phone_label->Location = System::Drawing::Point(290, 654);
            this->Phone_label->Name = L"Phone_label";
            this->Phone_label->Size = System::Drawing::Size(179, 16);
            this->Phone_label->TabIndex = 19;
            this->Phone_label->Text = L"Введите номер телефона:";
            // 
            // Vopros_zvon
            // 
            this->Vopros_zvon->AutoSize = true;
            this->Vopros_zvon->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Vopros_zvon->Location = System::Drawing::Point(658, 377);
            this->Vopros_zvon->Name = L"Vopros_zvon";
            this->Vopros_zvon->Size = System::Drawing::Size(279, 16);
            this->Vopros_zvon->TabIndex = 20;
            this->Vopros_zvon->Text = L"Вы хотите позвонить в квартиру жильца\?";
            this->Vopros_zvon->Visible = false;
            // 
            // Zvon_da
            // 
            this->Zvon_da->BackColor = System::Drawing::Color::Transparent;
            this->Zvon_da->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Zvon_da->ForeColor = System::Drawing::Color::Maroon;
            this->Zvon_da->Location = System::Drawing::Point(661, 411);
            this->Zvon_da->Name = L"Zvon_da";
            this->Zvon_da->Size = System::Drawing::Size(75, 23);
            this->Zvon_da->TabIndex = 21;
            this->Zvon_da->Text = L"Да";
            this->Zvon_da->UseVisualStyleBackColor = false;
            this->Zvon_da->Visible = false;
            this->Zvon_da->Click += gcnew System::EventHandler(this, &Igra::Zvon_da_Click);
            // 
            // Zvon_net
            // 
            this->Zvon_net->BackColor = System::Drawing::Color::Transparent;
            this->Zvon_net->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Zvon_net->ForeColor = System::Drawing::Color::Maroon;
            this->Zvon_net->Location = System::Drawing::Point(791, 411);
            this->Zvon_net->Name = L"Zvon_net";
            this->Zvon_net->Size = System::Drawing::Size(75, 23);
            this->Zvon_net->TabIndex = 22;
            this->Zvon_net->Text = L"Нет";
            this->Zvon_net->UseVisualStyleBackColor = false;
            this->Zvon_net->Visible = false;
            this->Zvon_net->Click += gcnew System::EventHandler(this, &Igra::Zvon_net_Click);
            // 
            // TextBox_prich
            // 
            this->TextBox_prich->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->TextBox_prich->ForeColor = System::Drawing::Color::Maroon;
            this->TextBox_prich->Location = System::Drawing::Point(876, 328);
            this->TextBox_prich->Name = L"TextBox_prich";
            this->TextBox_prich->Size = System::Drawing::Size(206, 22);
            this->TextBox_prich->TabIndex = 23;
            this->TextBox_prich->Visible = false;
            // 
            // Label_propusk
            // 
            this->Label_propusk->AutoSize = true;
            this->Label_propusk->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->Label_propusk->Location = System::Drawing::Point(701, 469);
            this->Label_propusk->Name = L"Label_propusk";
            this->Label_propusk->Size = System::Drawing::Size(204, 16);
            this->Label_propusk->TabIndex = 24;
            this->Label_propusk->Text = L"Хотите ли Вы его пропустить\?";
            this->Label_propusk->Visible = false;
            // 
            // Propusk_da
            // 
            this->Propusk_da->BackColor = System::Drawing::Color::Transparent;
            this->Propusk_da->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Propusk_da->ForeColor = System::Drawing::Color::Maroon;
            this->Propusk_da->Location = System::Drawing::Point(704, 503);
            this->Propusk_da->Name = L"Propusk_da";
            this->Propusk_da->Size = System::Drawing::Size(75, 23);
            this->Propusk_da->TabIndex = 25;
            this->Propusk_da->Text = L"Хочу";
            this->Propusk_da->UseVisualStyleBackColor = false;
            this->Propusk_da->Visible = false;
            this->Propusk_da->Click += gcnew System::EventHandler(this, &Igra::Propusk_da_Click);
            // 
            // Propusk_net
            // 
            this->Propusk_net->BackColor = System::Drawing::Color::Transparent;
            this->Propusk_net->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Propusk_net->ForeColor = System::Drawing::Color::Maroon;
            this->Propusk_net->Location = System::Drawing::Point(800, 503);
            this->Propusk_net->Name = L"Propusk_net";
            this->Propusk_net->Size = System::Drawing::Size(75, 23);
            this->Propusk_net->TabIndex = 26;
            this->Propusk_net->Text = L"Не хочу";
            this->Propusk_net->UseVisualStyleBackColor = false;
            this->Propusk_net->Visible = false;
            this->Propusk_net->Click += gcnew System::EventHandler(this, &Igra::Propusk_net_Click);
            // 
            // Oboi_pers1
            // 
            this->Oboi_pers1->BackColor = System::Drawing::Color::Transparent;
            this->Oboi_pers1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Oboi_pers1.BackgroundImage")));
            this->Oboi_pers1->Location = System::Drawing::Point(215, 0);
            this->Oboi_pers1->Name = L"Oboi_pers1";
            this->Oboi_pers1->Size = System::Drawing::Size(1329, 801);
            this->Oboi_pers1->TabIndex = 27;
            this->Oboi_pers1->TabStop = false;
            // 
            // Oboi_pers2
            // 
            this->Oboi_pers2->BackColor = System::Drawing::Color::Transparent;
            this->Oboi_pers2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Oboi_pers2.BackgroundImage")));
            this->Oboi_pers2->Location = System::Drawing::Point(215, 0);
            this->Oboi_pers2->Name = L"Oboi_pers2";
            this->Oboi_pers2->Size = System::Drawing::Size(1329, 801);
            this->Oboi_pers2->TabIndex = 28;
            this->Oboi_pers2->TabStop = false;
            this->Oboi_pers2->Visible = false;
            // 
            // Oboi_pers3
            // 
            this->Oboi_pers3->BackColor = System::Drawing::Color::Transparent;
            this->Oboi_pers3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Oboi_pers3.BackgroundImage")));
            this->Oboi_pers3->Location = System::Drawing::Point(215, 0);
            this->Oboi_pers3->Name = L"Oboi_pers3";
            this->Oboi_pers3->Size = System::Drawing::Size(1329, 801);
            this->Oboi_pers3->TabIndex = 29;
            this->Oboi_pers3->TabStop = false;
            this->Oboi_pers3->Visible = false;
            // 
            // Oboi_pers4
            // 
            this->Oboi_pers4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Oboi_pers4.BackgroundImage")));
            this->Oboi_pers4->Location = System::Drawing::Point(215, 0);
            this->Oboi_pers4->Name = L"Oboi_pers4";
            this->Oboi_pers4->Size = System::Drawing::Size(1329, 801);
            this->Oboi_pers4->TabIndex = 30;
            this->Oboi_pers4->TabStop = false;
            this->Oboi_pers4->Visible = false;
            // 
            // Oboi_pers5
            // 
            this->Oboi_pers5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Oboi_pers5.BackgroundImage")));
            this->Oboi_pers5->Location = System::Drawing::Point(215, 0);
            this->Oboi_pers5->Name = L"Oboi_pers5";
            this->Oboi_pers5->Size = System::Drawing::Size(1329, 801);
            this->Oboi_pers5->TabIndex = 31;
            this->Oboi_pers5->TabStop = false;
            this->Oboi_pers5->Visible = false;
            // 
            // Dos_pers2
            // 
            this->Dos_pers2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Dos_pers2.BackgroundImage")));
            this->Dos_pers2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Dos_pers2->Location = System::Drawing::Point(12, 96);
            this->Dos_pers2->Name = L"Dos_pers2";
            this->Dos_pers2->Size = System::Drawing::Size(516, 539);
            this->Dos_pers2->TabIndex = 32;
            this->Dos_pers2->TabStop = false;
            this->Dos_pers2->Visible = false;
            // 
            // Dos_pers3
            // 
            this->Dos_pers3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Dos_pers3.BackgroundImage")));
            this->Dos_pers3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Dos_pers3->Location = System::Drawing::Point(12, 96);
            this->Dos_pers3->Name = L"Dos_pers3";
            this->Dos_pers3->Size = System::Drawing::Size(516, 539);
            this->Dos_pers3->TabIndex = 33;
            this->Dos_pers3->TabStop = false;
            this->Dos_pers3->Visible = false;
            // 
            // Dos_pers4
            // 
            this->Dos_pers4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Dos_pers4.BackgroundImage")));
            this->Dos_pers4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Dos_pers4->Location = System::Drawing::Point(12, 96);
            this->Dos_pers4->Name = L"Dos_pers4";
            this->Dos_pers4->Size = System::Drawing::Size(516, 539);
            this->Dos_pers4->TabIndex = 34;
            this->Dos_pers4->TabStop = false;
            this->Dos_pers4->Visible = false;
            // 
            // Dos_pers5
            // 
            this->Dos_pers5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Dos_pers5.BackgroundImage")));
            this->Dos_pers5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Dos_pers5->Location = System::Drawing::Point(12, 96);
            this->Dos_pers5->Name = L"Dos_pers5";
            this->Dos_pers5->Size = System::Drawing::Size(516, 539);
            this->Dos_pers5->TabIndex = 35;
            this->Dos_pers5->TabStop = false;
            this->Dos_pers5->Visible = false;
            // 
            // Igra
            // 
            this->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->ClientSize = System::Drawing::Size(1540, 845);
            this->Controls->Add(this->Dos_pers5);
            this->Controls->Add(this->Dos_pers1);
            this->Controls->Add(this->Dos_pers3);
            this->Controls->Add(this->Dos_pers2);
            this->Controls->Add(this->Dos_pers4);
            this->Controls->Add(this->NaGlavnuu);
            this->Controls->Add(this->Propusk_net);
            this->Controls->Add(this->Propusk_da);
            this->Controls->Add(this->Label_propusk);
            this->Controls->Add(this->TextBox_prich);
            this->Controls->Add(this->Zvon_net);
            this->Controls->Add(this->Zvon_da);
            this->Controls->Add(this->Vopros_zvon);
            this->Controls->Add(this->Phone_label);
            this->Controls->Add(this->Phone_button);
            this->Controls->Add(this->Telephone);
            this->Controls->Add(this->Pobeda);
            this->Controls->Add(this->Ne_Dopusk);
            this->Controls->Add(this->Dopusk_razresh);
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
            this->Controls->Add(this->Oboi_pers5);
            this->Controls->Add(this->Oboi_pers1);
            this->Controls->Add(this->Oboi_pers2);
            this->Controls->Add(this->Oboi_pers3);
            this->Controls->Add(this->Oboi_pers4);
            this->Name = L"Igra";
            this->Load += gcnew System::EventHandler(this, &Igra::Igra_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dos_pers1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Oboi_pers1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Oboi_pers2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Oboi_pers3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Oboi_pers4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Oboi_pers5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dos_pers2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dos_pers3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dos_pers4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dos_pers5))->EndInit();
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
        i = 0;
        proh = 0;
        f = 0; // Дома или нет
        g = 0;
        totalActualResidents = 0;
        totalMonsters = 0;
        totalActResNOT = 0;
        totalMonsNOT = 0;
    }
    private: System::Void NaGlavnuu_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    private: System::Void Knopka_ok_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Knopka_ok->Enabled = false;
        this->Label_propusk->Visible = false;
        this->Propusk_da->Visible = false;
        this->Propusk_net->Visible = false;
        this->Dopusk_razresh->Visible = false;
        this->Ne_Dopusk->Visible = false;
        fflush(stdin);
        // Инициализация жильцов
        Resident residents[RESIDENTS_COUNT];
        int residentCount;
        FILE* Rez_list;
        Rez_list = fopen("residents2.txt", "r");
        if (!Rez_list) {
            MessageBox::Show("База данных пуста!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            this->Close();
        }
        fflush(stdin);
        residentCount = 0;
        char first[MAX_NAME_LENGTH], last[MAX_NAME_LENGTH], id[3], hair[MAX_NAME_LENGTH], cloth[MAX_APPEARANCE_LENGTH], phone[MAX_PHONE_LENGTH];
        fflush(stdin);
        while (fscanf(Rez_list, "%s %s %s %s %s %s", first, last, id, hair, cloth, phone) != EOF) {
            fflush(stdin);
            residents[residentCount].setResident(first, last, id, hair, cloth, phone);
            residentCount = residentCount + 1;
        }
        if (residentCount == 0){
            MessageBox::Show("данных пуста!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            fclose(Rez_list);
            this->Close();
        }
        
        fclose(Rez_list);
        
     
            // Инициализация прешедшего жильца
            VisitorPass visitor;
            // Переменные для считывания ответов из textbox
            char* pr_name;
            char* pr_surname;
            char* pr_id;
            char* pr_hair;
            char* pr_clothers;
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


            CheckResult result;
            int check = 0;
            if (stricmp(residents[i].getFirstName(), visitor.getFirstName()) != 0) {
                result.discrepancyReason = "Неправильное имя";
                check++;
            }
            else if (stricmp(residents[i].getLastName(), visitor.getLastName()) != 0) {
                result.discrepancyReason = "Неправильная фамилия";
                check++;
            }
            else if (stricmp(residents[i].getId(), visitor.getId()) != 0) {
                result.discrepancyReason = "Неправильный id";
                check++;
            }
            else if (stricmp(residents[i].getAppearance().getHairColor(), visitor.getAppearance().getHairColor()) != 0) {
                result.discrepancyReason = "Неправильный цвет волос";
                check++;
            }
            else if (stricmp(residents[i].getAppearance().getClothes(), visitor.getAppearance().getClothes()) != 0) {
                result.discrepancyReason = "Неправильная одежда";
                check++;
            }
            if (check == 0) {
                result.isMatch = 1;
            }
            else result.isMatch = 0;
            if (result.isMatch == 1) {
                this->Dopusk_razresh->Visible = true;
                this->TextBox_prich->Visible = false;
                this->Ne_Dopusk->Visible = false;
                this->Vopros_zvon->Visible = true;
                this->Zvon_da->Visible = true;
                this->Zvon_net->Visible = true;
                g = 1;

            }
            else {
                this->Ne_Dopusk->Visible = true;
                this->TextBox_prich->Visible = true;
                String^ str_prich = gcnew String(result.discrepancyReason);
                this->TextBox_prich->Text = str_prich;
                this->Vopros_zvon->Visible = true;
                this->Zvon_da->Visible = true;
                this->Zvon_net->Visible = true;
                g = 0;
            }
            proh++;
            i++;
    }
private: System::Void Zvon_da_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Phone_button->Enabled = true;
    this->Label_propusk->Visible = true;
    this->Propusk_da->Visible = true;
    this->Propusk_net->Visible = true;
}
private: System::Void Phone_button_Click(System::Object^ sender, System::EventArgs^ e) {
    Resident residents[RESIDENTS_COUNT];
    int residentCount;
    FILE* Rez_list;
    Rez_list = fopen("residents2.txt", "r");
    if (!Rez_list) {
        MessageBox::Show("Упс!похоже в этом доме пока что никто не живёт!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        this->Close();
    }
    fflush(stdin);
    residentCount = 0;
    char first[MAX_NAME_LENGTH], last[MAX_NAME_LENGTH], id[3], hair[MAX_NAME_LENGTH], cloth[MAX_APPEARANCE_LENGTH], phone[MAX_PHONE_LENGTH];
    fflush(stdin);
    while (fscanf(Rez_list, "%s %s %s %s %s %s", first, last, id, hair, cloth, phone) != EOF) {
        fflush(stdin);
        residents[residentCount].setResident(first, last, id, hair, cloth, phone);
        residentCount = residentCount + 1;
    }
    if (residentCount == 0) {
        MessageBox::Show("Упс!похоже в этом доме пока что никто не живёт!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        fclose(Rez_list);
        this->Close();
    }
    fclose(Rez_list);

    char* tel;
    IntPtr p = Marshal::StringToHGlobalAnsi(this->Telephone->Text); //преобразовать информацию из TextBox в массив char
    tel = (char*)p.ToPointer();
    for (int i1 = 0; i1 < RESIDENTS_COUNT; i1++) {
        if (atoi(tel) == atoi(residents[i1].getPhone())) {
            f = 1;//Если номер не существует, то f = 0
            break;
        }
        else f = 0;
    }
    if (f) {
        if (atoi(tel) == atoi(residents[i-1].getPhone())) f = 1;//Совпадающий номер
        else f = 2;//Не совпадающий номер
    }
    Zvonok^ zvon = gcnew Zvonok();
    zvon->Show();

}
private: System::Void Zvon_net_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Phone_button->Enabled = false;
    this->Label_propusk->Visible = true;
    this->Propusk_da->Visible = true;
    this->Propusk_net->Visible = true;
}
private: System::Void Propusk_da_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Dopusk_razresh->Visible = false;
    this->Ne_Dopusk->Visible = false;
    this->TextBox_prich->Visible = false;
    this->Vopros_zvon->Visible = false;
    this->Zvon_da->Visible = false;
    this->Zvon_net->Visible = false;
    this->Propusk_da->Visible = false;
    this->Propusk_net->Visible = false;
    this->Label_propusk->Visible = false;
    this->Phone_button->Enabled = false;
    this->Answer1->Text = L"";
    this->Answer2->Text = L"";
    this->Answer3->Text = L"";
    this->Answer4->Text = L"";
    this->Answer5->Text = L"";
    this->Telephone->Text = L"";
    if (proh == 1) {
        this->Oboi_pers2->Visible = true;
        this->Oboi_pers1->Visible = false;
        this->Dos_pers2->Visible = true;
        this->Dos_pers1->Visible = false;
    }
    else if (proh == 2) {
        this->Oboi_pers3->Visible = true;
        this->Oboi_pers2->Visible = false;
        this->Dos_pers3->Visible = true;
        this->Dos_pers2->Visible = false;
    }
    else if (proh == 3) {
        this->Oboi_pers4->Visible = true;
        this->Oboi_pers3->Visible = false;
        this->Dos_pers4->Visible = true;
        this->Dos_pers3->Visible = false;
    }
    else if (proh == 4) {
        this->Oboi_pers5->Visible = true;
        this->Oboi_pers4->Visible = false;
        this->Dos_pers5->Visible = true;
        this->Dos_pers4->Visible = false;
    }
    if (g) totalActualResidents++;
    else {
        totalMonsters++;
        FILE* resultFile = fopen("results2.txt", "a");
        if (resultFile == NULL) {
            std::cout << "Не удалось открыть файл для записи.\n";
            return;
        }
        fprintf(resultFile, "Настоящих жильцов пропущено: %d\n", totalActualResidents);
        fprintf(resultFile, "Монстров-двойников пропущено: %d\n", totalMonsters);
        fprintf(resultFile, "Настоящих жильцов не пропущено: %d\n", totalActResNOT);
        fprintf(resultFile, "Монстров-двойников не пропущено: %d\n", totalMonsNOT);

        fclose(resultFile);

        resultat^ res = gcnew resultat();
        res->Show();
        this->Close();
    }
    if (proh == 5) {
        FILE* resultFile = fopen("results2.txt", "a");
        if (resultFile == NULL) {
            std::cout << "Не удалось открыть файл для записи.\n";
            return;
        }
        fprintf(resultFile, "Настоящих жильцов пропущено: %d\n", totalActualResidents);
        fprintf(resultFile, "Монстров-двойников пропущено: %d\n", totalMonsters);
        fprintf(resultFile, "Настоящих жильцов не пропущено: %d\n", totalActResNOT);
        fprintf(resultFile, "Монстров-двойников не пропущено: %d\n", totalMonsNOT);

        fclose(resultFile);
        resultat^ res = gcnew resultat();
        res->Show();
        this->Close();
    }
    else this->Knopka_ok->Enabled = true;
}
private: System::Void Propusk_net_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Dopusk_razresh->Visible = false;
    this->Ne_Dopusk->Visible = false;
    this->TextBox_prich->Visible = false;
    this->Vopros_zvon->Visible = false;
    this->Zvon_da->Visible = false;
    this->Zvon_net->Visible = false;
    this->Propusk_da->Visible = false;
    this->Propusk_net->Visible = false;
    this->Label_propusk->Visible = false;
    this->Phone_button->Enabled = false;
    this->Answer1->Text = L"";
    this->Answer2->Text = L"";
    this->Answer3->Text = L"";
    this->Answer4->Text = L"";
    this->Answer5->Text = L"";
    this->Telephone->Text = L"";
    if (proh == 1) {
        this->Oboi_pers2->Visible = true;
        this->Oboi_pers1->Visible = false;
        this->Dos_pers2->Visible = true;
        this->Dos_pers1->Visible = false;
    }
    else if (proh == 2) {
        this->Oboi_pers3->Visible = true;
        this->Oboi_pers2->Visible = false;
        this->Dos_pers3->Visible = true;
        this->Dos_pers2->Visible = false;
    }
    else if (proh == 3) {
        this->Oboi_pers4->Visible = true;
        this->Oboi_pers3->Visible = false;
        this->Dos_pers4->Visible = true;
        this->Dos_pers3->Visible = false;
    }
    else if (proh == 4) {
        this->Oboi_pers5->Visible = true;
        this->Oboi_pers4->Visible = false;
        this->Dos_pers5->Visible = true;
        this->Dos_pers4->Visible = false;
    }
    if (g) totalActResNOT++;
    else totalMonsNOT++;
    if (proh == 5) {
        FILE* resultFile = fopen("results2.txt", "a");
        if (resultFile == NULL) {
            std::cout << "Не удалось открыть файл для записи.\n";
            return;
        }
        fprintf(resultFile, "Настоящих жильцов пропущено: %d\n", totalActualResidents);
        fprintf(resultFile, "Монстров-двойников пропущено: %d\n", totalMonsters);
        fprintf(resultFile, "Настоящих жильцов не пропущено: %d\n", totalActResNOT);
        fprintf(resultFile, "Монстров-двойников не пропущено: %d\n", totalMonsNOT);

        fclose(resultFile);
        resultat^ res = gcnew resultat();
        res->Show();
        this->Close();
    }
    else this->Knopka_ok->Enabled = true;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
