#pragma once
#include <iostream>
#include "DataManager.h"
#include "FT.h"

namespace FourierTransform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm ���K�n
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			fourierTransformMethod = new FT();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
			 System::Windows::Forms::MenuStrip^  menuStrip1;
			 System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
			 System::Windows::Forms::ToolStripMenuItem^  loadImageToolStripMenuItem;
			 System::Windows::Forms::ToolStripMenuItem^  methodToolStripMenuItem;
			 System::Windows::Forms::ToolStripMenuItem^  fastFourierTransformToolStripMenuItem;
			 System::Windows::Forms::ToolStripMenuItem^  inverseFastFourierTransformToolStripMenuItem;
			 System::Windows::Forms::ToolStripMenuItem^  lowpassFilterToolStripMenuItem;
			 System::Windows::Forms::ToolStripMenuItem^  highpassFilterToolStripMenuItem;
			 System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
			 System::Windows::Forms::Label^  SourceImageLabel;
			 System::Windows::Forms::Label^  ResultImageLabel;
			 System::Windows::Forms::PictureBox^  pictureBox_SourceImage;
			 System::Windows::Forms::PictureBox^  pictureBox_OutputImage;
			 System::Windows::Forms::OpenFileDialog^  openFileDialog1;
			 System::Windows::Forms::ToolStripMenuItem^  discreteFourierTransformToolStripMenuItem;
			 System::Windows::Forms::ToolStripMenuItem^  inverseDiscreteFourierTransformToolStripMenuItem;
			 System::Windows::Forms::ToolStripMenuItem^  setResultImageAsSourceImageToolStripMenuItem;

	private:
		/// <summary>
		DataManager* dataManager;
		FT*	fourierTransformMethod;

			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setResultImageAsSourceImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->methodToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fastFourierTransformToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inverseFastFourierTransformToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lowpassFilterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->highpassFilterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->discreteFourierTransformToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inverseDiscreteFourierTransformToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SourceImageLabel = (gcnew System::Windows::Forms::Label());
			this->ResultImageLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox_SourceImage = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_OutputImage = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tableLayoutPanel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_SourceImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_OutputImage))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->menuStrip1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel1, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1344, 912);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->methodToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1344, 27);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->loadImageToolStripMenuItem,
					this->setResultImageAsSourceImageToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(45, 23);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// loadImageToolStripMenuItem
			// 
			this->loadImageToolStripMenuItem->Name = L"loadImageToolStripMenuItem";
			this->loadImageToolStripMenuItem->Size = System::Drawing::Size(324, 26);
			this->loadImageToolStripMenuItem->Text = L"Load Image";
			this->loadImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::loadImageToolStripMenuItem_Click);
			// 
			// setResultImageAsSourceImageToolStripMenuItem
			// 
			this->setResultImageAsSourceImageToolStripMenuItem->Name = L"setResultImageAsSourceImageToolStripMenuItem";
			this->setResultImageAsSourceImageToolStripMenuItem->Size = System::Drawing::Size(324, 26);
			this->setResultImageAsSourceImageToolStripMenuItem->Text = L"Set Result Image as Source Image ";
			this->setResultImageAsSourceImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::setResultImageAsSourceImageToolStripMenuItem_Click);
			// 
			// methodToolStripMenuItem
			// 
			this->methodToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->fastFourierTransformToolStripMenuItem,
					this->inverseFastFourierTransformToolStripMenuItem, this->lowpassFilterToolStripMenuItem, this->highpassFilterToolStripMenuItem,
					this->discreteFourierTransformToolStripMenuItem, this->inverseDiscreteFourierTransformToolStripMenuItem
			});
			this->methodToolStripMenuItem->Name = L"methodToolStripMenuItem";
			this->methodToolStripMenuItem->Size = System::Drawing::Size(76, 23);
			this->methodToolStripMenuItem->Text = L"Method";
			// 
			// fastFourierTransformToolStripMenuItem
			// 
			this->fastFourierTransformToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->fastFourierTransformToolStripMenuItem->Name = L"fastFourierTransformToolStripMenuItem";
			this->fastFourierTransformToolStripMenuItem->Size = System::Drawing::Size(324, 26);
			this->fastFourierTransformToolStripMenuItem->Text = L"Fast Fourier Transform";
			this->fastFourierTransformToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fastFourierTransformToolStripMenuItem_Click);
			// 
			// inverseFastFourierTransformToolStripMenuItem
			// 
			this->inverseFastFourierTransformToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->inverseFastFourierTransformToolStripMenuItem->Name = L"inverseFastFourierTransformToolStripMenuItem";
			this->inverseFastFourierTransformToolStripMenuItem->Size = System::Drawing::Size(324, 26);
			this->inverseFastFourierTransformToolStripMenuItem->Text = L"Inverse Fast Fourier Transform";
			this->inverseFastFourierTransformToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::inverseFastFourierTransformToolStripMenuItem_Click);
			// 
			// lowpassFilterToolStripMenuItem
			// 
			this->lowpassFilterToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->lowpassFilterToolStripMenuItem->Name = L"lowpassFilterToolStripMenuItem";
			this->lowpassFilterToolStripMenuItem->Size = System::Drawing::Size(324, 26);
			this->lowpassFilterToolStripMenuItem->Text = L"Lowpass Filter";
			this->lowpassFilterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lowpassFilterToolStripMenuItem_Click);
			// 
			// highpassFilterToolStripMenuItem
			// 
			this->highpassFilterToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->highpassFilterToolStripMenuItem->Name = L"highpassFilterToolStripMenuItem";
			this->highpassFilterToolStripMenuItem->Size = System::Drawing::Size(324, 26);
			this->highpassFilterToolStripMenuItem->Text = L"Highpass Filter";
			this->highpassFilterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::highpassFilterToolStripMenuItem_Click);
			// 
			// discreteFourierTransformToolStripMenuItem
			// 
			this->discreteFourierTransformToolStripMenuItem->Name = L"discreteFourierTransformToolStripMenuItem";
			this->discreteFourierTransformToolStripMenuItem->Size = System::Drawing::Size(324, 26);
			this->discreteFourierTransformToolStripMenuItem->Text = L"Discrete Fourier Transform";
			this->discreteFourierTransformToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::discreteFourierTransformToolStripMenuItem_Click);
			// 
			// inverseDiscreteFourierTransformToolStripMenuItem
			// 
			this->inverseDiscreteFourierTransformToolStripMenuItem->Name = L"inverseDiscreteFourierTransformToolStripMenuItem";
			this->inverseDiscreteFourierTransformToolStripMenuItem->Size = System::Drawing::Size(324, 26);
			this->inverseDiscreteFourierTransformToolStripMenuItem->Text = L"Inverse Discrete Fourier Transform";
			this->inverseDiscreteFourierTransformToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::inverseDiscreteFourierTransformToolStripMenuItem_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->flowLayoutPanel1->Controls->Add(this->SourceImageLabel);
			this->flowLayoutPanel1->Controls->Add(this->ResultImageLabel);
			this->flowLayoutPanel1->Controls->Add(this->pictureBox_SourceImage);
			this->flowLayoutPanel1->Controls->Add(this->pictureBox_OutputImage);
			this->flowLayoutPanel1->Font = (gcnew System::Drawing::Font(L"�s�ө���", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->flowLayoutPanel1->Location = System::Drawing::Point(4, 49);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1336, 859);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// SourceImageLabel
			// 
			this->SourceImageLabel->AutoSize = true;
			this->SourceImageLabel->Font = (gcnew System::Drawing::Font(L"�L�n������", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->SourceImageLabel->Location = System::Drawing::Point(4, 0);
			this->SourceImageLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->SourceImageLabel->Name = L"SourceImageLabel";
			this->SourceImageLabel->Size = System::Drawing::Size(633, 19);
			this->SourceImageLabel->TabIndex = 0;
			this->SourceImageLabel->Text = L"Source Image                                                                     "
				L"                                                               ";
			// 
			// ResultImageLabel
			// 
			this->ResultImageLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ResultImageLabel->AutoSize = true;
			this->ResultImageLabel->Font = (gcnew System::Drawing::Font(L"�L�n������", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->ResultImageLabel->Location = System::Drawing::Point(645, 0);
			this->ResultImageLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ResultImageLabel->Name = L"ResultImageLabel";
			this->ResultImageLabel->Size = System::Drawing::Size(560, 19);
			this->ResultImageLabel->TabIndex = 1;
			this->ResultImageLabel->Text = L"Result Image                                                                     "
				L"                                              ";
			// 
			// pictureBox_SourceImage
			// 
			this->pictureBox_SourceImage->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->pictureBox_SourceImage->Location = System::Drawing::Point(4, 23);
			this->pictureBox_SourceImage->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox_SourceImage->Name = L"pictureBox_SourceImage";
			this->pictureBox_SourceImage->Size = System::Drawing::Size(645, 845);
			this->pictureBox_SourceImage->TabIndex = 2;
			this->pictureBox_SourceImage->TabStop = false;
			// 
			// pictureBox_OutputImage
			// 
			this->pictureBox_OutputImage->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->pictureBox_OutputImage->Location = System::Drawing::Point(657, 23);
			this->pictureBox_OutputImage->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox_OutputImage->Name = L"pictureBox_OutputImage";
			this->pictureBox_OutputImage->Size = System::Drawing::Size(667, 836);
			this->pictureBox_OutputImage->TabIndex = 3;
			this->pictureBox_OutputImage->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1344, 912);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"FourierTransform";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_SourceImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_OutputImage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void loadImageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e);
			 System::Void discreteFourierTransformToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void inverseDiscreteFourierTransformToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void setResultImageAsSourceImageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void fastFourierTransformToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void inverseFastFourierTransformToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void lowpassFilterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void highpassFilterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
};
}