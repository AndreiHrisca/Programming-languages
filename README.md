📚 Playground de Lenguajes de Programación

Este repositorio reúne pequeños tutoriales y guías en varios lenguajes populares. La idea es que sirva como
laboratorio personal para comparar sintaxis, flujos de compilación/ejecución y buenas prácticas en
cada ecosistema.

Lenguajes incluidos
	•	C#
	•	C++
	•	Java
	•	JavaScript
	•	PHP
	•	Python
	•	Ruby
	•	Swift
	•	TypeScript

⸻

C#

	
Descripción breve	Lenguaje moderno, multiparadigma, creado por Microsoft y ejecutado sobre la plataforma .NET.
Casos de uso comunes	Aplicaciones de escritorio (WPF/WinUI), web APIs con ASP.NET, juegos en Unity, servicios cloud en Azure.
Pros	Tipado fuerte y seguro, excelente tooling (Visual Studio, Rider), rendimiento nativo con JIT + AOT, multiplataforma con .NET Core.
Contras	El ecosistema sigue muy ligado a Microsoft, runtime pesado para pequeños scripts, curva de aprendizaje de .NET.

Bibliografía recomendada
	•	C# 12 in a Nutshell — Joseph Albahari
	•	Documentación oficial: https://learn.microsoft.com/dotnet/csharp

⸻

C++

	
Descripción breve	Extensión de C orientada a objetos y multiparadigma; estándar ISO con gran control de memoria y rendimiento.
Casos de uso comunes	Motores de videojuegos, sistemas embebidos, software de alto rendimiento, bibliotecas de máquina-aprendizaje.
Pros	Muy veloz, acceso de bajo nivel, rica biblioteca estándar, compatibilidad con código C.
Contras	Sintaxis compleja, manejo manual de memoria, tiempos de compilación largos, undefined behavior.

Bibliografía recomendada
	•	The C++ Programming Language — Bjarne Stroustrup
	•	Referencia online: https://en.cppreference.com

⸻

Java

	
Descripción breve	Lenguaje orientado a objetos que corre sobre la JVM, famoso por su portabilidad “write once, run anywhere”.
Casos de uso comunes	Back-end empresarial, Android nativo, sistemas financieros y de big data (Hadoop).
Pros	Ecosistema maduro, enorme comunidad, recolección de basura eficiente, rendimiento estable con JIT.
Contras	Verbosidad, mayores consumos de memoria, arranque lento comparado con lenguajes compilados.

Bibliografía recomendada
	•	Effective Java — Joshua Bloch
	•	Documentación oficial: https://docs.oracle.com/javase

⸻

JavaScript

	
Descripción breve	Lenguaje interpretado que corre en todos los navegadores; con Node.js también funciona en el servidor.
Casos de uso comunes	Front-end web, APIs en tiempo real, herramientas de build, scripting multi-plataforma.
Pros	Omnipresente en la web, gran comunidad, modelo asíncrono no bloqueante, ecosistema NPM descomunal.
Contras	Tipado dinámico propenso a errores, rápida evolución que genera fragmentación, callbacks/this confusos para principiantes.

Bibliografía recomendada
	•	You Don’t Know JS (serie) — Kyle Simpson
	•	MDN Web Docs: https://developer.mozilla.org

⸻

PHP

	
Descripción breve	Lenguaje de scripting del lado del servidor, especializado en desarrollo web desde sus inicios (1995).
Casos de uso comunes	CMS (WordPress, Drupal), back-ends con Laravel/Symfony, e-commerce, sitios compartidos en hosting clásico.
Pros	Curva de entrada baja, despliegue barato, documentación abundante, gran cantidad de hosting compartido.
Contras	Diseño inconsistente por legado histórico, reputación de código espagueti, performance menor frente a alternativas modernas.

Bibliografía recomendada
	•	PHP: The Right Way (recurso web)
	•	Manual oficial: https://www.php.net/manual/es

⸻

Python

	
Descripción breve	Lenguaje interpretado y multiparadigma, famoso por su legibilidad y enorme colección de bibliotecas.
Casos de uso comunes	Ciencia de datos, aprendizaje automático, automatización, scripting, back-ends (Django, Flask).
Pros	Sintaxis clara, alta productividad, comunidad gigante, integración con C/C++ mediante extensiones.
Contras	Ejecución más lenta que lenguajes compilados, GIL limita multi-threading nativo, distribución de dependencias puede complicarse.

Bibliografía recomendada
	•	Automate the Boring Stuff with Python — Al Sweigart
	•	Documentación oficial: https://docs.python.org/3

⸻

Ruby

	
Descripción breve	Lenguaje dinámico, orientado a objetos, conocido por su énfasis en la felicidad del desarrollador.
Casos de uso comunes	Desarrollo web con Rails, scripts DevOps, herramientas de automatización (CocoaPods, Jekyll).
Pros	Sintaxis elegante, productividad muy alta con Rails, comunidad acogedora.
Contras	Rendimiento inferior a alternativas compiladas, mercado laboral más pequeño fuera de Rails, menor adopción en proyectos nuevos.

Bibliografía recomendada
	•	Programming Ruby (“Pickaxe”) — Dave Thomas
	•	Agile Web Development with Rails — Sam Ruby et al.

⸻

Swift

	
Descripción breve	Lenguaje de propósito general creado por Apple; pensado para ser seguro y rápido, sucesor de Objective-C.
Casos de uso comunes	Desarrollo nativo iOS/macOS/watchOS/tvOS, servidores (Vapor, Kitura), scripts rápidos con swift sh.
Pros	Alto rendimiento, sintaxis moderna, seguridad de tipos, playgrounds interactivos.
Contras	Principalmente centrado en ecosistema Apple, el lenguaje cambia entre versiones, menor cantidad de frameworks servidores maduros.

Bibliografía recomendada
	•	The Swift Programming Language (Apple Books, gratuito)
	•	Hacking with Swift: https://www.hackingwithswift.com

⸻

TypeScript

	
Descripción breve	Superset tipado de JavaScript que se transpila a JS; añade tipos estáticos y características modernas del lenguaje.
Casos de uso comunes	Grandes aplicaciones front-end (Angular, React, Vue), APIs Node.js escalables, librerías compartidas.
Pros	Tipado gradual que previene errores, autocompletado superior, facilita refactorizaciones, adopción masiva en proyectos serios de JS.
Contras	Paso de compilación adicional, curva para dominar el sistema de tipos, divergencia entre tipos y comportamiento en tiempo de ejecución.

Bibliografía recomendada
	•	Programming TypeScript — Boris Cherny
	•	Documentación oficial: https://www.typescriptlang.org/docs

⸻

Bash

	
Descripción breve
Intérprete de comandos y lenguaje de scripting estándar en la mayoría de sistemas Unix/Linux.

Casos de uso comunes
Automatización de tareas, instalación de software, scripts de despliegue, pipelines CI/CD.

Pros
Disponible de forma predeterminada en casi todos los entornos Unix, sintaxis concisa para operaciones de sistema, fácil integración con utilidades POSIX.

Contras
Sintaxis propensa a errores sutiles (espacios, comillas), debugging limitado, no apto para lógica compleja o gran escala.
⸻

Cómo ejecutar los ejemplos
	1.	Entra en el directorio de cada lenguaje.
	2.	Compila o ejecuta el archivo hello-world.* según corresponda. Ejemplos:

# C++
g++ hello-world.cpp -o hello && ./hello

# Python
python3 hello-world.py

# Java
javac HelloWorld.java && java HelloWorld


	3.	Consulta la documentación de cada sección para detalles específicos.

⸻

Licencia
-