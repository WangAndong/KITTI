//You need to modify this file.

#ifndef VISUALIZATIONMONO_ALGORITHM_INTEGRATION_VELODYNECAMERASLAM_PARAMSDATA_H
#define VISUALIZATIONMONO_ALGORITHM_INTEGRATION_VELODYNECAMERASLAM_PARAMSDATA_H

#include<RobotSDK_Global.h>

/*! \defgroup VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_ParamsData VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_ParamsData
	\ingroup VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM
	\brief VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_ParamsData defines the ParamsData in VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM.
*/

/*! \addtogroup VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_ParamsData
	@{
*/

/*! \file VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_ParamsData.h
	 Defines the ParamsData of VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM
*/

//*******************Please add other headers below*******************
#include<glviewer.h>

//1 input data header(s) refered

//Defines Params ProcessorMulti_Algorithm_Integration_VelodyneCameraSLAM_Params and Input Data ProcessorMulti_Algorithm_Integration_VelodyneCameraSLAM_Data
#include<KITTI/KITTI/Algorithm/Integration/VelodyneCameraSLAM/ProcessorMulti/Edit/ProcessorMulti_Algorithm_Integration_VelodyneCameraSLAM_ParamsData.h>

//0 new input data type(s) created

/*! \def VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_INPUTPORTSSIZE
	\brief Defines input port(s) info: number=1
	\details
	- Input Port #0: Buffer_Size = 10, Params_Type = ProcessorMulti_Algorithm_Integration_VelodyneCameraSLAM_Params, Data_Type = ProcessorMulti_Algorithm_Integration_VelodyneCameraSLAM_Data
*/
#define VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_INPUTPORTSSIZE QList<int>()<<10

//The Params is defined as below
/*! \class VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_Params 
	\brief The Params of VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM.
	\details **Please add details below**

*/
class ROBOTSDK_OUTPUT VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_Params 
{
public:
	/*! \fn VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_Params()
		\brief The constructor of VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_Params. [required]
		\details ****Please add details below****

	*/
	VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_Params() 
	{
		historylength=10;
	}
	/*! \fn ~VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_Params()
		\brief The destructor of VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_Params. [required]
		\details *****Please add details below*****

	*/
	~VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_Params() 
	{
		
	}
public:
	//*******************Please add variables below*******************
	GLuint historylength;
};

//There is no Output Data.

/*! \def VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_OUTPUTPORTSNUMBER
	\brief Defines output port(s) info: number = 0.
*/
#define VisualizationMono_Algorithm_Integration_VelodyneCameraSLAM_OUTPUTPORTSNUMBER 0

/*! @}*/ 

#endif