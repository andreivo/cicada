<p align="center">
	<img src="https://github.com/andreivo/CicadaProject/blob/main/docs/assets/img/logo/CemadenLogColor.png" align="center" height="100" width="100">
</p>

<h1 align="center" style="color:#00055B;">Cicada Project</h1>


# Welcome

Welcome to the Cicada Project.

The Cicada Project is a collaboration between <a href="http://www.cemaden.gov.br/" target="_blank">Cemaden</a> and <a href="https://www.unifesp.br/" target="_blank">Unifesp</a> and was born out of a need by Cemaden.
Cemaden has an Observational network with more than 5000 Data Collection Platforms (DCPs) spread across the Brazilian territory. DCPs, in general, are imported equipment and require specialized labor; that is, it consumes a lot of financial resources to maintain its operation.

The Cicada Project is a broad concept that can create the new management and operation model for the Cemaden observational network, based mainly on the decentralization of management authority under the DCPs that make up the network. This new concept creates a collaborative model that promotes the development of a private network of Cicada DCPs. To enable this decentralization, DCPs must follow a standard model and have the lowest possible cost of acquisition and operation, resulting in a significant reduction in the cost of maintenance and encouraging the expansion of the network.

<p align="center">
	<img src="https://github.com/andreivo/CicadaProject/blob/main/docs/assets/img/New_CONOPS_CEMADEN.jpg" align="center" height="auto" width="100%" style="max-width:700px">
<br><br><b>Fig 1: Cicada CONOPs</b>
</p>



## The Project

The project was divided into 3 groups to structure its development and allow research to be developed in a segmented way. Figure 2 shows the division of the groups.

<p align="center">
	<img src="https://github.com/andreivo/CicadaProject/blob/main/docs/assets/img/CicadaProjectParts.png" align="center" height="auto" width="100%" style="max-width:725px">
<br><br><b>Fig 2: Cicada Project Groups</b>
</p>

### <ins>Group I (Cicada DCP):</ins>

Cicada DCP is an equipment design with a low-cost Datalogger and Sensors integrated into a Data Collection Platform that has requirement high reliability and freedom for adaptations. The Cicada DCP was designed for native interoperability with the Cicada Broker, and all project is open-source and documented.

In practice, the Cicada DCP is a monoblock device with a built-in electronic system that allows the integration of sensors for monitoring the environment and actuators, e.g., alarm sirens. By default, Cicada DCP has humidity, temperature, and rainfall sensors, as shown in Fig. 3.

<p align="center">
	<img src="https://github.com/andreivo/CicadaProject/blob/main/docs/assets/img/CicadaDCP.png" align="center" height="auto" width="40%" style="max-width:250px">
	<img src="https://github.com/andreivo/CicadaProject/blob/main/docs/assets/img/CicadaDCPCut.png" align="center" height="auto" width="58%" style="max-width:350px">
<br><br><b>Fig 3: Cicada DCP Body Design</b>
</p>

The body of the Cicada DCP was designed with a simple yet functional concept to serve the most varied audiences, which allows its construction through <b>3D printing</b> or industrial processes such as plastic injection.

The entire project was developed as a case study of <b>Fault & INtegration-Driven System Engineering (FIND-SE)</b>, a methodological approach to fault-tolerant systems engineering (SE). The approach extends the knowledge of Model-Based System Engineering (MBSE). It is based on the principle of guiding the developer in a design concerned with failures, and especially those related to interoperability in the system integration process, which must be tolerated and treated. FIND-SE's great advantage is the proposal of a new paradigm based on guiding development through a principle, the same concept used in the TDD (Test Driven Development) and BDD (Behavior Driven Development) techniques.

For more details, see the section <a href="https://andreivo.github.io/CicadaProject/docs/gi/gi-index" target="_blank">Cicada DCP</a>.

### <ins>Group II (Cicada Broker):</ins>

The project was developed to send data through the MQTT protocol. In this project, the RabbitMQ server was used as the basis for Cicada Broker.
Cicada Broker was also developed using FIND-SE's best practices and proposed a standard protocol for sending and receiving environmental data. 

<p align="center">
	<img src="https://github.com/andreivo/CicadaProject/blob/main/docs/assets/img/CicadaBroker.png" align="center" height="auto" width="100%" style="max-width:600px">
<br><br><b>Fig 4: Cicada Broker</b>
</p>

For more details, see the section <a href="https://andreivo.github.io/CicadaProject/docs/gii/gii-index" target="_blank">Cicada Broker</a>.

### <ins>Group III (Cicada Data Science):</ins>

A set of algorithms for Data Science (Cicada DS) to produce stats and knowledge about disaster risks.
In addiction, the environmental information should be accessed in a web platform (Cicada Web) and in a mobile app (Cicada Mobile).

For more details, see the section <a href="https://andreivo.github.io/CicadaProject/docs/giii/giii-index" target="_blank">Cicada Data Science</a>.

<b>Not started yet.</b> You would like to collaborate with the project? Please contact our team in <a href="https://andreivo.github.io/CicadaProject/about/" target="_blank">About</a>.


# Our Team

For more details about our Team, see the section <a href="https://andreivo.github.io/CicadaProject/about/" target="_blank">About</a>.
