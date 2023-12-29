
#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //si el parametro de la funcion es 'verdaduro', marcar la caja:
    ui->marcaPermitir->setChecked(ui->lineaSinc->isEnabled());
    ui->marcaSoloLeer->setChecked(ui->lineaSinc->isReadOnly());
    ui->marcaLimpiar->setChecked(ui->lineaSinc->isClearButtonEnabled());

/*
En Qt, QLineEdit::EchoMode es una enumeración que representa los diferentes modos de eco para un QLineEdit. El modo de eco determina cómo se muestra el texto ingresado en un QLineEdit. La enumeración QLineEdit::EchoMode define los siguientes valores:

QLineEdit::Normal(valor: 0): En este modo, el texto ingresado se muestra tal como es, sin ningún tipo de ocultamiento o enmascaramiento.

QLineEdit::NoEcho(valor: 1): En este modo, no se muestra ningún texto ingresado en el QLineEdit. Esto es útil cuando se desea ocultar la entrada del usuario, como en el caso de contraseñas.

QLineEdit::Password(valor: 2): Este modo se utiliza para mostrar un carácter de reemplazo, como un asterisco (*), en lugar del texto real ingresado. Es comúnmente utilizado para campos de contraseña.

QLineEdit::PasswordEchoOnEdit(valor: 3): Similar al modo Password, pero cuando el QLineEdit tiene el foco, se muestra el texto ingresado real. Cuando pierde el foco, se vuelve a ocultar utilizando el carácter de reemplazo.
*/

//usar un enumerador 'metaEnum' para almacenar los valores de 'QLineEdit::Echomode'.
    QMetaEnum metaEnum = QMetaEnum::fromType<QLineEdit::EchoMode>();

    //Agregar todos modos de 'QLineEdit::EchoMode' a la combo caja:
    for(int i = 0; i <metaEnum.keyCount(); ++i){
        //NOTA: "i" es sola la posición de cada "EchoMode" en la lista, no es el valor. los valores de un enumerador objecto pueden basarse en 0, o en otro número definido.

        int val = metaEnum.value(i);
        //"metaEnum.value(i)" te permite obtener el valor de la enumeración basado en su posición en la lista de elementos.

        ui->comboEcho->addItem(metaEnum.valueToKey(val));
        /*
        metaEnum.valueToKey(i) te permite obtener el nombre del elemento de la enumeración basado en su valor,
         */
    }


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_lineaEditor_textChanged(const QString &arg1)
{
    ui->lineaSinc->setText(arg1);

}

void Dialog::on_comboEcho_currentIndexChanged(int index)
{
    QMetaEnum metaEnum = QMetaEnum::fromType<QLineEdit::EchoMode>();
    int valor = metaEnum.keyToValue(ui->comboEcho->currentText().toLocal8Bit().data());
    //'keyToValue' saca un puntero'const char*' y vuele un 'int'
    /*
    'toLocal8Bit()': Esta función convierte el QString obtenido en el paso anterior a un objeto QByteArray utilizando la codificación local de 8 bits. Esto es útil si necesitas trabajar con cadenas de caracteres en un formato específico.
    'data()': Esta función devuelve un puntero a los datos subyacentes almacenados en el objeto QByteArray. En otras palabras, obtiene un puntero a los caracteres de la cadena de bytes.
    */

    //Obtener el real modo 'QLineEdit::EchoMode' usando 'valor':
    QLineEdit::EchoMode modo =  static_cast<QLineEdit::EchoMode>(valor);

    //poner 'lineaSinc' en correspondiente modo:
    ui->lineaSinc->setEchoMode(modo);
}


void Dialog::on_marcaPermitir_toggled(bool checked)
{
    ui->lineaSinc->setEnabled(checked);

}

void Dialog::on_marcaSoloLeer_toggled(bool checked)
{
    ui->lineaSinc->setReadOnly(checked);
}

void Dialog::on_marcaLimpiar_toggled(bool checked)
{
    ui->lineaSinc->setClearButtonEnabled(checked);
}



void Dialog::on_btnCometer_clicked()
{
    QMessageBox::information(this, "escribido", "has escribido " + ui->lineaEditor->text());
    accept();
}



