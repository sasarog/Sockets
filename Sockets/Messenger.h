#pragma once

namespace Sockets {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Messenger
	/// </summary>
	public ref class Messenger : public System::Windows::Forms::Form
	{
	public:
		Messenger(void)
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
		~Messenger()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ tbIP;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbMessage;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbChat;
	private: System::Windows::Forms::Button^ bSend;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbIP = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbMessage = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbChat = (gcnew System::Windows::Forms::TextBox());
			this->bSend = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"IP";
			// 
			// tbIP
			// 
			this->tbIP->Location = System::Drawing::Point(73, 63);
			this->tbIP->Name = L"tbIP";
			this->tbIP->Size = System::Drawing::Size(146, 22);
			this->tbIP->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(73, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Message";
			// 
			// tbMessage
			// 
			this->tbMessage->Location = System::Drawing::Point(73, 140);
			this->tbMessage->Name = L"tbMessage";
			this->tbMessage->Size = System::Drawing::Size(100, 22);
			this->tbMessage->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(391, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Chat";
			// 
			// tbChat
			// 
			this->tbChat->Location = System::Drawing::Point(394, 83);
			this->tbChat->Multiline = true;
			this->tbChat->Name = L"tbChat";
			this->tbChat->Size = System::Drawing::Size(415, 209);
			this->tbChat->TabIndex = 5;
			// 
			// bSend
			// 
			this->bSend->Location = System::Drawing::Point(73, 231);
			this->bSend->Name = L"bSend";
			this->bSend->Size = System::Drawing::Size(75, 23);
			this->bSend->TabIndex = 6;
			this->bSend->Text = L"Send";
			this->bSend->UseVisualStyleBackColor = true;
			this->bSend->Click += gcnew System::EventHandler(this, &Messenger::bSend_Click);
			// 
			// Messenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(838, 509);
			this->Controls->Add(this->bSend);
			this->Controls->Add(this->tbChat);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbMessage);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbIP);
			this->Controls->Add(this->label1);
			this->Name = L"Messenger";
			this->Text = L"Messenger";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bSend_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
