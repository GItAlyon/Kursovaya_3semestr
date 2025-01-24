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
        System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Button^ NaGlavnuu;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
           System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Igra::typeid));
            this->NaGlavnuu = (gcnew System::Windows::Forms::Button());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->SuspendLayout();
            // 
            // NaGlavnuu
            // 
            this->NaGlavnuu->BackColor = System::Drawing::Color::Transparent;
            this->NaGlavnuu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->NaGlavnuu->Font = (gcnew System::Drawing::Font(L"Mistral", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->NaGlavnuu->ForeColor = System::Drawing::Color::Maroon;
            this->NaGlavnuu->Location = System::Drawing::Point(90, 72);
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
            this->pictureBox2->Location = System::Drawing::Point(295, -49);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(1216, 1155);
            this->pictureBox2->TabIndex = 1;
            this->pictureBox2->TabStop = false;
            // 
            // Igra
            // 
            this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->ClientSize = System::Drawing::Size(1920, 1061);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->NaGlavnuu);
            this->Name = L"Igra";
            this->Load += gcnew System::EventHandler(this, &Igra::Igra_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);

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
    private: System::Void NaGlavnuu_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    };

}
