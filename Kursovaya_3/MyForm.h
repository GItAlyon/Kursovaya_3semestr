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
           System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->Nach_igra = (gcnew System::Windows::Forms::Button());
            this->Exit = (gcnew System::Windows::Forms::Button());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
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
            this->Nach_igra->Size = System::Drawing::Size(294, 54);
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
            this->Exit->Size = System::Drawing::Size(294, 61);
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
            // MyForm
            // 
            this->BackColor = System::Drawing::Color::Black;
            this->ClientSize = System::Drawing::Size(1853, 1002);
            this->Controls->Add(this->Exit);
            this->Controls->Add(this->Nach_igra);
            this->Controls->Add(this->pictureBox2);
            this->Name = L"MyForm";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);

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
};



}
