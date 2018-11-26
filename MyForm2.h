#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected:
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button7;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(399, 279);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 23);
			this->button4->TabIndex = 53;
			this->button4->Text = L"Return to Dashboard";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(399, 123);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 23);
			this->button3->TabIndex = 52;
			this->button3->Text = L"Auto";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(399, 84);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 23);
			this->button2->TabIndex = 51;
			this->button2->Text = L"Always Off";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(399, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 23);
			this->button1->TabIndex = 50;
			this->button1->Text = L"Always On";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(324, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 13);
			this->label9->TabIndex = 49;
			this->label9->Text = L"End Time:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(259, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 48;
			this->label8->Text = L"Start Time:";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(323, 281);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(56, 20);
			this->textBox14->TabIndex = 47;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(323, 242);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(56, 20);
			this->textBox13->TabIndex = 46;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(323, 203);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(56, 20);
			this->textBox12->TabIndex = 45;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(323, 164);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(56, 20);
			this->textBox11->TabIndex = 44;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(323, 125);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(56, 20);
			this->textBox10->TabIndex = 43;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(323, 86);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(56, 20);
			this->textBox9->TabIndex = 42;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(323, 47);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(56, 20);
			this->textBox8->TabIndex = 41;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(261, 281);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(56, 20);
			this->textBox7->TabIndex = 40;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(261, 242);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(56, 20);
			this->textBox6->TabIndex = 39;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(261, 203);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(56, 20);
			this->textBox5->TabIndex = 38;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(261, 164);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(56, 20);
			this->textBox4->TabIndex = 37;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(261, 125);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(56, 20);
			this->textBox3->TabIndex = 36;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(261, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(56, 20);
			this->textBox2->TabIndex = 35;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(261, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(56, 20);
			this->textBox1->TabIndex = 34;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(196, 281);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 37);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Saturday";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(196, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 39);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Friday";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(193, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 39);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Thursday";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(193, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 39);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Wednesday";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(193, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 39);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Tuesday";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(193, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 39);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Monday";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(193, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 39);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Sunday";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(399, 201);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(123, 23);
			this->button5->TabIndex = 54;
			this->button5->Text = L"Close Vent";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(399, 162);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 23);
			this->button6->TabIndex = 55;
			this->button6->Text = L"Open Vent";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 68);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 13);
			this->label10->TabIndex = 56;
			this->label10->Text = L"Current Temperature:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(34, 91);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 13);
			this->label11->TabIndex = 57;
			this->label11->Text = L"Set Temperature:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(129, 88);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(27, 20);
			this->textBox15->TabIndex = 58;
			this->textBox15->Text = L" 70";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(130, 69);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(23, 13);
			this->label12->TabIndex = 59;
			this->label12->Text = L"70°";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(34, 45);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(87, 13);
			this->label13->TabIndex = 60;
			this->label13->Text = L"Current Humidity:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(130, 45);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 13);
			this->label14->TabIndex = 61;
			this->label14->Text = L"46%";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(30, 125);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(123, 23);
			this->button7->TabIndex = 62;
			this->button7->Text = L"Edit Room";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(547, 345);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"Living Room";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm^ f1 = gcnew MyForm();
		f1->Show();
	}
};
}
