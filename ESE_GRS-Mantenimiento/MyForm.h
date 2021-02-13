#pragma once
#include "PuertoSerie.h"
#include <msclr\marshal.h>
namespace ESE_GRSMantenimiento {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	private:
		PuertoSerie*p;
		unsigned select;
		double CONT,CONTT;
		bool verif;
		int contt;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

			 System::Windows::Forms::DataVisualization::Charting::Series^  series1 ;
	public:
		MyForm(void)
		{	
			CONT=CONTT=contt=select=0;\
				verif=false;
			p=new PuertoSerie();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if(p->EstaConectado())
				p->~PuertoSerie();
			if (components)
			{
				delete components;
			}
		}
private: System::Windows::Forms::Button^  button1; 
	 System::Windows::Forms::TextBox^  textBox1;
	 System::Windows::Forms::TextBox^  textBox2;
	 System::Windows::Forms::Label^  label1;
	 System::Windows::Forms::Label^  label2;
	 Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	 Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
	 System::Windows::Forms::Label^  label3;
	 System::Windows::Forms::Timer^  timer1;
	 System::Windows::Forms::RadioButton^  radioButton1;
	 System::Windows::Forms::RadioButton^  radioButton2;
	 System::Windows::Forms::RadioButton^  radioButton3;
	 System::Windows::Forms::RadioButton^  radioButton4;
	 System::Windows::Forms::RadioButton^  radioButton5;
	 System::Windows::Forms::RadioButton^  radioButton6;

	 Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
	 System::Windows::Forms::Button^  button2;
	 System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	 System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(162, 261);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Concectar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"COM2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(176, 167);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"9600";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(116, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Velocidad";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(132, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Puerto";
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(2) {this->rectangleShape2, 
				this->rectangleShape1});
			this->shapeContainer1->Size = System::Drawing::Size(426, 346);
			this->shapeContainer1->TabIndex = 5;
			this->shapeContainer1->TabStop = false;
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->Location = System::Drawing::Point(7, 38);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(49, 254);
			this->rectangleShape2->Visible = false;
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->Location = System::Drawing::Point(81, 38);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(259, 256);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Italic_IV50", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(132, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(174, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"ESE_GRS-Mantenimento";
			// 
			// timer1
			// 
			this->timer1->Interval = 25;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(12, 45);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(31, 17);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"0";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Visible = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 78);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(31, 17);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->Text = L"1";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Visible = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(12, 115);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(31, 17);
			this->radioButton3->TabIndex = 9;
			this->radioButton3->Text = L"2";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->Visible = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(12, 153);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(31, 17);
			this->radioButton4->TabIndex = 10;
			this->radioButton4->Text = L"3";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->Visible = false;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(12, 185);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(31, 17);
			this->radioButton5->TabIndex = 11;
			this->radioButton5->Text = L"4";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->Visible = false;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(12, 219);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(31, 17);
			this->radioButton6->TabIndex = 12;
			this->radioButton6->Text = L"5";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->Visible = false;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::DarkRed;
			this->button2->Location = System::Drawing::Point(388, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(26, 25);
			this->button2->TabIndex = 14;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// chart1
			// 
			chartArea1->AxisX->LabelStyle->Enabled = false;
			chartArea1->AxisX->MajorGrid->Enabled = false;
			chartArea1->AxisX->MajorTickMark->Enabled = false;
			chartArea1->AxisY->InterlacedColor = System::Drawing::Color::White;
			chartArea1->AxisY->IsLabelAutoFit = false;
			chartArea1->AxisY->LabelStyle->Enabled = false;
			chartArea1->AxisY->LabelStyle->IsEndLabelVisible = false;
			chartArea1->AxisY->MajorGrid->Enabled = false;
			chartArea1->AxisY->MajorTickMark->Enabled = false;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(349, 115);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->BackHatchStyle = System::Windows::Forms::DataVisualization::Charting::ChartHatchStyle::DiagonalBrick;
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->EmptyPointStyle->Color = System::Drawing::Color::White;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(74, 74);
			this->chart1->TabIndex = 15;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button3->Location = System::Drawing::Point(17, 261);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(26, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"R";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(303, 302);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"0";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(303, 324);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"0";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(100, 317);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"X:0";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(200, 317);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"0";
			this->label7->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 346);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->shapeContainer1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(442, 385);
			this->MinimumSize = System::Drawing::Size(442, 385);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
				 msclr::interop::marshal_context context;
				 const char*c1=context.marshal_as<const char*>(textBox1->Text);
				 const char*c2=context.marshal_as<const char*>(textBox2->Text);
				 
				 p=new PuertoSerie(textBox1->Text,textBox2->Text);
				 if(p->Error())
				 { 
					 System::Windows::Forms::MessageBox::Show(gcnew String(p->ErrorStr()));
				 }
				 else
				 {
					 cargarInterfas(true);
					 ponerNewSeries(0);
				 }
			 
		}
 
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 char*a=p->Recibir();
			 if(a!=NULL)
			 {
			 if(strlen(a)%2!=0)
				 {
					 System::Windows::Forms::MessageBox::Show(gcnew String(Convert::ToString(strlen(a))+"::Existen errores a la hora de leer el contenido del puerto serie\nAsegurese de estar conectando el despositivo adecuado para este Mantenimiento"));
			         ponerNewSeries(select);
					 return;
				 }

			contt+=strlen(a)/2;
			
		    for(unsigned i=0;i<strlen(a);i+=2)
			   {
				 bool err=false;
	             if(!BitData(a[i],0)||!BitData(a[i+1],0))
	                {	
						contt--;
						err=true; 
		             if(contt%10!=0)
			             System::Windows::Forms::MessageBox::Show(gcnew String("Error:Perdidad de datos"));      
					 else if(verif)
						 System::Windows::Forms::MessageBox::Show(gcnew String("Error:Se ha recivido varias veces el mensaje de verificacion"));  
					 else
						 verif=true; 
	                 }
				 else if((contt-1)%10==0 && !verif &&contt!=1)
					   System::Windows::Forms::MessageBox::Show(gcnew String("Error:No ha llegado el mensaje de verificacione"));  
				 else if(verif)
					 verif=false;
		                 


		            if(!err)
		               ponerSerie(a,i,select);
		       }
			}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(p->EstaConectado())
				 p->~PuertoSerie();
			 cargarInterfas(false);
		 }
