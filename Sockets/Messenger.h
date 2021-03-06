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

	delegate void SetTextDelegate(void);
	delegate void SafeDel(String^);

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
	private: System::ComponentModel::BackgroundWorker^ backgroundWorkerReceever;
	private: System::Windows::Forms::Timer^ timerReceever;
	private: System::ComponentModel::IContainer^ components;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
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
			this->timerReceever = (gcnew System::Windows::Forms::Timer(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"IP";
			// 
			// tbIP
			// 
			this->tbIP->Location = System::Drawing::Point(82, 79);
			this->tbIP->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbIP->Name = L"tbIP";
			this->tbIP->Size = System::Drawing::Size(164, 26);
			this->tbIP->TabIndex = 1;
			this->tbIP->Text = L"192.168.1.1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(82, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Message";
			// 
			// tbMessage
			// 
			this->tbMessage->Location = System::Drawing::Point(82, 175);
			this->tbMessage->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbMessage->Name = L"tbMessage";
			this->tbMessage->Size = System::Drawing::Size(112, 26);
			this->tbMessage->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(440, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Chat";
			// 
			// tbChat
			// 
			this->tbChat->Location = System::Drawing::Point(443, 104);
			this->tbChat->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbChat->Multiline = true;
			this->tbChat->Name = L"tbChat";
			this->tbChat->Size = System::Drawing::Size(466, 260);
			this->tbChat->TabIndex = 5;
			// 
			// bSend
			// 
			this->bSend->Location = System::Drawing::Point(82, 289);
			this->bSend->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bSend->Name = L"bSend";
			this->bSend->Size = System::Drawing::Size(84, 29);
			this->bSend->TabIndex = 6;
			this->bSend->Text = L"Send";
			this->bSend->UseVisualStyleBackColor = true;
			this->bSend->Click += gcnew System::EventHandler(this, &Messenger::bSend_Click);
			// 
			// bSetIP
			// 
			this->bSetIP->Location = System::Drawing::Point(276, 15);
			this->bSetIP->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bSetIP->Name = L"bSetIP";
			this->bSetIP->Size = System::Drawing::Size(84, 29);
			this->bSetIP->TabIndex = 7;
			this->bSetIP->Text = L"SetIP";
			this->bSetIP->UseVisualStyleBackColor = true;
			this->bSetIP->Click += gcnew System::EventHandler(this, &Messenger::bGetIP_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(507, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Порт для получения";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(708, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Порт для отправки";
			// 
			// tbGetPort
			// 
			this->tbGetPort->Location = System::Drawing::Point(511, 50);
			this->tbGetPort->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbGetPort->Name = L"tbGetPort";
			this->tbGetPort->Size = System::Drawing::Size(96, 26);
			this->tbGetPort->TabIndex = 10;
			this->tbGetPort->Text = L"8080";
			// 
			// tbSendPort
			// 
			this->tbSendPort->Location = System::Drawing::Point(711, 50);
			this->tbSendPort->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tbSendPort->Name = L"tbSendPort";
			this->tbSendPort->Size = System::Drawing::Size(96, 26);
			this->tbSendPort->TabIndex = 11;
			this->tbSendPort->Text = L"8081";
			// 
			// bReciverOn
			// 
			this->bReciverOn->Location = System::Drawing::Point(745, 422);
			this->bReciverOn->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bReciverOn->Name = L"bReciverOn";
			this->bReciverOn->Size = System::Drawing::Size(110, 29);
			this->bReciverOn->TabIndex = 12;
			this->bReciverOn->Text = L"Recever on";
			this->bReciverOn->UseVisualStyleBackColor = true;
			this->bReciverOn->Click += gcnew System::EventHandler(this, &Messenger::bReciverOn_Click);
			// 
			// timerReceever
			// 
			this->timerReceever->Enabled = true;
			this->timerReceever->Interval = 1;
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Messenger::backgroundWorker1_DoWork);
			this->backgroundWorker1->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &Messenger::backgroundWorker1_RunWorkerCompleted);
			// 
			// Messenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(943, 636);
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
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Messenger";
			this->Text = L"Messenger";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//SetTextDelegate^ setTextDelegate = gcnew SetTextDelegate(&Messenger::ReceiveMessage);
		Thread^ receiveThread;



		//SafeDel^ safeDel = gcnew SafeDel(Messenger::SafeTBChatAdd);
		ParameterizedThreadStart^ threadCallback;
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

		void SafeTBChatAdd(System::Object^ obj) {
			tbChat->Text += obj->ToString();
		}
		void ReceiveMessage(System::Object^ obj)
		{	// UdpClient для получения данных
			UdpClient^ receiver = gcnew UdpClient(
				Convert::ToInt16(tbGetPort->Text));
			// адрес входящего подключения
			IPEndPoint^ remoteIp = nullptr;
			try
			{
				//бесконечно читываем, пока не получим сообщение
				while (true)
				{
					array< unsigned char>^ data =
						receiver->Receive(remoteIp); // получаем данные
					//преобразовываем UTF8 строку в нормальную.
					String^ message = System::Text::Encoding::UTF8->GetString(data);
					//Пробуем прописать текст, но эьто не работает пока что.
					//this->Invoke((MethodInvoker) {
					 //	this->tbChat->Text = message;
					tbChat->Text += message + '\n';
					//MessageBox::Show(message + '\n');

					//SafeDel^ safedel = gcnew SafeDel(&Messenger::SafeTBChatAdd);

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
	private: System::Void bGetIP_Click(System::Object^ sender, System::EventArgs^ e) {
		// Получение host.
		String^ host = System::Net::Dns::GetHostName();
		//Строка хранящая все IP
		String^ s = "";
		// Получение ip-адреса.
		array <System::Net::IPAddress^>^ masAdress = System::Net::Dns::GetHostByName(host)->AddressList;
		for each (System::Net::IPAddress^ var in masAdress)
		{
			s += var->ToString() +"\n";
		}
		//Вывод IP его пользователю.
		MessageBox::Show("Your IP:\n" + s);

	}




	private: System::Void bReciverOn_Click(System::Object^ sender, System::EventArgs^ e) {
		//Запускаем поток приёма на исполнение
		backgroundWorker1->RunWorkerAsync();
	}

	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		// UdpClient для получения данных
		UdpClient^ receiver;
		//Прописываем в приёмник порт для прослушивания 
		receiver = gcnew UdpClient(
			Convert::ToInt16(tbGetPort->Text));

		// адрес входящего подключения
		IPEndPoint^ remoteIp = nullptr;
		try
		{
			//считываем, пока не получим сообщение
			array< unsigned char>^ data =
				receiver->Receive(remoteIp); // получаем данные
			//преобразовываем UTF8 строку в нормальную.
			String^ message = System::Text::Encoding::UTF8->GetString(data);
			//Записываем данные в обработчик
			e->Result += message + "\n";
		}
		catch (Exception^ ex)
		{
			//сообщение об ошиьке, если она произошла.
			MessageBox::Show("Receeve error\n" + ex->Message);
		}
		finally
		{
			//Закрываем поток.
			receiver->Close();
		}
	}
	private: System::Void backgroundWorker1_RunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e) {
		//Записываем сообщение в чат
		tbChat->Text += e->Result->ToString() + "\n";
		//Снова запускаем приёмник
		backgroundWorker1->RunWorkerAsync();
	}
	};
}
