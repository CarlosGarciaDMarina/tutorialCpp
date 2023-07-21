#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //

            // uncomment to execute the rk1-utils:
            //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

        }

    protected:


        String^ contenidoCaja1;
        float^ numeroCaja1;
    private: System::Windows::Forms::Button^ boton4;
    protected:
    private: System::Windows::Forms::Button^ boton5;
    private: System::Windows::Forms::Button^ boton6;
           float^ resultado;


        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:

    private: System::Windows::Forms::TextBox^ caja1;
    private: System::Windows::Forms::Button^ boton1;
    private: System::Windows::Forms::Button^ boton2;
    private: System::Windows::Forms::Button^ boton3;


    protected:





    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->boton1 = (gcnew System::Windows::Forms::Button());
            this->caja1 = (gcnew System::Windows::Forms::TextBox());
            this->boton2 = (gcnew System::Windows::Forms::Button());
            this->boton3 = (gcnew System::Windows::Forms::Button());
            this->boton4 = (gcnew System::Windows::Forms::Button());
            this->boton5 = (gcnew System::Windows::Forms::Button());
            this->boton6 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // boton1
            // 
            this->boton1->Location = System::Drawing::Point(12, 63);
            this->boton1->Name = L"boton1";
            this->boton1->Size = System::Drawing::Size(104, 25);
            this->boton1->TabIndex = 0;
            this->boton1->Text = L"Pulsame";
            this->boton1->UseVisualStyleBackColor = true;
            this->boton1->Click += gcnew System::EventHandler(this, &Form1::boton1_Click);
            // 
            // caja1
            // 
            this->caja1->Location = System::Drawing::Point(83, 107);
            this->caja1->Name = L"caja1";
            this->caja1->Size = System::Drawing::Size(178, 20);
            this->caja1->TabIndex = 1;
            this->caja1->Text = L"0";
            this->caja1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->caja1->TextChanged += gcnew System::EventHandler(this, &Form1::caja1_TextChanged);
            // 
            // boton2
            // 
            this->boton2->Location = System::Drawing::Point(122, 63);
            this->boton2->Name = L"boton2";
            this->boton2->Size = System::Drawing::Size(102, 25);
            this->boton2->TabIndex = 2;
            this->boton2->Text = L"Duplicar";
            this->boton2->UseVisualStyleBackColor = true;
            this->boton2->Click += gcnew System::EventHandler(this, &Form1::boton2_Click);
            // 
            // boton3
            // 
            this->boton3->Location = System::Drawing::Point(230, 62);
            this->boton3->Name = L"boton3";
            this->boton3->Size = System::Drawing::Size(108, 26);
            this->boton3->TabIndex = 3;
            this->boton3->Text = L"Sumar";
            this->boton3->UseVisualStyleBackColor = true;
            this->boton3->Click += gcnew System::EventHandler(this, &Form1::boton3_Click);
            // 
            // boton4
            // 
            this->boton4->Location = System::Drawing::Point(52, 146);
            this->boton4->Name = L"boton4";
            this->boton4->Size = System::Drawing::Size(75, 23);
            this->boton4->TabIndex = 4;
            this->boton4->Text = L"1";
            this->boton4->UseVisualStyleBackColor = true;
            this->boton4->Click += gcnew System::EventHandler(this, &Form1::boton4_Click);
            // 
            // boton5
            // 
            this->boton5->Location = System::Drawing::Point(133, 146);
            this->boton5->Name = L"boton5";
            this->boton5->Size = System::Drawing::Size(75, 23);
            this->boton5->TabIndex = 5;
            this->boton5->Text = L"2";
            this->boton5->UseVisualStyleBackColor = true;
            this->boton5->Click += gcnew System::EventHandler(this, &Form1::boton5_Click);
            // 
            // boton6
            // 
            this->boton6->Location = System::Drawing::Point(214, 146);
            this->boton6->Name = L"boton6";
            this->boton6->Size = System::Drawing::Size(75, 23);
            this->boton6->TabIndex = 6;
            this->boton6->Text = L"3";
            this->boton6->UseVisualStyleBackColor = true;
            this->boton6->Click += gcnew System::EventHandler(this, &Form1::boton6_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(350, 329);
            this->Controls->Add(this->boton6);
            this->Controls->Add(this->boton5);
            this->Controls->Add(this->boton4);
            this->Controls->Add(this->boton3);
            this->Controls->Add(this->boton2);
            this->Controls->Add(this->caja1);
            this->Controls->Add(this->boton1);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void boton1_Click(System::Object^ sender, System::EventArgs^ e) {
        caja1->Text = "Hola caracola";
        boton1->Text = "Pulsado";

    }; // end of class Form1
    private: System::Void boton2_Click(System::Object^ sender, System::EventArgs^ e) {
        caja1->Text = boton1->Text;
    }
    private: System::Void boton3_Click(System::Object^ sender, System::EventArgs^ e) {
        
        contenidoCaja1 = caja1->Text;
        try
        { 
            numeroCaja1 = (float) Convert::ToDouble(contenidoCaja1);
            resultado = *numeroCaja1 + 5;
            caja1->Text = resultado->ToString();
        }
        catch (FormatException^ e)
        {
            caja1->Text = "Error de conversion";
        }
        catch (...)
        {
            caja1->Text = "Error generico";
        }

    }
    private: System::Void boton4_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        if (contenidoCaja1 == "0")
        {
            caja1->Text = "1";
        }
        else
        {
            caja1->Text = contenidoCaja1 + "1";
        }

    }
    private: System::Void boton5_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        if (contenidoCaja1 == "0")
        {
            caja1->Text = "2";
        }
        else
        {
            caja1->Text = contenidoCaja1 + "2";
        }
    }
    private: System::Void boton6_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        if (contenidoCaja1 == "0")
        {
            caja1->Text = "3";
        }
        else
        {
            caja1->Text = contenidoCaja1 + "3";
        }
    }
    private: System::Void caja1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
}; // end of namespace CppCLRWinFormsProject
}

