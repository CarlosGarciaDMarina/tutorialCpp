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
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    
      String^ contenidoCaja1;
      String^ num1;
      String^ num2;
      String^ operacion;
      double n1;
      double n2;
      double resultado;


    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::TextBox^ caja1;
  protected:

  protected:
  private: System::Windows::Forms::Button^ boton1;
  private: System::Windows::Forms::Button^ boton2;
  private: System::Windows::Forms::Button^ boton3;
  private: System::Windows::Forms::Button^ boton4;
  private: System::Windows::Forms::Button^ boton5;
  private: System::Windows::Forms::Button^ boton6;
  private: System::Windows::Forms::Button^ boton7;
  private: System::Windows::Forms::Button^ boton8;
  private: System::Windows::Forms::Button^ boton9;
  private: System::Windows::Forms::Button^ boton0;
  private: System::Windows::Forms::Button^ boton11;
  private: System::Windows::Forms::Button^ boton12;
  private: System::Windows::Forms::Button^ boton13;
  private: System::Windows::Forms::Button^ boton14;
  private: System::Windows::Forms::Button^ boton15;
  private: System::Windows::Forms::Button^ boton16;
  private: System::Windows::Forms::Button^ boton17;


















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
        this->caja1 = (gcnew System::Windows::Forms::TextBox());
        this->boton1 = (gcnew System::Windows::Forms::Button());
        this->boton2 = (gcnew System::Windows::Forms::Button());
        this->boton3 = (gcnew System::Windows::Forms::Button());
        this->boton4 = (gcnew System::Windows::Forms::Button());
        this->boton5 = (gcnew System::Windows::Forms::Button());
        this->boton6 = (gcnew System::Windows::Forms::Button());
        this->boton7 = (gcnew System::Windows::Forms::Button());
        this->boton8 = (gcnew System::Windows::Forms::Button());
        this->boton9 = (gcnew System::Windows::Forms::Button());
        this->boton0 = (gcnew System::Windows::Forms::Button());
        this->boton11 = (gcnew System::Windows::Forms::Button());
        this->boton12 = (gcnew System::Windows::Forms::Button());
        this->boton13 = (gcnew System::Windows::Forms::Button());
        this->boton14 = (gcnew System::Windows::Forms::Button());
        this->boton15 = (gcnew System::Windows::Forms::Button());
        this->boton16 = (gcnew System::Windows::Forms::Button());
        this->boton17 = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // caja1
        // 
        this->caja1->Location = System::Drawing::Point(18, 35);
        this->caja1->Name = L"caja1";
        this->caja1->ReadOnly = true;
        this->caja1->Size = System::Drawing::Size(283, 20);
        this->caja1->TabIndex = 0;
        this->caja1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
        this->caja1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
        // 
        // boton1
        // 
        this->boton1->Location = System::Drawing::Point(17, 86);
        this->boton1->Name = L"boton1";
        this->boton1->Size = System::Drawing::Size(51, 23);
        this->boton1->TabIndex = 1;
        this->boton1->Text = L"1";
        this->boton1->UseVisualStyleBackColor = true;
        this->boton1->Click += gcnew System::EventHandler(this, &Form1::boton1_Click);
        // 
        // boton2
        // 
        this->boton2->Location = System::Drawing::Point(74, 86);
        this->boton2->Name = L"boton2";
        this->boton2->Size = System::Drawing::Size(51, 23);
        this->boton2->TabIndex = 2;
        this->boton2->Text = L"2";
        this->boton2->UseVisualStyleBackColor = true;
        this->boton2->Click += gcnew System::EventHandler(this, &Form1::boton2_Click);
        // 
        // boton3
        // 
        this->boton3->Location = System::Drawing::Point(127, 86);
        this->boton3->Name = L"boton3";
        this->boton3->Size = System::Drawing::Size(51, 23);
        this->boton3->TabIndex = 3;
        this->boton3->Text = L"3";
        this->boton3->UseVisualStyleBackColor = true;
        this->boton3->Click += gcnew System::EventHandler(this, &Form1::boton3_Click);
        // 
        // boton4
        // 
        this->boton4->Location = System::Drawing::Point(17, 115);
        this->boton4->Name = L"boton4";
        this->boton4->Size = System::Drawing::Size(51, 23);
        this->boton4->TabIndex = 4;
        this->boton4->Text = L"4";
        this->boton4->UseVisualStyleBackColor = true;
        this->boton4->Click += gcnew System::EventHandler(this, &Form1::boton4_Click);
        // 
        // boton5
        // 
        this->boton5->Location = System::Drawing::Point(74, 115);
        this->boton5->Name = L"boton5";
        this->boton5->Size = System::Drawing::Size(51, 23);
        this->boton5->TabIndex = 5;
        this->boton5->Text = L"5";
        this->boton5->UseVisualStyleBackColor = true;
        this->boton5->Click += gcnew System::EventHandler(this, &Form1::boton5_Click);
        // 
        // boton6
        // 
        this->boton6->Location = System::Drawing::Point(127, 115);
        this->boton6->Name = L"boton6";
        this->boton6->Size = System::Drawing::Size(51, 23);
        this->boton6->TabIndex = 6;
        this->boton6->Text = L"6";
        this->boton6->UseVisualStyleBackColor = true;
        this->boton6->Click += gcnew System::EventHandler(this, &Form1::boton6_Click);
        // 
        // boton7
        // 
        this->boton7->Location = System::Drawing::Point(18, 145);
        this->boton7->Name = L"boton7";
        this->boton7->Size = System::Drawing::Size(51, 23);
        this->boton7->TabIndex = 7;
        this->boton7->Text = L"7";
        this->boton7->UseVisualStyleBackColor = true;
        this->boton7->Click += gcnew System::EventHandler(this, &Form1::boton7_Click);
        // 
        // boton8
        // 
        this->boton8->Location = System::Drawing::Point(74, 145);
        this->boton8->Name = L"boton8";
        this->boton8->Size = System::Drawing::Size(51, 23);
        this->boton8->TabIndex = 8;
        this->boton8->Text = L"8";
        this->boton8->UseVisualStyleBackColor = true;
        this->boton8->Click += gcnew System::EventHandler(this, &Form1::boton8_Click);
        // 
        // boton9
        // 
        this->boton9->Location = System::Drawing::Point(127, 145);
        this->boton9->Name = L"boton9";
        this->boton9->Size = System::Drawing::Size(51, 23);
        this->boton9->TabIndex = 9;
        this->boton9->Text = L"9";
        this->boton9->UseVisualStyleBackColor = true;
        this->boton9->Click += gcnew System::EventHandler(this, &Form1::boton9_Click);
        // 
        // boton0
        // 
        this->boton0->Location = System::Drawing::Point(74, 174);
        this->boton0->Name = L"boton0";
        this->boton0->Size = System::Drawing::Size(51, 23);
        this->boton0->TabIndex = 10;
        this->boton0->Text = L"0";
        this->boton0->UseVisualStyleBackColor = true;
        this->boton0->Click += gcnew System::EventHandler(this, &Form1::boton0_Click);
        // 
        // boton11
        // 
        this->boton11->Location = System::Drawing::Point(197, 86);
        this->boton11->Name = L"boton11";
        this->boton11->Size = System::Drawing::Size(55, 23);
        this->boton11->TabIndex = 11;
        this->boton11->Text = L"/";
        this->boton11->UseVisualStyleBackColor = true;
        this->boton11->Click += gcnew System::EventHandler(this, &Form1::boton11_Click);
        // 
        // boton12
        // 
        this->boton12->Location = System::Drawing::Point(197, 115);
        this->boton12->Name = L"boton12";
        this->boton12->Size = System::Drawing::Size(55, 23);
        this->boton12->TabIndex = 12;
        this->boton12->Text = L"X";
        this->boton12->UseVisualStyleBackColor = true;
        this->boton12->Click += gcnew System::EventHandler(this, &Form1::boton12_Click);
        // 
        // boton13
        // 
        this->boton13->Location = System::Drawing::Point(197, 144);
        this->boton13->Name = L"boton13";
        this->boton13->Size = System::Drawing::Size(55, 23);
        this->boton13->TabIndex = 13;
        this->boton13->Text = L"+";
        this->boton13->UseVisualStyleBackColor = true;
        this->boton13->Click += gcnew System::EventHandler(this, &Form1::boton13_Click);
        // 
        // boton14
        // 
        this->boton14->Location = System::Drawing::Point(197, 173);
        this->boton14->Name = L"boton14";
        this->boton14->Size = System::Drawing::Size(55, 23);
        this->boton14->TabIndex = 14;
        this->boton14->Text = L"-";
        this->boton14->UseVisualStyleBackColor = true;
        this->boton14->Click += gcnew System::EventHandler(this, &Form1::boton14_Click);
        // 
        // boton15
        // 
        this->boton15->Location = System::Drawing::Point(17, 174);
        this->boton15->Name = L"boton15";
        this->boton15->Size = System::Drawing::Size(51, 23);
        this->boton15->TabIndex = 15;
        this->boton15->Text = L"Clear";
        this->boton15->UseVisualStyleBackColor = true;
        this->boton15->Click += gcnew System::EventHandler(this, &Form1::boton15_Click);
        // 
        // boton16
        // 
        this->boton16->Location = System::Drawing::Point(127, 174);
        this->boton16->Name = L"boton16";
        this->boton16->Size = System::Drawing::Size(51, 23);
        this->boton16->TabIndex = 16;
        this->boton16->Text = L".";
        this->boton16->UseVisualStyleBackColor = true;
        this->boton16->Click += gcnew System::EventHandler(this, &Form1::boton16_Click);
        // 
        // boton17
        // 
        this->boton17->Location = System::Drawing::Point(258, 173);
        this->boton17->Name = L"boton17";
        this->boton17->Size = System::Drawing::Size(55, 23);
        this->boton17->TabIndex = 17;
        this->boton17->Text = L"=";
        this->boton17->UseVisualStyleBackColor = true;
        this->boton17->Click += gcnew System::EventHandler(this, &Form1::boton17_Click);
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(317, 222);
        this->Controls->Add(this->boton17);
        this->Controls->Add(this->boton16);
        this->Controls->Add(this->boton15);
        this->Controls->Add(this->boton14);
        this->Controls->Add(this->boton13);
        this->Controls->Add(this->boton12);
        this->Controls->Add(this->boton11);
        this->Controls->Add(this->boton0);
        this->Controls->Add(this->boton9);
        this->Controls->Add(this->boton8);
        this->Controls->Add(this->boton7);
        this->Controls->Add(this->boton6);
        this->Controls->Add(this->boton5);
        this->Controls->Add(this->boton4);
        this->Controls->Add(this->boton3);
        this->Controls->Add(this->boton2);
        this->Controls->Add(this->boton1);
        this->Controls->Add(this->caja1);
        this->Name = L"Form1";
        this->Text = L"Form1";
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.

    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void boton1_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        caja1->Text = contenidoCaja1 + "1";
    }
    private: System::Void boton2_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        caja1->Text = contenidoCaja1 + "2";
    }
    private: System::Void boton3_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        caja1->Text = contenidoCaja1 + "3";
    }
    private: System::Void boton4_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        caja1->Text = contenidoCaja1 + "4";
    }
    private: System::Void boton5_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        caja1->Text = contenidoCaja1 + "5";
    }
    private: System::Void boton6_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        caja1->Text = contenidoCaja1 + "6";
    }
    private: System::Void boton7_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        caja1->Text = contenidoCaja1 + "7";
    }
    private: System::Void boton8_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        caja1->Text = contenidoCaja1 + "8";
    }
    private: System::Void boton9_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        caja1->Text = contenidoCaja1 + "9";
    }
    private: System::Void boton0_Click(System::Object^ sender, System::EventArgs^ e) {
        contenidoCaja1 = caja1->Text;
        caja1->Text = contenidoCaja1 + "0";
    }
    private: System::Void boton11_Click(System::Object^ sender, System::EventArgs^ e) {
        //Dividir
        num1 = caja1->Text;
        caja1->ResetText();
        operacion = "/";
        boton11->Enabled = false;
        boton12->Enabled = false;
        boton13->Enabled = false;
        boton14->Enabled = false;

    }
    private: System::Void boton12_Click(System::Object^ sender, System::EventArgs^ e) {
        //Multiplicar
        num1 = caja1->Text;
        caja1->ResetText();
        operacion = "x";
        boton11->Enabled = false;
        boton12->Enabled = false;
        boton13->Enabled = false;
        boton14->Enabled = false;
    }
    private: System::Void boton13_Click(System::Object^ sender, System::EventArgs^ e) {
        //Sumar
        num1 = caja1->Text;
        caja1->ResetText();
        operacion = "+";
        boton11->Enabled = false;
        boton12->Enabled = false;
        boton13->Enabled = false;
        boton14->Enabled = false;
    }
    private: System::Void boton14_Click(System::Object^ sender, System::EventArgs^ e) {
        //Restar
        num1 = caja1->Text;
        caja1->ResetText();
        operacion = "-";
        boton11->Enabled = false;
        boton12->Enabled = false;
        boton13->Enabled = false;
        boton14->Enabled = false;
    }
    private: System::Void boton15_Click(System::Object^ sender, System::EventArgs^ e) {
        //Clear
        caja1->ResetText();
        boton1->Enabled = true;
        boton2->Enabled = true;
        boton3->Enabled = true;
        boton4->Enabled = true;
        boton5->Enabled = true;
        boton6->Enabled = true;
        boton7->Enabled = true;
        boton8->Enabled = true;
        boton9->Enabled = true;
        boton0->Enabled = true;
        boton11->Enabled = true;
        boton12->Enabled = true;
        boton13->Enabled = true;
        boton14->Enabled = true;
        boton16->Enabled = true;
        boton17->Enabled = true;
    }
    private: System::Void boton16_Click(System::Object^ sender, System::EventArgs^ e) {
        //Punto
        contenidoCaja1 = caja1->Text;
        caja1->Text = contenidoCaja1 + ",";
    }
    private: System::Void boton17_Click(System::Object^ sender, System::EventArgs^ e) {
        //Igual
        num2 = caja1->Text;
        try {
            //Dividir
            if (operacion == "/")
            {
                n1 = (Convert::ToDouble(num1));
                n2 = (Convert::ToDouble(num2));
                resultado = n1 / n2;
                caja1->Text = System::Convert::ToString(resultado);
                boton11->Enabled = true;
                boton12->Enabled = true;
                boton13->Enabled = true;
                boton14->Enabled = true;
            }
            //Multiplicar
            else if (operacion == "x")
            {
                n1 = (Convert::ToDouble(num1));
                n2 = (Convert::ToDouble(num2));
                resultado = n1 * n2;
                caja1->Text = (Convert::ToString(resultado));
                boton11->Enabled = true;
                boton12->Enabled = true;
                boton13->Enabled = true;
                boton14->Enabled = true;
            }
            //Sumar
            else if (operacion == "+")
            {
                n1 = (Convert::ToDouble(num1));
                n2 = (Convert::ToDouble(num2));
                resultado = n1 + n2;
                caja1->Text = (Convert::ToString(resultado));
                boton11->Enabled = true;
                boton12->Enabled = true;
                boton13->Enabled = true;
                boton14->Enabled = true;
            }
            //Restar
            else if (operacion == "-")
            {
                n1 = (Convert::ToDouble(num1));
                n2 = (Convert::ToDouble(num2));
                resultado = n1 - n2;
                caja1->Text = (Convert::ToString(resultado));
                boton11->Enabled = true;
                boton12->Enabled = true;
                boton13->Enabled = true;
                boton14->Enabled = true;
            }
            else
            {
                caja1->Text = "Ha ocurrido un error inesperado.";
            }
        }
        catch (...)
        {
            caja1->Text = "Ha ocurrido un error inesperado.";

            boton1->Enabled = false;
            boton2->Enabled = false;
            boton3->Enabled = false;
            boton4->Enabled = false;
            boton5->Enabled = false;
            boton6->Enabled = false;
            boton7->Enabled = false;
            boton8->Enabled = false;
            boton9->Enabled = false;
            boton0->Enabled = false;
            boton11->Enabled = false;
            boton12->Enabled = false;
            boton13->Enabled = false;
            boton14->Enabled = false;
            boton16->Enabled = false;
            boton17->Enabled = false;

        }

    }
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