private:
bool BitData(char Byte,unsigned posttion)
{
	if((Byte & 0x01<<posttion)==0)
		return 0;
	return 1;

}
void ponerSerie(char*Datos,unsigned i,unsigned Select){
	if(BitData(Datos[i],Select+2))
				{
					CONTT++;
                  	if(BitData(Datos[i+1],Select+2))
					{
						CONT++;
						series1->Points->Add(gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(CONTT,CONT));
					}
					else
					{
						CONT--;
						series1->Points->Add(gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(CONTT,CONT));
					}
								
				
				}
	label4->Text=Convert::ToString(CONT);
	label5->Text=Convert::ToString(CONT*0.9);
	label6->Text="X:"+Convert::ToString(CONTT);
	label7->Text=Convert::ToString(contt);

}
void ponerNewSeries(unsigned Select){
	        select=Select;
			CONTT=CONT=0;
			chart1->Series->Clear();
			series1= (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			chart1->Series->Add(series1);
			series1->Points->Add(gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,0));		
			
}
void cargarInterfas(bool a){
					if(a)
					{
					label1->Visible=label1->Visible;
					label2->Visible=false;
					textBox1->Visible=false;
					textBox2->Visible=false;
					rectangleShape1->Visible=false;
					button1->Visible=false;
					radioButton1->Visible=true;
					radioButton2->Visible=true;
					radioButton3->Visible=true;
					radioButton4->Visible=true;
					radioButton5->Visible=true;
					radioButton6->Visible=true;
					button2->Visible=true;
					button3->Visible=true;
					rectangleShape2->Visible=true;
					label4->Visible=true;
					label5->Visible=true;
					label6->Visible=true;
					label7->Visible=true;					
					chart1->Location = System::Drawing::Point(68, 38);
			        chart1->Size = System::Drawing::Size(346, 255);
					chart1->Visible=true;
					timer1->Enabled=true;
					}
					else
					{
				    label1->Visible=true;
					label2->Visible=true;
					textBox1->Visible=true;
					textBox2->Visible=true;
					rectangleShape1->Visible=true;
					button1->Visible=true;
					radioButton1->Visible=false;
					radioButton2->Visible=false;
					radioButton3->Visible=false;
					radioButton4->Visible=false;
					radioButton5->Visible=false;
					radioButton6->Visible=false;
					button2->Visible=false;
					button3->Visible=false;
					label4->Visible=false;
					label5->Visible=false;
					label6->Visible=false;
					label7->Visible=false;
					rectangleShape2->Visible=false;
					chart1->Visible=false;
					timer1->Enabled=false;
					}

			}	
void Reset(){
	ponerNewSeries(select);
	label4->Text=Convert::ToString(CONT);
	label5->Text=Convert::ToString(CONT*0.9);
	label6->Text="X:"+Convert::ToString(CONTT);
	label7->Text=Convert::ToString(contt);
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton1->Checked)
				 ponerNewSeries(0);
			 Reset();
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton2->Checked)
			  ponerNewSeries(1);
			Reset();
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton3->Checked)
			 ponerNewSeries(2);
			 Reset();
		 }
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton4->Checked) 
			 ponerNewSeries(3);
			 Reset();
		 }
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton5->Checked)
			 ponerNewSeries(4);
			 Reset();
		 }
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton6->Checked) 
			 ponerNewSeries(5);
			 Reset();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Reset();
		 }
};
}
