var cajas = document.getElementsByTagName('div');
//var cajas = document.getElementsByClassName('caja');
var primeraCaja = document.getElementById ('primera');


//----- Creando Nodos
	// 1.- Crear el elemento
	var caja = document.createElement('div');
	// 2.- Crear uno nodo de texto
	var contenido = document.createTextNode('Hola Mundo');
	// 3.- Añadir el nodo de texto al elemento
	caja.appendChild(contenido);
	// 4.- Agregar atributos a los caja
	caja.setAttribute('class', 'caja naranja');
	// 5  agregar el elemento al documento
	var contenedor = document.getElementById('contenedor');
	contenedor.appendChild(caja);

	caja.id = 'primera';
	caja.className = 'caja naranja';

	var padre  = cajas[0].parentNode;

	padre.replaceChild(caja,cajas[2]);

	padre.removeChild(cajas[3]);
