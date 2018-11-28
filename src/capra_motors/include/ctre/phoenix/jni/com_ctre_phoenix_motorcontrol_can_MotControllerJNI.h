/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ctre_phoenix_motorcontrol_can_MotControllerJNI */

#ifndef _Included_com_ctre_phoenix_motorcontrol_can_MotControllerJNI
#define _Included_com_ctre_phoenix_motorcontrol_can_MotControllerJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Create
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Create
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    JNI_destroy_MotController
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_JNI_1destroy_1MotController
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    JNI_destroy_AllMotControllers
 * Signature: ()V
 */
//JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_JNI_1destroy_1AllMotControllers
//  (JNIEnv *, jclass);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetDeviceNumber
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetDeviceNumber
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetDemand
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetDemand
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Set_4
 * Signature: (JIDDI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Set_14
  (JNIEnv *, jclass, jlong, jint, jdouble, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetNeutralMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetNeutralMode
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetSensorPhase
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetSensorPhase
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetInverted
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetInverted
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigFactoryDefault
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigFactoryDefault
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigOpenLoopRamp
 * Signature: (JDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigOpenLoopRamp
  (JNIEnv *, jclass, jlong, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigClosedLoopRamp
 * Signature: (JDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigClosedLoopRamp
  (JNIEnv *, jclass, jlong, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigPeakOutputForward
 * Signature: (JDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigPeakOutputForward
  (JNIEnv *, jclass, jlong, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigPeakOutputReverse
 * Signature: (JDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigPeakOutputReverse
  (JNIEnv *, jclass, jlong, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigNominalOutputForward
 * Signature: (JDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigNominalOutputForward
  (JNIEnv *, jclass, jlong, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigNominalOutputReverse
 * Signature: (JDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigNominalOutputReverse
  (JNIEnv *, jclass, jlong, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigNeutralDeadband
 * Signature: (JDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigNeutralDeadband
  (JNIEnv *, jclass, jlong, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigVoltageCompSaturation
 * Signature: (JDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigVoltageCompSaturation
  (JNIEnv *, jclass, jlong, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigVoltageMeasurementFilter
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigVoltageMeasurementFilter
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    EnableVoltageCompensation
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_EnableVoltageCompensation
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetBusVoltage
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetBusVoltage
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetMotorOutputPercent
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetMotorOutputPercent
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetOutputCurrent
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetOutputCurrent
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetTemperature
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetTemperature
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigRemoteFeedbackFilter
 * Signature: (JIIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigRemoteFeedbackFilter
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigSelectedFeedbackSensor
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigSelectedFeedbackSensor
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigSensorTerm
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigSensorTerm
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetSelectedSensorPosition
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetSelectedSensorPosition
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetSelectedSensorVelocity
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetSelectedSensorVelocity
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetSelectedSensorPosition
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetSelectedSensorPosition
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetControlFramePeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetControlFramePeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetStatusFramePeriod
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetStatusFramePeriod
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetStatusFramePeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetStatusFramePeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigVelocityMeasurementPeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigVelocityMeasurementPeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigVelocityMeasurementWindow
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigVelocityMeasurementWindow
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigForwardLimitSwitchSource
 * Signature: (JIIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigForwardLimitSwitchSource
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigReverseLimitSwitchSource
 * Signature: (JIIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigReverseLimitSwitchSource
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    OverrideLimitSwitchesEnable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_OverrideLimitSwitchesEnable
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigForwardSoftLimitThreshold
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigForwardSoftLimitThreshold
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigReverseSoftLimitThreshold
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigReverseSoftLimitThreshold
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigForwardSoftLimitEnable
 * Signature: (JZI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigForwardSoftLimitEnable
  (JNIEnv *, jclass, jlong, jboolean, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigReverseSoftLimitEnable
 * Signature: (JZI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigReverseSoftLimitEnable
  (JNIEnv *, jclass, jlong, jboolean, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    OverrideSoftLimitsEnable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_OverrideSoftLimitsEnable
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Config_kP
 * Signature: (JIDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Config_1kP
  (JNIEnv *, jclass, jlong, jint, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Config_kI
 * Signature: (JIDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Config_1kI
  (JNIEnv *, jclass, jlong, jint, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Config_kD
 * Signature: (JIDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Config_1kD
  (JNIEnv *, jclass, jlong, jint, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Config_kF
 * Signature: (JIDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Config_1kF
  (JNIEnv *, jclass, jlong, jint, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    Config_IntegralZone
 * Signature: (JIDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_Config_1IntegralZone
  (JNIEnv *, jclass, jlong, jint, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigAllowableClosedloopError
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigAllowableClosedloopError
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigMaxIntegralAccumulator
 * Signature: (JIDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigMaxIntegralAccumulator
  (JNIEnv *, jclass, jlong, jint, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetIntegralAccumulator
 * Signature: (JDII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetIntegralAccumulator
  (JNIEnv *, jclass, jlong, jdouble, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetClosedLoopError
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetClosedLoopError
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetIntegralAccumulator
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetIntegralAccumulator
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetErrorDerivative
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetErrorDerivative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SelectProfileSlot
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SelectProfileSlot
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetActiveTrajectoryPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetActiveTrajectoryPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetActiveTrajectoryVelocity
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetActiveTrajectoryVelocity
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetActiveTrajectoryHeading
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetActiveTrajectoryHeading
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigMotionCruiseVelocity
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigMotionCruiseVelocity
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigMotionAcceleration
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigMotionAcceleration
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ClearMotionProfileTrajectories
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ClearMotionProfileTrajectories
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetMotionProfileTopLevelBufferCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetMotionProfileTopLevelBufferCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    PushMotionProfileTrajectory
 * Signature: (JDDDIZZ)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_PushMotionProfileTrajectory
  (JNIEnv *, jclass, jlong, jdouble, jdouble, jdouble, jint, jboolean, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    PushMotionProfileTrajectory2
 * Signature: (JDDDIIZZI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_PushMotionProfileTrajectory2
  (JNIEnv *, jclass, jlong, jdouble, jdouble, jdouble, jint, jint, jboolean, jboolean, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    IsMotionProfileTopLevelBufferFull
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_IsMotionProfileTopLevelBufferFull
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ProcessMotionProfileBuffer
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ProcessMotionProfileBuffer
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetMotionProfileStatus
 * Signature: (J[I)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetMotionProfileStatus
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetMotionProfileStatus2
 * Signature: (J[I)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetMotionProfileStatus2
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ClearMotionProfileHasUnderrun
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ClearMotionProfileHasUnderrun
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ChangeMotionControlFramePeriod
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ChangeMotionControlFramePeriod
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigMotionProfileTrajectoryPeriod
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigMotionProfileTrajectoryPeriod
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigFeedbackNotContinuous
 * Signature: (JZI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigFeedbackNotContinuous
  (JNIEnv *, jclass, jlong, jboolean, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigRemoteSensorClosedLoopDisableNeutralOnLOS
 * Signature: (JZI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigRemoteSensorClosedLoopDisableNeutralOnLOS
  (JNIEnv *, jclass, jlong, jboolean, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigClearPositionOnLimitF
 * Signature: (JZI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigClearPositionOnLimitF
  (JNIEnv *, jclass, jlong, jboolean, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigClearPositionOnLimitR
 * Signature: (JZI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigClearPositionOnLimitR
  (JNIEnv *, jclass, jlong, jboolean, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigClearPositionOnQuadIdx
 * Signature: (JZI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigClearPositionOnQuadIdx
  (JNIEnv *, jclass, jlong, jboolean, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigLimitSwitchDisableNeutralOnLOS
 * Signature: (JZI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigLimitSwitchDisableNeutralOnLOS
  (JNIEnv *, jclass, jlong, jboolean, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigSoftLimitDisableNeutralOnLOS
 * Signature: (JZI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigSoftLimitDisableNeutralOnLOS
  (JNIEnv *, jclass, jlong, jboolean, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigPulseWidthPeriod_EdgesPerRot
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigPulseWidthPeriod_1EdgesPerRot
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigPulseWidthPeriod_FilterWindowSz
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigPulseWidthPeriod_1FilterWindowSz
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetLastError
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetLastError
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetFirmwareVersion
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetFirmwareVersion
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    HasResetOccurred
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_HasResetOccurred
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigSetCustomParam
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigSetCustomParam
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigGetCustomParam
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigGetCustomParam
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigSetParameter
 * Signature: (JIDIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigSetParameter
  (JNIEnv *, jclass, jlong, jint, jdouble, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigGetParameter
 * Signature: (JIII)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigGetParameter
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigPeakCurrentLimit
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigPeakCurrentLimit
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigPeakCurrentDuration
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigPeakCurrentDuration
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigContinuousCurrentLimit
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigContinuousCurrentLimit
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    EnableCurrentLimit
 * Signature: (JZ)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_EnableCurrentLimit
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetAnalogIn
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetAnalogIn
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetAnalogPosition
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetAnalogPosition
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetAnalogInRaw
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetAnalogInRaw
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetAnalogInVel
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetAnalogInVel
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetQuadraturePosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetQuadraturePosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetQuadraturePosition
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetQuadraturePosition
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetQuadratureVelocity
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetQuadratureVelocity
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetPulseWidthPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetPulseWidthPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetPulseWidthPosition
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetPulseWidthPosition
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetPulseWidthVelocity
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetPulseWidthVelocity
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetPulseWidthRiseToFallUs
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetPulseWidthRiseToFallUs
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetPulseWidthRiseToRiseUs
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetPulseWidthRiseToRiseUs
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetPinStateQuadA
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetPinStateQuadA
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetPinStateQuadB
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetPinStateQuadB
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetPinStateQuadIdx
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetPinStateQuadIdx
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    IsFwdLimitSwitchClosed
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_IsFwdLimitSwitchClosed
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    IsRevLimitSwitchClosed
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_IsRevLimitSwitchClosed
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetFaults
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetFaults
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetStickyFaults
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetStickyFaults
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ClearStickyFaults
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ClearStickyFaults
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SelectDemandType
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SelectDemandType
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    SetMPEOutput
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_SetMPEOutput
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    EnableHeadingHold
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_EnableHeadingHold
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    GetClosedLoopTarget
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_GetClosedLoopTarget
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigSelectedFeedbackCoefficient
 * Signature: (JDII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigSelectedFeedbackCoefficient
  (JNIEnv *, jclass, jlong, jdouble, jint, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigClosedLoopPeakOutput
 * Signature: (JIDI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigClosedLoopPeakOutput
  (JNIEnv *, jclass, jlong, jint, jdouble, jint);

/*
 * Class:     com_ctre_phoenix_motorcontrol_can_MotControllerJNI
 * Method:    ConfigClosedLoopPeriod
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_phoenix_motorcontrol_can_MotControllerJNI_ConfigClosedLoopPeriod
  (JNIEnv *, jclass, jlong, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
