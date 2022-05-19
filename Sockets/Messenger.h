#pragma once

namespace Sockets {

	using namespace System;
	using namespace System::Threading;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Net::Sockets;

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
	private: System::Windows::Forms::Button^ bSetIP;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbGetPort;
	private: System::Windows::Forms::TextBox^ tbSendPort;
	private: System::Windows::Forms::Button^ bReciverOn;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->bSetIP = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbGetPort = (gcnew System::Windows::Forms::TextBox());
			this->tbSendPort = (gcnew System::Windows::Forms::TextBox());
			this->bReciverOn = (gcnew System::Windows::Forms::Button());
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
			this->tbIP->Text = L"192.168.1.1";
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
			// bSetIP
			// 
			this->bSetIP->Location = System::Drawing::Point(245, 12);
			this->bSetIP->Name = L"bSetIP";
			this->bSetIP->Size = System::Drawing::Size(75, 23);
			this->bSetIP->TabIndex = 7;
			this->bSetIP->Text = L"SetIP";
			this->bSetIP->UseVisualStyleBackColor = true;
			this->bSetIP->Click += gcnew System::EventHandler(this, &Messenger::bSetIP_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(451, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Порт для получения";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(629, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Порт для отправки";
			// 
			// tbGetPort
			// 
			this->tbGetPort->Location = System::Drawing::Point(454, 40);
			this->tbGetPort->Name = L"tbGetPort";
			this->tbGetPort->Size = System::Drawing::Size(86, 22);
			this->tbGetPort->TabIndex = 10;
			this->tbGetPort->Text = L"8080";
			// 
			// tbSendPort
			// 
			this->tbSendPort->Location = System::Drawing::Point(632, 40);
			this->tbSendPort->Name = L"tbSendPort";
			this->tbSendPort->Size = System::Drawing::Size(86, 22);
			this->tbSendPort->TabIndex = 11;
			this->tbSendPort->Text = L"8081";
			// 
			// bReciverOn
			// 
			this->bReciverOn->Location = System::Drawing::Point(662, 338);
			this->bReciverOn->Name = L"bReciverOn";
			this->bReciverOn->Size = System::Drawing::Size(98, 23);
			this->bReciverOn->TabIndex = 12;
			this->bReciverOn->Text = L"Recever on";
			this->bReciverOn->UseVisualStyleBackColor = true;
			this->bReciverOn->Click += gcnew System::EventHandler(this, &Messenger::bReciverOn_Click);
			// 
			// Messenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(838, 509);
			this->Controls->Add(this->bReciverOn);
			this->Controls->Add(this->tbSendPort);
			this->Controls->Add(this->tbGetPort);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->bSetIP);
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
		Thread^ receiveThread;
		void SendMessage()
		{
			UdpClient^ sender = gcnew UdpClient(); // создаем UdpClient для отправки сообщений
			try
			{
				// сообщение для отправки
				String^ message = tbMessage->Text;
				while (message->Length % 4 != 0) {
					message += " ";
				}
				array<wchar_t>^ arr = message->ToCharArray();

				//	Convert::FromBase64CharArray(arr, 0, message->Length);
				//System::Text::Encoding^ utf8Encoder = gcnew System::Text::Encoding();
				array<unsigned char>^ data =
					System::Text::Encoding::UTF8->GetBytes(message);
				// отправка
				sender->Send(data, data->Length, tbIP->Text, Convert::ToInt16(tbSendPort->Text));
			}

			catch (Exception^ ex)
			{
				MessageBox::Show("Send Error " + ex->Message);
			}
			finally
			{
				sender->Close();
			}
		}
		void ReceiveMessage()
		{
			UdpClient^ receiver = gcnew UdpClient(
				Convert::ToInt16(tbGetPort->Text)); // UdpClient для получения данных
			IPEndPoint^ remoteIp = nullptr; // адрес входящего подключения
			try
			{
				while (true)
				{
					array< unsigned char>^ data =
						receiver->Receive(remoteIp); // получаем данные
					String^ message = System::Text::Encoding::UTF8->GetString( data);
					//tbChat->Text += message + '\n';
					MessageBox::Show(message + '\n');
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Receeve error\n" + ex->Message);
			}
			finally
			{
				receiver->Close();
			}
		}
	private: System::Void bSend_Click(System::Object^ sender, System::EventArgs^ e) {
		//
		////клиент длля работы
		//UdpClient^ client = gcnew UdpClient(8001);

		////строка для отправки
		//String^ response = "Hello world!";
		////преобразование для потока для отправки
		//array<unsigned char>^ data =
		//	Convert::FromBase64CharArray(response->ToCharArray(), 0, response->Length);
		////отправка данных в поток
		//int numberOfSentBytes = client->Send(data, data->Length);
		////закрываем поток
		//client->Close();

		try
		{
			//  порт для прослушивания
			int localPort = Convert::ToInt16(tbGetPort->Text);
			//адрес для подключения
			String^ remoteAddress = tbIP->Text;
			// порт, к которому мы подключаемся
			int remotePort = Convert::ToInt16(tbSendPort->Text);


			SendMessage(); // отправляем сообщение
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}


	}
	private: System::Void bSetIP_Click(System::Object^ sender, System::EventArgs^ e) {
		// Получение host.
		String^ host = System::Net::Dns::GetHostName();
		// Получение ip-адреса.
		System::Net::IPAddress^ ip =
			System::Net::Dns::GetHostByName(host)->AddressList[0];
		MessageBox::Show("Your IP:\n" + ip->ToString());

	}
	private: System::Void bReciverOn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!receiveThread) {
			receiveThread = gcnew Thread(gcnew ThreadStart(this, &Messenger::ReceiveMessage));
			receiveThread->Start();
		}

	}
	};
}
