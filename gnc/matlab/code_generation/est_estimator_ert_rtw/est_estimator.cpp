//
// File: est_estimator.cpp
//
// Code generated for Simulink model 'est_estimator'.
//
// Model version                  : 1.1142
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Mon Sep 23 17:43:06 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: 32-bit Generic
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "est_estimator.h"
#include "est_estimator_private.h"

const kfl_msg est_estimator_rtZkfl_msg = {
  {
    0.0F, 0.0F, 0.0F, 0.0F }
  ,                                    // quat_ISS2B

  {
    0.0F, 0.0F, 0.0F }
  ,                                    // omega_B_ISS_B

  {
    0.0F, 0.0F, 0.0F }
  ,                                    // gyro_bias

  {
    0.0F, 0.0F, 0.0F }
  ,                                    // V_B_ISS_ISS

  {
    0.0F, 0.0F, 0.0F }
  ,                                    // A_B_ISS_ISS

  {
    0.0F, 0.0F, 0.0F }
  ,                                    // accel_bias

  {
    0.0F, 0.0F, 0.0F }
  ,                                    // P_B_ISS_ISS
  0U,                                  // confidence
  0U,                                  // aug_state_enum

  {
    0.0F, 0.0F, 0.0F, 0.0F }
  ,                                    // ml_quat_ISS2cam

  {
    0.0F, 0.0F, 0.0F }
  ,                                    // ml_P_cam_ISS_ISS

  {
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F }
  ,                                    // of_quat_ISS2cam

  {
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F }
  ,                                    // of_P_cam_ISS_ISS

  {
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
  }
  ,                                    // cov_diag
  0U,                                  // kfl_status
  0U,                                  // update_OF_tracks_cnt
  0U,                                  // update_ML_features_cnt

  {
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 }
  ,                                    // of_mahal_distance

  {
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 }
  ,                                    // ml_mahal_distance

  {
    0.0F, 0.0F, 0.0F }
  ,                                    // hr_P_hr_ISS_ISS

  {
    0.0F, 0.0F, 0.0F, 0.0F }
  ,                                    // hr_quat_ISS2hr

  {
    0.0F, 0.0F, 0.0F }
  // P_EST_ISS_ISS
} ;                                    // kfl_msg ground

const cmc_msg est_estimator_rtZcmc_msg = { { 0U,// timestamp_sec
    0U,                                // timestamp_nsec
    { 0.0F, 0.0F, 0.0F },              // P_B_ISS_ISS
    { 0.0F, 0.0F, 0.0F },              // V_B_ISS_ISS
    { 0.0F, 0.0F, 0.0F },              // A_B_ISS_ISS
    { 0.0F, 0.0F, 0.0F, 0.0F },        // quat_ISS2B
    { 0.0F, 0.0F, 0.0F },              // omega_B_ISS_B
    { 0.0F, 0.0F, 0.0F }               // alpha_B_ISS_B
  },                                   // cmc_state_cmd_a
  { 0U,                                // timestamp_sec
    0U,                                // timestamp_nsec
    { 0.0F, 0.0F, 0.0F },              // P_B_ISS_ISS
    { 0.0F, 0.0F, 0.0F },              // V_B_ISS_ISS
    { 0.0F, 0.0F, 0.0F },              // A_B_ISS_ISS
    { 0.0F, 0.0F, 0.0F, 0.0F },        // quat_ISS2B
    { 0.0F, 0.0F, 0.0F },              // omega_B_ISS_B
    { 0.0F, 0.0F, 0.0F }               // alpha_B_ISS_B
  },                                   // cmc_state_cmd_b
  0U,                                  // cmc_mode_cmd
  0U,                                  // speed_gain_cmd
  0U,                                  // localization_mode_cmd
  { 0.0F, 0.0F, 0.0F },                // att_kp
  { 0.0F, 0.0F, 0.0F },                // att_ki
  { 0.0F, 0.0F, 0.0F },                // omega_kd
  { 0.0F, 0.0F, 0.0F },                // pos_kp
  { 0.0F, 0.0F, 0.0F },                // pos_ki
  { 0.0F, 0.0F, 0.0F },                // vel_kd
  { 0.0F, 0.0F, 0.0F },                // center_of_mass
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },// inertia_matrix
  0.0F                                 // mass
};

const cvs_handrail_msg est_estimator_rtZcvs_handrail_m = { 0U,// cvs_timestamp_sec 
  0U,                                  // cvs_timestamp_nsec
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },// cvs_landmarks
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },// cvs_observations
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },// cvs_valid_flag
  0U,                                  // cvs_3d_knowledge_flag
  { 0.0F, 0.0F, 0.0F },                // cvs_handrail_local_pos
  { 0.0F, 0.0F, 0.0F, 0.0F },          // cvs_handrail_local_quat
  0U                                   // cvs_handrail_update_global_pose_flag
};

const cvs_landmark_msg est_estimator_rtZcvs_landmark_m = { 0U,// cvs_timestamp_sec 
  0U,                                  // cvs_timestamp_nsec
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },// cvs_landmarks
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },// cvs_observations
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }// cvs_valid_flag
};

const cvs_optical_flow_msg est_estimator_rtZcvs_optical_fl = { 0U,// cvs_timestamp_sec 
  0U,                                  // cvs_timestamp_nsec
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F },                            // cvs_observations
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U },                          // cvs_valid_flag
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F }// cvs_id_tag 
};

const cvs_registration_pulse est_estimator_rtZcvs_registrati = { 0U,// cvs_ar_tag_pulse 
  0U,                                  // cvs_landmark_pulse
  0U,                                  // cvs_optical_flow_pulse
  0U                                   // cvs_handrail_pulse
};

const imu_msg est_estimator_rtZimu_msg = { 0U,// imu_timestamp_sec
  0U,                                  // imu_timestamp_nsec
  { 0.0F, 0.0F, 0.0F },                // imu_A_B_ECI_sensor
  { 0.0F, 0.0F, 0.0F },                // imu_accel_bias
  { 0.0F, 0.0F, 0.0F },                // imu_omega_B_ECI_sensor
  { 0.0F, 0.0F, 0.0F },                // imu_gyro_bias
  0U,                                  // imu_validity_flag
  0U                                   // imu_sat_flag
};

//
// System initialize for atomic system:
//    '<S46>/MATLAB Function1'
//    '<S47>/MATLAB Function1'
//
void est_estima_MATLABFunction1_Init(DW_MATLABFunction1_est_estima_T *localDW)
{
  localDW->prev_impeller_speed = -1.0F;

  //  No number will be equal to NaN, this will trigger the coefficients to update on the first tick 
  localDW->y = 0.0F;
  localDW->den[0] = 0.0F;
  localDW->num[0] = localDW->den[0];
  localDW->den[1] = 0.0F;
  localDW->num[1] = localDW->den[1];
  localDW->den[2] = 1.0F;
  localDW->num[2] = localDW->den[2];
}

//
// Start for atomic system:
//    '<S46>/MATLAB Function1'
//    '<S47>/MATLAB Function1'
//
void est_estim_MATLABFunction1_Start(B_MATLABFunction1_est_estimat_T *localB)
{
  localB->num_out[0] = 0.0F;
  localB->den_out[0] = 0.0F;
  localB->num_out[1] = 0.0F;
  localB->den_out[1] = 0.0F;
  localB->num_out[2] = 0.0F;
  localB->den_out[2] = 0.0F;
}

//
// Output and update for atomic system:
//    '<S46>/MATLAB Function1'
//    '<S47>/MATLAB Function1'
//
void est_estimator_MATLABFunction1(real_T rtu_Ts, real32_T rtu_impeller_speed,
  B_MATLABFunction1_est_estimat_T *localB, DW_MATLABFunction1_est_estima_T
  *localDW)
{
  real_T Ws;
  real_T Nyquist_W;
  real32_T Aliased_W[4];
  real32_T Omega_n;
  boolean_T b_x[4];
  int32_T idx;
  int32_T b_ii;
  int32_T ii_data_idx_0;
  int32_T ii_sizes_idx_1;
  boolean_T exitg1;

  // MATLAB Function 'est_estimator/filter_prep/imu_prep/filter/MATLAB Function1': '<S51>:1' 
  //  Calculate notch filter coefficients, note only executes when the impeller speeds change 
  //  Setup to only run when the impeller_speed changes
  //  update_flag = (prev_impeller_speed ~= impeller_speed);
  if (localDW->prev_impeller_speed != rtu_impeller_speed) {
    // '<S51>:1:22'
    //  Filter Bandwidth
    // '<S51>:1:25'
    //  Sample frequency, Hz
    // '<S51>:1:26'
    Ws = 1.0 / rtu_Ts * 6.2831853071795862;

    //  Sample frequency, Rad/sec
    // '<S51>:1:27'
    Nyquist_W = Ws / 2.0;

    //  Nyquist rate, rad/sec
    // '<S51>:1:29'
    //  Look for the possible aliased frequncies
    //  Find the actual aliased frequency
    // '<S51>:1:32'
    Omega_n = (real32_T)fabs((real_T)((real32_T)(Ws * 0.0) - rtu_impeller_speed));
    b_x[0] = ((Omega_n > 0.0F) && ((real_T)Omega_n <= Nyquist_W));
    Aliased_W[0] = Omega_n;
    Omega_n = (real32_T)fabs((real_T)((real32_T)Ws - rtu_impeller_speed));
    b_x[1] = ((Omega_n > 0.0F) && ((real_T)Omega_n <= Nyquist_W));
    Aliased_W[1] = Omega_n;
    Omega_n = (real32_T)fabs((real_T)((real32_T)(Ws * 2.0) - rtu_impeller_speed));
    b_x[2] = ((Omega_n > 0.0F) && ((real_T)Omega_n <= Nyquist_W));
    Aliased_W[2] = Omega_n;
    Omega_n = (real32_T)fabs((real_T)((real32_T)(Ws * 3.0) - rtu_impeller_speed));
    b_x[3] = ((Omega_n > 0.0F) && ((real_T)Omega_n <= Nyquist_W));
    Aliased_W[3] = Omega_n;
    idx = 0;
    ii_sizes_idx_1 = 1;
    b_ii = 1;
    exitg1 = false;
    while ((!exitg1) && (b_ii < 5)) {
      if (b_x[(int32_T)(b_ii - 1)]) {
        idx = 1;
        ii_data_idx_0 = b_ii;
        exitg1 = true;
      } else {
        b_ii++;
      }
    }

    if (idx == 0) {
      ii_sizes_idx_1 = 0;
    }

    if (!(ii_sizes_idx_1 == 0)) {
      // '<S51>:1:34'
      // '<S51>:1:35'
      localDW->y = Aliased_W[(int32_T)(ii_data_idx_0 - 1)];

      //  Impeller frequency
      // '<S51>:1:36'
      Omega_n = 3.14159274F * localDW->y / (real32_T)Nyquist_W;

      //  Normalized frequency
      // '<S51>:1:37'
      Ws = 39.478417604357432 / Nyquist_W;

      //  Normalized bandwidth
      //  Calc coefficients of filter, from:
      //  http://onlinelibrary.wiley.com/store/10.1002/mop.23439/asset/23439_ftp.pdf?v=1&t=iyyqfya1&s=b26e8f569108cf78a04dbd5e7edb44f70b9bc3d1 
      // '<S51>:1:41'
      // '<S51>:1:42'
      Ws = (1.0 - tan(Ws / 2.0)) / (tan(Ws / 2.0) + 1.0);

      // '<S51>:1:43'
      localDW->num[0] = (real32_T)(1.0 + Ws) / 2.0F;
      localDW->num[1] = 2.0F * -(real32_T)cos((real_T)Omega_n) * (real32_T)(1.0
        + Ws) / 2.0F;
      localDW->num[2] = (real32_T)(Ws + 1.0) / 2.0F;

      // '<S51>:1:44'
      localDW->den[0] = 1.0F;
      localDW->den[1] = (real32_T)(1.0 + Ws) * -(real32_T)cos((real_T)Omega_n);
      localDW->den[2] = (real32_T)Ws;
    } else {
      // '<S51>:1:47'
      localDW->y = 0.0F;

      // '<S51>:1:48'
      // '<S51>:1:49'
      localDW->num[0] = 0.0F;
      localDW->den[0] = 0.0F;
      localDW->num[1] = 0.0F;
      localDW->den[1] = 0.0F;
      localDW->num[2] = 1.0F;
      localDW->den[2] = 1.0F;
    }
  }

  // '<S51>:1:54'
  localDW->prev_impeller_speed = rtu_impeller_speed;

  // '<S51>:1:55'
  // '<S51>:1:56'
  // '<S51>:1:57'
  localB->num_out[0] = localDW->num[0];
  localB->den_out[0] = localDW->den[0];
  localB->num_out[1] = localDW->num[1];
  localB->den_out[1] = localDW->den[1];
  localB->num_out[2] = localDW->num[2];
  localB->den_out[2] = localDW->den[2];
}

//
// Termination for atomic system:
//    '<S46>/MATLAB Function1'
//    '<S47>/MATLAB Function1'
//
void est_estima_MATLABFunction1_Term(void)
{
}

//
// Output and update for atomic system:
//    '<S113>/MATLAB Function'
//    '<S144>/MATLAB Function'
//    '<S164>/MATLAB Function'
//
void est_estimator_MATLABFunction(const real32_T rtu_u[16],
  B_MATLABFunction_est_estimato_T *localB)
{
  real32_T normA;
  real32_T b_s;
  int32_T b_j;
  int32_T eint;
  static const real32_T theta[3] = { 0.425873F, 1.8801527F, 3.92572474F };

  real32_T rtu_u_0[16];
  int32_T i;
  boolean_T exitg1;
  boolean_T exitg2;

  // MATLAB Function 'first_order_quaternion_propogation/MATLAB Function': '<S114>:1' 
  // '<S114>:1:4'
  normA = 0.0F;
  b_j = 0;
  exitg2 = false;
  while ((!exitg2) && (b_j < 4)) {
    b_s = (((real32_T)fabs((real_T)rtu_u[(int32_T)((int32_T)(b_j << 2) + 1)]) +
            (real32_T)fabs((real_T)rtu_u[(int32_T)(b_j << 2)])) + (real32_T)fabs
           ((real_T)rtu_u[(int32_T)((int32_T)(b_j << 2) + 2)])) + (real32_T)fabs
      ((real_T)rtu_u[(int32_T)((int32_T)(b_j << 2) + 3)]);
    if (rtIsNaNF(b_s)) {
      normA = (rtNaNF);
      exitg2 = true;
    } else {
      if (b_s > normA) {
        normA = b_s;
      }

      b_j++;
    }
  }

  if (normA <= 3.92572474F) {
    b_j = 0;
    exitg1 = false;
    while ((!exitg1) && (b_j < 3)) {
      if (normA <= theta[b_j]) {
        mglnkfkfmglfjekn_PadeApproximantOfDegree(rtu_u, (uint8_T)(int32_T)
          ((int32_T)(b_j << 1) + 3), localB->y);
        exitg1 = true;
      } else {
        b_j++;
      }
    }
  } else {
    b_s = normA / 3.92572474F;
    if ((!rtIsInfF(b_s)) && (!rtIsNaNF(b_s))) {
      b_s = (real32_T)frexp((real_T)b_s, &eint);
      normA = (real32_T)eint;
    } else {
      normA = 0.0F;
    }

    if (b_s == 0.5F) {
      normA--;
    }

    b_s = rt_powf_snf(2.0F, normA);
    for (eint = 0; eint < 16; eint++) {
      rtu_u_0[eint] = rtu_u[eint] / b_s;
    }

    mglnkfkfmglfjekn_PadeApproximantOfDegree(rtu_u_0, 7U, localB->y);
    for (b_j = 0; b_j <= (int32_T)((int32_T)normA - 1); b_j++) {
      for (eint = 0; eint < 4; eint++) {
        for (i = 0; i < 4; i++) {
          rtu_u_0[(int32_T)(eint + (int32_T)(i << 2))] = 0.0F;
          rtu_u_0[(int32_T)(eint + (int32_T)(i << 2))] += localB->y[(int32_T)(i <<
            2)] * localB->y[eint];
          rtu_u_0[(int32_T)(eint + (int32_T)(i << 2))] += localB->y[(int32_T)
            ((int32_T)(i << 2) + 1)] * localB->y[(int32_T)(eint + 4)];
          rtu_u_0[(int32_T)(eint + (int32_T)(i << 2))] += localB->y[(int32_T)
            ((int32_T)(i << 2) + 2)] * localB->y[(int32_T)(eint + 8)];
          rtu_u_0[(int32_T)(eint + (int32_T)(i << 2))] += localB->y[(int32_T)
            ((int32_T)(i << 2) + 3)] * localB->y[(int32_T)(eint + 12)];
        }
      }

      for (eint = 0; eint < 4; eint++) {
        localB->y[(int32_T)(eint << 2)] = rtu_u_0[(int32_T)(eint << 2)];
        localB->y[(int32_T)(1 + (int32_T)(eint << 2))] = rtu_u_0[(int32_T)
          ((int32_T)(eint << 2) + 1)];
        localB->y[(int32_T)(2 + (int32_T)(eint << 2))] = rtu_u_0[(int32_T)
          ((int32_T)(eint << 2) + 2)];
        localB->y[(int32_T)(3 + (int32_T)(eint << 2))] = rtu_u_0[(int32_T)
          ((int32_T)(eint << 2) + 3)];
      }
    }
  }
}

//
// Termination for atomic system:
//    '<S113>/MATLAB Function'
//    '<S144>/MATLAB Function'
//    '<S164>/MATLAB Function'
//
void est_estimat_MATLABFunction_Term(void)
{
}

//
// Output and update for action system:
//    '<S117>/Normalize'
//    '<S148>/Normalize'
//    '<S175>/Normalize'
//
void est_estimator_Normalize(const real32_T rtu_q_in[4], real32_T
  rty_positive_scalar_q[4], P_Normalize_est_estimator_T *localP)
{
  // Product: '<S119>/Product' incorporates:
  //   Constant: '<S119>/Constant1'
  //   DataTypeConversion: '<S121>/Conversion'

  rty_positive_scalar_q[0] = rtu_q_in[0] * (real32_T)localP->Constant1_Value;
  rty_positive_scalar_q[1] = rtu_q_in[1] * (real32_T)localP->Constant1_Value;
  rty_positive_scalar_q[2] = rtu_q_in[2] * (real32_T)localP->Constant1_Value;
  rty_positive_scalar_q[3] = rtu_q_in[3] * (real32_T)localP->Constant1_Value;
}

//
// Termination for action system:
//    '<S117>/Normalize'
//    '<S148>/Normalize'
//    '<S175>/Normalize'
//
void est_estimator_Normalize_Term(void)
{
}

//
// Output and update for action system:
//    '<S120>/Normalize'
//    '<S151>/Normalize'
//    '<S178>/Normalize'
//
void est_estimator_Normalize_p(const real32_T rtu_Vec[4], real32_T rtu_Magnitude,
  real32_T rty_Normalized_Vec[4])
{
  // Product: '<S123>/Divide'
  rty_Normalized_Vec[0] = rtu_Vec[0] / rtu_Magnitude;
  rty_Normalized_Vec[1] = rtu_Vec[1] / rtu_Magnitude;
  rty_Normalized_Vec[2] = rtu_Vec[2] / rtu_Magnitude;
  rty_Normalized_Vec[3] = rtu_Vec[3] / rtu_Magnitude;
}

//
// Termination for action system:
//    '<S120>/Normalize'
//    '<S151>/Normalize'
//    '<S178>/Normalize'
//
void est_estimator_Normalize_h_Term(void)
{
}

//
// Output and update for action system:
//    '<S125>/If Action Subsystem1'
//    '<S126>/If Action Subsystem1'
//
void est_estimato_IfActionSubsystem1(const kfl_msg *rtu_state_in, const
  ase_cov_datatype rtu_P_in[13689], const real_T rtu_aug_velocity[3], const
  real_T rtu_aug_velocity_p[3], const real_T rtu_aug_velocity_l[48], const
  real_T rtu_aug_velocity_o[48], kfl_msg *rty_state_out, ase_cov_datatype
  rty_P_out[13689], real_T rty_aug_velocity_out[3], real_T
  rty_aug_velocity_out_p[3], real_T rty_aug_velocity_out_l[48], real_T
  rty_aug_velocity_out_o[48])
{
  int32_T i;

  // SignalConversion: '<S128>/Signal Conversion'
  *rty_state_out = *rtu_state_in;

  // Inport: '<S128>/P_in'
  for (i = 0; i < 13689; i++) {
    rty_P_out[i] = rtu_P_in[i];
  }

  // End of Inport: '<S128>/P_in'

  // SignalConversion: '<S128>/Signal Conversion1'
  rty_aug_velocity_out[0] = rtu_aug_velocity[0];
  rty_aug_velocity_out[1] = rtu_aug_velocity[1];
  rty_aug_velocity_out[2] = rtu_aug_velocity[2];

  // SignalConversion: '<S128>/Signal Conversion1'
  rty_aug_velocity_out_p[0] = rtu_aug_velocity_p[0];
  rty_aug_velocity_out_p[1] = rtu_aug_velocity_p[1];
  rty_aug_velocity_out_p[2] = rtu_aug_velocity_p[2];

  // SignalConversion: '<S128>/Signal Conversion1'
  for (i = 0; i < 48; i++) {
    rty_aug_velocity_out_l[i] = rtu_aug_velocity_l[i];
  }

  // End of SignalConversion: '<S128>/Signal Conversion1'

  // SignalConversion: '<S128>/Signal Conversion1'
  for (i = 0; i < 48; i++) {
    rty_aug_velocity_out_o[i] = rtu_aug_velocity_o[i];
  }

  // End of SignalConversion: '<S128>/Signal Conversion1'
}

//
// Termination for action system:
//    '<S125>/If Action Subsystem1'
//    '<S126>/If Action Subsystem1'
//
void est_est_IfActionSubsystem1_Term(void)
{
}

// Model step function
void est_estimator_step(RT_MODEL_est_estimator_T *const est_estimator_M,
  cvs_landmark_msg *est_estimator_U_landmark_msg, cvs_registration_pulse
  *est_estimator_U_VisionRegistration, cvs_optical_flow_msg
  *est_estimator_U_cvs_optical_flow_msg_n, cvs_handrail_msg
  *est_estimator_U_handrail_msg, imu_msg *est_estimator_U_imu_msg_c, cmc_msg
  *est_estimator_U_cmc_msg_o, real32_T est_estimator_U_Q_ISS2B[4], kfl_msg
  *est_estimator_Y_kfl_msg_h, ase_cov_datatype est_estimator_Y_P_out[13689])
{
  P_est_estimator_T *est_estimator_P = ((P_est_estimator_T *)
    est_estimator_M->defaultParam);
  B_est_estimator_T *est_estimator_B = ((B_est_estimator_T *)
    est_estimator_M->blockIO);
  DW_est_estimator_T *est_estimator_DW = ((DW_est_estimator_T *)
    est_estimator_M->dwork);

  // local block i/o variables
  real32_T rtb_ex_matrix_multiply1[180];
  real32_T rtb_ex_matrix_multiply3[225];
  real32_T rtb_ex_of_residual_and_h_o2[96];
  real32_T rtb_ex_of_residual_and_h_o6[50];
  real32_T rtb_ex_compute_delta_state_and_[117];
  real32_T rtb_ex_apply_delta_state_o1[4];
  real32_T rtb_ex_apply_delta_state_o2[3];
  real32_T rtb_ex_apply_delta_state_o3[3];
  real32_T rtb_ex_apply_delta_state_o4[3];
  real32_T rtb_ex_apply_delta_state_o5[3];
  real32_T rtb_ex_apply_delta_state_o6[4];
  real32_T rtb_ex_apply_delta_state_o7[3];
  real32_T rtb_ex_apply_delta_state_o9[64];
  real32_T rtb_ex_apply_delta_state_o10[48];
  real32_T rtb_ex_compute_delta_state_an_p[117];
  real32_T rtb_ex_apply_delta_state_o1_d[4];
  real32_T rtb_ex_apply_delta_state_o2_i[3];
  real32_T rtb_ex_apply_delta_state_o3_e[3];
  real32_T rtb_ex_apply_delta_state_o4_g[3];
  real32_T rtb_ex_apply_delta_state_o5_i[3];
  real32_T rtb_ex_apply_delta_state_o6_d[4];
  real32_T rtb_ex_apply_delta_state_o7_p[3];
  real32_T rtb_ex_apply_delta_state_o9_c[64];
  real32_T rtb_ex_apply_delta_state_o10_i[48];
  real32_T rtb_ex_matrix_multiply5[225];
  real32_T rtb_MathFunction_eu[225];
  int32_T rtb_ex_of_residual_and_h_o1;
  int32_T rtb_ex_compute_delta_state_an_g;
  int32_T rtb_ex_compute_delta_state_a_pg;
  uint32_T rtb_ex_of_residual_and_h_o4;
  uint16_T rtb_ex_apply_delta_state_o8;
  uint16_T rtb_ex_apply_delta_state_o8_j;
  uint8_T rtb_ex_of_residual_and_h_o5;

  // local scratch DWork variables
  int32_T ForEach_itr;
  int32_T ForEach_itr_g;
  real32_T accel[3];
  real32_T S[9];
  real32_T C[9];
  static const int8_T b[9] = { -1, 0, 0, 0, -1, 0, 0, 0, -1 };

  static const int8_T c[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0 };

  static const real32_T theta[3] = { 0.425873F, 1.8801527F, 3.92572474F };

  static const int8_T d[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  boolean_T d_0[12];
  real32_T x[12];
  boolean_T b_0[17];
  int32_T ar;
  static const int8_T Aug_Indx[102] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88,
    89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102 };

  real_T kept_augmentations[15];
  real_T of_in_prange[90];
  real32_T M[126];
  static const int8_T g[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  real_T camera_tf_camera1[256];
  real32_T global_tf_camera1[16];
  real32_T A[96];
  real32_T b_1[32];
  real_T num_augs;
  real_T aug_ind;
  real_T ind0;
  int32_T b_m;
  static const int8_T b_2[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  int32_T handrail_knowledge_dims;
  static const int8_T t[12] = { 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0 };

  static const int8_T v[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  static const int8_T c_a[9] = { -1, 0, 0, 0, -1, 0, 0, 0, -1 };

  real_T camera_ml_tf_global[12];
  real_T next_ml_tf_global[12];
  real32_T temp[6];
  int32_T num_original;
  boolean_T empty_non_axis_sizes;
  int32_T nx;
  static const int8_T g_0[12] = { 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0 };

  uint32_T rtb_BitwiseOperator;
  real32_T rtb_P_B_ISS_ISS[3];
  real_T rtb_UnitDelay18[50];
  real_T rtb_UnitDelay19[50];
  real32_T rtb_UnitDelay25[4];
  real32_T rtb_Sum1_k3[3];
  boolean_T rtb_Compare;
  boolean_T rtb_FixPtRelationalOperator_n;
  real32_T rtb_VectorConcatenate[16];
  real32_T rtb_VectorConcatenate_hq[16];
  real32_T rtb_Assignment_b[9];
  real32_T rtb_Sum_k1;
  uint8_T rtb_Saturation_n;
  real32_T rtb_ImpAsg_InsertedFor_Out1_a_d[3];
  real32_T rtb_Product1[4];
  real32_T rtb_Assignment_n[9];
  real32_T rtb_ImpAsg_InsertedFor_Out1_at_[3];
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_of_update_flag;
  real32_T rtb_Q[144];
  real32_T rtb_state_trans[225];
  real_T rtb_ml_vel_aug[3];
  real_T rtb_ml_omega_aug[3];
  real32_T rtb_Merge_o[4];
  real32_T rtb_Sum2[3];
  int32_T s12_iter;
  real32_T rtb_VectorConcatenate_c[16];
  real32_T rtb_VectorConcatenate_p[16];
  real32_T rtb_Add_e[3];
  real32_T rtb_VectorConcatenate_m[16];
  real32_T rtb_VectorConcatenate_i[16];
  uint8_T rtb_Switch_m;
  real32_T rtb_global_points[200];
  real32_T rtb_camera_tf_global[256];
  int32_T rtb_valid_out[800];
  real32_T rtb_Gain1_f;
  real32_T rtb_Assignment_ef[9];
  real32_T rtb_Sum_l;
  uint8_T rtb_numFeatures_f;
  real32_T rtb_Switch1;
  uint8_T rtb_BusCreator2_update_ML_featu;
  uint32_T rtb_BusAssignment_aug_state_enu;
  real32_T rtb_Product2[16];
  boolean_T rtb_Compare_ic[50];
  real32_T rtb_Sum_b[225];
  real_T rtb_of_vel_aug[48];
  real_T rtb_of_omega_aug[48];
  kfl_msg rtb_Merge2;
  ase_cov_datatype rtb_Assignment6[90];
  ase_cov_datatype rtb_Product2_b[90];
  ase_cov_datatype rtb_Product3[576];
  kfl_msg rtb_BusAssignment_a;
  real32_T rtb_Product_j[6];
  real32_T rtb_H_out[702];
  real32_T rtb_R_mat[36];
  real32_T rtb_hr_global_landmarks[150];
  real32_T rtb_Assignment1[180];
  real32_T rtb_MathFunction2[180];
  real32_T rtb_ex_matrix_multiply4[225];
  real_T ml_vel_aug[3];
  real_T ml_omega_aug[3];
  uint8_T numFeatures;
  real32_T hr_P_hr_ISS_ISS[3];
  real_T of_vel_aug[48];
  real_T of_omega_aug[48];
  real32_T UnitDelay_DSTATE_n_V_B_ISS_ISS[3];
  real32_T UnitDelay_DSTATE_n_accel_bias[3];
  real32_T UnitDelay_DSTATE_n_ml_quat_ISS2[4];
  real32_T UnitDelay_DSTATE_n_ml_P_cam_ISS[3];
  real32_T UnitDelay_DSTATE_n_of_quat_ISS2[64];
  real32_T UnitDelay_DSTATE_n_of_P_cam_ISS[48];
  ase_cov_datatype UnitDelay_DSTATE_n_cov_diag[117];
  uint16_T UnitDelay_DSTATE_n_kfl_status;
  real_T UnitDelay_DSTATE_n_of_mahal_dis[50];
  real_T UnitDelay_DSTATE_n_ml_mahal_dis[50];
  real32_T UnitDelay_DSTATE_n_P_EST_ISS_IS[3];
  uint32_T UnitDelay_DSTATE_aug_state_enum;
  int32_T i;
  real_T rtb_ml_vel_aug_0[3];
  real32_T rtb_Compare_2[4];
  real_T tmp[3];
  real32_T rtb_Switch1_0[2];
  real32_T tmp_0[2];
  real32_T rtb_Switch1_1[2];
  real32_T H[4];
  int32_T rtb_valid_out_0[16];
  uint32_T tmp_1[17];
  real32_T tmp_2[117];
  real32_T rtb_VectorConcatenate_l[16];
  real32_T rtb_Product1_0[9];
  real32_T rtb_Assignment_o[9];
  real32_T tmp_3[9];
  real32_T rtb_Assignment_l[9];
  real32_T rtb_Product1_1[12];
  real32_T rtb_Product1_2[12];
  int32_T br;
  real32_T tmp_4[9];
  real32_T tmp_5[9];
  int32_T i_0;
  real32_T tmp_6[9];
  real32_T h[6];
  real32_T tmp_7[9];
  real32_T temp_0[6];
  real32_T temp_1[6];
  real32_T temp_2[6];
  real32_T tmp_8[12];
  real32_T v_0[18];
  real32_T S_0[18];
  real_T tmp_9;
  real32_T tmp_a[9];
  real32_T tmp_b[9];
  ase_cov_datatype Switch1[90];
  real32_T tmp_c[9];
  real32_T tmp_d[9];
  real32_T rtb_Merge2_0[60];
  real_T rtb_VectorConcatenate_o[4];
  real32_T tmp_e[9];
  real32_T rtb_BusAssignment_h[48];
  real32_T M_0[126];
  real32_T M_1[126];
  real32_T M_2[540];
  real32_T tmp_f[9];
  real32_T rtb_Merge2_1[9];
  int8_T tmp_g[6];
  int8_T b_data[12];
  int8_T c_data[12];
  int8_T valid_indx_mat_data[102];
  int8_T c_data_0[17];
  int8_T f_data[90];
  int8_T rot_indices_data[63];
  int8_T c_data_1[63];
  real32_T C_data[63];
  int16_T h_data[1600];
  int32_T x_sizes[3];
  real32_T a_data[96];
  real32_T c_a_data[189];
  real32_T newerr_data[200];
  real32_T r_data[150];
  real32_T landmark_error_rail_frame_data[150];
  real_T r_vec_data[150];
  real32_T H_data[900];
  real32_T T_H_data[900];
  int16_T p_data[150];
  real32_T d_result_data[200];
  real32_T y_data[150];
  real32_T b_a_data[900];
  real32_T camera_landmarks_data[150];
  real32_T z_est_data[100];
  real32_T r_data_0[100];
  real32_T next_landmarks_data[150];
  real32_T omega_error_data[100];
  real_T r_vec_data_0[100];
  real32_T H_data_0[600];
  int32_T H_sizes[2];
  boolean_T invalid_vec_data[50];
  boolean_T invalid_data[100];
  int32_T q1_sizes[2];
  real32_T T_H_data_0[600];
  int32_T T_H_sizes[2];
  int8_T e_data[50];
  real32_T varargin_1_data[150];
  real32_T y_data_0[100];
  boolean_T g_result_data[100];
  real32_T a_data_0[600];
  int32_T of_measured_in_sizes[3];
  real32_T A_data[96];
  int8_T valid_indx_mat_data_0[102];
  real32_T b_data_0[32];
  boolean_T d_1;
  int32_T C_sizes_idx_1;
  int32_T O_sizes_idx_0;
  int32_T z_est_sizes_idx_1;
  int8_T c_sz_idx_0;
  int16_T tmp_h;
  real32_T UnitDelay_DSTATE_n_P_B_ISS_ISS_;
  real32_T UnitDelay_DSTATE_n_A_B_ISS_ISS_;
  real32_T UnitDelay_DSTATE_n_P_B_ISS_IS_0;
  real32_T UnitDelay_DSTATE_n_hr_P_hr_ISS_;
  real32_T UnitDelay_DSTATE_n_hr_P_hr_IS_0;
  real32_T UnitDelay_DSTATE_n_hr_P_hr_IS_1;
  real32_T UnitDelay_DSTATE_n_hr_quat_ISS2;
  real32_T UnitDelay_DSTATE_n_hr_quat_IS_0;
  real32_T UnitDelay_DSTATE_n_hr_quat_IS_1;
  real32_T UnitDelay_DSTATE_n_hr_quat_IS_2;
  real32_T hr_quat_ISS2hr_idx_0;
  real32_T hr_quat_ISS2hr_idx_1;
  real32_T hr_quat_ISS2hr_idx_2;
  real32_T hr_quat_ISS2hr_idx_3;
  boolean_T exitg1;
  boolean_T exitg2;

  // Outputs for Atomic SubSystem: '<Root>/est_estimator'
  // UnitDelay: '<S2>/Unit Delay20'
  rtb_ml_vel_aug[0] = est_estimator_DW->UnitDelay20_DSTATE[0];

  // UnitDelay: '<S2>/Unit Delay21'
  rtb_ml_omega_aug[0] = est_estimator_DW->UnitDelay21_DSTATE[0];

  // UnitDelay: '<S2>/Unit Delay20'
  rtb_ml_vel_aug[1] = est_estimator_DW->UnitDelay20_DSTATE[1];

  // UnitDelay: '<S2>/Unit Delay21'
  rtb_ml_omega_aug[1] = est_estimator_DW->UnitDelay21_DSTATE[1];

  // UnitDelay: '<S2>/Unit Delay20'
  rtb_ml_vel_aug[2] = est_estimator_DW->UnitDelay20_DSTATE[2];

  // UnitDelay: '<S2>/Unit Delay21'
  rtb_ml_omega_aug[2] = est_estimator_DW->UnitDelay21_DSTATE[2];

  // UnitDelay: '<S2>/Unit Delay22'
  memcpy(&rtb_of_vel_aug[0], &est_estimator_DW->UnitDelay22_DSTATE[0], (uint32_T)
         (48U * sizeof(real_T)));

  // UnitDelay: '<S2>/Unit Delay23'
  memcpy(&rtb_of_omega_aug[0], &est_estimator_DW->UnitDelay23_DSTATE[0],
         (uint32_T)(48U * sizeof(real_T)));

  // Assignment: '<S2>/Assignment' incorporates:
  //   Constant: '<S2>/Constant2'

  memcpy(&est_estimator_B->Assignment[0], &est_estimator_P->Constant2_Value_ad[0],
         (uint32_T)(13689U * sizeof(real32_T)));

  // SignalConversion: '<S2>/TmpSignal ConversionAtAssignmentInport2' incorporates:
  //   Constant: '<S2>/Constant4'
  //   Constant: '<S2>/Constant5'
  //   Gain: '<S2>/Gain'

  for (i = 0; i < 15; i++) {
    tmp_2[i] = est_estimator_P->tun_ase_state_ic_cov_diag[i];
  }

  for (i = 0; i < 102; i++) {
    tmp_2[(int32_T)(i + 15)] = est_estimator_P->tun_aug_ic_cov *
      est_estimator_P->Constant5_Value_a[i];
  }

  // Assignment: '<S2>/Assignment' incorporates:
  //   SignalConversion: '<S2>/TmpSignal ConversionAtAssignmentInport2'

  for (i = 0; i < 117; i++) {
    est_estimator_B->Assignment[(int32_T)(118 * i)] = tmp_2[i];
  }

  // Delay: '<S2>/Delay'
  if ((int32_T)est_estimator_DW->icLoad != 0) {
    memcpy(&est_estimator_DW->Delay_DSTATE[0], &est_estimator_B->Assignment[0],
           (uint32_T)(13689U * sizeof(ase_cov_datatype)));
  }

  // UnitDelay: '<S2>/Unit Delay18'
  memcpy(&rtb_UnitDelay18[0], &est_estimator_DW->UnitDelay18_DSTATE[0],
         (uint32_T)(50U * sizeof(real_T)));

  // UnitDelay: '<S2>/Unit Delay19'
  memcpy(&rtb_UnitDelay19[0], &est_estimator_DW->UnitDelay19_DSTATE[0],
         (uint32_T)(50U * sizeof(real_T)));

  // UnitDelay: '<S2>/Unit Delay25'
  rtb_UnitDelay25[0] = est_estimator_DW->UnitDelay25_DSTATE[0];
  rtb_UnitDelay25[1] = est_estimator_DW->UnitDelay25_DSTATE[1];
  rtb_UnitDelay25[2] = est_estimator_DW->UnitDelay25_DSTATE[2];
  rtb_UnitDelay25[3] = est_estimator_DW->UnitDelay25_DSTATE[3];

  // BusCreator: '<S2>/Bus Creator2' incorporates:
  //   UnitDelay: '<S2>/Unit Delay16'
  //   UnitDelay: '<S2>/Unit Delay17'

  numFeatures = est_estimator_DW->UnitDelay16_DSTATE;
  rtb_BusCreator2_update_ML_featu = est_estimator_DW->UnitDelay17_DSTATE;

  // Sum: '<S11>/Sum of Elements2' incorporates:
  //   Inport: '<Root>/handrail_msg'

  UnitDelay_DSTATE_aug_state_enum = (uint32_T)
    est_estimator_U_handrail_msg->cvs_valid_flag[0];
  for (ar = 0; ar < 49; ar++) {
    UnitDelay_DSTATE_aug_state_enum += (uint32_T)
      est_estimator_U_handrail_msg->cvs_valid_flag[(int32_T)(ar + 1)];
  }

  // RelationalOperator: '<S33>/Compare' incorporates:
  //   Constant: '<S33>/Constant'
  //   Sum: '<S11>/Sum of Elements2'

  rtb_Compare = ((uint8_T)UnitDelay_DSTATE_aug_state_enum >=
                 est_estimator_P->Constant_Value_oq);

  // Logic: '<S72>/Logical Operator8' incorporates:
  //   Inport: '<Root>/handrail_msg'

  empty_non_axis_sizes = ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag
    [0] != 0);
  for (handrail_knowledge_dims = 0; handrail_knowledge_dims < 49;
       handrail_knowledge_dims++) {
    empty_non_axis_sizes = (empty_non_axis_sizes || ((int32_T)
      est_estimator_U_handrail_msg->cvs_valid_flag[(int32_T)
      (handrail_knowledge_dims + 1)] != 0));
  }

  // RelationalOperator: '<S69>/FixPt Relational Operator' incorporates:
  //   Inport: '<Root>/cmc_msg'
  //   SignalConversion: '<S1>/Signal Conversion'
  //   UnitDelay: '<S69>/Delay Input1'

  rtb_FixPtRelationalOperator_n =
    (est_estimator_U_cmc_msg_o->localization_mode_cmd !=
     est_estimator_DW->DelayInput1_DSTATE_k);

  // Switch: '<S42>/Switch' incorporates:
  //   S-Function (sfix_bitop): '<S68>/FixPt Bitwise Operator3'
  //   S-Function (sfix_bitop): '<S68>/FixPt Bitwise Operator4'
  //   S-Function (sfix_bitop): '<S68>/FixPt Bitwise Operator5'
  //   UnitDelay: '<S2>/Unit Delay9'

  if (rtb_FixPtRelationalOperator_n) {
    rtb_BitwiseOperator = (uint32_T)~(uint32_T)((uint32_T)
      ~est_estimator_DW->UnitDelay9_DSTATE |
      est_estimator_P->FixPtBitwiseOperator3_BitMask);
  } else {
    rtb_BitwiseOperator = est_estimator_DW->UnitDelay9_DSTATE;
  }

  // End of Switch: '<S42>/Switch'

  // BusAssignment: '<S42>/Bus Assignment'
  rtb_BusAssignment_aug_state_enu = rtb_BitwiseOperator;

  // Constant: '<S115>/Constant3'
  rtb_VectorConcatenate[0] = est_estimator_P->Constant3_Value_c4;

  // BusAssignment: '<S42>/Bus Assignment' incorporates:
  //   UnitDelay: '<S2>/Unit Delay24'

  rtb_Add_e[0] = est_estimator_DW->UnitDelay24_DSTATE[0];
  rtb_Add_e[1] = est_estimator_DW->UnitDelay24_DSTATE[1];
  rtb_Add_e[2] = est_estimator_DW->UnitDelay24_DSTATE[2];

  // Gain: '<S115>/Gain' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[1] = est_estimator_P->Gain_Gain_n1 * (real32_T)
    est_estimator_P->Constant_Value_l[2];

  // SignalConversion: '<S115>/ConcatBufferAtVector ConcatenateIn3' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[2] = (real32_T)est_estimator_P->Constant_Value_l[1];

  // Gain: '<S115>/Gain1' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[3] = est_estimator_P->Gain1_Gain_au * (real32_T)
    est_estimator_P->Constant_Value_l[0];

  // SignalConversion: '<S115>/ConcatBufferAtVector ConcatenateIn5' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[4] = (real32_T)est_estimator_P->Constant_Value_l[2];

  // Constant: '<S115>/Constant2'
  rtb_VectorConcatenate[5] = est_estimator_P->Constant2_Value_am;

  // Gain: '<S115>/Gain2' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[6] = est_estimator_P->Gain2_Gain_a5 * (real32_T)
    est_estimator_P->Constant_Value_l[0];

  // Gain: '<S115>/Gain3' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[7] = est_estimator_P->Gain3_Gain_m * (real32_T)
    est_estimator_P->Constant_Value_l[1];

  // Gain: '<S115>/Gain4' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[8] = est_estimator_P->Gain4_Gain_h * (real32_T)
    est_estimator_P->Constant_Value_l[1];

  // SignalConversion: '<S115>/ConcatBufferAtVector ConcatenateIn10' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[9] = (real32_T)est_estimator_P->Constant_Value_l[0];

  // Constant: '<S115>/Constant1'
  rtb_VectorConcatenate[10] = est_estimator_P->Constant1_Value_p;

  // Gain: '<S115>/Gain5' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[11] = est_estimator_P->Gain5_Gain_a * (real32_T)
    est_estimator_P->Constant_Value_l[2];

  // SignalConversion: '<S115>/ConcatBufferAtVector ConcatenateIn13' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[12] = (real32_T)est_estimator_P->Constant_Value_l[0];

  // SignalConversion: '<S115>/ConcatBufferAtVector ConcatenateIn14' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[13] = (real32_T)est_estimator_P->Constant_Value_l[1];

  // SignalConversion: '<S115>/ConcatBufferAtVector ConcatenateIn15' incorporates:
  //   Constant: '<S98>/Constant'
  //   DataTypeConversion: '<S112>/Conversion'

  rtb_VectorConcatenate[14] = (real32_T)est_estimator_P->Constant_Value_l[2];

  // Constant: '<S115>/Constant'
  rtb_VectorConcatenate[15] = est_estimator_P->Constant_Value_d;

  // Constant: '<S116>/Constant3'
  rtb_VectorConcatenate_hq[0] = est_estimator_P->Constant3_Value_dg;

  // Sum: '<S58>/Sum' incorporates:
  //   Constant: '<S41>/Constant'
  //   Constant: '<S58>/Constant1'
  //   DataTypeConversion: '<S60>/Conversion'
  //   Gain: '<S58>/Gain'
  //   Math: '<S58>/Math Function'

  rtb_Sum_k1 = est_estimator_P->tun_abp_quat_body2imu[3] *
    est_estimator_P->tun_abp_quat_body2imu[3] * est_estimator_P->Gain_Gain_g0 -
    (real32_T)est_estimator_P->Constant1_Value_mb;

  // Assignment: '<S58>/Assignment' incorporates:
  //   Constant: '<S58>/Constant2'
  //   DataTypeConversion: '<S59>/Conversion'

  for (i = 0; i < 9; i++) {
    rtb_Assignment_b[i] = (real32_T)est_estimator_P->Constant2_Value_a[i];
  }

  rtb_Assignment_b[0] = rtb_Sum_k1;
  rtb_Assignment_b[4] = rtb_Sum_k1;
  rtb_Assignment_b[8] = rtb_Sum_k1;

  // End of Assignment: '<S58>/Assignment'

  // Gain: '<S58>/Gain1' incorporates:
  //   Constant: '<S41>/Constant'

  rtb_Sum_k1 = est_estimator_P->Gain1_Gain_jx *
    est_estimator_P->tun_abp_quat_body2imu[3];

  // Product: '<S58>/Product' incorporates:
  //   Constant: '<S41>/Constant'
  //   Constant: '<S61>/Constant3'
  //   DataTypeConversion: '<S62>/Conversion'
  //   Gain: '<S61>/Gain'
  //   Gain: '<S61>/Gain1'
  //   Gain: '<S61>/Gain2'

  rtb_Product1_0[0] = (real32_T)est_estimator_P->Constant3_Value_k;
  rtb_Product1_0[1] = est_estimator_P->tun_abp_quat_body2imu[2];
  rtb_Product1_0[2] = est_estimator_P->Gain_Gain_e *
    est_estimator_P->tun_abp_quat_body2imu[1];
  rtb_Product1_0[3] = est_estimator_P->Gain1_Gain_nf *
    est_estimator_P->tun_abp_quat_body2imu[2];
  rtb_Product1_0[4] = (real32_T)est_estimator_P->Constant3_Value_k;
  rtb_Product1_0[5] = est_estimator_P->tun_abp_quat_body2imu[0];
  rtb_Product1_0[6] = est_estimator_P->tun_abp_quat_body2imu[1];
  rtb_Product1_0[7] = est_estimator_P->Gain2_Gain_h5 *
    est_estimator_P->tun_abp_quat_body2imu[0];
  rtb_Product1_0[8] = (real32_T)est_estimator_P->Constant3_Value_k;

  // Math: '<S49>/Math Function' incorporates:
  //   Constant: '<S41>/Constant'
  //   Gain: '<S58>/Gain2'
  //   Math: '<S58>/Math Function1'
  //   Product: '<S58>/Product1'

  for (i = 0; i < 3; i++) {
    rtb_Assignment_o[i] = est_estimator_P->tun_abp_quat_body2imu[0] *
      est_estimator_P->tun_abp_quat_body2imu[i];
    rtb_Assignment_o[(int32_T)(i + 3)] = est_estimator_P->tun_abp_quat_body2imu
      [1] * est_estimator_P->tun_abp_quat_body2imu[i];
    rtb_Assignment_o[(int32_T)(i + 6)] = est_estimator_P->tun_abp_quat_body2imu
      [2] * est_estimator_P->tun_abp_quat_body2imu[i];
  }

  // End of Math: '<S49>/Math Function'
  for (i = 0; i < 3; i++) {
    // Sum: '<S58>/Sum1' incorporates:
    //   Gain: '<S58>/Gain2'
    //   Product: '<S49>/Product'
    //   Product: '<S58>/Product'

    rtb_Assignment_n[(int32_T)(3 * i)] = (rtb_Assignment_b[i] - rtb_Sum_k1 *
      rtb_Product1_0[i]) + rtb_Assignment_o[(int32_T)(3 * i)] *
      est_estimator_P->Gain2_Gain_gg;
    rtb_Assignment_n[(int32_T)(1 + (int32_T)(3 * i))] = (rtb_Assignment_b
      [(int32_T)(i + 3)] - rtb_Product1_0[(int32_T)(i + 3)] * rtb_Sum_k1) +
      rtb_Assignment_o[(int32_T)((int32_T)(3 * i) + 1)] *
      est_estimator_P->Gain2_Gain_gg;
    rtb_Assignment_n[(int32_T)(2 + (int32_T)(3 * i))] = (rtb_Assignment_b
      [(int32_T)(i + 6)] - rtb_Product1_0[(int32_T)(i + 6)] * rtb_Sum_k1) +
      rtb_Assignment_o[(int32_T)((int32_T)(3 * i) + 2)] *
      est_estimator_P->Gain2_Gain_gg;

    // Sum: '<S41>/Sum1' incorporates:
    //   Constant: '<S41>/Constant1'
    //   Inport: '<Root>/imu_msg'
    //   Product: '<S49>/Product'

    rtb_P_B_ISS_ISS[i] = est_estimator_U_imu_msg_c->imu_omega_B_ECI_sensor[i] -
      est_estimator_P->ase_gyro_fixed_bias[i];
  }

  // Product: '<S49>/Product'
  for (i = 0; i < 3; i++) {
    rtb_Sum1_k3[i] = rtb_Assignment_n[(int32_T)(i + 6)] * rtb_P_B_ISS_ISS[2] +
      (rtb_Assignment_n[(int32_T)(i + 3)] * rtb_P_B_ISS_ISS[1] +
       rtb_Assignment_n[i] * rtb_P_B_ISS_ISS[0]);
  }

  // Saturate: '<S41>/Saturation' incorporates:
  //   Inport: '<Root>/cmc_msg'
  //   SignalConversion: '<S1>/Signal Conversion'

  if (est_estimator_U_cmc_msg_o->speed_gain_cmd >
      est_estimator_P->fam_impeller_speeds_cnt) {
    rtb_Saturation_n = est_estimator_P->fam_impeller_speeds_cnt;
  } else if (est_estimator_U_cmc_msg_o->speed_gain_cmd <
             est_estimator_P->Saturation_LowerSat_n) {
    rtb_Saturation_n = est_estimator_P->Saturation_LowerSat_n;
  } else {
    rtb_Saturation_n = est_estimator_U_cmc_msg_o->speed_gain_cmd;
  }

  // End of Saturate: '<S41>/Saturation'

  // Outputs for Iterator SubSystem: '<S41>/filter' incorporates:
  //   ForEach: '<S46>/For Each'

  for (ForEach_itr_g = 0; ForEach_itr_g < 3; ForEach_itr_g++) {
    // MATLAB Function: '<S46>/MATLAB Function1' incorporates:
    //   Constant: '<S46>/Constant'
    //   Constant: '<S46>/Constant2'
    //   Selector: '<S46>/Selector'

    est_estimator_MATLABFunction1(est_estimator_P->astrobee_fsw_step_size,
      est_estimator_P->fam_impeller_speeds[(int32_T)((int32_T)rtb_Saturation_n -
      1)], &est_estimator_B->CoreSubsys[ForEach_itr_g].sf_MATLABFunction1,
      &est_estimator_DW->CoreSubsys[ForEach_itr_g].sf_MATLABFunction1);

    // DiscreteTransferFcn: '<S46>/Discrete Transfer Fcn' incorporates:
    //   DiscreteTransferFcn: '<S46>/3 Hz Low Pass'

    rtb_Sum_k1 = (est_estimator_P->CoreSubsys.uHzLowPass_NumCoef *
                  est_estimator_DW->CoreSubsys[ForEach_itr_g].uHzLowPass_states
                  - est_estimator_B->CoreSubsys[ForEach_itr_g].
                  sf_MATLABFunction1.den_out[1] * est_estimator_DW->
                  CoreSubsys[ForEach_itr_g].DiscreteTransferFcn_states[0]) -
      est_estimator_B->CoreSubsys[ForEach_itr_g].sf_MATLABFunction1.den_out[2] *
      est_estimator_DW->CoreSubsys[ForEach_itr_g].DiscreteTransferFcn_states[1];
    rtb_Sum_l = (est_estimator_B->CoreSubsys[ForEach_itr_g].
                 sf_MATLABFunction1.num_out[0] * rtb_Sum_k1 +
                 est_estimator_B->CoreSubsys[ForEach_itr_g].
                 sf_MATLABFunction1.num_out[1] * est_estimator_DW->
                 CoreSubsys[ForEach_itr_g].DiscreteTransferFcn_states[0]) +
      est_estimator_B->CoreSubsys[ForEach_itr_g].sf_MATLABFunction1.num_out[2] *
      est_estimator_DW->CoreSubsys[ForEach_itr_g].DiscreteTransferFcn_states[1];

    // Update for DiscreteTransferFcn: '<S46>/3 Hz Low Pass' incorporates:
    //   ForEachSliceSelector: '<S46>/ImpSel_InsertedFor_In1_at_outport_0'

    est_estimator_DW->CoreSubsys[ForEach_itr_g].uHzLowPass_states =
      (rtb_Sum1_k3[ForEach_itr_g] -
       est_estimator_P->CoreSubsys.uHzLowPass_DenCoef[1] *
       est_estimator_DW->CoreSubsys[ForEach_itr_g].uHzLowPass_states) /
      est_estimator_P->CoreSubsys.uHzLowPass_DenCoef[0];

    // Update for DiscreteTransferFcn: '<S46>/Discrete Transfer Fcn'
    est_estimator_DW->CoreSubsys[ForEach_itr_g].DiscreteTransferFcn_states[1] =
      est_estimator_DW->CoreSubsys[ForEach_itr_g].DiscreteTransferFcn_states[0];
    est_estimator_DW->CoreSubsys[ForEach_itr_g].DiscreteTransferFcn_states[0] =
      rtb_Sum_k1;

    // ForEachSliceAssignment: '<S46>/ImpAsg_InsertedFor_Out1_at_inport_0'
    rtb_ImpAsg_InsertedFor_Out1_a_d[ForEach_itr_g] = rtb_Sum_l;
  }

  // End of Outputs for SubSystem: '<S41>/filter'

  // Sum: '<S6>/Sum' incorporates:
  //   UnitDelay: '<S2>/Unit Delay3'

  rtb_ImpAsg_InsertedFor_Out1_a_d[0] -= est_estimator_DW->UnitDelay3_DSTATE[0];
  rtb_ImpAsg_InsertedFor_Out1_a_d[1] -= est_estimator_DW->UnitDelay3_DSTATE[1];
  hr_quat_ISS2hr_idx_0 = rtb_ImpAsg_InsertedFor_Out1_a_d[2] -
    est_estimator_DW->UnitDelay3_DSTATE[2];

  // Gain: '<S116>/Gain'
  rtb_VectorConcatenate_hq[1] = est_estimator_P->Gain_Gain_co *
    hr_quat_ISS2hr_idx_0;

  // SignalConversion: '<S116>/ConcatBufferAtVector ConcatenateIn3'
  rtb_VectorConcatenate_hq[2] = rtb_ImpAsg_InsertedFor_Out1_a_d[1];

  // Gain: '<S116>/Gain1'
  rtb_VectorConcatenate_hq[3] = est_estimator_P->Gain1_Gain_cz *
    rtb_ImpAsg_InsertedFor_Out1_a_d[0];

  // SignalConversion: '<S116>/ConcatBufferAtVector ConcatenateIn5'
  rtb_VectorConcatenate_hq[4] = hr_quat_ISS2hr_idx_0;

  // Constant: '<S116>/Constant2'
  rtb_VectorConcatenate_hq[5] = est_estimator_P->Constant2_Value_c;

  // Gain: '<S116>/Gain2'
  rtb_VectorConcatenate_hq[6] = est_estimator_P->Gain2_Gain_g4 *
    rtb_ImpAsg_InsertedFor_Out1_a_d[0];

  // Gain: '<S116>/Gain3'
  rtb_VectorConcatenate_hq[7] = est_estimator_P->Gain3_Gain_fu *
    rtb_ImpAsg_InsertedFor_Out1_a_d[1];

  // Gain: '<S116>/Gain4'
  rtb_VectorConcatenate_hq[8] = est_estimator_P->Gain4_Gain_g *
    rtb_ImpAsg_InsertedFor_Out1_a_d[1];

  // SignalConversion: '<S116>/ConcatBufferAtVector ConcatenateIn10'
  rtb_VectorConcatenate_hq[9] = rtb_ImpAsg_InsertedFor_Out1_a_d[0];

  // Constant: '<S116>/Constant1'
  rtb_VectorConcatenate_hq[10] = est_estimator_P->Constant1_Value_o;

  // Gain: '<S116>/Gain5'
  rtb_VectorConcatenate_hq[11] = est_estimator_P->Gain5_Gain_jr *
    hr_quat_ISS2hr_idx_0;

  // SignalConversion: '<S116>/ConcatBufferAtVector ConcatenateIn13'
  rtb_VectorConcatenate_hq[12] = rtb_ImpAsg_InsertedFor_Out1_a_d[0];

  // SignalConversion: '<S116>/ConcatBufferAtVector ConcatenateIn14'
  rtb_VectorConcatenate_hq[13] = rtb_ImpAsg_InsertedFor_Out1_a_d[1];

  // SignalConversion: '<S116>/ConcatBufferAtVector ConcatenateIn15'
  rtb_VectorConcatenate_hq[14] = hr_quat_ISS2hr_idx_0;

  // Constant: '<S116>/Constant'
  rtb_VectorConcatenate_hq[15] = est_estimator_P->Constant_Value_lw;

  // Product: '<S113>/Product2' incorporates:
  //   Constant: '<S113>/Constant1'
  //   Constant: '<S113>/Constant3'
  //   Constant: '<S6>/Constant'
  //   Product: '<S113>/Product'
  //   Sum: '<S113>/Add'

  for (i = 0; i < 16; i++) {
    rtb_Product2[i] = (est_estimator_P->Constant3_Value_dc *
                       rtb_VectorConcatenate[i] * (real32_T)
                       est_estimator_P->ase_ts + rtb_VectorConcatenate_hq[i]) *
      est_estimator_P->Constant1_Value_i3 * (real32_T)est_estimator_P->ase_ts;
  }

  // End of Product: '<S113>/Product2'

  // MATLAB Function: '<S113>/MATLAB Function'
  est_estimator_MATLABFunction(rtb_Product2, &est_estimator_B->sf_MATLABFunction);

  // Product: '<S113>/Product5' incorporates:
  //   Constant: '<S6>/Constant'

  hr_quat_ISS2hr_idx_1 = (real32_T)est_estimator_P->ase_ts * (real32_T)
    est_estimator_P->ase_ts * (real32_T)est_estimator_P->ase_ts;
  for (i = 0; i < 4; i++) {
    for (b_m = 0; b_m < 4; b_m++) {
      // Product: '<S113>/Product4' incorporates:
      //   Sum: '<S113>/Add2'

      rtb_Product2[(int32_T)(b_m + (int32_T)(i << 2))] = 0.0F;

      // Product: '<S113>/Product3' incorporates:
      //   Sum: '<S113>/Add2'

      rtb_VectorConcatenate_l[(int32_T)(b_m + (int32_T)(i << 2))] = 0.0F;

      // Product: '<S113>/Product4' incorporates:
      //   Sum: '<S113>/Add2'

      rtb_Product2[(int32_T)(b_m + (int32_T)(i << 2))] +=
        rtb_VectorConcatenate_hq[(int32_T)(i << 2)] * rtb_VectorConcatenate[b_m];

      // Product: '<S113>/Product3' incorporates:
      //   Sum: '<S113>/Add2'

      rtb_VectorConcatenate_l[(int32_T)(b_m + (int32_T)(i << 2))] +=
        rtb_VectorConcatenate[(int32_T)(i << 2)] * rtb_VectorConcatenate_hq[b_m];

      // Product: '<S113>/Product4' incorporates:
      //   Sum: '<S113>/Add2'

      rtb_Product2[(int32_T)(b_m + (int32_T)(i << 2))] +=
        rtb_VectorConcatenate_hq[(int32_T)((int32_T)(i << 2) + 1)] *
        rtb_VectorConcatenate[(int32_T)(b_m + 4)];

      // Product: '<S113>/Product3' incorporates:
      //   Sum: '<S113>/Add2'

      rtb_VectorConcatenate_l[(int32_T)(b_m + (int32_T)(i << 2))] +=
        rtb_VectorConcatenate[(int32_T)((int32_T)(i << 2) + 1)] *
        rtb_VectorConcatenate_hq[(int32_T)(b_m + 4)];

      // Product: '<S113>/Product4' incorporates:
      //   Sum: '<S113>/Add2'

      rtb_Product2[(int32_T)(b_m + (int32_T)(i << 2))] +=
        rtb_VectorConcatenate_hq[(int32_T)((int32_T)(i << 2) + 2)] *
        rtb_VectorConcatenate[(int32_T)(b_m + 8)];

      // Product: '<S113>/Product3' incorporates:
      //   Sum: '<S113>/Add2'

      rtb_VectorConcatenate_l[(int32_T)(b_m + (int32_T)(i << 2))] +=
        rtb_VectorConcatenate[(int32_T)((int32_T)(i << 2) + 2)] *
        rtb_VectorConcatenate_hq[(int32_T)(b_m + 8)];

      // Product: '<S113>/Product4' incorporates:
      //   Sum: '<S113>/Add2'

      rtb_Product2[(int32_T)(b_m + (int32_T)(i << 2))] +=
        rtb_VectorConcatenate_hq[(int32_T)((int32_T)(i << 2) + 3)] *
        rtb_VectorConcatenate[(int32_T)(b_m + 12)];

      // Product: '<S113>/Product3' incorporates:
      //   Sum: '<S113>/Add2'

      rtb_VectorConcatenate_l[(int32_T)(b_m + (int32_T)(i << 2))] +=
        rtb_VectorConcatenate[(int32_T)((int32_T)(i << 2) + 3)] *
        rtb_VectorConcatenate_hq[(int32_T)(b_m + 12)];
    }
  }

  // Sum: '<S113>/Add1' incorporates:
  //   Constant: '<S113>/Constant2'
  //   Product: '<S113>/Product1'
  //   Product: '<S113>/Product5'
  //   Sum: '<S113>/Add2'

  for (i = 0; i < 4; i++) {
    rtb_VectorConcatenate[(int32_T)(i << 2)] = (rtb_Product2[(int32_T)(i << 2)]
      - rtb_VectorConcatenate_l[(int32_T)(i << 2)]) * hr_quat_ISS2hr_idx_1 /
      est_estimator_P->Constant2_Value_j0 + est_estimator_B->
      sf_MATLABFunction.y[(int32_T)(i << 2)];
    rtb_VectorConcatenate[(int32_T)(1 + (int32_T)(i << 2))] = (rtb_Product2
      [(int32_T)((int32_T)(i << 2) + 1)] - rtb_VectorConcatenate_l[(int32_T)
      ((int32_T)(i << 2) + 1)]) * hr_quat_ISS2hr_idx_1 /
      est_estimator_P->Constant2_Value_j0 + est_estimator_B->
      sf_MATLABFunction.y[(int32_T)((int32_T)(i << 2) + 1)];
    rtb_VectorConcatenate[(int32_T)(2 + (int32_T)(i << 2))] = (rtb_Product2
      [(int32_T)((int32_T)(i << 2) + 2)] - rtb_VectorConcatenate_l[(int32_T)
      ((int32_T)(i << 2) + 2)]) * hr_quat_ISS2hr_idx_1 /
      est_estimator_P->Constant2_Value_j0 + est_estimator_B->
      sf_MATLABFunction.y[(int32_T)((int32_T)(i << 2) + 2)];
    rtb_VectorConcatenate[(int32_T)(3 + (int32_T)(i << 2))] = (rtb_Product2
      [(int32_T)((int32_T)(i << 2) + 3)] - rtb_VectorConcatenate_l[(int32_T)
      ((int32_T)(i << 2) + 3)]) * hr_quat_ISS2hr_idx_1 /
      est_estimator_P->Constant2_Value_j0 + est_estimator_B->
      sf_MATLABFunction.y[(int32_T)((int32_T)(i << 2) + 3)];
  }

  // End of Sum: '<S113>/Add1'

  // Product: '<S113>/Product1' incorporates:
  //   UnitDelay: '<S2>/Unit Delay1'

  for (i = 0; i < 4; i++) {
    rtb_Sum_k1 = rtb_VectorConcatenate[(int32_T)(i + 12)] *
      est_estimator_DW->UnitDelay1_DSTATE[3] + (rtb_VectorConcatenate[(int32_T)
      (i + 8)] * est_estimator_DW->UnitDelay1_DSTATE[2] +
      (rtb_VectorConcatenate[(int32_T)(i + 4)] *
       est_estimator_DW->UnitDelay1_DSTATE[1] + rtb_VectorConcatenate[i] *
       est_estimator_DW->UnitDelay1_DSTATE[0]));
    rtb_Product1[i] = rtb_Sum_k1;
  }

  // If: '<S117>/If' incorporates:
  //   Inport: '<S118>/In1'

  if (rtb_Product1[3] < 0.0F) {
    // Outputs for IfAction SubSystem: '<S117>/Normalize' incorporates:
    //   ActionPort: '<S119>/Action Port'

    est_estimator_Normalize(rtb_Product1, rtb_Merge_o,
      (P_Normalize_est_estimator_T *)&est_estimator_P->Normalize);

    // End of Outputs for SubSystem: '<S117>/Normalize'
  } else {
    // Outputs for IfAction SubSystem: '<S117>/No-op' incorporates:
    //   ActionPort: '<S118>/Action Port'

    rtb_Merge_o[0] = rtb_Product1[0];
    rtb_Merge_o[1] = rtb_Product1[1];
    rtb_Merge_o[2] = rtb_Product1[2];
    rtb_Merge_o[3] = rtb_Product1[3];

    // End of Outputs for SubSystem: '<S117>/No-op'
  }

  // End of If: '<S117>/If'

  // Sqrt: '<S124>/Sqrt' incorporates:
  //   DotProduct: '<S124>/Dot Product'

  rtb_Sum_k1 = (real32_T)sqrt((real_T)(((rtb_Merge_o[0] * rtb_Merge_o[0] +
    rtb_Merge_o[1] * rtb_Merge_o[1]) + rtb_Merge_o[2] * rtb_Merge_o[2]) +
    rtb_Merge_o[3] * rtb_Merge_o[3]));

  // If: '<S120>/If' incorporates:
  //   DataTypeConversion: '<S120>/Data Type Conversion'
  //   Inport: '<S122>/In1'

  if ((real_T)rtb_Sum_k1 > 1.0E-7) {
    // Outputs for IfAction SubSystem: '<S120>/Normalize' incorporates:
    //   ActionPort: '<S123>/Action Port'

    est_estimator_Normalize_p(rtb_Merge_o, rtb_Sum_k1, rtb_Product1);

    // End of Outputs for SubSystem: '<S120>/Normalize'
  } else {
    // Outputs for IfAction SubSystem: '<S120>/No-op' incorporates:
    //   ActionPort: '<S122>/Action Port'

    rtb_Product1[0] = rtb_Merge_o[0];
    rtb_Product1[1] = rtb_Merge_o[1];
    rtb_Product1[2] = rtb_Merge_o[2];
    rtb_Product1[3] = rtb_Merge_o[3];

    // End of Outputs for SubSystem: '<S120>/No-op'
  }

  // End of If: '<S120>/If'

  // Sum: '<S107>/Sum' incorporates:
  //   Constant: '<S107>/Constant1'
  //   DataTypeConversion: '<S109>/Conversion'
  //   Gain: '<S107>/Gain'
  //   Math: '<S107>/Math Function'

  rtb_Sum_k1 = rtb_Product1[3] * rtb_Product1[3] * est_estimator_P->Gain_Gain_c0
    - (real32_T)est_estimator_P->Constant1_Value_c;

  // Assignment: '<S107>/Assignment' incorporates:
  //   Constant: '<S107>/Constant2'
  //   DataTypeConversion: '<S108>/Conversion'

  for (i = 0; i < 9; i++) {
    rtb_Assignment_n[i] = (real32_T)est_estimator_P->Constant2_Value_ja[i];
  }

  rtb_Assignment_n[0] = rtb_Sum_k1;
  rtb_Assignment_n[4] = rtb_Sum_k1;
  rtb_Assignment_n[8] = rtb_Sum_k1;

  // End of Assignment: '<S107>/Assignment'

  // Gain: '<S107>/Gain1'
  rtb_Sum_k1 = est_estimator_P->Gain1_Gain_il * rtb_Product1[3];

  // Product: '<S107>/Product' incorporates:
  //   Constant: '<S110>/Constant3'
  //   DataTypeConversion: '<S111>/Conversion'
  //   Gain: '<S110>/Gain'
  //   Gain: '<S110>/Gain1'
  //   Gain: '<S110>/Gain2'

  rtb_Assignment_ef[0] = (real32_T)est_estimator_P->Constant3_Value_c;
  rtb_Assignment_ef[1] = rtb_Product1[2];
  rtb_Assignment_ef[2] = est_estimator_P->Gain_Gain_lj * rtb_Product1[1];
  rtb_Assignment_ef[3] = est_estimator_P->Gain1_Gain_lb * rtb_Product1[2];
  rtb_Assignment_ef[4] = (real32_T)est_estimator_P->Constant3_Value_c;
  rtb_Assignment_ef[5] = rtb_Product1[0];
  rtb_Assignment_ef[6] = rtb_Product1[1];
  rtb_Assignment_ef[7] = est_estimator_P->Gain2_Gain_m4 * rtb_Product1[0];
  rtb_Assignment_ef[8] = (real32_T)est_estimator_P->Constant3_Value_c;

  // Math: '<S97>/Math Function' incorporates:
  //   Gain: '<S107>/Gain2'
  //   Math: '<S107>/Math Function1'
  //   Product: '<S107>/Product'
  //   Product: '<S107>/Product1'
  //   Sum: '<S107>/Sum1'

  for (i = 0; i < 3; i++) {
    rtb_Product1_0[i] = rtb_Product1[0] * rtb_Product1[i];
    rtb_Product1_0[(int32_T)(i + 3)] = rtb_Product1[1] * rtb_Product1[i];
    rtb_Product1_0[(int32_T)(i + 6)] = rtb_Product1[2] * rtb_Product1[i];
  }

  for (i = 0; i < 3; i++) {
    rtb_Assignment_b[(int32_T)(3 * i)] = (rtb_Assignment_n[i] - rtb_Sum_k1 *
      rtb_Assignment_ef[i]) + rtb_Product1_0[(int32_T)(3 * i)] *
      est_estimator_P->Gain2_Gain_j;
    rtb_Assignment_b[(int32_T)(1 + (int32_T)(3 * i))] = (rtb_Assignment_n
      [(int32_T)(i + 3)] - rtb_Assignment_ef[(int32_T)(i + 3)] * rtb_Sum_k1) +
      rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 1)] *
      est_estimator_P->Gain2_Gain_j;
    rtb_Assignment_b[(int32_T)(2 + (int32_T)(3 * i))] = (rtb_Assignment_n
      [(int32_T)(i + 6)] - rtb_Assignment_ef[(int32_T)(i + 6)] * rtb_Sum_k1) +
      rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 2)] *
      est_estimator_P->Gain2_Gain_j;
  }

  // End of Math: '<S97>/Math Function'

  // Sum: '<S63>/Sum' incorporates:
  //   Constant: '<S41>/Constant2'
  //   Constant: '<S63>/Constant1'
  //   DataTypeConversion: '<S65>/Conversion'
  //   Gain: '<S63>/Gain'
  //   Math: '<S63>/Math Function'

  rtb_Sum_k1 = est_estimator_P->tun_abp_quat_body2imu[3] *
    est_estimator_P->tun_abp_quat_body2imu[3] * est_estimator_P->Gain_Gain_p -
    (real32_T)est_estimator_P->Constant1_Value_l;

  // Assignment: '<S63>/Assignment' incorporates:
  //   Constant: '<S63>/Constant2'
  //   DataTypeConversion: '<S64>/Conversion'

  for (i = 0; i < 9; i++) {
    rtb_Assignment_n[i] = (real32_T)est_estimator_P->Constant2_Value_bl[i];
  }

  rtb_Assignment_n[0] = rtb_Sum_k1;
  rtb_Assignment_n[4] = rtb_Sum_k1;
  rtb_Assignment_n[8] = rtb_Sum_k1;

  // End of Assignment: '<S63>/Assignment'

  // Gain: '<S63>/Gain1' incorporates:
  //   Constant: '<S41>/Constant2'

  rtb_Sum_k1 = est_estimator_P->Gain1_Gain_fe *
    est_estimator_P->tun_abp_quat_body2imu[3];

  // Switch: '<S41>/Switch' incorporates:
  //   Constant: '<S41>/Constant3'
  //   Constant: '<S41>/Constant4'
  //   Constant: '<S41>/Constant6'
  //   Product: '<S48>/Product'

  if (est_estimator_P->tun_ase_gravity_removal >
      est_estimator_P->Switch_Threshold) {
    // Gain: '<S53>/Gain1' incorporates:
    //   Inport: '<Root>/true_q_ISS2B'

    rtb_Gain1_f = est_estimator_P->Gain1_Gain_d * est_estimator_U_Q_ISS2B[3];

    // Sum: '<S53>/Sum' incorporates:
    //   Constant: '<S53>/Constant1'
    //   DataTypeConversion: '<S55>/Conversion'
    //   Gain: '<S53>/Gain'
    //   Inport: '<Root>/true_q_ISS2B'
    //   Math: '<S53>/Math Function'

    rtb_Sum_l = est_estimator_U_Q_ISS2B[3] * est_estimator_U_Q_ISS2B[3] *
      est_estimator_P->Gain_Gain_l - (real32_T)
      est_estimator_P->Constant1_Value_k;

    // Assignment: '<S53>/Assignment' incorporates:
    //   Constant: '<S53>/Constant2'
    //   DataTypeConversion: '<S54>/Conversion'

    for (i = 0; i < 9; i++) {
      rtb_Assignment_ef[i] = (real32_T)est_estimator_P->Constant2_Value_p[i];
    }

    rtb_Assignment_ef[0] = rtb_Sum_l;
    rtb_Assignment_ef[4] = rtb_Sum_l;
    rtb_Assignment_ef[8] = rtb_Sum_l;

    // End of Assignment: '<S53>/Assignment'

    // Product: '<S53>/Product' incorporates:
    //   Constant: '<S56>/Constant3'
    //   DataTypeConversion: '<S57>/Conversion'
    //   Gain: '<S56>/Gain'
    //   Gain: '<S56>/Gain1'
    //   Gain: '<S56>/Gain2'
    //   Inport: '<Root>/true_q_ISS2B'

    rtb_Assignment_l[0] = (real32_T)est_estimator_P->Constant3_Value_i;
    rtb_Assignment_l[1] = est_estimator_U_Q_ISS2B[2];
    rtb_Assignment_l[2] = est_estimator_P->Gain_Gain * est_estimator_U_Q_ISS2B[1];
    rtb_Assignment_l[3] = est_estimator_P->Gain1_Gain * est_estimator_U_Q_ISS2B
      [2];
    rtb_Assignment_l[4] = (real32_T)est_estimator_P->Constant3_Value_i;
    rtb_Assignment_l[5] = est_estimator_U_Q_ISS2B[0];
    rtb_Assignment_l[6] = est_estimator_U_Q_ISS2B[1];
    rtb_Assignment_l[7] = est_estimator_P->Gain2_Gain_e *
      est_estimator_U_Q_ISS2B[0];
    rtb_Assignment_l[8] = (real32_T)est_estimator_P->Constant3_Value_i;

    // Product: '<S53>/Product1' incorporates:
    //   Gain: '<S53>/Gain2'
    //   Inport: '<Root>/true_q_ISS2B'
    //   Math: '<S53>/Math Function1'

    for (i = 0; i < 3; i++) {
      rtb_Product1_0[i] = est_estimator_U_Q_ISS2B[i] * est_estimator_U_Q_ISS2B[0];
      rtb_Product1_0[(int32_T)(i + 3)] = est_estimator_U_Q_ISS2B[i] *
        est_estimator_U_Q_ISS2B[1];
      rtb_Product1_0[(int32_T)(i + 6)] = est_estimator_U_Q_ISS2B[i] *
        est_estimator_U_Q_ISS2B[2];
    }

    // End of Product: '<S53>/Product1'

    // Sum: '<S53>/Sum1' incorporates:
    //   Gain: '<S53>/Gain2'
    //   Product: '<S48>/Product'
    //   Product: '<S53>/Product'

    for (i = 0; i < 3; i++) {
      rtb_Assignment_o[(int32_T)(3 * i)] = (rtb_Assignment_ef[(int32_T)(3 * i)]
        - rtb_Assignment_l[(int32_T)(3 * i)] * rtb_Gain1_f) + rtb_Product1_0
        [(int32_T)(3 * i)] * est_estimator_P->Gain2_Gain;
      rtb_Assignment_o[(int32_T)(1 + (int32_T)(3 * i))] = (rtb_Assignment_ef
        [(int32_T)((int32_T)(3 * i) + 1)] - rtb_Assignment_l[(int32_T)((int32_T)
        (3 * i) + 1)] * rtb_Gain1_f) + rtb_Product1_0[(int32_T)((int32_T)(3 * i)
        + 1)] * est_estimator_P->Gain2_Gain;
      rtb_Assignment_o[(int32_T)(2 + (int32_T)(3 * i))] = (rtb_Assignment_ef
        [(int32_T)((int32_T)(3 * i) + 2)] - rtb_Assignment_l[(int32_T)((int32_T)
        (3 * i) + 2)] * rtb_Gain1_f) + rtb_Product1_0[(int32_T)((int32_T)(3 * i)
        + 2)] * est_estimator_P->Gain2_Gain;
    }

    // End of Sum: '<S53>/Sum1'
    for (i = 0; i < 3; i++) {
      rtb_Sum1_k3[i] = rtb_Assignment_o[(int32_T)(i + 6)] *
        est_estimator_P->tun_ase_gravity_accel[2] + (rtb_Assignment_o[(int32_T)
        (i + 3)] * est_estimator_P->tun_ase_gravity_accel[1] +
        rtb_Assignment_o[i] * est_estimator_P->tun_ase_gravity_accel[0]);
    }
  } else {
    rtb_Sum1_k3[0] = est_estimator_P->Constant6_Value[0];
    rtb_Sum1_k3[1] = est_estimator_P->Constant6_Value[1];
    rtb_Sum1_k3[2] = est_estimator_P->Constant6_Value[2];
  }

  // End of Switch: '<S41>/Switch'

  // Product: '<S63>/Product' incorporates:
  //   Constant: '<S41>/Constant2'
  //   Constant: '<S66>/Constant3'
  //   DataTypeConversion: '<S67>/Conversion'
  //   Gain: '<S66>/Gain'
  //   Gain: '<S66>/Gain1'
  //   Gain: '<S66>/Gain2'

  tmp_3[0] = (real32_T)est_estimator_P->Constant3_Value_o;
  tmp_3[1] = est_estimator_P->tun_abp_quat_body2imu[2];
  tmp_3[2] = est_estimator_P->Gain_Gain_az *
    est_estimator_P->tun_abp_quat_body2imu[1];
  tmp_3[3] = est_estimator_P->Gain1_Gain_ln *
    est_estimator_P->tun_abp_quat_body2imu[2];
  tmp_3[4] = (real32_T)est_estimator_P->Constant3_Value_o;
  tmp_3[5] = est_estimator_P->tun_abp_quat_body2imu[0];
  tmp_3[6] = est_estimator_P->tun_abp_quat_body2imu[1];
  tmp_3[7] = est_estimator_P->Gain2_Gain_c *
    est_estimator_P->tun_abp_quat_body2imu[0];
  tmp_3[8] = (real32_T)est_estimator_P->Constant3_Value_o;

  // Math: '<S50>/Math Function' incorporates:
  //   Constant: '<S41>/Constant2'
  //   Gain: '<S63>/Gain2'
  //   Math: '<S63>/Math Function1'
  //   Product: '<S63>/Product1'

  for (i = 0; i < 3; i++) {
    rtb_Product1_0[i] = est_estimator_P->tun_abp_quat_body2imu[0] *
      est_estimator_P->tun_abp_quat_body2imu[i];
    rtb_Product1_0[(int32_T)(i + 3)] = est_estimator_P->tun_abp_quat_body2imu[1]
      * est_estimator_P->tun_abp_quat_body2imu[i];
    rtb_Product1_0[(int32_T)(i + 6)] = est_estimator_P->tun_abp_quat_body2imu[2]
      * est_estimator_P->tun_abp_quat_body2imu[i];
  }

  // End of Math: '<S50>/Math Function'
  for (i = 0; i < 3; i++) {
    // Sum: '<S63>/Sum1' incorporates:
    //   Gain: '<S63>/Gain2'
    //   Product: '<S50>/Product'
    //   Product: '<S63>/Product'

    rtb_Assignment_l[(int32_T)(3 * i)] = (rtb_Assignment_n[i] - rtb_Sum_k1 *
      tmp_3[i]) + rtb_Product1_0[(int32_T)(3 * i)] *
      est_estimator_P->Gain2_Gain_i5;
    rtb_Assignment_l[(int32_T)(1 + (int32_T)(3 * i))] = (rtb_Assignment_n
      [(int32_T)(i + 3)] - tmp_3[(int32_T)(i + 3)] * rtb_Sum_k1) +
      rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 1)] *
      est_estimator_P->Gain2_Gain_i5;
    rtb_Assignment_l[(int32_T)(2 + (int32_T)(3 * i))] = (rtb_Assignment_n
      [(int32_T)(i + 6)] - tmp_3[(int32_T)(i + 6)] * rtb_Sum_k1) +
      rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 2)] *
      est_estimator_P->Gain2_Gain_i5;

    // Sum: '<S41>/Sum' incorporates:
    //   Constant: '<S41>/Constant5'
    //   Inport: '<Root>/imu_msg'
    //   Product: '<S50>/Product'

    rtb_P_B_ISS_ISS[i] = est_estimator_U_imu_msg_c->imu_A_B_ECI_sensor[i] -
      est_estimator_P->ase_accel_fixed_bias[i];
  }

  // Sum: '<S41>/Sum2' incorporates:
  //   Product: '<S50>/Product'

  for (i = 0; i < 3; i++) {
    rtb_Sum2[i] = ((rtb_Assignment_l[(int32_T)(i + 3)] * rtb_P_B_ISS_ISS[1] +
                    rtb_Assignment_l[i] * rtb_P_B_ISS_ISS[0]) +
                   rtb_Assignment_l[(int32_T)(i + 6)] * rtb_P_B_ISS_ISS[2]) -
      rtb_Sum1_k3[i];
  }

  // End of Sum: '<S41>/Sum2'

  // Outputs for Iterator SubSystem: '<S41>/filter_with_HP_filter' incorporates:
  //   ForEach: '<S47>/For Each'

  for (ForEach_itr = 0; ForEach_itr < 3; ForEach_itr++) {
    // MATLAB Function: '<S47>/MATLAB Function1' incorporates:
    //   Constant: '<S47>/Constant'
    //   Constant: '<S47>/Constant2'
    //   Selector: '<S47>/Selector'

    est_estimator_MATLABFunction1(est_estimator_P->astrobee_fsw_step_size,
      est_estimator_P->fam_impeller_speeds[(int32_T)((int32_T)rtb_Saturation_n -
      1)], &est_estimator_B->CoreSubsys_l[ForEach_itr].sf_MATLABFunction1,
      &est_estimator_DW->CoreSubsys_l[ForEach_itr].sf_MATLABFunction1);

    // DiscreteTransferFcn: '<S47>/Discrete Transfer Fcn' incorporates:
    //   DiscreteTransferFcn: '<S47>/3 Hz Low Pass'

    rtb_Sum_k1 = (est_estimator_P->CoreSubsys_l.uHzLowPass_NumCoef *
                  est_estimator_DW->CoreSubsys_l[ForEach_itr].uHzLowPass_states
                  - est_estimator_B->CoreSubsys_l[ForEach_itr].
                  sf_MATLABFunction1.den_out[1] * est_estimator_DW->
                  CoreSubsys_l[ForEach_itr].DiscreteTransferFcn_states[0]) -
      est_estimator_B->CoreSubsys_l[ForEach_itr].sf_MATLABFunction1.den_out[2] *
      est_estimator_DW->CoreSubsys_l[ForEach_itr].DiscreteTransferFcn_states[1];
    rtb_Switch1 = (est_estimator_B->CoreSubsys_l[ForEach_itr].
                   sf_MATLABFunction1.num_out[0] * rtb_Sum_k1 +
                   est_estimator_B->CoreSubsys_l[ForEach_itr].
                   sf_MATLABFunction1.num_out[1] *
                   est_estimator_DW->CoreSubsys_l[ForEach_itr].
                   DiscreteTransferFcn_states[0]) +
      est_estimator_B->CoreSubsys_l[ForEach_itr].sf_MATLABFunction1.num_out[2] *
      est_estimator_DW->CoreSubsys_l[ForEach_itr].DiscreteTransferFcn_states[1];

    // DiscreteTransferFcn: '<S47>/High Pass Filter' incorporates:
    //   ForEachSliceSelector: '<S47>/ImpSel_InsertedFor_In1_at_outport_0'

    rtb_Sum_l = (rtb_Sum2[ForEach_itr] - est_estimator_P->tun_grav_hp_den[1] *
                 est_estimator_DW->CoreSubsys_l[ForEach_itr].
                 HighPassFilter_states) / est_estimator_P->tun_grav_hp_den[0];

    // Switch: '<S47>/Switch' incorporates:
    //   Constant: '<S47>/Constant1'
    //   DiscreteTransferFcn: '<S47>/High Pass Filter'
    //   ForEachSliceSelector: '<S47>/ImpSel_InsertedFor_In1_at_outport_0'

    if ((int32_T)est_estimator_P->tun_grav_hp_enable_f != 0) {
      hr_quat_ISS2hr_idx_1 = est_estimator_P->tun_grav_hp_num[0] * rtb_Sum_l +
        est_estimator_P->tun_grav_hp_num[1] * est_estimator_DW->
        CoreSubsys_l[ForEach_itr].HighPassFilter_states;
    } else {
      hr_quat_ISS2hr_idx_1 = rtb_Sum2[ForEach_itr];
    }

    // End of Switch: '<S47>/Switch'

    // Update for DiscreteTransferFcn: '<S47>/3 Hz Low Pass'
    est_estimator_DW->CoreSubsys_l[ForEach_itr].uHzLowPass_states =
      (hr_quat_ISS2hr_idx_1 - est_estimator_P->CoreSubsys_l.uHzLowPass_DenCoef[1]
       * est_estimator_DW->CoreSubsys_l[ForEach_itr].uHzLowPass_states) /
      est_estimator_P->CoreSubsys_l.uHzLowPass_DenCoef[0];

    // Update for DiscreteTransferFcn: '<S47>/Discrete Transfer Fcn'
    est_estimator_DW->CoreSubsys_l[ForEach_itr].DiscreteTransferFcn_states[1] =
      est_estimator_DW->CoreSubsys_l[ForEach_itr].DiscreteTransferFcn_states[0];
    est_estimator_DW->CoreSubsys_l[ForEach_itr].DiscreteTransferFcn_states[0] =
      rtb_Sum_k1;

    // Update for DiscreteTransferFcn: '<S47>/High Pass Filter'
    est_estimator_DW->CoreSubsys_l[ForEach_itr].HighPassFilter_states =
      rtb_Sum_l;

    // ForEachSliceAssignment: '<S47>/ImpAsg_InsertedFor_Out1_at_inport_0'
    rtb_ImpAsg_InsertedFor_Out1_at_[ForEach_itr] = rtb_Switch1;
  }

  // End of Outputs for SubSystem: '<S41>/filter_with_HP_filter'

  // Sum: '<S6>/Sum1' incorporates:
  //   UnitDelay: '<S2>/Unit Delay6'

  rtb_ImpAsg_InsertedFor_Out1_at_[0] -= est_estimator_DW->UnitDelay6_DSTATE[0];
  rtb_ImpAsg_InsertedFor_Out1_at_[1] -= est_estimator_DW->UnitDelay6_DSTATE[1];
  rtb_Sum_l = rtb_ImpAsg_InsertedFor_Out1_at_[2] -
    est_estimator_DW->UnitDelay6_DSTATE[2];
  rtb_ImpAsg_InsertedFor_Out1_at_[2] = rtb_Sum_l;
  for (i = 0; i < 3; i++) {
    // Product: '<S97>/Product'
    rtb_Sum_k1 = rtb_Assignment_b[(int32_T)(i + 6)] * rtb_Sum_l +
      (rtb_Assignment_b[(int32_T)(i + 3)] * rtb_ImpAsg_InsertedFor_Out1_at_[1] +
       rtb_Assignment_b[i] * rtb_ImpAsg_InsertedFor_Out1_at_[0]);

    // Sum: '<S6>/Sum5' incorporates:
    //   Gain: '<S6>/Gain1'
    //   UnitDelay: '<S2>/Unit Delay4'

    rtb_Gain1_f = (real32_T)est_estimator_P->ase_ts * rtb_Sum_k1 +
      est_estimator_DW->UnitDelay4_DSTATE[i];

    // Sum: '<S6>/Sum2' incorporates:
    //   Gain: '<S6>/Gain'
    //   UnitDelay: '<S2>/Unit Delay26'

    rtb_P_B_ISS_ISS[i] = (real32_T)est_estimator_P->ase_ts * rtb_Gain1_f +
      est_estimator_DW->UnitDelay26_DSTATE[i];

    // Product: '<S97>/Product'
    rtb_Sum1_k3[i] = rtb_Sum_k1;

    // Sum: '<S6>/Sum5'
    rtb_Sum2[i] = rtb_Gain1_f;
  }

  // S-Function (sfix_bitop): '<S11>/Bitwise Operator' incorporates:
  //   BusAssignment: '<S42>/Bus Assignment'

  rtb_BitwiseOperator &= est_estimator_P->BitwiseOperator_BitMask;

  // Sum: '<S11>/Sum of Elements1' incorporates:
  //   Inport: '<Root>/landmark_msg'

  UnitDelay_DSTATE_aug_state_enum = (uint32_T)
    est_estimator_U_landmark_msg->cvs_valid_flag[0];
  for (ar = 0; ar < 49; ar++) {
    UnitDelay_DSTATE_aug_state_enum += (uint32_T)
      est_estimator_U_landmark_msg->cvs_valid_flag[(int32_T)(ar + 1)];
  }

  rtb_Switch_m = (uint8_T)UnitDelay_DSTATE_aug_state_enum;

  // End of Sum: '<S11>/Sum of Elements1'

  // Logic: '<S73>/Logical Operator1' incorporates:
  //   Inport: '<Root>/landmark_msg'

  rtb_LogicalOperator = ((int32_T)est_estimator_U_landmark_msg->cvs_valid_flag[0]
    != 0);
  for (handrail_knowledge_dims = 0; handrail_knowledge_dims < 49;
       handrail_knowledge_dims++) {
    rtb_LogicalOperator = (rtb_LogicalOperator || ((int32_T)
      est_estimator_U_landmark_msg->cvs_valid_flag[(int32_T)
      (handrail_knowledge_dims + 1)] != 0));
  }

  // Logic: '<S11>/Logical Operator' incorporates:
  //   Constant: '<S35>/Constant'
  //   Constant: '<S36>/Constant'
  //   Constant: '<S37>/Constant'
  //   Constant: '<S39>/Constant'
  //   Inport: '<Root>/cmc_msg'
  //   Inport: '<Root>/landmark_msg'
  //   Logic: '<S11>/Logical Operator4'
  //   Logic: '<S11>/Logical Operator5'
  //   Logic: '<S11>/Logical Operator6'
  //   Logic: '<S73>/Logical Operator1'
  //   Logic: '<S73>/Logical Operator2'
  //   Logic: '<S73>/Logical Operator6'
  //   RelationalOperator: '<S35>/Compare'
  //   RelationalOperator: '<S36>/Compare'
  //   RelationalOperator: '<S37>/Compare'
  //   RelationalOperator: '<S39>/Compare'
  //   RelationalOperator: '<S77>/FixPt Relational Operator'
  //   RelationalOperator: '<S78>/FixPt Relational Operator'
  //   SignalConversion: '<S1>/Signal Conversion'
  //   UnitDelay: '<S77>/Delay Input1'
  //   UnitDelay: '<S78>/Delay Input1'

  rtb_LogicalOperator = ((((est_estimator_U_cmc_msg_o->localization_mode_cmd ==
    est_estimator_P->ase_local_mode_map) && (rtb_Switch_m >=
    est_estimator_P->Constant_Value_lf)) || ((rtb_Switch_m >=
    est_estimator_P->Constant_Value_js) &&
    (est_estimator_U_cmc_msg_o->localization_mode_cmd ==
     est_estimator_P->ase_local_mode_docking))) &&
    (((est_estimator_U_landmark_msg->cvs_timestamp_sec !=
       est_estimator_DW->DelayInput1_DSTATE_o) ||
      (est_estimator_U_landmark_msg->cvs_timestamp_nsec !=
       est_estimator_DW->DelayInput1_DSTATE_n)) && rtb_LogicalOperator) &&
    (rtb_BitwiseOperator != 0U));

  // Logic: '<S74>/Logical Operator4' incorporates:
  //   Inport: '<Root>/optical_flow_msg'
  //   RelationalOperator: '<S79>/FixPt Relational Operator'
  //   RelationalOperator: '<S80>/FixPt Relational Operator'
  //   UnitDelay: '<S79>/Delay Input1'
  //   UnitDelay: '<S80>/Delay Input1'

  rtb_of_update_flag =
    ((est_estimator_U_cvs_optical_flow_msg_n->cvs_timestamp_sec !=
      est_estimator_DW->DelayInput1_DSTATE_b) ||
     (est_estimator_U_cvs_optical_flow_msg_n->cvs_timestamp_nsec !=
      est_estimator_DW->DelayInput1_DSTATE_d));

  // Outputs for Enabled SubSystem: '<S11>/Enabled Row-Wise SUM' incorporates:
  //   EnablePort: '<S40>/Enable'

  for (nx = 0; nx < 50; nx++) {
    if (rtb_of_update_flag) {
      // Sum: '<S40>/Sum of Elements3' incorporates:
      //   Inport: '<Root>/optical_flow_msg'

      UnitDelay_DSTATE_aug_state_enum = (uint32_T)
        est_estimator_U_cvs_optical_flow_msg_n->cvs_valid_flag[nx];
      for (i = 0; i < 15; i++) {
        UnitDelay_DSTATE_aug_state_enum += (uint32_T)
          est_estimator_U_cvs_optical_flow_msg_n->cvs_valid_flag[(int32_T)
          ((int32_T)((int32_T)(i + 1) * 50) + nx)];
      }

      est_estimator_B->SumofElements3[nx] = (uint8_T)
        UnitDelay_DSTATE_aug_state_enum;

      // End of Sum: '<S40>/Sum of Elements3'
    }

    // RelationalOperator: '<S38>/Compare' incorporates:
    //   Constant: '<S38>/Constant'

    rtb_Compare_ic[nx] = (est_estimator_B->SumofElements3[nx] >=
                          est_estimator_P->CompareToConstant7_const);
  }

  // End of Outputs for SubSystem: '<S11>/Enabled Row-Wise SUM'

  // Sum: '<S11>/Sum of Elements'
  UnitDelay_DSTATE_aug_state_enum = (uint32_T)rtb_Compare_ic[0];
  for (ar = 0; ar < 49; ar++) {
    UnitDelay_DSTATE_aug_state_enum += (uint32_T)rtb_Compare_ic[(int32_T)(ar + 1)];
  }

  // MATLAB Function: '<S95>/MATLAB Function'
  // MATLAB Function 'predictor/Covariance Propogation/MATLAB Function': '<S99>:1' 
  // '<S99>:1:27'
  // '<S99>:1:24'
  // '<S99>:1:23'
  // '<S99>:1:7'
  // '<S99>:1:4'
  S[0] = 0.0F;
  S[3] = -rtb_Product1[2];
  S[6] = rtb_Product1[1];
  S[1] = rtb_Product1[2];
  S[4] = 0.0F;
  S[7] = -rtb_Product1[0];
  S[2] = -rtb_Product1[1];
  S[5] = rtb_Product1[0];
  S[8] = 0.0F;

  // '<S99>:1:7'
  // '<S99>:1:8'
  // '<S99>:1:9'
  rtb_Sum_k1 = rtb_Product1[3];
  rtb_Gain1_f = rtb_Product1[3];
  for (i = 0; i < 3; i++) {
    rtb_Product1_1[(int32_T)(3 * i)] = rtb_Sum_k1 * (real32_T)d[i] + S[i];
    rtb_Product1_2[(int32_T)(i << 2)] = (real32_T)d[(int32_T)(3 * i)] *
      rtb_Gain1_f - S[(int32_T)(3 * i)];
    rtb_Product1_1[(int32_T)(1 + (int32_T)(3 * i))] = (real32_T)d[(int32_T)(i +
      3)] * rtb_Sum_k1 + S[(int32_T)(i + 3)];
    rtb_Product1_2[(int32_T)(1 + (int32_T)(i << 2))] = (real32_T)d[(int32_T)
      ((int32_T)(3 * i) + 1)] * rtb_Gain1_f - S[(int32_T)((int32_T)(3 * i) + 1)];
    rtb_Product1_1[(int32_T)(2 + (int32_T)(3 * i))] = (real32_T)d[(int32_T)(i +
      6)] * rtb_Sum_k1 + S[(int32_T)(i + 6)];
    rtb_Product1_2[(int32_T)(2 + (int32_T)(i << 2))] = (real32_T)d[(int32_T)
      ((int32_T)(3 * i) + 2)] * rtb_Gain1_f - S[(int32_T)((int32_T)(3 * i) + 2)];
    rtb_Product1_1[(int32_T)(9 + i)] = -rtb_Product1[i];
    rtb_Product1_2[(int32_T)(3 + (int32_T)(i << 2))] = -rtb_Product1[i];
  }

  // '<S99>:1:11'
  // '<S99>:1:15'
  // '<S99>:1:16'
  // '<S99>:1:23'
  // state_trans_1 = single(eye(15) + F_E*0.01); % Consider using expm
  // '<S99>:1:32'
  tmp_4[0] = 0.0F;
  tmp_4[3] = -hr_quat_ISS2hr_idx_0;
  tmp_4[6] = rtb_ImpAsg_InsertedFor_Out1_a_d[1];
  tmp_4[1] = hr_quat_ISS2hr_idx_0;
  tmp_4[4] = 0.0F;
  tmp_4[7] = -rtb_ImpAsg_InsertedFor_Out1_a_d[0];
  tmp_4[2] = -rtb_ImpAsg_InsertedFor_Out1_a_d[1];
  tmp_4[5] = rtb_ImpAsg_InsertedFor_Out1_a_d[0];
  tmp_4[8] = 0.0F;
  for (br = 0; br < 3; br++) {
    accel[br] = (real32_T)fabs((real_T)rtb_ImpAsg_InsertedFor_Out1_at_[br]);
    for (i = 0; i < 3; i++) {
      C[(int32_T)(br + (int32_T)(3 * i))] = 0.0F;
      C[(int32_T)(br + (int32_T)(3 * i))] += rtb_Product1_2[(int32_T)(i << 2)] *
        rtb_Product1_1[br];
      C[(int32_T)(br + (int32_T)(3 * i))] += rtb_Product1_2[(int32_T)((int32_T)
        (i << 2) + 1)] * rtb_Product1_1[(int32_T)(br + 3)];
      C[(int32_T)(br + (int32_T)(3 * i))] += rtb_Product1_2[(int32_T)((int32_T)
        (i << 2) + 2)] * rtb_Product1_1[(int32_T)(br + 6)];
      C[(int32_T)(br + (int32_T)(3 * i))] += rtb_Product1_2[(int32_T)((int32_T)
        (i << 2) + 3)] * rtb_Product1_1[(int32_T)(br + 9)];
      rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * br))] = -C[(int32_T)((int32_T)
        (3 * i) + br)];
    }
  }

  tmp_5[0] = 0.0F;
  tmp_5[3] = -accel[2];
  tmp_5[6] = accel[1];
  tmp_5[1] = accel[2];
  tmp_5[4] = 0.0F;
  tmp_5[7] = -accel[0];
  tmp_5[2] = -accel[1];
  tmp_5[5] = accel[0];
  tmp_5[8] = 0.0F;
  for (i = 0; i < 3; i++) {
    for (b_m = 0; b_m < 3; b_m++) {
      rtb_Product1_0[(int32_T)(i + (int32_T)(3 * b_m))] = 0.0F;
      rtb_Product1_0[(int32_T)(i + (int32_T)(3 * b_m))] += tmp_5[(int32_T)(3 *
        b_m)] * rtb_Assignment_b[i];
      rtb_Product1_0[(int32_T)(i + (int32_T)(3 * b_m))] += tmp_5[(int32_T)
        ((int32_T)(3 * b_m) + 1)] * rtb_Assignment_b[(int32_T)(i + 3)];
      rtb_Product1_0[(int32_T)(i + (int32_T)(3 * b_m))] += tmp_5[(int32_T)
        ((int32_T)(3 * b_m) + 2)] * rtb_Assignment_b[(int32_T)(i + 6)];
      rtb_state_trans[(int32_T)(b_m + (int32_T)(15 * i))] = -tmp_4[(int32_T)
        ((int32_T)(3 * i) + b_m)];
      rtb_state_trans[(int32_T)(b_m + (int32_T)(15 * (int32_T)(i + 3)))] =
        (real32_T)b[(int32_T)((int32_T)(3 * i) + b_m)];
      rtb_state_trans[(int32_T)(b_m + (int32_T)(15 * (int32_T)(i + 6)))] = 0.0F;
      rtb_state_trans[(int32_T)(b_m + (int32_T)(15 * (int32_T)(i + 9)))] = 0.0F;
      rtb_state_trans[(int32_T)(b_m + (int32_T)(15 * (int32_T)(i + 12)))] = 0.0F;
    }
  }

  for (i = 0; i < 15; i++) {
    rtb_state_trans[(int32_T)(3 + (int32_T)(15 * i))] = 0.0F;
    rtb_state_trans[(int32_T)(4 + (int32_T)(15 * i))] = 0.0F;
    rtb_state_trans[(int32_T)(5 + (int32_T)(15 * i))] = 0.0F;
  }

  for (i = 0; i < 3; i++) {
    rtb_state_trans[(int32_T)(6 + (int32_T)(15 * i))] = rtb_Product1_0[(int32_T)
      (3 * i)];
    rtb_state_trans[(int32_T)(6 + (int32_T)(15 * (int32_T)(i + 3)))] = 0.0F;
    rtb_state_trans[(int32_T)(6 + (int32_T)(15 * (int32_T)(i + 6)))] = 0.0F;
    rtb_state_trans[(int32_T)(6 + (int32_T)(15 * (int32_T)(i + 9)))] = -C[i];
    rtb_state_trans[(int32_T)(6 + (int32_T)(15 * (int32_T)(i + 12)))] = 0.0F;
    rtb_state_trans[(int32_T)(7 + (int32_T)(15 * i))] = rtb_Product1_0[(int32_T)
      ((int32_T)(3 * i) + 1)];
    rtb_state_trans[(int32_T)(7 + (int32_T)(15 * (int32_T)(i + 3)))] = 0.0F;
    rtb_state_trans[(int32_T)(7 + (int32_T)(15 * (int32_T)(i + 6)))] = 0.0F;
    rtb_state_trans[(int32_T)(7 + (int32_T)(15 * (int32_T)(i + 9)))] = -C
      [(int32_T)(i + 3)];
    rtb_state_trans[(int32_T)(7 + (int32_T)(15 * (int32_T)(i + 12)))] = 0.0F;
    rtb_state_trans[(int32_T)(8 + (int32_T)(15 * i))] = rtb_Product1_0[(int32_T)
      ((int32_T)(3 * i) + 2)];
    rtb_state_trans[(int32_T)(8 + (int32_T)(15 * (int32_T)(i + 3)))] = 0.0F;
    rtb_state_trans[(int32_T)(8 + (int32_T)(15 * (int32_T)(i + 6)))] = 0.0F;
    rtb_state_trans[(int32_T)(8 + (int32_T)(15 * (int32_T)(i + 9)))] = -C
      [(int32_T)(i + 6)];
    rtb_state_trans[(int32_T)(8 + (int32_T)(15 * (int32_T)(i + 12)))] = 0.0F;
  }

  for (i = 0; i < 15; i++) {
    rtb_state_trans[(int32_T)(9 + (int32_T)(15 * i))] = 0.0F;
    rtb_state_trans[(int32_T)(12 + (int32_T)(15 * i))] = (real32_T)c[(int32_T)(3
      * i)];
    rtb_state_trans[(int32_T)(10 + (int32_T)(15 * i))] = 0.0F;
    rtb_state_trans[(int32_T)(13 + (int32_T)(15 * i))] = (real32_T)c[(int32_T)
      ((int32_T)(3 * i) + 1)];
    rtb_state_trans[(int32_T)(11 + (int32_T)(15 * i))] = 0.0F;
    rtb_state_trans[(int32_T)(14 + (int32_T)(15 * i))] = (real32_T)c[(int32_T)
      ((int32_T)(3 * i) + 2)];
    for (b_m = 0; b_m < 15; b_m++) {
      rtb_ex_matrix_multiply4[(int32_T)(b_m + (int32_T)(15 * i))] =
        rtb_state_trans[(int32_T)((int32_T)(15 * i) + b_m)] * (real32_T)
        est_estimator_P->ase_ts;
    }
  }

  rtb_Sum_k1 = 0.0F;
  handrail_knowledge_dims = 0;
  exitg2 = false;
  while ((!exitg2) && (handrail_knowledge_dims < 15)) {
    rtb_Gain1_f = 0.0F;
    for (num_original = 0; num_original < 15; num_original++) {
      rtb_Gain1_f += (real32_T)fabs((real_T)rtb_ex_matrix_multiply4[(int32_T)
        ((int32_T)(15 * handrail_knowledge_dims) + num_original)]);
    }

    if (rtIsNaNF(rtb_Gain1_f)) {
      rtb_Sum_k1 = (rtNaNF);
      exitg2 = true;
    } else {
      if (rtb_Gain1_f > rtb_Sum_k1) {
        rtb_Sum_k1 = rtb_Gain1_f;
      }

      handrail_knowledge_dims++;
    }
  }

  if (rtb_Sum_k1 <= 3.92572474F) {
    num_original = 0;
    exitg1 = false;
    while ((!exitg1) && (num_original < 3)) {
      if (rtb_Sum_k1 <= theta[num_original]) {
        hdbaohdbkngdbimo_PadeApproximantOfDegree(rtb_ex_matrix_multiply4,
          (uint8_T)(int32_T)((int32_T)(num_original << 1) + 3), rtb_state_trans);
        exitg1 = true;
      } else {
        num_original++;
      }
    }
  } else {
    rtb_Gain1_f = rtb_Sum_k1 / 3.92572474F;
    if ((!rtIsInfF(rtb_Gain1_f)) && (!rtIsNaNF(rtb_Gain1_f))) {
      rtb_Gain1_f = (real32_T)frexp((real_T)rtb_Gain1_f, &s12_iter);
      rtb_Sum_k1 = (real32_T)s12_iter;
    } else {
      rtb_Sum_k1 = 0.0F;
    }

    if (rtb_Gain1_f == 0.5F) {
      rtb_Sum_k1--;
    }

    rtb_Gain1_f = rt_powf_snf(2.0F, rtb_Sum_k1);
    for (i = 0; i < 225; i++) {
      rtb_Sum_b[i] = rtb_ex_matrix_multiply4[i] / rtb_Gain1_f;
    }

    hdbaohdbkngdbimo_PadeApproximantOfDegree(rtb_Sum_b, 7U, rtb_state_trans);
    for (num_original = 0; num_original <= (int32_T)((int32_T)rtb_Sum_k1 - 1);
         num_original++) {
      for (i = 0; i < 15; i++) {
        for (b_m = 0; b_m < 15; b_m++) {
          rtb_ex_matrix_multiply4[(int32_T)(i + (int32_T)(15 * b_m))] = 0.0F;
          for (i_0 = 0; i_0 < 15; i_0++) {
            rtb_ex_matrix_multiply4[(int32_T)(i + (int32_T)(15 * b_m))] +=
              rtb_state_trans[(int32_T)((int32_T)(15 * i_0) + i)] *
              rtb_state_trans[(int32_T)((int32_T)(15 * b_m) + i_0)];
          }
        }
      }

      for (i = 0; i < 15; i++) {
        for (b_m = 0; b_m < 15; b_m++) {
          rtb_state_trans[(int32_T)(b_m + (int32_T)(15 * i))] =
            rtb_ex_matrix_multiply4[(int32_T)((int32_T)(15 * i) + b_m)];
        }
      }
    }
  }

  // End of MATLAB Function: '<S95>/MATLAB Function'

  // Sum: '<S102>/Sum' incorporates:
  //   Constant: '<S102>/Constant1'
  //   DataTypeConversion: '<S104>/Conversion'
  //   Gain: '<S102>/Gain'
  //   Math: '<S102>/Math Function'

  //  Paramaterize Ts
  rtb_Sum_k1 = rtb_Product1[3] * rtb_Product1[3] * est_estimator_P->Gain_Gain_fm
    - (real32_T)est_estimator_P->Constant1_Value_e;

  // Assignment: '<S102>/Assignment' incorporates:
  //   Constant: '<S102>/Constant2'
  //   DataTypeConversion: '<S103>/Conversion'

  for (i = 0; i < 9; i++) {
    rtb_Assignment_b[i] = (real32_T)est_estimator_P->Constant2_Value_bd[i];
  }

  rtb_Assignment_b[0] = rtb_Sum_k1;
  rtb_Assignment_b[4] = rtb_Sum_k1;
  rtb_Assignment_b[8] = rtb_Sum_k1;

  // End of Assignment: '<S102>/Assignment'

  // Gain: '<S102>/Gain1'
  rtb_Sum_k1 = est_estimator_P->Gain1_Gain_l4 * rtb_Product1[3];

  // Assignment: '<S95>/Assignment1' incorporates:
  //   Constant: '<S95>/Constant5'

  memcpy(&rtb_Assignment1[0], &est_estimator_P->Constant5_Value_p[0], (uint32_T)
         (180U * sizeof(real32_T)));

  // Product: '<S102>/Product' incorporates:
  //   Constant: '<S105>/Constant3'
  //   DataTypeConversion: '<S106>/Conversion'
  //   Gain: '<S105>/Gain'
  //   Gain: '<S105>/Gain1'
  //   Gain: '<S105>/Gain2'

  tmp_6[0] = (real32_T)est_estimator_P->Constant3_Value_kc;
  tmp_6[1] = rtb_Product1[2];
  tmp_6[2] = est_estimator_P->Gain_Gain_k * rtb_Product1[1];
  tmp_6[3] = est_estimator_P->Gain1_Gain_j5 * rtb_Product1[2];
  tmp_6[4] = (real32_T)est_estimator_P->Constant3_Value_kc;
  tmp_6[5] = rtb_Product1[0];
  tmp_6[6] = rtb_Product1[1];
  tmp_6[7] = est_estimator_P->Gain2_Gain_i5w * rtb_Product1[0];
  tmp_6[8] = (real32_T)est_estimator_P->Constant3_Value_kc;

  // Math: '<S95>/Math Function1' incorporates:
  //   Gain: '<S102>/Gain2'
  //   Math: '<S102>/Math Function1'
  //   Product: '<S102>/Product1'

  for (i = 0; i < 3; i++) {
    rtb_Product1_0[i] = rtb_Product1[0] * rtb_Product1[i];
    rtb_Product1_0[(int32_T)(i + 3)] = rtb_Product1[1] * rtb_Product1[i];
    rtb_Product1_0[(int32_T)(i + 6)] = rtb_Product1[2] * rtb_Product1[i];
  }

  // End of Math: '<S95>/Math Function1'

  // Assignment: '<S95>/Assignment1' incorporates:
  //   Gain: '<S102>/Gain2'
  //   Gain: '<S95>/Gain2'
  //   Product: '<S102>/Product'
  //   Sum: '<S102>/Sum1'

  for (i = 0; i < 3; i++) {
    rtb_Assignment1[(int32_T)(6 + (int32_T)(15 * (int32_T)(6 + i)))] =
      ((rtb_Assignment_b[i] - rtb_Sum_k1 * tmp_6[i]) + rtb_Product1_0[(int32_T)
       (3 * i)] * est_estimator_P->Gain2_Gain_kj) *
      est_estimator_P->Gain2_Gain_cx;
    rtb_Assignment1[(int32_T)(7 + (int32_T)(15 * (int32_T)(6 + i)))] =
      ((rtb_Assignment_b[(int32_T)(i + 3)] - tmp_6[(int32_T)(i + 3)] *
        rtb_Sum_k1) + rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 1)] *
       est_estimator_P->Gain2_Gain_kj) * est_estimator_P->Gain2_Gain_cx;
    rtb_Assignment1[(int32_T)(8 + (int32_T)(15 * (int32_T)(6 + i)))] =
      ((rtb_Assignment_b[(int32_T)(i + 6)] - tmp_6[(int32_T)(i + 6)] *
        rtb_Sum_k1) + rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 2)] *
       est_estimator_P->Gain2_Gain_kj) * est_estimator_P->Gain2_Gain_cx;
  }

  // MATLAB Function: '<S95>/diag' incorporates:
  //   Constant: '<S95>/Constant9'

  // MATLAB Function 'predictor/Covariance Propogation/diag': '<S101>:1'
  // '<S101>:1:3'
  x[0] = rtb_ImpAsg_InsertedFor_Out1_a_d[0];
  x[1] = rtb_ImpAsg_InsertedFor_Out1_a_d[1];
  x[2] = hr_quat_ISS2hr_idx_0;
  x[3] = 0.0F;
  x[4] = 0.0F;
  x[5] = 0.0F;
  x[6] = 0.0F;
  x[7] = 0.0F;
  x[8] = 0.0F;
  x[9] = 0.0F;
  x[10] = 0.0F;
  x[11] = 0.0F;
  br = 0;
  for (num_original = 0; num_original < 12; num_original++) {
    rtb_Product1_1[num_original] = est_estimator_P->tun_ase_Q_imu[num_original];
    d_1 = ((real32_T)fabs((real_T)x[num_original]) >=
           est_estimator_P->tun_ase_max_gyro);
    if (d_1) {
      br++;
    }

    d_0[num_original] = d_1;
  }

  handrail_knowledge_dims = br;
  br = 0;
  for (num_original = 0; num_original < 12; num_original++) {
    if (d_0[num_original]) {
      b_data[br] = (int8_T)(int32_T)(num_original + 1);
      br++;
    }
  }

  // '<S101>:1:3'
  for (i = 0; i <= (int32_T)(handrail_knowledge_dims - 1); i++) {
    rtb_Product1_1[(int32_T)((int32_T)b_data[i] - 1)] =
      est_estimator_P->tun_ase_q_saturated_gyro;
  }

  // '<S101>:1:4'
  x[0] = 0.0F;
  x[1] = 0.0F;
  x[2] = 0.0F;
  x[3] = 0.0F;
  x[4] = 0.0F;
  x[5] = 0.0F;
  x[6] = rtb_ImpAsg_InsertedFor_Out1_at_[0];
  x[7] = rtb_ImpAsg_InsertedFor_Out1_at_[1];
  x[8] = rtb_Sum_l;
  x[9] = 0.0F;
  x[10] = 0.0F;
  x[11] = 0.0F;
  num_original = 0;
  for (br = 0; br < 12; br++) {
    d_1 = ((real32_T)fabs((real_T)x[br]) >= est_estimator_P->tun_ase_max_accel);
    if (d_1) {
      num_original++;
    }

    d_0[br] = d_1;
  }

  handrail_knowledge_dims = num_original;
  num_original = 0;
  for (nx = 0; nx < 12; nx++) {
    if (d_0[nx]) {
      c_data[num_original] = (int8_T)(int32_T)(nx + 1);
      num_original++;
    }
  }

  // '<S101>:1:4'
  for (i = 0; i <= (int32_T)(handrail_knowledge_dims - 1); i++) {
    rtb_Product1_1[(int32_T)((int32_T)c_data[i] - 1)] =
      est_estimator_P->tun_ase_q_saturated_accel;
  }

  // '<S101>:1:5'
  memset(&rtb_Q[0], 0, (uint32_T)(144U * sizeof(real32_T)));
  for (num_original = 0; num_original < 12; num_original++) {
    rtb_Q[(int32_T)(num_original + (int32_T)(12 * num_original))] =
      rtb_Product1_1[num_original];
  }

  // End of MATLAB Function: '<S95>/diag'

  // S-Function (ex_matrix_multiply): '<S95>/ex_matrix_multiply1'
  matrix_multiply((real32_T*)&rtb_Assignment1[0], 15, 12, (real32_T*)&rtb_Q[0],
                  12, 12, &rtb_ex_matrix_multiply1[0]);

  // Math: '<S95>/Math Function2'
  for (i = 0; i < 15; i++) {
    for (b_m = 0; b_m < 12; b_m++) {
      rtb_MathFunction2[(int32_T)(b_m + (int32_T)(12 * i))] = rtb_Assignment1
        [(int32_T)((int32_T)(15 * b_m) + i)];
    }
  }

  // End of Math: '<S95>/Math Function2'

  // S-Function (ex_matrix_multiply): '<S95>/ex_matrix_multiply3'
  matrix_multiply((real32_T*)&rtb_ex_matrix_multiply1[0], 15, 12, (real32_T*)
                  &rtb_MathFunction2[0], 12, 15, &rtb_ex_matrix_multiply3[0]);

  // S-Function (ex_matrix_multiply): '<S95>/ex_matrix_multiply'
  matrix_multiply((real32_T*)&rtb_state_trans[0], 15, 15, (real32_T*)
                  &rtb_ex_matrix_multiply3[0], 15, 15, &rtb_ex_matrix_multiply5
                  [0]);

  // Math: '<S95>/Math Function5'
  for (i = 0; i < 15; i++) {
    for (b_m = 0; b_m < 15; b_m++) {
      rtb_ex_matrix_multiply4[(int32_T)(b_m + (int32_T)(15 * i))] =
        rtb_state_trans[(int32_T)((int32_T)(15 * b_m) + i)];
    }
  }

  // End of Math: '<S95>/Math Function5'

  // S-Function (ex_matrix_multiply): '<S95>/ex_matrix_multiply2'
  matrix_multiply((real32_T*)&rtb_ex_matrix_multiply5[0], 15, 15, (real32_T*)
                  &rtb_ex_matrix_multiply4[0], 15, 15, &rtb_MathFunction_eu[0]);

  // Sum: '<S95>/Sum'
  for (i = 0; i < 225; i++) {
    rtb_Sum_b[i] = rtb_MathFunction_eu[i] + rtb_ex_matrix_multiply3[i];
  }

  // End of Sum: '<S95>/Sum'

  // Gain: '<S95>/Gain3'
  num_augs = 0.5 * est_estimator_P->ase_ts;

  // MATLAB Function: '<S42>/MATLAB Function' incorporates:
  //   Constant: '<S42>/Constant1'
  //   Constant: '<S42>/Constant3'
  //   Delay: '<S2>/Delay'

  // MATLAB Function 'est_estimator/filter_prep/kfl_system_prep/MATLAB Function': '<S70>:1' 
  // '<S70>:1:4'
  memcpy(&est_estimator_B->Assignment[0], &est_estimator_DW->Delay_DSTATE[0],
         (uint32_T)(13689U * sizeof(real32_T)));
  if (rtb_FixPtRelationalOperator_n) {
    // '<S70>:1:6'
    //  Quat covariance is 1:3, Pos covariance is 13:15
    // '<S70>:1:8'
    for (i = 0; i < 117; i++) {
      est_estimator_B->Assignment[(int32_T)(117 * i)] = 0.0F;
      est_estimator_B->Assignment[(int32_T)(1 + (int32_T)(117 * i))] = 0.0F;
      est_estimator_B->Assignment[(int32_T)(2 + (int32_T)(117 * i))] = 0.0F;
    }

    // '<S70>:1:9'
    for (i = 0; i < 3; i++) {
      memset(&est_estimator_B->Assignment[(int32_T)(i * 117)], 0, (uint32_T)
             (117U * sizeof(real32_T)));
    }

    // '<S70>:1:10'
    for (i = 0; i < 9; i++) {
      S[i] = 0.0F;
    }

    S[0] = est_estimator_P->tun_ic_cov_quat;
    S[4] = est_estimator_P->tun_ic_cov_quat;
    S[8] = est_estimator_P->tun_ic_cov_quat;
    for (i = 0; i < 3; i++) {
      est_estimator_B->Assignment[(int32_T)(117 * i)] = S[(int32_T)(3 * i)];
      est_estimator_B->Assignment[(int32_T)(1 + (int32_T)(117 * i))] = S
        [(int32_T)((int32_T)(3 * i) + 1)];
      est_estimator_B->Assignment[(int32_T)(2 + (int32_T)(117 * i))] = S
        [(int32_T)((int32_T)(3 * i) + 2)];
    }

    // '<S70>:1:12'
    for (i = 0; i < 117; i++) {
      est_estimator_B->Assignment[(int32_T)(12 + (int32_T)(117 * i))] = 0.0F;
      est_estimator_B->Assignment[(int32_T)(13 + (int32_T)(117 * i))] = 0.0F;
      est_estimator_B->Assignment[(int32_T)(14 + (int32_T)(117 * i))] = 0.0F;
    }

    // '<S70>:1:13'
    for (i = 0; i < 3; i++) {
      memset(&est_estimator_B->Assignment[(int32_T)((int32_T)(i * 117) + 1404)],
             0, (uint32_T)(117U * sizeof(real32_T)));
    }

    // '<S70>:1:14'
    for (i = 0; i < 9; i++) {
      S[i] = 0.0F;
    }

    S[0] = est_estimator_P->tun_ic_cov_pos;
    S[4] = est_estimator_P->tun_ic_cov_pos;
    S[8] = est_estimator_P->tun_ic_cov_pos;
    for (i = 0; i < 3; i++) {
      est_estimator_B->Assignment[(int32_T)(12 + (int32_T)(117 * (int32_T)(12 +
        i)))] = S[(int32_T)(3 * i)];
      est_estimator_B->Assignment[(int32_T)(13 + (int32_T)(117 * (int32_T)(12 +
        i)))] = S[(int32_T)((int32_T)(3 * i) + 1)];
      est_estimator_B->Assignment[(int32_T)(14 + (int32_T)(117 * (int32_T)(12 +
        i)))] = S[(int32_T)((int32_T)(3 * i) + 2)];
    }
  }

  // End of MATLAB Function: '<S42>/MATLAB Function'

  // Selector: '<S95>/Selector'
  for (i = 0; i < 15; i++) {
    for (b_m = 0; b_m < 15; b_m++) {
      rtb_MathFunction_eu[(int32_T)(b_m + (int32_T)(15 * i))] =
        est_estimator_B->Assignment[(int32_T)((int32_T)(117 * i) + b_m)];
    }
  }

  // End of Selector: '<S95>/Selector'

  // S-Function (ex_matrix_multiply): '<S95>/ex_matrix_multiply4'
  matrix_multiply((real32_T*)&rtb_state_trans[0], 15, 15, (real32_T*)
                  &rtb_MathFunction_eu[0], 15, 15, &rtb_ex_matrix_multiply4[0]);

  // Math: '<S95>/Math Function'
  for (i = 0; i < 15; i++) {
    for (b_m = 0; b_m < 15; b_m++) {
      rtb_MathFunction_eu[(int32_T)(b_m + (int32_T)(15 * i))] = rtb_state_trans
        [(int32_T)((int32_T)(15 * b_m) + i)];
    }
  }

  // End of Math: '<S95>/Math Function'

  // S-Function (ex_matrix_multiply): '<S95>/ex_matrix_multiply5'
  matrix_multiply((real32_T*)&rtb_ex_matrix_multiply4[0], 15, 15, (real32_T*)
                  &rtb_MathFunction_eu[0], 15, 15, &rtb_ex_matrix_multiply5[0]);

  // Sum: '<S95>/Sum6' incorporates:
  //   Gain: '<S95>/Gain3'

  for (i = 0; i < 225; i++) {
    est_estimator_B->MatrixConcatenate[i] = (real32_T)num_augs * rtb_Sum_b[i] +
      rtb_ex_matrix_multiply5[i];
  }

  // End of Sum: '<S95>/Sum6'

  // MATLAB Function: '<S95>/MATLAB Function2'
  // MATLAB Function 'predictor/Covariance Propogation/MATLAB Function2': '<S100>:1' 
  // '<S100>:1:7'
  // '<S100>:1:4'
  for (i = 0; i < 102; i++) {
    for (b_m = 0; b_m < 15; b_m++) {
      est_estimator_B->P_IC[(int32_T)(b_m + (int32_T)(15 * i))] =
        est_estimator_B->Assignment[(int32_T)((int32_T)((int32_T)(15 + i) * 117)
        + b_m)];
    }
  }

  //  Extract the cross coupled part of the camera and IMU covariance
  //  Creates a matrix where each column is the indices for each augmentation
  // '<S100>:1:7'
  //  Number of columns is number of OF augmentations + ML augmentations
  //  Collect the indices of the valid current augmentations
  //  Form a vector with the valid indices corresponding to the current
  //  number of augmentations
  // '<S100>:1:12'
  mglfbimobiechdbi_bitget(rtb_BusAssignment_aug_state_enu, tmp_1);
  br = 0;
  for (num_original = 0; num_original < 17; num_original++) {
    rtb_FixPtRelationalOperator_n = (tmp_1[num_original] != 0U);
    if (rtb_FixPtRelationalOperator_n) {
      br++;
    }

    b_0[num_original] = rtb_FixPtRelationalOperator_n;
  }

  handrail_knowledge_dims = br;
  br = 0;
  for (num_original = 0; num_original < 17; num_original++) {
    if (b_0[num_original]) {
      c_data_0[br] = (int8_T)(int32_T)(num_original + 1);
      br++;
    }
  }

  // '<S100>:1:12'
  for (i = 0; i <= (int32_T)(handrail_knowledge_dims - 1); i++) {
    for (b_m = 0; b_m < 6; b_m++) {
      valid_indx_mat_data[(int32_T)(b_m + (int32_T)(6 * i))] = Aug_Indx[(int32_T)
        ((int32_T)((int32_T)((int32_T)c_data_0[i] - 1) * 6) + b_m)];
    }
  }

  // '<S100>:1:13'
  //  Do the covariance propagation
  C_sizes_idx_1 = (int32_T)(int8_T)(int32_T)(6 * handrail_knowledge_dims);
  for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
    for (b_m = 0; b_m < 15; b_m++) {
      est_estimator_B->Selector1[(int32_T)(b_m + (int32_T)(15 * i))] = 0.0F;
    }
  }

  if ((int32_T)(6 * handrail_knowledge_dims) != 0) {
    num_original = (int32_T)((int32_T)((int32_T)(6 * handrail_knowledge_dims) -
      1) * 15);
    for (br = 0; br <= num_original; br += 15) {
      for (nx = (int32_T)(br + 1); nx <= (int32_T)(br + 15); nx++) {
        est_estimator_B->Selector1[(int32_T)(nx - 1)] = 0.0F;
      }
    }

    br = 0;
    for (nx = 0; nx <= num_original; nx += 15) {
      ar = -1;
      for (i = br; (int32_T)(i + 1) <= (int32_T)(br + 15); i++) {
        for (b_m = 0; b_m <= (int32_T)(handrail_knowledge_dims - 1); b_m++) {
          for (i_0 = 0; i_0 < 6; i_0++) {
            valid_indx_mat_data_0[(int32_T)(i_0 + (int32_T)(6 * b_m))] =
              valid_indx_mat_data[(int32_T)((int32_T)(6 * b_m) + i_0)];
          }
        }

        if (est_estimator_B->Assignment[(int32_T)((int32_T)((int32_T)((int32_T)
               valid_indx_mat_data_0[div_nzp_s32_floor(i, 15)] + 14) * 117) + i %
             15)] != 0.0F) {
          s12_iter = ar;
          for (O_sizes_idx_0 = nx; (int32_T)(O_sizes_idx_0 + 1) <= (int32_T)(nx
                + 15); O_sizes_idx_0++) {
            s12_iter++;
            for (b_m = 0; b_m <= (int32_T)(handrail_knowledge_dims - 1); b_m++)
            {
              for (i_0 = 0; i_0 < 6; i_0++) {
                valid_indx_mat_data_0[(int32_T)(i_0 + (int32_T)(6 * b_m))] =
                  valid_indx_mat_data[(int32_T)((int32_T)(6 * b_m) + i_0)];
              }
            }

            est_estimator_B->Selector1[O_sizes_idx_0] +=
              est_estimator_B->Assignment[(int32_T)((int32_T)((int32_T)((int32_T)
              valid_indx_mat_data_0[div_nzp_s32_floor(i, 15)] + 14) * 117) + i %
              15)] * rtb_state_trans[s12_iter];
          }
        }

        ar += 15;
      }

      br += 15;
    }
  }

  // '<S100>:1:16'
  for (i = 0; i <= (int32_T)(handrail_knowledge_dims - 1); i++) {
    for (b_m = 0; b_m < 6; b_m++) {
      valid_indx_mat_data_0[(int32_T)(b_m + (int32_T)(6 * i))] =
        valid_indx_mat_data[(int32_T)((int32_T)(6 * i) + b_m)];
    }
  }

  for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
    for (b_m = 0; b_m < 15; b_m++) {
      est_estimator_B->P_IC[(int32_T)(b_m + (int32_T)(15 * (int32_T)((int32_T)
        valid_indx_mat_data_0[i] - 1)))] = est_estimator_B->Selector1[(int32_T)
        ((int32_T)(15 * i) + b_m)];
    }
  }

  // End of MATLAB Function: '<S95>/MATLAB Function2'

  // Selector: '<S95>/Selector1'
  // Aug_Indx(Aug_State_Flag)
  //  Do the multiplication with current valid indices
  // P(:, D+1:size(P, 2)) = Phi * P(1:D, D+1:size(P, 2));
  for (i = 0; i < 102; i++) {
    for (b_m = 0; b_m < 15; b_m++) {
      est_estimator_B->Selector1[(int32_T)(b_m + (int32_T)(15 * i))] =
        est_estimator_B->Assignment[(int32_T)((int32_T)((int32_T)(15 + i) * 117)
        + b_m)];
    }
  }

  // End of Selector: '<S95>/Selector1'

  // Switch: '<S95>/Switch'
  if (rtb_BusAssignment_aug_state_enu != 0U) {
    memcpy(&est_estimator_B->MatrixConcatenate[225], &est_estimator_B->P_IC[0],
           (uint32_T)(1530U * sizeof(real32_T)));
  } else {
    memcpy(&est_estimator_B->MatrixConcatenate[225], &est_estimator_B->
           Selector1[0], (uint32_T)(1530U * sizeof(real32_T)));
  }

  // End of Switch: '<S95>/Switch'

  // Switch: '<S95>/Switch1' incorporates:
  //   Math: '<S95>/Math Function3'
  //   Math: '<S95>/Math Function4'

  for (i = 0; i < 15; i++) {
    for (b_m = 0; b_m < 102; b_m++) {
      if (rtb_BusAssignment_aug_state_enu != 0U) {
        est_estimator_B->MatrixConcatenate2[(int32_T)(b_m + (int32_T)(i * 102))]
          = est_estimator_B->P_IC[(int32_T)((int32_T)(15 * b_m) + i)];
      } else {
        est_estimator_B->MatrixConcatenate2[(int32_T)(b_m + (int32_T)(i * 102))]
          = est_estimator_B->Selector1[(int32_T)((int32_T)(15 * b_m) + i)];
      }
    }
  }

  // End of Switch: '<S95>/Switch1'

  // Selector: '<S95>/Selector2'
  for (i = 0; i < 102; i++) {
    memcpy(&est_estimator_B->MatrixConcatenate2[(int32_T)((int32_T)(i * 102) +
            1530)], &est_estimator_B->Assignment[(int32_T)((int32_T)(i * 117) +
            1770)], (uint32_T)(102U * sizeof(real32_T)));
  }

  // End of Selector: '<S95>/Selector2'

  // Concatenate: '<S95>/Matrix Concatenate1'
  for (i = 0; i < 117; i++) {
    for (b_m = 0; b_m < 15; b_m++) {
      est_estimator_B->Assignment[(int32_T)(b_m + (int32_T)(117 * i))] =
        est_estimator_B->MatrixConcatenate[(int32_T)((int32_T)(15 * i) + b_m)];
    }

    memcpy(&est_estimator_B->Assignment[(int32_T)((int32_T)(i * 117) + 15)],
           &est_estimator_B->MatrixConcatenate2[(int32_T)(i * 102)], (uint32_T)
           (102U * sizeof(real32_T)));
  }

  // End of Concatenate: '<S95>/Matrix Concatenate1'

  // If: '<S3>/If' incorporates:
  //   Constant: '<S11>/Constant'
  //   Constant: '<S12>/Constant'
  //   Constant: '<S23>/Constant'
  //   Constant: '<S27>/Constant'
  //   Constant: '<S31>/Constant'
  //   Constant: '<S32>/Constant'
  //   Constant: '<S34>/Constant'
  //   Inport: '<Root>/cmc_msg'
  //   Inport: '<Root>/handrail_msg'
  //   Inport: '<S9>/P_in'
  //   Logic: '<S11>/Logical Operator1'
  //   Logic: '<S11>/Logical Operator2'
  //   Logic: '<S11>/Logical Operator3'
  //   Logic: '<S72>/Logical Operator5'
  //   Logic: '<S72>/Logical Operator7'
  //   Logic: '<S72>/Logical Operator8'
  //   RelationalOperator: '<S31>/Compare'
  //   RelationalOperator: '<S32>/Compare'
  //   RelationalOperator: '<S34>/Compare'
  //   RelationalOperator: '<S75>/FixPt Relational Operator'
  //   RelationalOperator: '<S76>/FixPt Relational Operator'
  //   S-Function (sfix_bitop): '<S11>/Bitwise Operator1'
  //   SignalConversion: '<S1>/Signal Conversion'
  //   Sum: '<S11>/Sum of Elements'
  //   Switch: '<S12>/Switch3'
  //   UnitDelay: '<S75>/Delay Input1'
  //   UnitDelay: '<S76>/Delay Input1'

  if ((rtb_Compare && (((est_estimator_U_handrail_msg->cvs_timestamp_sec !=
                         est_estimator_DW->DelayInput1_DSTATE) ||
                        (est_estimator_U_handrail_msg->cvs_timestamp_nsec !=
                         est_estimator_DW->DelayInput1_DSTATE_h)) &&
                       empty_non_axis_sizes) && (rtb_BitwiseOperator != 0U) &&
       (est_estimator_U_cmc_msg_o->localization_mode_cmd ==
        est_estimator_P->ase_local_mode_perching)) || rtb_LogicalOperator) {
    c_sz_idx_0 = 0;
  } else if (((uint32_T)(rtb_BusAssignment_aug_state_enu &
                         est_estimator_P->BitwiseOperator1_BitMask_l) ==
              est_estimator_P->ase_aug_state_bitmask) && rtb_of_update_flag &&
             ((int32_T)est_estimator_P->tun_ase_enable_of != 0) && ((uint8_T)
              UnitDelay_DSTATE_aug_state_enum >=
              est_estimator_P->Constant_Value_e)) {
    c_sz_idx_0 = 1;
  } else {
    c_sz_idx_0 = 2;
  }

  switch (c_sz_idx_0) {
   case 0:
    // Outputs for IfAction SubSystem: '<S3>/Absolute_Update' incorporates:
    //   ActionPort: '<S8>/Action Port'

    // Outputs for Iterator SubSystem: '<S8>/ML Update' incorporates:
    //   WhileIterator: '<S12>/While Iterator'

    // InitializeConditions for UnitDelay: '<S12>/Unit Delay1' incorporates:
    //   UnitDelay: '<S12>/Unit Delay1'

    for (i = 0; i < 13689; i++) {
      est_estimator_B->Switch1[i] = est_estimator_P->UnitDelay1_InitialCondition;
    }

    // End of InitializeConditions for UnitDelay: '<S12>/Unit Delay1'

    // InitializeConditions for UnitDelay: '<S12>/Unit Delay' incorporates:
    //   UnitDelay: '<S12>/Unit Delay'

    rtb_Merge_o[0] = est_estimator_P->UnitDelay_InitialCondition.quat_ISS2B[0];
    rtb_Merge_o[1] = est_estimator_P->UnitDelay_InitialCondition.quat_ISS2B[1];
    rtb_Merge_o[2] = est_estimator_P->UnitDelay_InitialCondition.quat_ISS2B[2];
    rtb_Merge_o[3] = est_estimator_P->UnitDelay_InitialCondition.quat_ISS2B[3];
    rtb_ImpAsg_InsertedFor_Out1_at_[0] =
      est_estimator_P->UnitDelay_InitialCondition.omega_B_ISS_B[0];
    accel[0] = est_estimator_P->UnitDelay_InitialCondition.gyro_bias[0];
    UnitDelay_DSTATE_n_V_B_ISS_ISS[0] =
      est_estimator_P->UnitDelay_InitialCondition.V_B_ISS_ISS[0];
    rtb_Sum_k1 = est_estimator_P->UnitDelay_InitialCondition.A_B_ISS_ISS[0];
    UnitDelay_DSTATE_n_accel_bias[0] =
      est_estimator_P->UnitDelay_InitialCondition.accel_bias[0];
    rtb_Sum_l = est_estimator_P->UnitDelay_InitialCondition.P_B_ISS_ISS[0];
    rtb_ImpAsg_InsertedFor_Out1_at_[1] =
      est_estimator_P->UnitDelay_InitialCondition.omega_B_ISS_B[1];
    accel[1] = est_estimator_P->UnitDelay_InitialCondition.gyro_bias[1];
    UnitDelay_DSTATE_n_V_B_ISS_ISS[1] =
      est_estimator_P->UnitDelay_InitialCondition.V_B_ISS_ISS[1];
    rtb_Gain1_f = est_estimator_P->UnitDelay_InitialCondition.A_B_ISS_ISS[1];
    UnitDelay_DSTATE_n_accel_bias[1] =
      est_estimator_P->UnitDelay_InitialCondition.accel_bias[1];
    UnitDelay_DSTATE_n_P_B_ISS_ISS_ =
      est_estimator_P->UnitDelay_InitialCondition.P_B_ISS_ISS[1];
    rtb_ImpAsg_InsertedFor_Out1_at_[2] =
      est_estimator_P->UnitDelay_InitialCondition.omega_B_ISS_B[2];
    accel[2] = est_estimator_P->UnitDelay_InitialCondition.gyro_bias[2];
    UnitDelay_DSTATE_n_V_B_ISS_ISS[2] =
      est_estimator_P->UnitDelay_InitialCondition.V_B_ISS_ISS[2];
    UnitDelay_DSTATE_n_A_B_ISS_ISS_ =
      est_estimator_P->UnitDelay_InitialCondition.A_B_ISS_ISS[2];
    UnitDelay_DSTATE_n_accel_bias[2] =
      est_estimator_P->UnitDelay_InitialCondition.accel_bias[2];
    UnitDelay_DSTATE_n_P_B_ISS_IS_0 =
      est_estimator_P->UnitDelay_InitialCondition.P_B_ISS_ISS[2];
    rtb_Saturation_n = est_estimator_P->UnitDelay_InitialCondition.confidence;
    rtb_BitwiseOperator =
      est_estimator_P->UnitDelay_InitialCondition.aug_state_enum;
    UnitDelay_DSTATE_n_ml_quat_ISS2[0] =
      est_estimator_P->UnitDelay_InitialCondition.ml_quat_ISS2cam[0];
    UnitDelay_DSTATE_n_ml_quat_ISS2[1] =
      est_estimator_P->UnitDelay_InitialCondition.ml_quat_ISS2cam[1];
    UnitDelay_DSTATE_n_ml_quat_ISS2[2] =
      est_estimator_P->UnitDelay_InitialCondition.ml_quat_ISS2cam[2];
    UnitDelay_DSTATE_n_ml_quat_ISS2[3] =
      est_estimator_P->UnitDelay_InitialCondition.ml_quat_ISS2cam[3];
    UnitDelay_DSTATE_n_ml_P_cam_ISS[0] =
      est_estimator_P->UnitDelay_InitialCondition.ml_P_cam_ISS_ISS[0];
    UnitDelay_DSTATE_n_ml_P_cam_ISS[1] =
      est_estimator_P->UnitDelay_InitialCondition.ml_P_cam_ISS_ISS[1];
    UnitDelay_DSTATE_n_ml_P_cam_ISS[2] =
      est_estimator_P->UnitDelay_InitialCondition.ml_P_cam_ISS_ISS[2];
    memcpy(&UnitDelay_DSTATE_n_of_quat_ISS2[0],
           &est_estimator_P->UnitDelay_InitialCondition.of_quat_ISS2cam[0],
           (uint32_T)(sizeof(real32_T) << 6U));
    memcpy(&UnitDelay_DSTATE_n_of_P_cam_ISS[0],
           &est_estimator_P->UnitDelay_InitialCondition.of_P_cam_ISS_ISS[0],
           (uint32_T)(48U * sizeof(real32_T)));
    memcpy(&UnitDelay_DSTATE_n_cov_diag[0],
           &est_estimator_P->UnitDelay_InitialCondition.cov_diag[0], (uint32_T)
           (117U * sizeof(ase_cov_datatype)));
    UnitDelay_DSTATE_n_kfl_status =
      est_estimator_P->UnitDelay_InitialCondition.kfl_status;
    rtb_Switch_m =
      est_estimator_P->UnitDelay_InitialCondition.update_OF_tracks_cnt;
    rtb_numFeatures_f =
      est_estimator_P->UnitDelay_InitialCondition.update_ML_features_cnt;
    memcpy(&UnitDelay_DSTATE_n_of_mahal_dis[0],
           &est_estimator_P->UnitDelay_InitialCondition.of_mahal_distance[0],
           (uint32_T)(50U * sizeof(real_T)));
    memcpy(&UnitDelay_DSTATE_n_ml_mahal_dis[0],
           &est_estimator_P->UnitDelay_InitialCondition.ml_mahal_distance[0],
           (uint32_T)(50U * sizeof(real_T)));
    UnitDelay_DSTATE_n_hr_P_hr_ISS_ =
      est_estimator_P->UnitDelay_InitialCondition.hr_P_hr_ISS_ISS[0];
    UnitDelay_DSTATE_n_hr_P_hr_IS_0 =
      est_estimator_P->UnitDelay_InitialCondition.hr_P_hr_ISS_ISS[1];
    UnitDelay_DSTATE_n_hr_P_hr_IS_1 =
      est_estimator_P->UnitDelay_InitialCondition.hr_P_hr_ISS_ISS[2];
    UnitDelay_DSTATE_n_hr_quat_ISS2 =
      est_estimator_P->UnitDelay_InitialCondition.hr_quat_ISS2hr[0];
    UnitDelay_DSTATE_n_hr_quat_IS_0 =
      est_estimator_P->UnitDelay_InitialCondition.hr_quat_ISS2hr[1];
    UnitDelay_DSTATE_n_hr_quat_IS_1 =
      est_estimator_P->UnitDelay_InitialCondition.hr_quat_ISS2hr[2];
    UnitDelay_DSTATE_n_hr_quat_IS_2 =
      est_estimator_P->UnitDelay_InitialCondition.hr_quat_ISS2hr[3];
    UnitDelay_DSTATE_n_P_EST_ISS_IS[0] =
      est_estimator_P->UnitDelay_InitialCondition.P_EST_ISS_ISS[0];
    UnitDelay_DSTATE_n_P_EST_ISS_IS[1] =
      est_estimator_P->UnitDelay_InitialCondition.P_EST_ISS_ISS[1];
    UnitDelay_DSTATE_n_P_EST_ISS_IS[2] =
      est_estimator_P->UnitDelay_InitialCondition.P_EST_ISS_ISS[2];
    if (1 > est_estimator_P->Switch3_Threshold) {
      memcpy(&est_estimator_B->Assignment[0], &est_estimator_B->Switch1[0],
             (uint32_T)(13689U * sizeof(real32_T)));
    }

    // Switch: '<S12>/Switch2' incorporates:
    //   BusAssignment: '<S42>/Bus Assignment'
    //   BusAssignment: '<S6>/Bus Assignment'
    //   BusCreator: '<S2>/Bus Creator2'
    //   Switch: '<S12>/Switch3'
    //   UnitDelay: '<S2>/Unit Delay10'
    //   UnitDelay: '<S2>/Unit Delay11'
    //   UnitDelay: '<S2>/Unit Delay12'
    //   UnitDelay: '<S2>/Unit Delay13'
    //   UnitDelay: '<S2>/Unit Delay14'
    //   UnitDelay: '<S2>/Unit Delay15'
    //   UnitDelay: '<S2>/Unit Delay3'
    //   UnitDelay: '<S2>/Unit Delay6'
    //   UnitDelay: '<S2>/Unit Delay7'
    //   UnitDelay: '<S2>/Unit Delay8'

    if (!(1 > est_estimator_P->Switch2_Threshold)) {
      rtb_Merge_o[0] = rtb_Product1[0];
      rtb_Merge_o[1] = rtb_Product1[1];
      rtb_Merge_o[2] = rtb_Product1[2];
      rtb_Merge_o[3] = rtb_Product1[3];
      rtb_ImpAsg_InsertedFor_Out1_at_[0] = rtb_ImpAsg_InsertedFor_Out1_a_d[0];
      accel[0] = est_estimator_DW->UnitDelay3_DSTATE[0];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[0] = rtb_Sum2[0];
      rtb_Sum_k1 = rtb_Sum1_k3[0];
      UnitDelay_DSTATE_n_accel_bias[0] = est_estimator_DW->UnitDelay6_DSTATE[0];
      rtb_Sum_l = est_estimator_DW->UnitDelay7_DSTATE[0];
      rtb_ImpAsg_InsertedFor_Out1_at_[1] = rtb_ImpAsg_InsertedFor_Out1_a_d[1];
      accel[1] = est_estimator_DW->UnitDelay3_DSTATE[1];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[1] = rtb_Sum2[1];
      rtb_Gain1_f = rtb_Sum1_k3[1];
      UnitDelay_DSTATE_n_accel_bias[1] = est_estimator_DW->UnitDelay6_DSTATE[1];
      UnitDelay_DSTATE_n_P_B_ISS_ISS_ = est_estimator_DW->UnitDelay7_DSTATE[1];
      rtb_ImpAsg_InsertedFor_Out1_at_[2] = hr_quat_ISS2hr_idx_0;
      accel[2] = est_estimator_DW->UnitDelay3_DSTATE[2];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[2] = rtb_Sum2[2];
      UnitDelay_DSTATE_n_A_B_ISS_ISS_ = rtb_Sum1_k3[2];
      UnitDelay_DSTATE_n_accel_bias[2] = est_estimator_DW->UnitDelay6_DSTATE[2];
      UnitDelay_DSTATE_n_P_B_ISS_IS_0 = est_estimator_DW->UnitDelay7_DSTATE[2];
      rtb_Saturation_n = est_estimator_DW->UnitDelay8_DSTATE;
      rtb_BitwiseOperator = rtb_BusAssignment_aug_state_enu;
      UnitDelay_DSTATE_n_ml_quat_ISS2[0] = est_estimator_DW->UnitDelay10_DSTATE
        [0];
      UnitDelay_DSTATE_n_ml_quat_ISS2[1] = est_estimator_DW->UnitDelay10_DSTATE
        [1];
      UnitDelay_DSTATE_n_ml_quat_ISS2[2] = est_estimator_DW->UnitDelay10_DSTATE
        [2];
      UnitDelay_DSTATE_n_ml_quat_ISS2[3] = est_estimator_DW->UnitDelay10_DSTATE
        [3];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[0] = est_estimator_DW->UnitDelay11_DSTATE
        [0];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[1] = est_estimator_DW->UnitDelay11_DSTATE
        [1];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[2] = est_estimator_DW->UnitDelay11_DSTATE
        [2];
      memcpy(&UnitDelay_DSTATE_n_of_quat_ISS2[0],
             &est_estimator_DW->UnitDelay12_DSTATE[0], (uint32_T)(sizeof
              (real32_T) << 6U));
      memcpy(&UnitDelay_DSTATE_n_of_P_cam_ISS[0],
             &est_estimator_DW->UnitDelay13_DSTATE[0], (uint32_T)(48U * sizeof
              (real32_T)));
      memcpy(&UnitDelay_DSTATE_n_cov_diag[0],
             &est_estimator_DW->UnitDelay14_DSTATE[0], (uint32_T)(117U * sizeof
              (ase_cov_datatype)));
      UnitDelay_DSTATE_n_kfl_status = est_estimator_DW->UnitDelay15_DSTATE;
      rtb_Switch_m = numFeatures;
      rtb_numFeatures_f = rtb_BusCreator2_update_ML_featu;
      memcpy(&UnitDelay_DSTATE_n_of_mahal_dis[0], &rtb_UnitDelay18[0], (uint32_T)
             (50U * sizeof(real_T)));
      memcpy(&UnitDelay_DSTATE_n_ml_mahal_dis[0], &rtb_UnitDelay19[0], (uint32_T)
             (50U * sizeof(real_T)));
      UnitDelay_DSTATE_n_hr_P_hr_ISS_ = rtb_Add_e[0];
      UnitDelay_DSTATE_n_hr_P_hr_IS_0 = rtb_Add_e[1];
      UnitDelay_DSTATE_n_hr_P_hr_IS_1 = rtb_Add_e[2];
      UnitDelay_DSTATE_n_hr_quat_ISS2 = rtb_UnitDelay25[0];
      UnitDelay_DSTATE_n_hr_quat_IS_0 = rtb_UnitDelay25[1];
      UnitDelay_DSTATE_n_hr_quat_IS_1 = rtb_UnitDelay25[2];
      UnitDelay_DSTATE_n_hr_quat_IS_2 = rtb_UnitDelay25[3];
      UnitDelay_DSTATE_n_P_EST_ISS_IS[0] = rtb_P_B_ISS_ISS[0];
      UnitDelay_DSTATE_n_P_EST_ISS_IS[1] = rtb_P_B_ISS_ISS[1];
      UnitDelay_DSTATE_n_P_EST_ISS_IS[2] = rtb_P_B_ISS_ISS[2];
    }

    // End of Switch: '<S12>/Switch2'

    // If: '<S13>/IF'
    if ((int32_T)est_estimator_U_cmc_msg_o->localization_mode_cmd == 2) {
      // Outputs for IfAction SubSystem: '<S13>/HR_Compute_Residual_and_H1' incorporates:
      //   ActionPort: '<S16>/Action Port'

      // MATLAB Function: '<S16>/Compute Global positions of Handrail Features'
      // MATLAB Function 'camera_update/Absolute_Update/ML Update/Compute Residual and H matrix/HR_Compute_Residual_and_H1/Compute Global positions of Handrail Features': '<S18>:1' 
      // '<S18>:1:4'
      //  Copyright (c) 2017, United States Government, as represented by the
      //  Administrator of the National Aeronautics and Space Administration.
      //
      //  All rights reserved.
      //
      //  The Astrobee platform is licensed under the Apache License, Version 2.0 
      //  (the "License"); you may not use this file except in compliance with the 
      //  License. You may obtain a copy of the License at
      //
      //      http://www.apache.org/licenses/LICENSE-2.0
      //
      //  Unless required by applicable law or agreed to in writing, software
      //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
      //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
      //  License for the specific language governing permissions and limitations 
      //  under the License.
      if (!est_estimator_DW->hr_P_hr_ISS_ISS_pers_not_empty) {
        //  Copyright (c) 2017, United States Government, as represented by the
        //  Administrator of the National Aeronautics and Space Administration.
        //
        //  All rights reserved.
        //
        //  The Astrobee platform is licensed under the Apache License, Version 2.0 
        //  (the "License"); you may not use this file except in compliance with the 
        //  License. You may obtain a copy of the License at
        //
        //      http://www.apache.org/licenses/LICENSE-2.0
        //
        //  Unless required by applicable law or agreed to in writing, software
        //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
        //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
        //  License for the specific language governing permissions and limitations 
        //  under the License.
        //  construct rotation matrix from quaternion
        //  From Zack and Brian's ekf.m  Used as a nested function in the optical 
        //  flow update
        //  Copyright (c) 2017, United States Government, as represented by the
        //  Administrator of the National Aeronautics and Space Administration.
        //
        //  All rights reserved.
        //
        //  The Astrobee platform is licensed under the Apache License, Version 2.0 
        //  (the "License"); you may not use this file except in compliance with the 
        //  License. You may obtain a copy of the License at
        //
        //      http://www.apache.org/licenses/LICENSE-2.0
        //
        //  Unless required by applicable law or agreed to in writing, software
        //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
        //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
        //  License for the specific language governing permissions and limitations 
        //  under the License.
        //  construct swew matrix from a vector
        //  From Zack and Brian's ekf.m  Used as a nested function in the optical 
        //  flow update
        S[0] = 0.0F;
        S[3] = -UnitDelay_DSTATE_n_ml_quat_ISS2[2];
        S[6] = UnitDelay_DSTATE_n_ml_quat_ISS2[1];
        S[1] = UnitDelay_DSTATE_n_ml_quat_ISS2[2];
        S[4] = 0.0F;
        S[7] = -UnitDelay_DSTATE_n_ml_quat_ISS2[0];
        S[2] = -UnitDelay_DSTATE_n_ml_quat_ISS2[1];
        S[5] = UnitDelay_DSTATE_n_ml_quat_ISS2[0];
        S[8] = 0.0F;
        hr_quat_ISS2hr_idx_0 = UnitDelay_DSTATE_n_ml_quat_ISS2[3];
        rtb_Switch1 = UnitDelay_DSTATE_n_ml_quat_ISS2[3];
        for (i = 0; i < 3; i++) {
          x[(int32_T)(3 * i)] = hr_quat_ISS2hr_idx_0 * (real32_T)b_2[i] + S[i];
          rtb_Product1_1[(int32_T)(i << 2)] = (real32_T)b_2[(int32_T)(3 * i)] *
            rtb_Switch1 - S[(int32_T)(3 * i)];
          x[(int32_T)(1 + (int32_T)(3 * i))] = (real32_T)b_2[(int32_T)(i + 3)] *
            hr_quat_ISS2hr_idx_0 + S[(int32_T)(i + 3)];
          rtb_Product1_1[(int32_T)(1 + (int32_T)(i << 2))] = (real32_T)b_2
            [(int32_T)((int32_T)(3 * i) + 1)] * rtb_Switch1 - S[(int32_T)
            ((int32_T)(3 * i) + 1)];
          x[(int32_T)(2 + (int32_T)(3 * i))] = (real32_T)b_2[(int32_T)(i + 6)] *
            hr_quat_ISS2hr_idx_0 + S[(int32_T)(i + 6)];
          rtb_Product1_1[(int32_T)(2 + (int32_T)(i << 2))] = (real32_T)b_2
            [(int32_T)((int32_T)(3 * i) + 2)] * rtb_Switch1 - S[(int32_T)
            ((int32_T)(3 * i) + 2)];
          x[(int32_T)(9 + i)] = -UnitDelay_DSTATE_n_ml_quat_ISS2[i];
          rtb_Product1_1[(int32_T)(3 + (int32_T)(i << 2))] =
            -UnitDelay_DSTATE_n_ml_quat_ISS2[i];
        }

        for (i = 0; i < 3; i++) {
          hr_quat_ISS2hr_idx_1 = 0.0F;
          for (b_m = 0; b_m < 3; b_m++) {
            rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * b_m))] = 0.0F;
            rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * b_m))] +=
              rtb_Product1_1[(int32_T)(i << 2)] * x[b_m];
            rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * b_m))] +=
              rtb_Product1_1[(int32_T)((int32_T)(i << 2) + 1)] * x[(int32_T)(b_m
              + 3)];
            rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * b_m))] +=
              rtb_Product1_1[(int32_T)((int32_T)(i << 2) + 2)] * x[(int32_T)(b_m
              + 6)];
            rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * b_m))] +=
              rtb_Product1_1[(int32_T)((int32_T)(i << 2) + 3)] * x[(int32_T)(b_m
              + 9)];
            hr_quat_ISS2hr_idx_1 += rtb_Assignment_b[(int32_T)((int32_T)(3 * b_m)
              + i)] * est_estimator_U_handrail_msg->cvs_handrail_local_pos[b_m];
          }

          est_estimator_DW->hr_P_hr_ISS_ISS_pers[i] =
            UnitDelay_DSTATE_n_ml_P_cam_ISS[i] + hr_quat_ISS2hr_idx_1;
        }

        est_estimator_DW->hr_P_hr_ISS_ISS_pers_not_empty = true;
      }

      if (!est_estimator_DW->hr_quat_ISS2hr_pers_not_empty) {
        iecjopppiecjmgln_quatmult(UnitDelay_DSTATE_n_ml_quat_ISS2,
          est_estimator_U_handrail_msg->cvs_handrail_local_quat,
          est_estimator_DW->hr_quat_ISS2hr_pers);
        est_estimator_DW->hr_quat_ISS2hr_pers_not_empty = true;
      }

      if ((int32_T)
          est_estimator_U_handrail_msg->cvs_handrail_update_global_pose_flag ==
          1) {
        //  Copyright (c) 2017, United States Government, as represented by the
        //  Administrator of the National Aeronautics and Space Administration.
        //
        //  All rights reserved.
        //
        //  The Astrobee platform is licensed under the Apache License, Version 2.0 
        //  (the "License"); you may not use this file except in compliance with the 
        //  License. You may obtain a copy of the License at
        //
        //      http://www.apache.org/licenses/LICENSE-2.0
        //
        //  Unless required by applicable law or agreed to in writing, software
        //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
        //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
        //  License for the specific language governing permissions and limitations 
        //  under the License.
        //  construct rotation matrix from quaternion
        //  From Zack and Brian's ekf.m  Used as a nested function in the optical 
        //  flow update
        //  Copyright (c) 2017, United States Government, as represented by the
        //  Administrator of the National Aeronautics and Space Administration.
        //
        //  All rights reserved.
        //
        //  The Astrobee platform is licensed under the Apache License, Version 2.0 
        //  (the "License"); you may not use this file except in compliance with the 
        //  License. You may obtain a copy of the License at
        //
        //      http://www.apache.org/licenses/LICENSE-2.0
        //
        //  Unless required by applicable law or agreed to in writing, software
        //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
        //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
        //  License for the specific language governing permissions and limitations 
        //  under the License.
        //  construct swew matrix from a vector
        //  From Zack and Brian's ekf.m  Used as a nested function in the optical 
        //  flow update
        S[0] = 0.0F;
        S[3] = -UnitDelay_DSTATE_n_ml_quat_ISS2[2];
        S[6] = UnitDelay_DSTATE_n_ml_quat_ISS2[1];
        S[1] = UnitDelay_DSTATE_n_ml_quat_ISS2[2];
        S[4] = 0.0F;
        S[7] = -UnitDelay_DSTATE_n_ml_quat_ISS2[0];
        S[2] = -UnitDelay_DSTATE_n_ml_quat_ISS2[1];
        S[5] = UnitDelay_DSTATE_n_ml_quat_ISS2[0];
        S[8] = 0.0F;
        hr_quat_ISS2hr_idx_0 = UnitDelay_DSTATE_n_ml_quat_ISS2[3];
        rtb_Switch1 = UnitDelay_DSTATE_n_ml_quat_ISS2[3];
        for (i = 0; i < 3; i++) {
          x[(int32_T)(3 * i)] = hr_quat_ISS2hr_idx_0 * (real32_T)b_2[i] + S[i];
          rtb_Product1_1[(int32_T)(i << 2)] = (real32_T)b_2[(int32_T)(3 * i)] *
            rtb_Switch1 - S[(int32_T)(3 * i)];
          x[(int32_T)(1 + (int32_T)(3 * i))] = (real32_T)b_2[(int32_T)(i + 3)] *
            hr_quat_ISS2hr_idx_0 + S[(int32_T)(i + 3)];
          rtb_Product1_1[(int32_T)(1 + (int32_T)(i << 2))] = (real32_T)b_2
            [(int32_T)((int32_T)(3 * i) + 1)] * rtb_Switch1 - S[(int32_T)
            ((int32_T)(3 * i) + 1)];
          x[(int32_T)(2 + (int32_T)(3 * i))] = (real32_T)b_2[(int32_T)(i + 6)] *
            hr_quat_ISS2hr_idx_0 + S[(int32_T)(i + 6)];
          rtb_Product1_1[(int32_T)(2 + (int32_T)(i << 2))] = (real32_T)b_2
            [(int32_T)((int32_T)(3 * i) + 2)] * rtb_Switch1 - S[(int32_T)
            ((int32_T)(3 * i) + 2)];
          x[(int32_T)(9 + i)] = -UnitDelay_DSTATE_n_ml_quat_ISS2[i];
          rtb_Product1_1[(int32_T)(3 + (int32_T)(i << 2))] =
            -UnitDelay_DSTATE_n_ml_quat_ISS2[i];
        }

        for (i = 0; i < 3; i++) {
          hr_quat_ISS2hr_idx_1 = 0.0F;
          for (b_m = 0; b_m < 3; b_m++) {
            rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * b_m))] = 0.0F;
            rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * b_m))] +=
              rtb_Product1_1[(int32_T)(i << 2)] * x[b_m];
            rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * b_m))] +=
              rtb_Product1_1[(int32_T)((int32_T)(i << 2) + 1)] * x[(int32_T)(b_m
              + 3)];
            rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * b_m))] +=
              rtb_Product1_1[(int32_T)((int32_T)(i << 2) + 2)] * x[(int32_T)(b_m
              + 6)];
            rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * b_m))] +=
              rtb_Product1_1[(int32_T)((int32_T)(i << 2) + 3)] * x[(int32_T)(b_m
              + 9)];
            hr_quat_ISS2hr_idx_1 += rtb_Assignment_b[(int32_T)((int32_T)(3 * b_m)
              + i)] * est_estimator_U_handrail_msg->cvs_handrail_local_pos[b_m];
          }

          est_estimator_DW->hr_P_hr_ISS_ISS_pers[i] =
            UnitDelay_DSTATE_n_ml_P_cam_ISS[i] + hr_quat_ISS2hr_idx_1;
        }

        iecjopppiecjmgln_quatmult(UnitDelay_DSTATE_n_ml_quat_ISS2,
          est_estimator_U_handrail_msg->cvs_handrail_local_quat,
          est_estimator_DW->hr_quat_ISS2hr_pers);
      }

      memset(&rtb_hr_global_landmarks[0], 0, (uint32_T)(150U * sizeof(real32_T)));
      num_original = 0;
      while ((num_original < 50) && (!((int32_T)
               est_estimator_U_handrail_msg->cvs_valid_flag[num_original] == 0)))
      {
        //  Copyright (c) 2017, United States Government, as represented by the
        //  Administrator of the National Aeronautics and Space Administration.
        //
        //  All rights reserved.
        //
        //  The Astrobee platform is licensed under the Apache License, Version 2.0 
        //  (the "License"); you may not use this file except in compliance with the 
        //  License. You may obtain a copy of the License at
        //
        //      http://www.apache.org/licenses/LICENSE-2.0
        //
        //  Unless required by applicable law or agreed to in writing, software
        //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
        //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
        //  License for the specific language governing permissions and limitations 
        //  under the License.
        //  construct rotation matrix from quaternion
        //  From Zack and Brian's ekf.m  Used as a nested function in the optical 
        //  flow update
        //  Copyright (c) 2017, United States Government, as represented by the
        //  Administrator of the National Aeronautics and Space Administration.
        //
        //  All rights reserved.
        //
        //  The Astrobee platform is licensed under the Apache License, Version 2.0 
        //  (the "License"); you may not use this file except in compliance with the 
        //  License. You may obtain a copy of the License at
        //
        //      http://www.apache.org/licenses/LICENSE-2.0
        //
        //  Unless required by applicable law or agreed to in writing, software
        //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
        //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
        //  License for the specific language governing permissions and limitations 
        //  under the License.
        //  construct swew matrix from a vector
        //  From Zack and Brian's ekf.m  Used as a nested function in the optical 
        //  flow update
        S[0] = 0.0F;
        S[3] = -est_estimator_U_handrail_msg->cvs_handrail_local_quat[2];
        S[6] = est_estimator_U_handrail_msg->cvs_handrail_local_quat[1];
        S[1] = est_estimator_U_handrail_msg->cvs_handrail_local_quat[2];
        S[4] = 0.0F;
        S[7] = -est_estimator_U_handrail_msg->cvs_handrail_local_quat[0];
        S[2] = -est_estimator_U_handrail_msg->cvs_handrail_local_quat[1];
        S[5] = est_estimator_U_handrail_msg->cvs_handrail_local_quat[0];
        S[8] = 0.0F;

        //  Copyright (c) 2017, United States Government, as represented by the
        //  Administrator of the National Aeronautics and Space Administration.
        //
        //  All rights reserved.
        //
        //  The Astrobee platform is licensed under the Apache License, Version 2.0 
        //  (the "License"); you may not use this file except in compliance with the 
        //  License. You may obtain a copy of the License at
        //
        //      http://www.apache.org/licenses/LICENSE-2.0
        //
        //  Unless required by applicable law or agreed to in writing, software
        //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
        //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
        //  License for the specific language governing permissions and limitations 
        //  under the License.
        //  construct rotation matrix from quaternion
        //  From Zack and Brian's ekf.m  Used as a nested function in the optical 
        //  flow update
        //  Copyright (c) 2017, United States Government, as represented by the
        //  Administrator of the National Aeronautics and Space Administration.
        //
        //  All rights reserved.
        //
        //  The Astrobee platform is licensed under the Apache License, Version 2.0 
        //  (the "License"); you may not use this file except in compliance with the 
        //  License. You may obtain a copy of the License at
        //
        //      http://www.apache.org/licenses/LICENSE-2.0
        //
        //  Unless required by applicable law or agreed to in writing, software
        //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
        //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
        //  License for the specific language governing permissions and limitations 
        //  under the License.
        //  construct swew matrix from a vector
        //  From Zack and Brian's ekf.m  Used as a nested function in the optical 
        //  flow update
        C[0] = 0.0F;
        C[3] = -est_estimator_DW->hr_quat_ISS2hr_pers[2];
        C[6] = est_estimator_DW->hr_quat_ISS2hr_pers[1];
        C[1] = est_estimator_DW->hr_quat_ISS2hr_pers[2];
        C[4] = 0.0F;
        C[7] = -est_estimator_DW->hr_quat_ISS2hr_pers[0];
        C[2] = -est_estimator_DW->hr_quat_ISS2hr_pers[1];
        C[5] = est_estimator_DW->hr_quat_ISS2hr_pers[0];
        C[8] = 0.0F;
        hr_quat_ISS2hr_idx_1 = est_estimator_DW->hr_quat_ISS2hr_pers[3];
        hr_quat_ISS2hr_idx_0 = est_estimator_DW->hr_quat_ISS2hr_pers[3];
        rtb_Switch1 = est_estimator_U_handrail_msg->cvs_handrail_local_quat[3];
        hr_quat_ISS2hr_idx_2 =
          est_estimator_U_handrail_msg->cvs_handrail_local_quat[3];
        for (i = 0; i < 3; i++) {
          x[(int32_T)(3 * i)] = hr_quat_ISS2hr_idx_1 * (real32_T)b_2[i] + C[i];
          tmp_8[(int32_T)(i << 2)] = (real32_T)b_2[(int32_T)(3 * i)] *
            hr_quat_ISS2hr_idx_0 - C[(int32_T)(3 * i)];
          rtb_Product1_1[(int32_T)(3 * i)] = rtb_Switch1 * (real32_T)b_2[i] +
            S[i];
          rtb_Product1_2[(int32_T)(i << 2)] = (real32_T)b_2[(int32_T)(3 * i)] *
            hr_quat_ISS2hr_idx_2 - S[(int32_T)(3 * i)];
          x[(int32_T)(1 + (int32_T)(3 * i))] = (real32_T)b_2[(int32_T)(i + 3)] *
            hr_quat_ISS2hr_idx_1 + C[(int32_T)(i + 3)];
          tmp_8[(int32_T)(1 + (int32_T)(i << 2))] = (real32_T)b_2[(int32_T)
            ((int32_T)(3 * i) + 1)] * hr_quat_ISS2hr_idx_0 - C[(int32_T)
            ((int32_T)(3 * i) + 1)];
          rtb_Product1_1[(int32_T)(1 + (int32_T)(3 * i))] = (real32_T)b_2
            [(int32_T)(i + 3)] * rtb_Switch1 + S[(int32_T)(i + 3)];
          rtb_Product1_2[(int32_T)(1 + (int32_T)(i << 2))] = (real32_T)b_2
            [(int32_T)((int32_T)(3 * i) + 1)] * hr_quat_ISS2hr_idx_2 - S
            [(int32_T)((int32_T)(3 * i) + 1)];
          x[(int32_T)(2 + (int32_T)(3 * i))] = (real32_T)b_2[(int32_T)(i + 6)] *
            hr_quat_ISS2hr_idx_1 + C[(int32_T)(i + 6)];
          tmp_8[(int32_T)(2 + (int32_T)(i << 2))] = (real32_T)b_2[(int32_T)
            ((int32_T)(3 * i) + 2)] * hr_quat_ISS2hr_idx_0 - C[(int32_T)
            ((int32_T)(3 * i) + 2)];
          rtb_Product1_1[(int32_T)(2 + (int32_T)(3 * i))] = (real32_T)b_2
            [(int32_T)(i + 6)] * rtb_Switch1 + S[(int32_T)(i + 6)];
          rtb_Product1_2[(int32_T)(2 + (int32_T)(i << 2))] = (real32_T)b_2
            [(int32_T)((int32_T)(3 * i) + 2)] * hr_quat_ISS2hr_idx_2 - S
            [(int32_T)((int32_T)(3 * i) + 2)];
          x[(int32_T)(9 + i)] = -est_estimator_DW->hr_quat_ISS2hr_pers[i];
          tmp_8[(int32_T)(3 + (int32_T)(i << 2))] =
            -est_estimator_DW->hr_quat_ISS2hr_pers[i];
          rtb_Product1_1[(int32_T)(9 + i)] =
            -est_estimator_U_handrail_msg->cvs_handrail_local_quat[i];
          rtb_Product1_2[(int32_T)(3 + (int32_T)(i << 2))] =
            -est_estimator_U_handrail_msg->cvs_handrail_local_quat[i];
        }

        for (i = 0; i < 3; i++) {
          rtb_P_B_ISS_ISS[i] = est_estimator_U_handrail_msg->cvs_observations
            [(int32_T)((int32_T)(50 * i) + num_original)] -
            est_estimator_U_handrail_msg->cvs_handrail_local_pos[i];
          for (b_m = 0; b_m < 3; b_m++) {
            rtb_Product1_0[(int32_T)(i + (int32_T)(3 * b_m))] = 0.0F;
            rtb_Assignment_o[(int32_T)(i + (int32_T)(3 * b_m))] = 0.0F;
            rtb_Product1_0[(int32_T)(i + (int32_T)(3 * b_m))] += rtb_Product1_2
              [(int32_T)(b_m << 2)] * rtb_Product1_1[i];
            rtb_Assignment_o[(int32_T)(i + (int32_T)(3 * b_m))] += tmp_8
              [(int32_T)(i << 2)] * x[b_m];
            rtb_Product1_0[(int32_T)(i + (int32_T)(3 * b_m))] += rtb_Product1_2
              [(int32_T)((int32_T)(b_m << 2) + 1)] * rtb_Product1_1[(int32_T)(i
              + 3)];
            rtb_Assignment_o[(int32_T)(i + (int32_T)(3 * b_m))] += tmp_8
              [(int32_T)((int32_T)(i << 2) + 1)] * x[(int32_T)(b_m + 3)];
            rtb_Product1_0[(int32_T)(i + (int32_T)(3 * b_m))] += rtb_Product1_2
              [(int32_T)((int32_T)(b_m << 2) + 2)] * rtb_Product1_1[(int32_T)(i
              + 6)];
            rtb_Assignment_o[(int32_T)(i + (int32_T)(3 * b_m))] += tmp_8
              [(int32_T)((int32_T)(i << 2) + 2)] * x[(int32_T)(b_m + 6)];
            rtb_Product1_0[(int32_T)(i + (int32_T)(3 * b_m))] += rtb_Product1_2
              [(int32_T)((int32_T)(b_m << 2) + 3)] * rtb_Product1_1[(int32_T)(i
              + 9)];
            rtb_Assignment_o[(int32_T)(i + (int32_T)(3 * b_m))] += tmp_8
              [(int32_T)((int32_T)(i << 2) + 3)] * x[(int32_T)(b_m + 9)];
          }
        }

        for (i = 0; i < 3; i++) {
          rtb_Sum1_k3[i] = rtb_Product1_0[(int32_T)(i + 6)] * rtb_P_B_ISS_ISS[2]
            + (rtb_Product1_0[(int32_T)(i + 3)] * rtb_P_B_ISS_ISS[1] +
               rtb_Product1_0[i] * rtb_P_B_ISS_ISS[0]);
        }

        for (i = 0; i < 3; i++) {
          rtb_hr_global_landmarks[(int32_T)(num_original + (int32_T)(50 * i))] =
            ((rtb_Assignment_o[(int32_T)(i + 3)] * rtb_Sum1_k3[1] +
              rtb_Assignment_o[i] * rtb_Sum1_k3[0]) + rtb_Assignment_o[(int32_T)
             (i + 6)] * rtb_Sum1_k3[2]) + est_estimator_DW->
            hr_P_hr_ISS_ISS_pers[i];
        }

        num_original++;
      }

      // MATLAB Function: '<S16>/Compute Residual and H'
      // '<S18>:1:4'
      // MATLAB Function 'camera_update/Absolute_Update/ML Update/Compute Residual and H matrix/HR_Compute_Residual_and_H1/Compute Residual and H': '<S19>:1' 
      // '<S19>:1:3'
      //  Copyright (c) 2017, United States Government, as represented by the
      //  Administrator of the National Aeronautics and Space Administration.
      //
      //  All rights reserved.
      //
      //  The Astrobee platform is licensed under the Apache License, Version 2.0 
      //  (the "License"); you may not use this file except in compliance with the 
      //  License. You may obtain a copy of the License at
      //
      //      http://www.apache.org/licenses/LICENSE-2.0
      //
      //  Unless required by applicable law or agreed to in writing, software
      //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
      //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
      //  License for the specific language governing permissions and limitations 
      //  under the License.
      if ((int32_T)est_estimator_U_handrail_msg->cvs_3d_knowledge_flag == 1) {
        handrail_knowledge_dims = 3;
      } else {
        handrail_knowledge_dims = 2;
      }

      //  Get tf matrix that converts from global position (world frame)
      //  to local position (camera frame)
      for (i = 0; i < 12; i++) {
        camera_ml_tf_global[i] = (real_T)t[i];
      }

      fkfcbaiengdjgdje_quaternion_to_rotation(UnitDelay_DSTATE_n_ml_quat_ISS2,
        rtb_Product1_0);
      for (i = 0; i < 3; i++) {
        C[(int32_T)(3 * i)] = (real32_T)-(real_T)rtb_Product1_0[(int32_T)(3 * i)];
        camera_ml_tf_global[(int32_T)(3 * i)] = (real_T)rtb_Product1_0[(int32_T)
          (3 * i)];
        C[(int32_T)(1 + (int32_T)(3 * i))] = (real32_T)-(real_T)rtb_Product1_0
          [(int32_T)((int32_T)(3 * i) + 1)];
        camera_ml_tf_global[(int32_T)(1 + (int32_T)(3 * i))] = (real_T)
          rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 1)];
        C[(int32_T)(2 + (int32_T)(3 * i))] = (real32_T)-(real_T)rtb_Product1_0
          [(int32_T)((int32_T)(3 * i) + 2)];
        camera_ml_tf_global[(int32_T)(2 + (int32_T)(3 * i))] = (real_T)
          rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 2)];
      }

      for (i = 0; i < 3; i++) {
        camera_ml_tf_global[(int32_T)(9 + i)] = (real_T)((C[(int32_T)(i + 3)] *
          UnitDelay_DSTATE_n_ml_P_cam_ISS[1] + C[i] *
          UnitDelay_DSTATE_n_ml_P_cam_ISS[0]) + C[(int32_T)(i + 6)] *
          UnitDelay_DSTATE_n_ml_P_cam_ISS[2]);
      }

      //  Remove the invalid features from the observations and landmarks
      //  Observations from the camera frame
      //  Landmarks from the world frame
      //  Convert global positions of the landmarks to the local positions
      br = 0;
      for (nx = 0; nx < 50; nx++) {
        if ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag[nx] != 0) {
          br++;
        }
      }

      C_sizes_idx_1 = br;
      br = 0;
      for (nx = 0; nx < 50; nx++) {
        if ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag[nx] != 0) {
          e_data[br] = (int8_T)(int32_T)(nx + 1);
          br++;
        }
      }

      for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
        varargin_1_data[(int32_T)(3 * i)] = rtb_hr_global_landmarks[(int32_T)
          ((int32_T)e_data[i] - 1)];
        varargin_1_data[(int32_T)(1 + (int32_T)(3 * i))] =
          rtb_hr_global_landmarks[(int32_T)((int32_T)e_data[i] + 49)];
        varargin_1_data[(int32_T)(2 + (int32_T)(3 * i))] =
          rtb_hr_global_landmarks[(int32_T)((int32_T)e_data[i] + 99)];
      }

      if (!(C_sizes_idx_1 == 0)) {
        num_original = C_sizes_idx_1;
      } else if (!(C_sizes_idx_1 == 0)) {
        num_original = C_sizes_idx_1;
      } else {
        num_original = 0;
        if (C_sizes_idx_1 > 0) {
          num_original = C_sizes_idx_1;
        }
      }

      empty_non_axis_sizes = (num_original == 0);
      if (empty_non_axis_sizes || (!(C_sizes_idx_1 == 0))) {
        br = 3;
      } else {
        br = 0;
      }

      if (empty_non_axis_sizes || (!(C_sizes_idx_1 == 0))) {
        nx = 1;
      } else {
        nx = 0;
      }

      ar = (int32_T)(br + nx);
      for (i = 0; i <= (int32_T)(num_original - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(br - 1); b_m++) {
          rtb_global_points[(int32_T)(b_m + (int32_T)(ar * i))] =
            varargin_1_data[(int32_T)((int32_T)(br * i) + b_m)];
        }
      }

      for (i = 0; i <= (int32_T)(num_original - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(nx - 1); b_m++) {
          rtb_global_points[(int32_T)((int32_T)(b_m + br) + (int32_T)(ar * i))] =
            1.0F;
        }
      }

      for (i = 0; i < 3; i++) {
        for (b_m = 0; b_m <= (int32_T)(num_original - 1); b_m++) {
          camera_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] = 0.0F;
          camera_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)(ar * b_m)] * (real32_T)
            camera_ml_tf_global[i];
          camera_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)((int32_T)(ar * b_m) + 1)] * (real32_T)
            camera_ml_tf_global[(int32_T)(i + 3)];
          camera_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)((int32_T)(ar * b_m) + 2)] * (real32_T)
            camera_ml_tf_global[(int32_T)(i + 6)];
          camera_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)((int32_T)(ar * b_m) + 3)] * (real32_T)
            camera_ml_tf_global[(int32_T)(i + 9)];
        }
      }

      //  Landmarks in the camera frame
      //  Create rotation matrix to convert between bases
      //  R rotation matrix that rotates from the camera frame into the handrail frame 
      //  with the axis_body vector as the z axis unit vector
      fkfcbaiengdjgdje_quaternion_to_rotation
        (est_estimator_U_handrail_msg->cvs_handrail_local_quat, S);

      //    R = eye(3);
      num_original = 0;
      for (nx = 0; nx < 50; nx++) {
        if ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag[nx] != 0) {
          num_original++;
        }
      }

      C_sizes_idx_1 = num_original;
      num_original = 0;
      for (ar = 0; ar < 50; ar++) {
        if ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag[ar] != 0) {
          e_data[num_original] = (int8_T)(int32_T)(ar + 1);
          num_original++;
        }
      }

      for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
        varargin_1_data[(int32_T)(3 * i)] =
          est_estimator_U_handrail_msg->cvs_observations[(int32_T)((int32_T)
          e_data[i] - 1)] - camera_landmarks_data[(int32_T)(3 * i)];
        varargin_1_data[(int32_T)(1 + (int32_T)(3 * i))] =
          est_estimator_U_handrail_msg->cvs_observations[(int32_T)((int32_T)
          e_data[i] + 49)] - camera_landmarks_data[(int32_T)((int32_T)(3 * i) +
          1)];
        varargin_1_data[(int32_T)(2 + (int32_T)(3 * i))] =
          est_estimator_U_handrail_msg->cvs_observations[(int32_T)((int32_T)
          e_data[i] + 99)] - camera_landmarks_data[(int32_T)((int32_T)(3 * i) +
          2)];
      }

      if (!(C_sizes_idx_1 == 0)) {
        num_original = C_sizes_idx_1;
      } else if (!(C_sizes_idx_1 == 0)) {
        num_original = C_sizes_idx_1;
      } else {
        num_original = 0;
        if (C_sizes_idx_1 > 0) {
          num_original = C_sizes_idx_1;
        }
      }

      empty_non_axis_sizes = (num_original == 0);
      if (empty_non_axis_sizes || (!(C_sizes_idx_1 == 0))) {
        br = 3;
      } else {
        br = 0;
      }

      if (empty_non_axis_sizes || (!(C_sizes_idx_1 == 0))) {
        nx = 1;
      } else {
        nx = 0;
      }

      ar = (int32_T)(br + nx);
      for (i = 0; i <= (int32_T)(num_original - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(br - 1); b_m++) {
          d_result_data[(int32_T)(b_m + (int32_T)(ar * i))] = varargin_1_data
            [(int32_T)((int32_T)(br * i) + b_m)];
        }
      }

      for (i = 0; i <= (int32_T)(num_original - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(nx - 1); b_m++) {
          d_result_data[(int32_T)((int32_T)(b_m + br) + (int32_T)(ar * i))] =
            1.0F;
        }
      }

      for (i = 0; i < 3; i++) {
        global_tf_camera1[(int32_T)(i << 2)] = S[(int32_T)(3 * i)];
        global_tf_camera1[(int32_T)(1 + (int32_T)(i << 2))] = S[(int32_T)
          ((int32_T)(3 * i) + 1)];
        global_tf_camera1[(int32_T)(2 + (int32_T)(i << 2))] = S[(int32_T)
          ((int32_T)(3 * i) + 2)];
        global_tf_camera1[(int32_T)(12 + i)] = 0.0F;
      }

      global_tf_camera1[3] = 0.0F;
      global_tf_camera1[7] = 0.0F;
      global_tf_camera1[11] = 0.0F;
      global_tf_camera1[15] = 1.0F;
      if (ar == 1) {
        z_est_sizes_idx_1 = num_original;
        for (i = 0; i < 4; i++) {
          for (b_m = 0; b_m <= (int32_T)(num_original - 1); b_m++) {
            newerr_data[(int32_T)(i + (int32_T)(b_m << 2))] = 0.0F;
            newerr_data[(int32_T)(i + (int32_T)(b_m << 2))] +=
              global_tf_camera1[i] * d_result_data[b_m];
            newerr_data[(int32_T)(i + (int32_T)(b_m << 2))] +=
              global_tf_camera1[(int32_T)(i + 4)] * d_result_data[(int32_T)(1 +
              b_m)];
            newerr_data[(int32_T)(i + (int32_T)(b_m << 2))] +=
              global_tf_camera1[(int32_T)(i + 8)] * d_result_data[(int32_T)(2 +
              b_m)];
            newerr_data[(int32_T)(i + (int32_T)(b_m << 2))] +=
              global_tf_camera1[(int32_T)(i + 12)] * d_result_data[(int32_T)(3 +
              b_m)];
          }
        }
      } else {
        z_est_sizes_idx_1 = (int32_T)(int8_T)num_original;
        for (i = 0; i <= (int32_T)(z_est_sizes_idx_1 - 1); i++) {
          newerr_data[(int32_T)(i << 2)] = 0.0F;
          newerr_data[(int32_T)(1 + (int32_T)(i << 2))] = 0.0F;
          newerr_data[(int32_T)(2 + (int32_T)(i << 2))] = 0.0F;
          newerr_data[(int32_T)(3 + (int32_T)(i << 2))] = 0.0F;
        }

        if (num_original != 0) {
          num_original = (int32_T)((int32_T)(num_original - 1) << 2);
          for (br = 0; br <= num_original; br += 4) {
            for (nx = (int32_T)(br + 1); nx <= (int32_T)(br + 4); nx++) {
              newerr_data[(int32_T)(nx - 1)] = 0.0F;
            }
          }

          br = 0;
          for (nx = 0; nx <= num_original; nx += 4) {
            ar = 0;
            for (i = br; (int32_T)(i + 1) <= (int32_T)(br + 4); i++) {
              if (d_result_data[i] != 0.0F) {
                s12_iter = ar;
                for (O_sizes_idx_0 = nx; (int32_T)(O_sizes_idx_0 + 1) <=
                     (int32_T)(nx + 4); O_sizes_idx_0++) {
                  s12_iter++;
                  newerr_data[O_sizes_idx_0] += global_tf_camera1[(int32_T)
                    (s12_iter - 1)] * d_result_data[i];
                }
              }

              ar += 4;
            }

            br += 4;
          }
        }
      }

      nx = 0;
      for (br = 0; br < 50; br++) {
        if ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag[br] != 0) {
          nx++;
        }
      }

      C_sizes_idx_1 = nx;
      for (i = 0; i <= (int32_T)(z_est_sizes_idx_1 - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(handrail_knowledge_dims - 1); b_m++) {
          est_estimator_B->x_data[(int32_T)(b_m + (int32_T)
            (handrail_knowledge_dims * i))] = newerr_data[(int32_T)((int32_T)(i <<
            2) + b_m)];
        }
      }

      nx = (int32_T)(handrail_knowledge_dims * z_est_sizes_idx_1);
      numFeatures = (uint8_T)(int32_T)(C_sizes_idx_1 * handrail_knowledge_dims);
      for (br = 0; (int32_T)(br + 1) <= nx; br++) {
        r_data[br] = est_estimator_B->x_data[br];
      }

      for (i = 0; i < 12; i++) {
        next_ml_tf_global[i] = (real_T)t[i];
      }

      //  move to camera frame and with half a frame rotation
      //  TODO: we should use the velocity and omega from the time of the
      //  registration pulse
      // camera_angle = eulers_to_quat(cam_omega(1), cam_omega(2), cam_omega(3)); 
      rtb_ml_vel_aug_0[0] = rtb_ml_vel_aug[0];
      rtb_ml_vel_aug_0[1] = rtb_ml_vel_aug[1];
      rtb_ml_vel_aug_0[2] = rtb_ml_vel_aug[2];
      gdjmmglnmgdjlfkf_quat_rotation_vec(rtb_ml_vel_aug_0,
        est_estimator_P->tun_abp_q_body2perchcam, tmp);
      kngldbimhdbaimgd_quat_propagate_step(UnitDelay_DSTATE_n_ml_quat_ISS2, tmp,
        est_estimator_P->tun_ase_ml_forward_projection_time,
        rtb_VectorConcatenate_o);
      ecjedbaiaiekohln_quaternion_to_rotation(rtb_VectorConcatenate_o, (real_T *)
        &next_ml_tf_global[0]);
      for (i = 0; i < 3; i++) {
        C[(int32_T)(3 * i)] = (real32_T)-camera_ml_tf_global[(int32_T)(3 * i)];
        C[(int32_T)(1 + (int32_T)(3 * i))] = (real32_T)-camera_ml_tf_global
          [(int32_T)((int32_T)(3 * i) + 1)];
        C[(int32_T)(2 + (int32_T)(3 * i))] = (real32_T)-camera_ml_tf_global
          [(int32_T)((int32_T)(3 * i) + 2)];
        rtb_P_B_ISS_ISS[i] = est_estimator_P->tun_ase_ml_forward_projection_time
          * (real32_T)rtb_ml_omega_aug[i] + UnitDelay_DSTATE_n_ml_P_cam_ISS[i];
      }

      for (i = 0; i < 3; i++) {
        next_ml_tf_global[(int32_T)(9 + i)] = (real_T)((C[(int32_T)(i + 3)] *
          rtb_P_B_ISS_ISS[1] + C[i] * rtb_P_B_ISS_ISS[0]) + C[(int32_T)(i + 6)] *
          rtb_P_B_ISS_ISS[2]);
      }

      nx = 0;
      for (br = 0; br < 50; br++) {
        if ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag[br] != 0) {
          nx++;
        }
      }

      C_sizes_idx_1 = nx;
      nx = 0;
      for (br = 0; br < 50; br++) {
        if ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag[br] != 0) {
          e_data[nx] = (int8_T)(int32_T)(br + 1);
          nx++;
        }
      }

      for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
        varargin_1_data[(int32_T)(3 * i)] = rtb_hr_global_landmarks[(int32_T)
          ((int32_T)e_data[i] - 1)];
        varargin_1_data[(int32_T)(1 + (int32_T)(3 * i))] =
          rtb_hr_global_landmarks[(int32_T)((int32_T)e_data[i] + 49)];
        varargin_1_data[(int32_T)(2 + (int32_T)(3 * i))] =
          rtb_hr_global_landmarks[(int32_T)((int32_T)e_data[i] + 99)];
      }

      if (!(C_sizes_idx_1 == 0)) {
        num_original = C_sizes_idx_1;
      } else if (!(C_sizes_idx_1 == 0)) {
        num_original = C_sizes_idx_1;
      } else {
        num_original = 0;
        if (C_sizes_idx_1 > 0) {
          num_original = C_sizes_idx_1;
        }
      }

      rtb_Compare = (num_original == 0);
      if (rtb_Compare || (!(C_sizes_idx_1 == 0))) {
        br = 3;
      } else {
        br = 0;
      }

      if (rtb_Compare || (!(C_sizes_idx_1 == 0))) {
        nx = 1;
      } else {
        nx = 0;
      }

      //  Landmarks in the camera frame
      // z_next = next_landmarks;
      //  Find the difference between the current landmark locations and the
      //  distorted landmark locations due to time error, and rotate into the
      //  handrail frame
      ar = (int32_T)(br + nx);
      for (i = 0; i <= (int32_T)(num_original - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(br - 1); b_m++) {
          rtb_global_points[(int32_T)(b_m + (int32_T)(ar * i))] =
            varargin_1_data[(int32_T)((int32_T)(br * i) + b_m)];
        }
      }

      for (i = 0; i <= (int32_T)(num_original - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(nx - 1); b_m++) {
          rtb_global_points[(int32_T)((int32_T)(b_m + br) + (int32_T)(ar * i))] =
            1.0F;
        }
      }

      for (i = 0; i < 3; i++) {
        for (b_m = 0; b_m <= (int32_T)(num_original - 1); b_m++) {
          next_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] =
            camera_landmarks_data[(int32_T)((int32_T)(3 * b_m) + i)] -
            (((rtb_global_points[(int32_T)((int32_T)(ar * b_m) + 1)] * (real32_T)
               next_ml_tf_global[(int32_T)(i + 3)] + rtb_global_points[(int32_T)
               (ar * b_m)] * (real32_T)next_ml_tf_global[i]) +
              rtb_global_points[(int32_T)((int32_T)(ar * b_m) + 2)] * (real32_T)
              next_ml_tf_global[(int32_T)(i + 6)]) + rtb_global_points[(int32_T)
             ((int32_T)(ar * b_m) + 3)] * (real32_T)next_ml_tf_global[(int32_T)
             (i + 9)]);
        }
      }

      c_sz_idx_0 = (int8_T)num_original;
      z_est_sizes_idx_1 = (int32_T)(int8_T)num_original;
      for (i = 0; i <= (int32_T)(z_est_sizes_idx_1 - 1); i++) {
        y_data[(int32_T)(3 * i)] = 0.0F;
        y_data[(int32_T)(1 + (int32_T)(3 * i))] = 0.0F;
        y_data[(int32_T)(2 + (int32_T)(3 * i))] = 0.0F;
      }

      if (num_original != 0) {
        num_original = (int32_T)((int32_T)(num_original - 1) * 3);
        for (br = 0; br <= num_original; br += 3) {
          for (nx = (int32_T)(br + 1); nx <= (int32_T)(br + 3); nx++) {
            y_data[(int32_T)(nx - 1)] = 0.0F;
          }
        }

        br = 0;
        for (nx = 0; nx <= num_original; nx += 3) {
          ar = 0;
          for (i = br; (int32_T)(i + 1) <= (int32_T)(br + 3); i++) {
            if (next_landmarks_data[i] != 0.0F) {
              s12_iter = ar;
              for (O_sizes_idx_0 = nx; (int32_T)(O_sizes_idx_0 + 1) <= (int32_T)
                   (nx + 3); O_sizes_idx_0++) {
                s12_iter++;
                y_data[O_sizes_idx_0] += S[(int32_T)(s12_iter - 1)] *
                  next_landmarks_data[i];
              }
            }

            ar += 3;
          }

          br += 3;
        }
      }

      for (i = 0; i < 3; i++) {
        for (b_m = 0; b_m <= (int32_T)(z_est_sizes_idx_1 - 1); b_m++) {
          landmark_error_rail_frame_data[(int32_T)(b_m + (int32_T)((int32_T)
            c_sz_idx_0 * i))] = y_data[(int32_T)((int32_T)(3 * b_m) + i)];
        }
      }

      nx = 0;
      for (ar = 0; ar < 50; ar++) {
        if ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag[ar] != 0) {
          nx++;
        }
      }

      C_sizes_idx_1 = nx;
      for (i = 0; i <= (int32_T)(handrail_knowledge_dims - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(z_est_sizes_idx_1 - 1); b_m++) {
          est_estimator_B->x_data[(int32_T)(b_m + (int32_T)((int32_T)c_sz_idx_0 *
            i))] = landmark_error_rail_frame_data[(int32_T)((int32_T)((int32_T)
            c_sz_idx_0 * i) + b_m)];
        }
      }

      nx = (int32_T)((int32_T)c_sz_idx_0 * handrail_knowledge_dims);
      for (br = 0; (int32_T)(br + 1) <= nx; br++) {
        varargin_1_data[br] = est_estimator_B->x_data[br];
      }

      nohlcjekmohddjmg_abs(varargin_1_data, (int32_T)(uint8_T)(int32_T)
                           (C_sizes_idx_1 * handrail_knowledge_dims),
                           next_landmarks_data, &i);

      //  compute Jacobian
      br = 0;
      for (nx = 0; nx < 50; nx++) {
        if ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag[nx] != 0) {
          br++;
        }
      }

      z_est_sizes_idx_1 = (int32_T)(br * handrail_knowledge_dims);
      C_sizes_idx_1 = (int32_T)(br * handrail_knowledge_dims);
      for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
        r_vec_data[i] = 0.0;
      }

      num_original = 0;
      for (br = 0; br < 50; br++) {
        if ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag[br] != 0) {
          num_original++;
        }
      }

      H_sizes[0] = (int32_T)(handrail_knowledge_dims * num_original);
      H_sizes[1] = 6;
      C_sizes_idx_1 = (int32_T)((int32_T)(handrail_knowledge_dims * num_original)
        * 6);
      for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
        H_data[i] = 0.0F;
      }

      num_original = 0;
      for (br = 0; br < 50; br++) {
        if ((int32_T)est_estimator_U_handrail_msg->cvs_valid_flag[br] != 0) {
          num_original++;
        }
      }

      br = num_original;
      for (num_original = 0; num_original <= (int32_T)(br - 1); num_original++)
      {
        // temp = 1.0 ./ camera_landmarks(3, i) * [eye(2, 2) -z_est(:, i)];
        //  Copyright (c) 2017, United States Government, as represented by the
        //  Administrator of the National Aeronautics and Space Administration.
        //
        //  All rights reserved.
        //
        //  The Astrobee platform is licensed under the Apache License, Version 2.0 
        //  (the "License"); you may not use this file except in compliance with the 
        //  License. You may obtain a copy of the License at
        //
        //      http://www.apache.org/licenses/LICENSE-2.0
        //
        //  Unless required by applicable law or agreed to in writing, software
        //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
        //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
        //  License for the specific language governing permissions and limitations 
        //  under the License.
        //  construct swew matrix from a vector
        //  From Zack and Brian's ekf.m  Used as a nested function in the optical 
        //  flow update
        //  rotate to new coordinate system
        nx = (int32_T)((int32_T)((int32_T)(1 + num_original) *
          handrail_knowledge_dims) - handrail_knowledge_dims);
        if ((int32_T)(nx + 1) > (int32_T)((int32_T)(1 + num_original) *
             handrail_knowledge_dims)) {
          nx = 0;
        }

        tmp_7[0] = 0.0F;
        tmp_7[3] = -camera_landmarks_data[(int32_T)((int32_T)(3 * num_original)
          + 2)];
        tmp_7[6] = camera_landmarks_data[(int32_T)((int32_T)(3 * num_original) +
          1)];
        tmp_7[1] = camera_landmarks_data[(int32_T)((int32_T)(3 * num_original) +
          2)];
        tmp_7[4] = 0.0F;
        tmp_7[7] = -camera_landmarks_data[(int32_T)(3 * num_original)];
        tmp_7[2] = -camera_landmarks_data[(int32_T)((int32_T)(3 * num_original)
          + 1)];
        tmp_7[5] = camera_landmarks_data[(int32_T)(3 * num_original)];
        tmp_7[8] = 0.0F;
        for (i = 0; i < 3; i++) {
          for (b_m = 0; b_m < 3; b_m++) {
            C[(int32_T)(i + (int32_T)(3 * b_m))] = 0.0F;
            C[(int32_T)(i + (int32_T)(3 * b_m))] += tmp_7[(int32_T)(3 * b_m)] *
              (real32_T)v[i];
            C[(int32_T)(i + (int32_T)(3 * b_m))] += tmp_7[(int32_T)((int32_T)(3 *
              b_m) + 1)] * (real32_T)v[(int32_T)(i + 3)];
            C[(int32_T)(i + (int32_T)(3 * b_m))] += tmp_7[(int32_T)((int32_T)(3 *
              b_m) + 2)] * (real32_T)v[(int32_T)(i + 6)];
            rtb_Assignment_b[(int32_T)(i + (int32_T)(3 * b_m))] = (real32_T)
              ((camera_ml_tf_global[(int32_T)((int32_T)(3 * b_m) + 1)] * (real_T)
                c_a[(int32_T)(i + 3)] + camera_ml_tf_global[(int32_T)(3 * b_m)] *
                (real_T)c_a[i]) + camera_ml_tf_global[(int32_T)((int32_T)(3 *
                 b_m) + 2)] * (real_T)c_a[(int32_T)(i + 6)]);
          }
        }

        for (i = 0; i < 3; i++) {
          v_0[(int32_T)(3 * i)] = C[(int32_T)(3 * i)];
          v_0[(int32_T)(3 * (int32_T)(i + 3))] = rtb_Assignment_b[(int32_T)(3 *
            i)];
          v_0[(int32_T)(1 + (int32_T)(3 * i))] = C[(int32_T)((int32_T)(3 * i) +
            1)];
          v_0[(int32_T)(1 + (int32_T)(3 * (int32_T)(i + 3)))] =
            rtb_Assignment_b[(int32_T)((int32_T)(3 * i) + 1)];
          v_0[(int32_T)(2 + (int32_T)(3 * i))] = C[(int32_T)((int32_T)(3 * i) +
            2)];
          v_0[(int32_T)(2 + (int32_T)(3 * (int32_T)(i + 3)))] =
            rtb_Assignment_b[(int32_T)((int32_T)(3 * i) + 2)];
        }

        for (i = 0; i < 3; i++) {
          for (b_m = 0; b_m < 6; b_m++) {
            S_0[(int32_T)(i + (int32_T)(3 * b_m))] = 0.0F;
            S_0[(int32_T)(i + (int32_T)(3 * b_m))] += v_0[(int32_T)(3 * b_m)] *
              S[i];
            S_0[(int32_T)(i + (int32_T)(3 * b_m))] += v_0[(int32_T)((int32_T)(3 *
              b_m) + 1)] * S[(int32_T)(i + 3)];
            S_0[(int32_T)(i + (int32_T)(3 * b_m))] += v_0[(int32_T)((int32_T)(3 *
              b_m) + 2)] * S[(int32_T)(i + 6)];
          }
        }

        for (i = 0; i < 6; i++) {
          for (b_m = 0; b_m <= (int32_T)(handrail_knowledge_dims - 1); b_m++) {
            H_data[(int32_T)((int32_T)(nx + b_m) + (int32_T)(H_sizes[0] * i))] =
              S_0[(int32_T)((int32_T)(3 * i) + b_m)];
          }
        }

        //  drop last row, since we don't have knowledge along handrail axis
        //  make the confidence depend on mapped landmarked error which is function 
        //  of distance
        //  [??] Should the camera_landmarks distance be the RSS, not just Z?
        //  r_vec is measurment noise
        nx = (int32_T)((int32_T)((int32_T)(1 + num_original) *
          handrail_knowledge_dims) - handrail_knowledge_dims);
        ar = (int32_T)((int32_T)(1 + num_original) * handrail_knowledge_dims);
        if ((int32_T)(nx + 1) > ar) {
          nx = 0;
          ar = 0;
        }

        i = (int32_T)((int32_T)((int32_T)((int32_T)(1 + num_original) *
          handrail_knowledge_dims) - handrail_knowledge_dims) + 1);
        s12_iter = (int32_T)((int32_T)(1 + num_original) *
                             handrail_knowledge_dims);
        if (i > s12_iter) {
          i = 1;
          s12_iter = 0;
        }

        O_sizes_idx_0 = (int32_T)((int32_T)(int16_T)(int32_T)((int32_T)(int16_T)
          s12_iter - (int32_T)(int16_T)i) + 1);
        C_sizes_idx_1 = (int32_T)(int16_T)(int32_T)((int32_T)(int16_T)s12_iter -
          (int32_T)(int16_T)i);
        for (b_m = 0; b_m <= C_sizes_idx_1; b_m++) {
          p_data[b_m] = (int16_T)(int32_T)((int32_T)(int16_T)(int32_T)((int32_T)
            (int16_T)i + b_m) - 1);
        }

        hr_quat_ISS2hr_idx_1 = est_estimator_P->tun_ase_hr_distance_r *
          (real32_T)fabs((real_T)camera_landmarks_data[2]) +
          est_estimator_P->tun_ase_hr_r_mag;
        C_sizes_idx_1 = (int32_T)(ar - nx);
        for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
          varargin_1_data[i] = next_landmarks_data[(int32_T)(nx + i)] +
            hr_quat_ISS2hr_idx_1;
        }

        djmgjecbcbiengln_power(varargin_1_data, (int32_T)(ar - nx),
          rtb_hr_global_landmarks, &i);
        for (i = 0; i <= (int32_T)(O_sizes_idx_0 - 1); i++) {
          r_vec_data[(int32_T)p_data[i]] = (real_T)rtb_hr_global_landmarks[i];
        }
      }

      //  Compress the r and H
      jmohiecblfcjnohl_qr(H_data, H_sizes, est_estimator_B->q1_data, q1_sizes,
                          T_H_data, T_H_sizes);
      C_sizes_idx_1 = q1_sizes[0];
      for (i = 0; i < 6; i++) {
        for (b_m = 0; b_m <= (int32_T)(C_sizes_idx_1 - 1); b_m++) {
          H_data[(int32_T)(b_m + (int32_T)(C_sizes_idx_1 * i))] =
            est_estimator_B->q1_data[(int32_T)((int32_T)(q1_sizes[0] * i) + b_m)];
        }
      }

      num_original = q1_sizes[0];
      br = q1_sizes[0];
      for (i = 0; i <= (int32_T)(br - 1); i++) {
        for (b_m = 0; b_m < 6; b_m++) {
          b_a_data[(int32_T)(b_m + (int32_T)(6 * i))] = H_data[(int32_T)
            ((int32_T)(C_sizes_idx_1 * b_m) + i)];
        }
      }

      if ((q1_sizes[0] == 1) || ((int32_T)numFeatures == 1)) {
        for (i = 0; i < 6; i++) {
          rtb_Product_j[i] = 0.0F;
          for (b_m = 0; b_m <= (int32_T)(num_original - 1); b_m++) {
            rtb_Product_j[i] += b_a_data[(int32_T)((int32_T)(6 * b_m) + i)] *
              r_data[b_m];
          }
        }
      } else {
        for (handrail_knowledge_dims = 0; handrail_knowledge_dims < 6;
             handrail_knowledge_dims++) {
          rtb_Product_j[handrail_knowledge_dims] = 0.0F;
        }

        handrail_knowledge_dims = 0;
        for (num_original = 0; (int32_T)(num_original + 1) <= C_sizes_idx_1;
             num_original++) {
          if (r_data[num_original] != 0.0F) {
            br = handrail_knowledge_dims;
            for (nx = 0; nx < 6; nx++) {
              br++;
              rtb_Product_j[nx] += b_a_data[(int32_T)(br - 1)] *
                r_data[num_original];
            }
          }

          handrail_knowledge_dims += 6;
        }
      }

      jekfopppngdbhlng_diag(r_vec_data, z_est_sizes_idx_1,
                            est_estimator_B->tmp_data, H_sizes);
      num_original = H_sizes[1];
      for (i = 0; i < 6; i++) {
        br = H_sizes[1];
        for (b_m = 0; b_m <= (int32_T)(br - 1); b_m++) {
          b_a_data[(int32_T)(i + (int32_T)(6 * b_m))] = 0.0F;
          for (i_0 = 0; i_0 <= (int32_T)(C_sizes_idx_1 - 1); i_0++) {
            b_a_data[(int32_T)(i + (int32_T)(6 * b_m))] += H_data[(int32_T)
              ((int32_T)(C_sizes_idx_1 * i) + i_0)] * (real32_T)
              est_estimator_B->tmp_data[(int32_T)((int32_T)(H_sizes[0] * b_m) +
              i_0)];
          }
        }
      }

      if ((H_sizes[1] == 1) || (q1_sizes[0] == 1)) {
        for (i = 0; i < 6; i++) {
          for (b_m = 0; b_m < 6; b_m++) {
            rtb_R_mat[(int32_T)(i + (int32_T)(6 * b_m))] = 0.0F;
            for (i_0 = 0; i_0 <= (int32_T)(num_original - 1); i_0++) {
              rtb_R_mat[(int32_T)(i + (int32_T)(6 * b_m))] += b_a_data[(int32_T)
                ((int32_T)(6 * i_0) + i)] * H_data[(int32_T)((int32_T)
                (C_sizes_idx_1 * b_m) + i_0)];
            }
          }
        }
      } else {
        memset(&rtb_R_mat[0], 0, (uint32_T)(36U * sizeof(real32_T)));
        for (handrail_knowledge_dims = 0; handrail_knowledge_dims <= 31;
             handrail_knowledge_dims += 6) {
          for (br = handrail_knowledge_dims; (int32_T)(br + 1) <= (int32_T)
               (handrail_knowledge_dims + 6); br++) {
            rtb_R_mat[br] = 0.0F;
          }
        }

        handrail_knowledge_dims = 0;
        for (br = 0; br <= 31; br += 6) {
          nx = 0;
          ar = (int32_T)(handrail_knowledge_dims + num_original);
          for (i = handrail_knowledge_dims; (int32_T)(i + 1) <= ar; i++) {
            if (est_estimator_B->q1_data[(int32_T)(i % q1_sizes[0] + (int32_T)
                 (q1_sizes[0] * div_nzp_s32_floor(i, q1_sizes[0])))] != 0.0F) {
              s12_iter = nx;
              for (O_sizes_idx_0 = br; (int32_T)(O_sizes_idx_0 + 1) <= (int32_T)
                   (br + 6); O_sizes_idx_0++) {
                s12_iter++;
                rtb_R_mat[O_sizes_idx_0] += est_estimator_B->q1_data[(int32_T)(i
                  % q1_sizes[0] + (int32_T)(q1_sizes[0] * div_nzp_s32_floor(i,
                  q1_sizes[0])))] * b_a_data[(int32_T)(s12_iter - 1)];
              }
            }

            nx += 6;
          }

          handrail_knowledge_dims += num_original;
        }
      }

      // SignalConversion: '<S16>/Signal Conversion' incorporates:
      //   MATLAB Function: '<S16>/Compute Residual and H'

      //  Convert H to be in terms of the entire state vector
      // '<S19>:1:3'
      est_estimator_B->error_out = 0;
      for (i = 0; i < 6; i++) {
        // SignalConversion: '<S16>/Signal Conversion' incorporates:
        //   MATLAB Function: '<S16>/Compute Residual and H'

        est_estimator_B->r_out[i] = rtb_Product_j[i];

        // MATLAB Function: '<S16>/Compute Residual and H'
        for (b_m = 0; b_m < 6; b_m++) {
          // SignalConversion: '<S16>/Signal Conversion'
          est_estimator_B->H_out[(int32_T)(b_m + (int32_T)(6 * i))] = T_H_data
            [(int32_T)((int32_T)(T_H_sizes[0] * i) + b_m)];
        }
      }

      // MATLAB Function: '<S16>/Compute Residual and H'
      for (i = 0; i < 111; i++) {
        for (b_m = 0; b_m < 6; b_m++) {
          // SignalConversion: '<S16>/Signal Conversion'
          est_estimator_B->H_out[(int32_T)(b_m + (int32_T)(6 * (int32_T)(i + 6)))]
            = 0.0F;
        }
      }

      // SignalConversion: '<S16>/Signal Conversion'
      memcpy(&est_estimator_B->R_mat[0], &rtb_R_mat[0], (uint32_T)(36U * sizeof
              (real32_T)));

      // Sum: '<S16>/Sum'
      UnitDelay_DSTATE_aug_state_enum = (uint32_T)
        est_estimator_U_handrail_msg->cvs_valid_flag[0];
      for (ar = 0; ar < 49; ar++) {
        UnitDelay_DSTATE_aug_state_enum += (uint32_T)
          est_estimator_U_handrail_msg->cvs_valid_flag[(int32_T)(ar + 1)];
      }

      // SignalConversion: '<S16>/Signal Conversion' incorporates:
      //   Sum: '<S16>/Sum'

      numFeatures = (uint8_T)UnitDelay_DSTATE_aug_state_enum;

      // SignalConversion: '<S16>/Signal Conversion' incorporates:
      //   Constant: '<S16>/Constant'

      memcpy(&rtb_UnitDelay18[0], &est_estimator_P->Constant_Value[0], (uint32_T)
             (50U * sizeof(real_T)));

      // SignalConversion: '<S16>/Signal Conversion' incorporates:
      //   MATLAB Function: '<S16>/Compute Global positions of Handrail Features'

      hr_P_hr_ISS_ISS[0] = est_estimator_DW->hr_P_hr_ISS_ISS_pers[0];
      hr_P_hr_ISS_ISS[1] = est_estimator_DW->hr_P_hr_ISS_ISS_pers[1];
      hr_P_hr_ISS_ISS[2] = est_estimator_DW->hr_P_hr_ISS_ISS_pers[2];

      // SignalConversion: '<S16>/Signal Conversion' incorporates:
      //   MATLAB Function: '<S16>/Compute Global positions of Handrail Features'

      hr_quat_ISS2hr_idx_0 = est_estimator_DW->hr_quat_ISS2hr_pers[0];
      hr_quat_ISS2hr_idx_1 = est_estimator_DW->hr_quat_ISS2hr_pers[1];
      hr_quat_ISS2hr_idx_2 = est_estimator_DW->hr_quat_ISS2hr_pers[2];
      hr_quat_ISS2hr_idx_3 = est_estimator_DW->hr_quat_ISS2hr_pers[3];

      // End of Outputs for SubSystem: '<S13>/HR_Compute_Residual_and_H1'
    } else {
      // Outputs for IfAction SubSystem: '<S13>/ML_Compute_Residual_and_H' incorporates:
      //   ActionPort: '<S17>/Action Port'

      // RelationalOperator: '<S20>/Compare' incorporates:
      //   Constant: '<S20>/Constant'

      rtb_Compare = (est_estimator_U_cmc_msg_o->localization_mode_cmd ==
                     est_estimator_P->ase_local_mode_map);

      // Switch: '<S17>/Switch1' incorporates:
      //   Constant: '<S17>/Constant2'
      //   Constant: '<S17>/Constant3'

      if (rtb_Compare) {
        rtb_Switch1 = est_estimator_P->tun_ase_navcam_inv_focal_length;
      } else {
        rtb_Switch1 = est_estimator_P->tun_ase_dockcam_inv_focal_length;
      }

      // End of Switch: '<S17>/Switch1'

      // MATLAB Function: '<S17>/Compute Residual and H' incorporates:
      //   Inport: '<Root>/landmark_msg'

      // MATLAB Function 'camera_update/Absolute_Update/ML Update/Compute Residual and H matrix/ML_Compute_Residual_and_H/Compute Residual and H': '<S22>:1' 
      // '<S22>:1:3'
      //  Copyright (c) 2017, United States Government, as represented by the
      //  Administrator of the National Aeronautics and Space Administration.
      //
      //  All rights reserved.
      //
      //  The Astrobee platform is licensed under the Apache License, Version 2.0 
      //  (the "License"); you may not use this file except in compliance with the 
      //  License. You may obtain a copy of the License at
      //
      //      http://www.apache.org/licenses/LICENSE-2.0
      //
      //  Unless required by applicable law or agreed to in writing, software
      //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
      //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
      //  License for the specific language governing permissions and limitations 
      //  under the License.
      br = 0;
      for (num_original = 0; num_original < 50; num_original++) {
        if ((int32_T)est_estimator_U_landmark_msg->cvs_valid_flag[num_original]
            != 0) {
          br++;
        }
      }

      C_sizes_idx_1 = br;
      br = 0;
      for (nx = 0; nx < 50; nx++) {
        if ((int32_T)est_estimator_U_landmark_msg->cvs_valid_flag[nx] != 0) {
          e_data[br] = (int8_T)(int32_T)(nx + 1);
          br++;
        }
      }

      O_sizes_idx_0 = C_sizes_idx_1;
      for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
        r_data_0[i] = est_estimator_U_landmark_msg->cvs_observations[(int32_T)
          ((int32_T)e_data[i] - 1)] * rtb_Switch1;
      }

      for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
        r_data_0[(int32_T)(i + C_sizes_idx_1)] =
          est_estimator_U_landmark_msg->cvs_observations[(int32_T)((int32_T)
          e_data[i] + 49)] * rtb_Switch1;
      }

      for (i = 0; i < 12; i++) {
        camera_ml_tf_global[i] = (real_T)g_0[i];
      }

      fkfcbaiengdjgdje_quaternion_to_rotation(UnitDelay_DSTATE_n_ml_quat_ISS2,
        rtb_Product1_0);
      for (i = 0; i < 3; i++) {
        C[(int32_T)(3 * i)] = (real32_T)-(real_T)rtb_Product1_0[(int32_T)(3 * i)];
        camera_ml_tf_global[(int32_T)(3 * i)] = (real_T)rtb_Product1_0[(int32_T)
          (3 * i)];
        C[(int32_T)(1 + (int32_T)(3 * i))] = (real32_T)-(real_T)rtb_Product1_0
          [(int32_T)((int32_T)(3 * i) + 1)];
        camera_ml_tf_global[(int32_T)(1 + (int32_T)(3 * i))] = (real_T)
          rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 1)];
        C[(int32_T)(2 + (int32_T)(3 * i))] = (real32_T)-(real_T)rtb_Product1_0
          [(int32_T)((int32_T)(3 * i) + 2)];
        camera_ml_tf_global[(int32_T)(2 + (int32_T)(3 * i))] = (real_T)
          rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 2)];
      }

      for (i = 0; i < 3; i++) {
        camera_ml_tf_global[(int32_T)(9 + i)] = (real_T)((C[(int32_T)(i + 3)] *
          UnitDelay_DSTATE_n_ml_P_cam_ISS[1] + C[i] *
          UnitDelay_DSTATE_n_ml_P_cam_ISS[0]) + C[(int32_T)(i + 6)] *
          UnitDelay_DSTATE_n_ml_P_cam_ISS[2]);
      }

      num_original = 0;
      for (nx = 0; nx < 50; nx++) {
        if ((int32_T)est_estimator_U_landmark_msg->cvs_valid_flag[nx] != 0) {
          num_original++;
        }
      }

      C_sizes_idx_1 = num_original;
      num_original = 0;
      for (nx = 0; nx < 50; nx++) {
        if ((int32_T)est_estimator_U_landmark_msg->cvs_valid_flag[nx] != 0) {
          e_data[num_original] = (int8_T)(int32_T)(nx + 1);
          num_original++;
        }
      }

      for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
        varargin_1_data[(int32_T)(3 * i)] =
          est_estimator_U_landmark_msg->cvs_landmarks[(int32_T)((int32_T)
          e_data[i] - 1)];
        varargin_1_data[(int32_T)(1 + (int32_T)(3 * i))] =
          est_estimator_U_landmark_msg->cvs_landmarks[(int32_T)((int32_T)
          e_data[i] + 49)];
        varargin_1_data[(int32_T)(2 + (int32_T)(3 * i))] =
          est_estimator_U_landmark_msg->cvs_landmarks[(int32_T)((int32_T)
          e_data[i] + 99)];
      }

      if (!(C_sizes_idx_1 == 0)) {
        num_original = C_sizes_idx_1;
      } else if (!(C_sizes_idx_1 == 0)) {
        num_original = C_sizes_idx_1;
      } else {
        num_original = 0;
        if (C_sizes_idx_1 > 0) {
          num_original = C_sizes_idx_1;
        }
      }

      empty_non_axis_sizes = (num_original == 0);
      if (empty_non_axis_sizes || (!(C_sizes_idx_1 == 0))) {
        br = 3;
      } else {
        br = 0;
      }

      if (empty_non_axis_sizes || (!(C_sizes_idx_1 == 0))) {
        nx = 1;
      } else {
        nx = 0;
      }

      ar = (int32_T)(br + nx);
      for (i = 0; i <= (int32_T)(num_original - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(br - 1); b_m++) {
          rtb_global_points[(int32_T)(b_m + (int32_T)(ar * i))] =
            varargin_1_data[(int32_T)((int32_T)(br * i) + b_m)];
        }
      }

      for (i = 0; i <= (int32_T)(num_original - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(nx - 1); b_m++) {
          rtb_global_points[(int32_T)((int32_T)(b_m + br) + (int32_T)(ar * i))] =
            1.0F;
        }
      }

      for (i = 0; i < 3; i++) {
        for (b_m = 0; b_m <= (int32_T)(num_original - 1); b_m++) {
          camera_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] = 0.0F;
          camera_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)(ar * b_m)] * (real32_T)
            camera_ml_tf_global[i];
          camera_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)((int32_T)(ar * b_m) + 1)] * (real32_T)
            camera_ml_tf_global[(int32_T)(i + 3)];
          camera_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)((int32_T)(ar * b_m) + 2)] * (real32_T)
            camera_ml_tf_global[(int32_T)(i + 6)];
          camera_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)((int32_T)(ar * b_m) + 3)] * (real32_T)
            camera_ml_tf_global[(int32_T)(i + 9)];
        }
      }

      //  Landmarks in the camera frame
      handrail_knowledge_dims = 0;
      z_est_sizes_idx_1 = num_original;
      for (i = 0; i <= (int32_T)(num_original - 1); i++) {
        z_est_data[(int32_T)(i << 1)] = camera_landmarks_data[(int32_T)(3 * i)] /
          camera_landmarks_data[(int32_T)((int32_T)(3 * i) + 2)];
        z_est_data[(int32_T)(1 + (int32_T)(i << 1))] = camera_landmarks_data
          [(int32_T)((int32_T)(3 * i) + 1)] / camera_landmarks_data[(int32_T)
          ((int32_T)(3 * i) + 2)];
      }

      for (i = 0; i <= (int32_T)(O_sizes_idx_0 - 1); i++) {
        omega_error_data[(int32_T)(i << 1)] = r_data_0[i] - z_est_data[(int32_T)
          (i << 1)];
        omega_error_data[(int32_T)(1 + (int32_T)(i << 1))] = r_data_0[(int32_T)
          (i + O_sizes_idx_0)] - z_est_data[(int32_T)((int32_T)(i << 1) + 1)];
      }

      nx = (int32_T)(O_sizes_idx_0 << 1);
      s12_iter = (int32_T)(int8_T)(int32_T)(O_sizes_idx_0 << 1);
      for (br = 0; (int32_T)(br + 1) <= nx; br++) {
        r_data_0[br] = omega_error_data[br];
      }

      //  forward propagate the saved state based on velocity to add an error
      //  term for the timing of the registration pulse
      for (i = 0; i < 12; i++) {
        next_ml_tf_global[i] = (real_T)g_0[i];
      }

      //  move to camera frame and with half a frame rotation
      //  TODO: we should use the velocity and omega from the time of the
      //  registration pulse
      rtb_ml_vel_aug_0[0] = rtb_ml_vel_aug[0];
      rtb_ml_vel_aug_0[1] = rtb_ml_vel_aug[1];
      rtb_ml_vel_aug_0[2] = rtb_ml_vel_aug[2];

      // Switch: '<S17>/Switch'
      if (rtb_Compare) {
        // MATLAB Function: '<S17>/Compute Residual and H' incorporates:
        //   Constant: '<S17>/Constant'

        rtb_Compare_2[0] = est_estimator_P->tun_abp_q_body2navcam[0];
        rtb_Compare_2[1] = est_estimator_P->tun_abp_q_body2navcam[1];
        rtb_Compare_2[2] = est_estimator_P->tun_abp_q_body2navcam[2];
        rtb_Compare_2[3] = est_estimator_P->tun_abp_q_body2navcam[3];
      } else {
        // MATLAB Function: '<S17>/Compute Residual and H' incorporates:
        //   Constant: '<S17>/Constant'
        //   Constant: '<S17>/Constant1'

        rtb_Compare_2[0] = est_estimator_P->tun_abp_q_body2dockcam[0];
        rtb_Compare_2[1] = est_estimator_P->tun_abp_q_body2dockcam[1];
        rtb_Compare_2[2] = est_estimator_P->tun_abp_q_body2dockcam[2];
        rtb_Compare_2[3] = est_estimator_P->tun_abp_q_body2dockcam[3];
      }

      // End of Switch: '<S17>/Switch'

      // MATLAB Function: '<S17>/Compute Residual and H' incorporates:
      //   Constant: '<S21>/Constant'
      //   Inport: '<Root>/landmark_msg'
      //   RelationalOperator: '<S21>/Compare'

      gdjmmglnmgdjlfkf_quat_rotation_vec(rtb_ml_vel_aug_0, rtb_Compare_2, tmp);
      baieimopcbaiaaai_eulers_to_quat
        (est_estimator_P->tun_ase_ml_forward_projection_time * (real32_T)tmp[0],
         est_estimator_P->tun_ase_ml_forward_projection_time * (real32_T)tmp[1],
         est_estimator_P->tun_ase_ml_forward_projection_time * (real32_T)tmp[2],
         rtb_Product1);
      iecjopppiecjmgln_quatmult(rtb_Product1, UnitDelay_DSTATE_n_ml_quat_ISS2,
        rtb_Compare_2);
      fkfcbaiengdjgdje_quaternion_to_rotation(rtb_Compare_2, rtb_Product1_0);
      for (i = 0; i < 3; i++) {
        next_ml_tf_global[(int32_T)(3 * i)] = (real_T)rtb_Product1_0[(int32_T)(3
          * i)];
        C[(int32_T)(3 * i)] = (real32_T)-camera_ml_tf_global[(int32_T)(3 * i)];
        next_ml_tf_global[(int32_T)(1 + (int32_T)(3 * i))] = (real_T)
          rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 1)];
        C[(int32_T)(1 + (int32_T)(3 * i))] = (real32_T)-camera_ml_tf_global
          [(int32_T)((int32_T)(3 * i) + 1)];
        next_ml_tf_global[(int32_T)(2 + (int32_T)(3 * i))] = (real_T)
          rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 2)];
        C[(int32_T)(2 + (int32_T)(3 * i))] = (real32_T)-camera_ml_tf_global
          [(int32_T)((int32_T)(3 * i) + 2)];
      }

      for (i = 0; i < 3; i++) {
        next_ml_tf_global[(int32_T)(9 + i)] = (real_T)(((C[(int32_T)(i + 3)] *
          UnitDelay_DSTATE_n_ml_P_cam_ISS[1] + C[i] *
          UnitDelay_DSTATE_n_ml_P_cam_ISS[0]) + C[(int32_T)(i + 6)] *
          UnitDelay_DSTATE_n_ml_P_cam_ISS[2]) +
          est_estimator_P->tun_ase_ml_forward_projection_time * (real32_T)
          rtb_ml_omega_aug[i]);
      }

      nx = 0;
      for (ar = 0; ar < 50; ar++) {
        if ((int32_T)est_estimator_U_landmark_msg->cvs_valid_flag[ar] != 0) {
          nx++;
        }
      }

      C_sizes_idx_1 = nx;
      nx = 0;
      for (br = 0; br < 50; br++) {
        if ((int32_T)est_estimator_U_landmark_msg->cvs_valid_flag[br] != 0) {
          e_data[nx] = (int8_T)(int32_T)(br + 1);
          nx++;
        }
      }

      for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
        varargin_1_data[(int32_T)(3 * i)] =
          est_estimator_U_landmark_msg->cvs_landmarks[(int32_T)((int32_T)
          e_data[i] - 1)];
        varargin_1_data[(int32_T)(1 + (int32_T)(3 * i))] =
          est_estimator_U_landmark_msg->cvs_landmarks[(int32_T)((int32_T)
          e_data[i] + 49)];
        varargin_1_data[(int32_T)(2 + (int32_T)(3 * i))] =
          est_estimator_U_landmark_msg->cvs_landmarks[(int32_T)((int32_T)
          e_data[i] + 99)];
      }

      if (!(C_sizes_idx_1 == 0)) {
        nx = C_sizes_idx_1;
      } else if (!(C_sizes_idx_1 == 0)) {
        nx = C_sizes_idx_1;
      } else {
        nx = 0;
        if (C_sizes_idx_1 > 0) {
          nx = C_sizes_idx_1;
        }
      }

      empty_non_axis_sizes = (nx == 0);
      if (empty_non_axis_sizes || (!(C_sizes_idx_1 == 0))) {
        num_original = 3;
      } else {
        num_original = 0;
      }

      if (empty_non_axis_sizes || (!(C_sizes_idx_1 == 0))) {
        br = 1;
      } else {
        br = 0;
      }

      ar = (int32_T)(num_original + br);
      for (i = 0; i <= (int32_T)(nx - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(num_original - 1); b_m++) {
          rtb_global_points[(int32_T)(b_m + (int32_T)(ar * i))] =
            varargin_1_data[(int32_T)((int32_T)(num_original * i) + b_m)];
        }
      }

      for (i = 0; i <= (int32_T)(nx - 1); i++) {
        for (b_m = 0; b_m <= (int32_T)(br - 1); b_m++) {
          rtb_global_points[(int32_T)((int32_T)(b_m + num_original) + (int32_T)
            (ar * i))] = 1.0F;
        }
      }

      for (i = 0; i < 3; i++) {
        for (b_m = 0; b_m <= (int32_T)(nx - 1); b_m++) {
          next_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] = 0.0F;
          next_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)(ar * b_m)] * (real32_T)
            next_ml_tf_global[i];
          next_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)((int32_T)(ar * b_m) + 1)] * (real32_T)
            next_ml_tf_global[(int32_T)(i + 3)];
          next_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)((int32_T)(ar * b_m) + 2)] * (real32_T)
            next_ml_tf_global[(int32_T)(i + 6)];
          next_landmarks_data[(int32_T)(i + (int32_T)(3 * b_m))] +=
            rtb_global_points[(int32_T)((int32_T)(ar * b_m) + 3)] * (real32_T)
            next_ml_tf_global[(int32_T)(i + 9)];
        }
      }

      //  Landmarks in the camera frame
      for (i = 0; i <= (int32_T)(z_est_sizes_idx_1 - 1); i++) {
        omega_error_data[(int32_T)(i << 1)] = z_est_data[(int32_T)(i << 1)] -
          next_landmarks_data[(int32_T)(3 * i)] / next_landmarks_data[(int32_T)
          ((int32_T)(3 * i) + 2)];
        omega_error_data[(int32_T)(1 + (int32_T)(i << 1))] = z_est_data[(int32_T)
          ((int32_T)(i << 1) + 1)] - next_landmarks_data[(int32_T)((int32_T)(3 *
          i) + 1)] / next_landmarks_data[(int32_T)((int32_T)(3 * i) + 2)];
      }

      nx = (int32_T)(z_est_sizes_idx_1 << 1);
      for (br = 0; (int32_T)(br + 1) <= nx; br++) {
        y_data_0[br] = omega_error_data[br];
      }

      iecjbieccbailfcb_abs(y_data_0, (int32_T)(int8_T)(int32_T)(O_sizes_idx_0 <<
        1), omega_error_data, &i);

      //  compute Jacobian
      z_est_sizes_idx_1 = (int32_T)(O_sizes_idx_0 << 1);
      C_sizes_idx_1 = (int32_T)(O_sizes_idx_0 << 1);
      for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
        r_vec_data_0[i] = 0.0;
      }

      H_sizes[0] = (int32_T)(O_sizes_idx_0 << 1);
      H_sizes[1] = 6;
      C_sizes_idx_1 = (int32_T)((int32_T)(O_sizes_idx_0 << 1) * 6);
      for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
        H_data_0[i] = 0.0F;
      }

      for (num_original = 0; num_original <= (int32_T)(O_sizes_idx_0 - 1);
           num_original++) {
        hr_quat_ISS2hr_idx_0 = 1.0F / camera_landmarks_data[(int32_T)((int32_T)
          (3 * num_original) + 2)];
        h[0] = 1.0F;
        h[1] = 0.0F;
        h[4] = -z_est_data[(int32_T)(num_original << 1)];
        h[2] = 0.0F;
        h[3] = 1.0F;
        h[5] = -z_est_data[(int32_T)((int32_T)(num_original << 1) + 1)];

        //  Copyright (c) 2017, United States Government, as represented by the
        //  Administrator of the National Aeronautics and Space Administration.
        //
        //  All rights reserved.
        //
        //  The Astrobee platform is licensed under the Apache License, Version 2.0 
        //  (the "License"); you may not use this file except in compliance with the 
        //  License. You may obtain a copy of the License at
        //
        //      http://www.apache.org/licenses/LICENSE-2.0
        //
        //  Unless required by applicable law or agreed to in writing, software
        //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
        //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
        //  License for the specific language governing permissions and limitations 
        //  under the License.
        //  construct swew matrix from a vector
        //  From Zack and Brian's ekf.m  Used as a nested function in the optical 
        //  flow update
        tmp_7[0] = 0.0F;
        tmp_7[3] = -camera_landmarks_data[(int32_T)((int32_T)(3 * num_original)
          + 2)];
        tmp_7[6] = camera_landmarks_data[(int32_T)((int32_T)(3 * num_original) +
          1)];
        tmp_7[1] = camera_landmarks_data[(int32_T)((int32_T)(3 * num_original) +
          2)];
        tmp_7[4] = 0.0F;
        tmp_7[7] = -camera_landmarks_data[(int32_T)(3 * num_original)];
        tmp_7[2] = -camera_landmarks_data[(int32_T)((int32_T)(3 * num_original)
          + 1)];
        tmp_7[5] = camera_landmarks_data[(int32_T)(3 * num_original)];
        tmp_7[8] = 0.0F;
        for (i = 0; i < 3; i++) {
          hr_quat_ISS2hr_idx_1 = h[(int32_T)(i << 1)] * hr_quat_ISS2hr_idx_0;
          temp_0[(int32_T)(i << 1)] = -hr_quat_ISS2hr_idx_1;
          temp[(int32_T)(i << 1)] = hr_quat_ISS2hr_idx_1;
          hr_quat_ISS2hr_idx_1 = h[(int32_T)((int32_T)(i << 1) + 1)] *
            hr_quat_ISS2hr_idx_0;
          temp_0[(int32_T)(1 + (int32_T)(i << 1))] = -hr_quat_ISS2hr_idx_1;
          temp[(int32_T)(1 + (int32_T)(i << 1))] = hr_quat_ISS2hr_idx_1;
        }

        for (i = 0; i < 2; i++) {
          for (b_m = 0; b_m < 3; b_m++) {
            temp_1[(int32_T)(i + (int32_T)(b_m << 1))] = 0.0F;
            temp_2[(int32_T)(i + (int32_T)(b_m << 1))] = 0.0F;
            temp_1[(int32_T)(i + (int32_T)(b_m << 1))] += tmp_7[(int32_T)(3 *
              b_m)] * temp[i];
            temp_2[(int32_T)(i + (int32_T)(b_m << 1))] += (real32_T)
              camera_ml_tf_global[(int32_T)(3 * b_m)] * temp_0[i];
            temp_1[(int32_T)(i + (int32_T)(b_m << 1))] += tmp_7[(int32_T)
              ((int32_T)(3 * b_m) + 1)] * temp[(int32_T)(i + 2)];
            temp_2[(int32_T)(i + (int32_T)(b_m << 1))] += (real32_T)
              camera_ml_tf_global[(int32_T)((int32_T)(3 * b_m) + 1)] * temp_0
              [(int32_T)(i + 2)];
            temp_1[(int32_T)(i + (int32_T)(b_m << 1))] += tmp_7[(int32_T)
              ((int32_T)(3 * b_m) + 2)] * temp[(int32_T)(i + 4)];
            temp_2[(int32_T)(i + (int32_T)(b_m << 1))] += (real32_T)
              camera_ml_tf_global[(int32_T)((int32_T)(3 * b_m) + 2)] * temp_0
              [(int32_T)(i + 4)];
          }
        }

        i = (int32_T)((int32_T)((int32_T)(1 + num_original) << 1) - 2);
        for (b_m = 0; b_m < 3; b_m++) {
          H_data_0[(int32_T)(i + (int32_T)(H_sizes[0] * b_m))] = temp_1[(int32_T)
            (b_m << 1)];
          H_data_0[(int32_T)((int32_T)(i + (int32_T)(H_sizes[0] * b_m)) + 1)] =
            temp_1[(int32_T)((int32_T)(b_m << 1) + 1)];
        }

        for (b_m = 0; b_m < 3; b_m++) {
          H_data_0[(int32_T)(i + (int32_T)(H_sizes[0] * (int32_T)(b_m + 3)))] =
            temp_2[(int32_T)(b_m << 1)];
          H_data_0[(int32_T)((int32_T)(i + (int32_T)(H_sizes[0] * (int32_T)(b_m
            + 3))) + 1)] = temp_2[(int32_T)((int32_T)(b_m << 1) + 1)];
        }

        //  account for distortion model
        //      if ru > 1e-5
        //          distorted = O(i, :) * tan(ru * ase_distortion) / d2 / ru;
        //          radius = norm(distorted);
        //          rd = radius * ase_inv_focal_length;
        //          t = tan(ase_distortion * rd);
        //          f1 = f1 * 1 / (d2 * radius) * (distorted(2)^2 * t / rd + ase_distortion * distorted(1)^2 * (1 + t^2)); 
        //          f2 = f2 * 1 / (d2 * radius) * (distorted(1)^2 * t / rd + ase_distortion * distorted(2)^2 * (1 + t^2)); 
        //      end
        if (rtb_Compare) {
          //  make the confidence depend on mapped landmarked error which is function 
          //  of distance
          hr_quat_ISS2hr_idx_0 = est_estimator_P->tun_ase_map_error /
            camera_landmarks_data[(int32_T)((int32_T)(3 * num_original) + 2)] +
            est_estimator_P->tun_ase_vis_r_mag;
          i = (int32_T)((int32_T)((int32_T)(1 + num_original) << 1) - 2);
          rtb_Switch1_1[0] = (hr_quat_ISS2hr_idx_0 + omega_error_data[i]) *
            rtb_Switch1;
          rtb_Switch1_1[1] = (omega_error_data[(int32_T)(1 + i)] +
                              hr_quat_ISS2hr_idx_0) * rtb_Switch1;
          nohdcbaibiecnohl_power(rtb_Switch1_1, tmp_0);
          i = (int32_T)((int32_T)((int32_T)(1 + num_original) << 1) - 2);
          r_vec_data_0[i] = (real_T)tmp_0[0];
          r_vec_data_0[(int32_T)(1 + i)] = (real_T)tmp_0[1];
        } else {
          //  AR update
          i = (int32_T)((int32_T)((int32_T)(1 + num_original) << 1) - 2);
          rtb_Switch1_0[0] = (est_estimator_P->tun_ase_dock_r_mag +
                              omega_error_data[i]) * rtb_Switch1;
          rtb_Switch1_0[1] = (omega_error_data[(int32_T)(1 + i)] +
                              est_estimator_P->tun_ase_dock_r_mag) * rtb_Switch1;
          nohdcbaibiecnohl_power(rtb_Switch1_0, tmp_0);
          i = (int32_T)((int32_T)((int32_T)(1 + num_original) << 1) - 2);
          r_vec_data_0[i] = (real_T)tmp_0[0];
          r_vec_data_0[(int32_T)(1 + i)] = (real_T)tmp_0[1];
        }
      }

      // r_out = zeros(size(L, 1),1);
      for (i = 0; i < 50; i++) {
        rtb_UnitDelay18[i] = (rtNaN);
      }

      //  only ignore observations via Malanobis check in the following
      //  conditions:
      //   1. The estimator is converged
      //   2. The estiamtor is performing a ML update
      //   3. The mahalanobis check hasn't previously rejected the maximum number 
      //   of consecutive frame allowed to be rejected set via tun_max_mahal_reject_frames 
      if ((rtb_Saturation_n == est_estimator_P->ase_status_converged) &&
          rtb_Compare && (est_estimator_DW->num_consecutive_rejected_meas <
                          (real_T)est_estimator_P->tun_max_mahal_reject_frames))
      {
        //      S = H*P_in(16:21, 16:21)*H';
        //      for i=1:size(S, 1)
        //        S(i, i) = S(i, i) + r_vec(i);
        //      end
        //      S_inv = pinv(S);
        nx = 0;
        for (br = 0; br < 50; br++) {
          if ((int32_T)est_estimator_U_landmark_msg->cvs_valid_flag[br] != 0) {
            nx++;
          }
        }

        br = (int32_T)(((real_T)nx * 2.0 + 1.0) / 2.0);
        for (nx = 0; nx <= (int32_T)(br - 1); nx++) {
          ar = (int32_T)(nx << 1);
          for (i = 0; i < 6; i++) {
            x[(int32_T)(i << 1)] = H_data_0[(int32_T)((int32_T)(H_sizes[0] * i)
              + ar)];
            x[(int32_T)(1 + (int32_T)(i << 1))] = H_data_0[(int32_T)((int32_T)
              ((int32_T)(H_sizes[0] * i) + ar) + 1)];
          }

          for (i = 0; i < 2; i++) {
            for (b_m = 0; b_m < 6; b_m++) {
              rtb_Product1_1[(int32_T)(i + (int32_T)(b_m << 1))] = 0.0F;
              for (i_0 = 0; i_0 < 6; i_0++) {
                rtb_Product1_1[(int32_T)(i + (int32_T)(b_m << 1))] +=
                  est_estimator_B->Assignment[(int32_T)((int32_T)((int32_T)
                  ((int32_T)(15 + b_m) * 117) + i_0) + 15)] * x[(int32_T)
                  ((int32_T)(i_0 << 1) + i)];
              }

              rtb_Product1_2[(int32_T)(b_m + (int32_T)(6 * i))] = H_data_0
                [(int32_T)((int32_T)(i + ar) + (int32_T)(H_sizes[0] * b_m))];
            }
          }

          for (i = 0; i < 2; i++) {
            for (b_m = 0; b_m < 2; b_m++) {
              rtb_Product1[(int32_T)(i + (int32_T)(b_m << 1))] = 0.0F;
              for (i_0 = 0; i_0 < 6; i_0++) {
                rtb_Product1[(int32_T)(i + (int32_T)(b_m << 1))] +=
                  rtb_Product1_1[(int32_T)((int32_T)(i_0 << 1) + i)] *
                  rtb_Product1_2[(int32_T)((int32_T)(6 * b_m) + i_0)];
              }
            }
          }

          H[0] = rtb_Product1[0] + (real32_T)r_vec_data_0[ar];
          H[1] = rtb_Product1[1];
          H[2] = rtb_Product1[2];
          H[3] = (real32_T)r_vec_data_0[(int32_T)(ar + 1)] + rtb_Product1[3];
          iekfiecjknopophd_pinv(H, rtb_Product1);
          rtb_UnitDelay18[(int32_T)((int32_T)(((real_T)(int32_T)(ar + 1) + 1.0) /
            2.0) - 1)] = (real_T)(real32_T)sqrt((real_T)((r_data_0[(int32_T)(1 +
            ar)] * rtb_Product1[1] + r_data_0[ar] * rtb_Product1[0]) *
            r_data_0[ar] + (r_data_0[(int32_T)(1 + ar)] * rtb_Product1[3] +
                            r_data_0[ar] * rtb_Product1[2]) * r_data_0[(int32_T)
            (1 + ar)]));
        }

        nx = 0;
        for (br = 0; br < 50; br++) {
          if ((int32_T)est_estimator_U_landmark_msg->cvs_valid_flag[br] != 0) {
            nx++;
          }
        }

        if (1 > nx) {
          C_sizes_idx_1 = 0;
        } else {
          C_sizes_idx_1 = nx;
        }

        for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
          invalid_vec_data[i] = (rtb_UnitDelay18[i] > (real_T)
            est_estimator_P->tun_ase_mahal_distance_max);
        }

        //  toss if nothing is within std. dev. of expected, ransac prob. failed 
        //      if  sum(mahal_dists < 3) == 0
        //          invalid_vec(:) = true;
        //      end
        br = 0;
        for (nx = 0; nx < 50; nx++) {
          if ((int32_T)est_estimator_U_landmark_msg->cvs_valid_flag[nx] != 0) {
            br++;
          }
        }

        for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
          g_result_data[(int32_T)(i << 1)] = invalid_vec_data[i];
        }

        for (i = 0; i <= (int32_T)(C_sizes_idx_1 - 1); i++) {
          g_result_data[(int32_T)(1 + (int32_T)(i << 1))] = invalid_vec_data[i];
        }

        nx = (int32_T)(C_sizes_idx_1 << 1);
        c_sz_idx_0 = (int8_T)(int32_T)(br << 1);
        for (br = 0; (int32_T)(br + 1) <= nx; br++) {
          invalid_data[br] = g_result_data[br];
        }

        mgdbbiekfknonglf_nullAssignment(r_data_0, &s12_iter, invalid_data,
          (int32_T)c_sz_idx_0);
        imohcjmoimopimoh_nullAssignment(H_data_0, H_sizes, invalid_data,
          (int32_T)c_sz_idx_0);
        ophlcjmgkfcbmohl_nullAssignment(r_vec_data_0, &z_est_sizes_idx_1,
          invalid_data, (int32_T)c_sz_idx_0);
      }

      i = (int32_T)rt_roundd_snf((real_T)s12_iter / 2.0);
      if (i < 256) {
        if (i >= 0) {
          numFeatures = (uint8_T)i;
        } else {
          numFeatures = 0U;
        }
      } else {
        numFeatures = MAX_uint8_T;
      }

      if (rtb_Compare) {
        rtb_Switch1 = est_estimator_P->tun_ase_min_ml_meas;

        //  Sparse map update
      } else {
        rtb_Switch1 = est_estimator_P->tun_ase_min_ar_meas;

        //  AR update
      }

      //  toss if not enough measurements, (Mahalanobis check removed all valid features) 
      //  features
      if (((real_T)s12_iter / 2.0 < (real_T)rtb_Switch1) || ((real_T)s12_iter <
           (real_T)(int8_T)(int32_T)(O_sizes_idx_0 << 1) / 2.0)) {
        numFeatures = 0U;
        handrail_knowledge_dims = 1;
        for (i = 0; i < 6; i++) {
          rtb_Product_j[i] = 1.0F;
        }

        ngdjjecbgdbaglfc_eye(rtb_H_out);
        biekcjmgdbaadbim_eye(rtb_R_mat);
        est_estimator_DW->num_consecutive_rejected_meas++;
      } else {
        est_estimator_DW->num_consecutive_rejected_meas = 0.0;

        //  Compress the r and H
        jmglopphppphkfkf_qr(H_data_0, H_sizes, est_estimator_B->q1_data_c,
                            q1_sizes, T_H_data_0, T_H_sizes);
        C_sizes_idx_1 = q1_sizes[0];
        for (i = 0; i < 6; i++) {
          for (b_m = 0; b_m <= (int32_T)(C_sizes_idx_1 - 1); b_m++) {
            H_data_0[(int32_T)(b_m + (int32_T)(C_sizes_idx_1 * i))] =
              est_estimator_B->q1_data_c[(int32_T)((int32_T)(q1_sizes[0] * i) +
              b_m)];
          }
        }

        num_original = q1_sizes[0];
        br = q1_sizes[0];
        for (i = 0; i <= (int32_T)(br - 1); i++) {
          for (b_m = 0; b_m < 6; b_m++) {
            a_data_0[(int32_T)(b_m + (int32_T)(6 * i))] = H_data_0[(int32_T)
              ((int32_T)(C_sizes_idx_1 * b_m) + i)];
          }
        }

        if ((q1_sizes[0] == 1) || (s12_iter == 1)) {
          for (i = 0; i < 6; i++) {
            rtb_Product_j[i] = 0.0F;
            for (b_m = 0; b_m <= (int32_T)(num_original - 1); b_m++) {
              rtb_Product_j[i] += a_data_0[(int32_T)((int32_T)(6 * b_m) + i)] *
                r_data_0[b_m];
            }
          }
        } else {
          for (nx = 0; nx < 6; nx++) {
            rtb_Product_j[nx] = 0.0F;
          }

          ar = 0;
          for (i = 0; (int32_T)(i + 1) <= C_sizes_idx_1; i++) {
            if (r_data_0[i] != 0.0F) {
              s12_iter = ar;
              for (O_sizes_idx_0 = 0; O_sizes_idx_0 < 6; O_sizes_idx_0++) {
                s12_iter++;
                rtb_Product_j[O_sizes_idx_0] += a_data_0[(int32_T)(s12_iter - 1)]
                  * r_data_0[i];
              }
            }

            ar += 6;
          }
        }

        moppbaaafkfkimgd_diag(r_vec_data_0, z_est_sizes_idx_1,
                              est_estimator_B->tmp_data_m, H_sizes);
        num_original = H_sizes[1];
        for (i = 0; i < 6; i++) {
          br = H_sizes[1];
          for (b_m = 0; b_m <= (int32_T)(br - 1); b_m++) {
            a_data_0[(int32_T)(i + (int32_T)(6 * b_m))] = 0.0F;
            for (i_0 = 0; i_0 <= (int32_T)(C_sizes_idx_1 - 1); i_0++) {
              a_data_0[(int32_T)(i + (int32_T)(6 * b_m))] += H_data_0[(int32_T)
                ((int32_T)(C_sizes_idx_1 * i) + i_0)] * (real32_T)
                est_estimator_B->tmp_data_m[(int32_T)((int32_T)(H_sizes[0] * b_m)
                + i_0)];
            }
          }
        }

        if ((H_sizes[1] == 1) || (q1_sizes[0] == 1)) {
          for (i = 0; i < 6; i++) {
            for (b_m = 0; b_m < 6; b_m++) {
              rtb_R_mat[(int32_T)(i + (int32_T)(6 * b_m))] = 0.0F;
              for (i_0 = 0; i_0 <= (int32_T)(num_original - 1); i_0++) {
                rtb_R_mat[(int32_T)(i + (int32_T)(6 * b_m))] += a_data_0
                  [(int32_T)((int32_T)(6 * i_0) + i)] * H_data_0[(int32_T)
                  ((int32_T)(C_sizes_idx_1 * b_m) + i_0)];
              }
            }
          }
        } else {
          memset(&rtb_R_mat[0], 0, (uint32_T)(36U * sizeof(real32_T)));
          for (br = 0; br <= 31; br += 6) {
            for (nx = br; (int32_T)(nx + 1) <= (int32_T)(br + 6); nx++) {
              rtb_R_mat[nx] = 0.0F;
            }
          }

          br = 0;
          for (nx = 0; nx <= 31; nx += 6) {
            ar = 0;
            b_m = (int32_T)(br + num_original);
            for (i = br; (int32_T)(i + 1) <= b_m; i++) {
              if (est_estimator_B->q1_data_c[(int32_T)(i % q1_sizes[0] +
                   (int32_T)(q1_sizes[0] * div_nzp_s32_floor(i, q1_sizes[0])))]
                  != 0.0F) {
                s12_iter = ar;
                for (O_sizes_idx_0 = nx; (int32_T)(O_sizes_idx_0 + 1) <=
                     (int32_T)(nx + 6); O_sizes_idx_0++) {
                  s12_iter++;
                  rtb_R_mat[O_sizes_idx_0] += est_estimator_B->q1_data_c
                    [(int32_T)(i % q1_sizes[0] + (int32_T)(q1_sizes[0] *
                    div_nzp_s32_floor(i, q1_sizes[0])))] * a_data_0[(int32_T)
                    (s12_iter - 1)];
                }
              }

              ar += 6;
            }

            br += num_original;
          }
        }

        //  Convert H to be in terms of the entire state vector
        for (i = 0; i < 6; i++) {
          for (b_m = 0; b_m < 6; b_m++) {
            rtb_H_out[(int32_T)(b_m + (int32_T)(6 * i))] = T_H_data_0[(int32_T)
              ((int32_T)(T_H_sizes[0] * i) + b_m)];
          }
        }

        for (i = 0; i < 111; i++) {
          for (b_m = 0; b_m < 6; b_m++) {
            rtb_H_out[(int32_T)(b_m + (int32_T)(6 * (int32_T)(i + 6)))] = 0.0F;
          }
        }
      }

      // '<S22>:1:3'
      for (i = 0; i < 6; i++) {
        // SignalConversion: '<S17>/Signal Conversion' incorporates:
        //   MATLAB Function: '<S17>/Compute Residual and H'

        est_estimator_B->r_out[i] = rtb_Product_j[i];
      }

      // SignalConversion: '<S17>/Signal Conversion' incorporates:
      //   MATLAB Function: '<S17>/Compute Residual and H'

      est_estimator_B->error_out = handrail_knowledge_dims;

      // SignalConversion: '<S17>/Signal Conversion'
      memcpy(&est_estimator_B->H_out[0], &rtb_H_out[0], (uint32_T)(702U * sizeof
              (real32_T)));

      // SignalConversion: '<S17>/Signal Conversion'
      memcpy(&est_estimator_B->R_mat[0], &rtb_R_mat[0], (uint32_T)(36U * sizeof
              (real32_T)));

      // SignalConversion: '<S17>/Signal Conversion'
      hr_P_hr_ISS_ISS[0] = UnitDelay_DSTATE_n_hr_P_hr_ISS_;
      hr_P_hr_ISS_ISS[1] = UnitDelay_DSTATE_n_hr_P_hr_IS_0;
      hr_P_hr_ISS_ISS[2] = UnitDelay_DSTATE_n_hr_P_hr_IS_1;

      // SignalConversion: '<S17>/Signal Conversion'
      hr_quat_ISS2hr_idx_0 = UnitDelay_DSTATE_n_hr_quat_ISS2;
      hr_quat_ISS2hr_idx_1 = UnitDelay_DSTATE_n_hr_quat_IS_0;
      hr_quat_ISS2hr_idx_2 = UnitDelay_DSTATE_n_hr_quat_IS_1;
      hr_quat_ISS2hr_idx_3 = UnitDelay_DSTATE_n_hr_quat_IS_2;

      // End of Outputs for SubSystem: '<S13>/ML_Compute_Residual_and_H'
    }

    // End of If: '<S13>/IF'

    // Product: '<S15>/Product'
    for (i = 0; i < 6; i++) {
      rtb_Product_j[i] = est_estimator_B->r_out[i] * est_estimator_B->r_out[i];
    }

    // End of Product: '<S15>/Product'

    // Sum: '<S15>/Sum of Elements'
    rtb_Switch1 = rtb_Product_j[0];
    for (ar = 0; ar < 5; ar++) {
      rtb_Switch1 += rtb_Product_j[(int32_T)(ar + 1)];
    }

    // End of Sum: '<S15>/Sum of Elements'

    // Sqrt: '<S15>/Sqrt'
    rtb_Switch1 = (real32_T)sqrt((real_T)rtb_Switch1);

    // S-Function (ex_compute_delta_state_and_cov): '<S12>/ex_compute_delta_state_and_cov' 
    rtb_ex_compute_delta_state_a_pg = compute_delta_state_and_cov((real32_T*)
      &est_estimator_B->r_out[0], est_estimator_B->error_out, (real32_T*)
      &est_estimator_B->H_out[0], 6, 117, est_estimator_P->Constant_Value_h,
      (real32_T*)&est_estimator_B->R_mat[0], (real32_T*)
      &est_estimator_B->Assignment[0], &rtb_ex_compute_delta_state_an_p[0],
      &est_estimator_B->Switch1[0]);

    // S-Function (ex_apply_delta_state): '<S23>/ex_apply_delta_state'
    apply_delta_state((real32_T*)&rtb_ex_compute_delta_state_an_p[0], 117,
                      est_estimator_P->Constant_Value_ln, (real32_T*)
                      &rtb_Merge_o[0], (real32_T*)&accel[0], (real32_T*)
                      &UnitDelay_DSTATE_n_V_B_ISS_ISS[0], (real32_T*)
                      &UnitDelay_DSTATE_n_accel_bias[0], (real32_T*)
                      &UnitDelay_DSTATE_n_P_EST_ISS_IS[0], (real32_T*)
                      &UnitDelay_DSTATE_n_ml_quat_ISS2[0], (real32_T*)
                      &UnitDelay_DSTATE_n_ml_P_cam_ISS[0],
                      UnitDelay_DSTATE_n_kfl_status, (real32_T*)
                      &UnitDelay_DSTATE_n_of_quat_ISS2[0], (real32_T*)
                      &UnitDelay_DSTATE_n_of_P_cam_ISS[0],
                      &rtb_ex_apply_delta_state_o1_d[0],
                      &rtb_ex_apply_delta_state_o2_i[0],
                      &rtb_ex_apply_delta_state_o3_e[0],
                      &rtb_ex_apply_delta_state_o4_g[0],
                      &rtb_ex_apply_delta_state_o5_i[0],
                      &rtb_ex_apply_delta_state_o6_d[0],
                      &rtb_ex_apply_delta_state_o7_p[0],
                      &rtb_ex_apply_delta_state_o8_j,
                      &rtb_ex_apply_delta_state_o9_c[0],
                      &rtb_ex_apply_delta_state_o10_i[0]);

    // Logic: '<S15>/Logical Operator1' incorporates:
    //   Constant: '<S12>/Constant'
    //   Constant: '<S15>/Constant1'
    //   Constant: '<S23>/Constant'
    //   Product: '<S15>/Divide'
    //   RelationalOperator: '<S15>/Relational Operator1'
    //   Sum: '<S15>/Add'
    //   UnitDelay: '<S15>/Unit Delay2'

    empty_non_axis_sizes = ((est_estimator_P->ase_minumum_resid_thresh > (real_T)
      ((est_estimator_P->UnitDelay2_InitialCondition - rtb_Switch1) /
       rtb_Switch1)) || (rtb_ex_compute_delta_state_a_pg != 0));

    // Switch: '<S12>/Switch' incorporates:
    //   BusAssignment: '<S14>/Bus Assignment1'
    //   BusAssignment: '<S23>/Bus Assignment1'
    //   Constant: '<S14>/Constant2'
    //   Constant: '<S14>/Constant3'

    if (empty_non_axis_sizes) {
      numFeatures = rtb_numFeatures_f;
      memcpy(&rtb_UnitDelay18[0], &UnitDelay_DSTATE_n_ml_mahal_dis[0], (uint32_T)
             (50U * sizeof(real_T)));
      hr_P_hr_ISS_ISS[0] = UnitDelay_DSTATE_n_hr_P_hr_ISS_;
      hr_P_hr_ISS_ISS[1] = UnitDelay_DSTATE_n_hr_P_hr_IS_0;
      hr_P_hr_ISS_ISS[2] = UnitDelay_DSTATE_n_hr_P_hr_IS_1;
      hr_quat_ISS2hr_idx_0 = UnitDelay_DSTATE_n_hr_quat_ISS2;
      hr_quat_ISS2hr_idx_1 = UnitDelay_DSTATE_n_hr_quat_IS_0;
      hr_quat_ISS2hr_idx_2 = UnitDelay_DSTATE_n_hr_quat_IS_1;
      hr_quat_ISS2hr_idx_3 = UnitDelay_DSTATE_n_hr_quat_IS_2;
    } else {
      rtb_Merge_o[0] = rtb_ex_apply_delta_state_o1_d[0];
      rtb_Merge_o[1] = rtb_ex_apply_delta_state_o1_d[1];
      rtb_Merge_o[2] = rtb_ex_apply_delta_state_o1_d[2];
      rtb_Merge_o[3] = rtb_ex_apply_delta_state_o1_d[3];
      accel[0] = rtb_ex_apply_delta_state_o2_i[0];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[0] = rtb_ex_apply_delta_state_o3_e[0];
      UnitDelay_DSTATE_n_accel_bias[0] = rtb_ex_apply_delta_state_o4_g[0];
      accel[1] = rtb_ex_apply_delta_state_o2_i[1];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[1] = rtb_ex_apply_delta_state_o3_e[1];
      UnitDelay_DSTATE_n_accel_bias[1] = rtb_ex_apply_delta_state_o4_g[1];
      accel[2] = rtb_ex_apply_delta_state_o2_i[2];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[2] = rtb_ex_apply_delta_state_o3_e[2];
      UnitDelay_DSTATE_n_accel_bias[2] = rtb_ex_apply_delta_state_o4_g[2];
      UnitDelay_DSTATE_n_ml_quat_ISS2[0] = rtb_ex_apply_delta_state_o6_d[0];
      UnitDelay_DSTATE_n_ml_quat_ISS2[1] = rtb_ex_apply_delta_state_o6_d[1];
      UnitDelay_DSTATE_n_ml_quat_ISS2[2] = rtb_ex_apply_delta_state_o6_d[2];
      UnitDelay_DSTATE_n_ml_quat_ISS2[3] = rtb_ex_apply_delta_state_o6_d[3];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[0] = rtb_ex_apply_delta_state_o7_p[0];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[1] = rtb_ex_apply_delta_state_o7_p[1];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[2] = rtb_ex_apply_delta_state_o7_p[2];
      memcpy(&UnitDelay_DSTATE_n_of_quat_ISS2[0],
             &rtb_ex_apply_delta_state_o9_c[0], (uint32_T)(sizeof(real32_T) <<
              6U));
      memcpy(&UnitDelay_DSTATE_n_of_P_cam_ISS[0],
             &rtb_ex_apply_delta_state_o10_i[0], (uint32_T)(48U * sizeof
              (real32_T)));
      UnitDelay_DSTATE_n_kfl_status = rtb_ex_apply_delta_state_o8_j;
      rtb_Switch_m = est_estimator_P->Constant2_Value_n4;
      memcpy(&UnitDelay_DSTATE_n_of_mahal_dis[0],
             &est_estimator_P->Constant3_Value[0], (uint32_T)(50U * sizeof
              (real_T)));
      UnitDelay_DSTATE_n_P_EST_ISS_IS[0] = rtb_ex_apply_delta_state_o5_i[0];
      UnitDelay_DSTATE_n_P_EST_ISS_IS[1] = rtb_ex_apply_delta_state_o5_i[1];
      UnitDelay_DSTATE_n_P_EST_ISS_IS[2] = rtb_ex_apply_delta_state_o5_i[2];
    }

    // End of Switch: '<S12>/Switch'

    // Switch: '<S12>/Switch1'
    for (i = 0; i < 13689; i++) {
      rtb_Switch1 = est_estimator_B->Switch1[i];
      if (empty_non_axis_sizes) {
        rtb_Switch1 = est_estimator_B->Assignment[i];
      }

      est_estimator_B->Switch1[i] = rtb_Switch1;
    }

    // End of Switch: '<S12>/Switch1'

    // SignalConversion: '<S8>/OutportBufferForstate_out' incorporates:
    //   SignalConversion: '<S12>/Signal Conversion'

    rtb_Merge2.quat_ISS2B[0] = rtb_Merge_o[0];
    rtb_Merge2.quat_ISS2B[1] = rtb_Merge_o[1];
    rtb_Merge2.quat_ISS2B[2] = rtb_Merge_o[2];
    rtb_Merge2.quat_ISS2B[3] = rtb_Merge_o[3];
    rtb_Merge2.omega_B_ISS_B[0] = rtb_ImpAsg_InsertedFor_Out1_at_[0];
    rtb_Merge2.gyro_bias[0] = accel[0];
    rtb_Merge2.V_B_ISS_ISS[0] = UnitDelay_DSTATE_n_V_B_ISS_ISS[0];
    rtb_Merge2.A_B_ISS_ISS[0] = rtb_Sum_k1;
    rtb_Merge2.accel_bias[0] = UnitDelay_DSTATE_n_accel_bias[0];
    rtb_Merge2.P_B_ISS_ISS[0] = rtb_Sum_l;
    rtb_Merge2.omega_B_ISS_B[1] = rtb_ImpAsg_InsertedFor_Out1_at_[1];
    rtb_Merge2.gyro_bias[1] = accel[1];
    rtb_Merge2.V_B_ISS_ISS[1] = UnitDelay_DSTATE_n_V_B_ISS_ISS[1];
    rtb_Merge2.A_B_ISS_ISS[1] = rtb_Gain1_f;
    rtb_Merge2.accel_bias[1] = UnitDelay_DSTATE_n_accel_bias[1];
    rtb_Merge2.P_B_ISS_ISS[1] = UnitDelay_DSTATE_n_P_B_ISS_ISS_;
    rtb_Merge2.omega_B_ISS_B[2] = rtb_ImpAsg_InsertedFor_Out1_at_[2];
    rtb_Merge2.gyro_bias[2] = accel[2];
    rtb_Merge2.V_B_ISS_ISS[2] = UnitDelay_DSTATE_n_V_B_ISS_ISS[2];
    rtb_Merge2.A_B_ISS_ISS[2] = UnitDelay_DSTATE_n_A_B_ISS_ISS_;
    rtb_Merge2.accel_bias[2] = UnitDelay_DSTATE_n_accel_bias[2];
    rtb_Merge2.P_B_ISS_ISS[2] = UnitDelay_DSTATE_n_P_B_ISS_IS_0;
    rtb_Merge2.confidence = rtb_Saturation_n;
    rtb_Merge2.aug_state_enum = rtb_BitwiseOperator;
    rtb_Merge2.ml_quat_ISS2cam[0] = UnitDelay_DSTATE_n_ml_quat_ISS2[0];
    rtb_Merge2.ml_quat_ISS2cam[1] = UnitDelay_DSTATE_n_ml_quat_ISS2[1];
    rtb_Merge2.ml_quat_ISS2cam[2] = UnitDelay_DSTATE_n_ml_quat_ISS2[2];
    rtb_Merge2.ml_quat_ISS2cam[3] = UnitDelay_DSTATE_n_ml_quat_ISS2[3];
    rtb_Merge2.ml_P_cam_ISS_ISS[0] = UnitDelay_DSTATE_n_ml_P_cam_ISS[0];
    rtb_Merge2.ml_P_cam_ISS_ISS[1] = UnitDelay_DSTATE_n_ml_P_cam_ISS[1];
    rtb_Merge2.ml_P_cam_ISS_ISS[2] = UnitDelay_DSTATE_n_ml_P_cam_ISS[2];
    memcpy(&rtb_Merge2.of_quat_ISS2cam[0], &UnitDelay_DSTATE_n_of_quat_ISS2[0],
           (uint32_T)(sizeof(real32_T) << 6U));
    memcpy(&rtb_Merge2.of_P_cam_ISS_ISS[0], &UnitDelay_DSTATE_n_of_P_cam_ISS[0],
           (uint32_T)(48U * sizeof(real32_T)));
    memcpy(&rtb_Merge2.cov_diag[0], &UnitDelay_DSTATE_n_cov_diag[0], (uint32_T)
           (117U * sizeof(ase_cov_datatype)));
    rtb_Merge2.kfl_status = UnitDelay_DSTATE_n_kfl_status;
    rtb_Merge2.update_OF_tracks_cnt = rtb_Switch_m;
    rtb_Merge2.update_ML_features_cnt = numFeatures;
    memcpy(&rtb_Merge2.of_mahal_distance[0], &UnitDelay_DSTATE_n_of_mahal_dis[0],
           (uint32_T)(50U * sizeof(real_T)));
    memcpy(&rtb_Merge2.ml_mahal_distance[0], &rtb_UnitDelay18[0], (uint32_T)(50U
            * sizeof(real_T)));
    rtb_Merge2.hr_P_hr_ISS_ISS[0] = hr_P_hr_ISS_ISS[0];
    rtb_Merge2.hr_P_hr_ISS_ISS[1] = hr_P_hr_ISS_ISS[1];
    rtb_Merge2.hr_P_hr_ISS_ISS[2] = hr_P_hr_ISS_ISS[2];
    rtb_Merge2.hr_quat_ISS2hr[0] = hr_quat_ISS2hr_idx_0;
    rtb_Merge2.hr_quat_ISS2hr[1] = hr_quat_ISS2hr_idx_1;
    rtb_Merge2.hr_quat_ISS2hr[2] = hr_quat_ISS2hr_idx_2;
    rtb_Merge2.hr_quat_ISS2hr[3] = hr_quat_ISS2hr_idx_3;
    rtb_Merge2.P_EST_ISS_ISS[0] = UnitDelay_DSTATE_n_P_EST_ISS_IS[0];
    rtb_Merge2.P_EST_ISS_ISS[1] = UnitDelay_DSTATE_n_P_EST_ISS_IS[1];
    rtb_Merge2.P_EST_ISS_ISS[2] = UnitDelay_DSTATE_n_P_EST_ISS_IS[2];

    // End of Outputs for SubSystem: '<S8>/ML Update'
    // End of Outputs for SubSystem: '<S3>/Absolute_Update'
    break;

   case 1:
    // Outputs for IfAction SubSystem: '<S3>/Optical_Flow_Update' incorporates:
    //   ActionPort: '<S10>/Action Port'

    // Outputs for Iterator SubSystem: '<S10>/OF Update' incorporates:
    //   WhileIterator: '<S24>/While Iterator'

    // InitializeConditions for UnitDelay: '<S24>/Unit Delay' incorporates:
    //   UnitDelay: '<S24>/Unit Delay'

    rtb_Merge_o[0] = est_estimator_P->UnitDelay_InitialCondition_p.quat_ISS2B[0];
    rtb_Merge_o[1] = est_estimator_P->UnitDelay_InitialCondition_p.quat_ISS2B[1];
    rtb_Merge_o[2] = est_estimator_P->UnitDelay_InitialCondition_p.quat_ISS2B[2];
    rtb_Merge_o[3] = est_estimator_P->UnitDelay_InitialCondition_p.quat_ISS2B[3];
    rtb_ImpAsg_InsertedFor_Out1_at_[0] =
      est_estimator_P->UnitDelay_InitialCondition_p.omega_B_ISS_B[0];
    accel[0] = est_estimator_P->UnitDelay_InitialCondition_p.gyro_bias[0];
    UnitDelay_DSTATE_n_V_B_ISS_ISS[0] =
      est_estimator_P->UnitDelay_InitialCondition_p.V_B_ISS_ISS[0];
    rtb_Sum_k1 = est_estimator_P->UnitDelay_InitialCondition_p.A_B_ISS_ISS[0];
    UnitDelay_DSTATE_n_accel_bias[0] =
      est_estimator_P->UnitDelay_InitialCondition_p.accel_bias[0];
    rtb_Sum_l = est_estimator_P->UnitDelay_InitialCondition_p.P_B_ISS_ISS[0];
    rtb_ImpAsg_InsertedFor_Out1_at_[1] =
      est_estimator_P->UnitDelay_InitialCondition_p.omega_B_ISS_B[1];
    accel[1] = est_estimator_P->UnitDelay_InitialCondition_p.gyro_bias[1];
    UnitDelay_DSTATE_n_V_B_ISS_ISS[1] =
      est_estimator_P->UnitDelay_InitialCondition_p.V_B_ISS_ISS[1];
    rtb_Gain1_f = est_estimator_P->UnitDelay_InitialCondition_p.A_B_ISS_ISS[1];
    UnitDelay_DSTATE_n_accel_bias[1] =
      est_estimator_P->UnitDelay_InitialCondition_p.accel_bias[1];
    UnitDelay_DSTATE_n_P_B_ISS_ISS_ =
      est_estimator_P->UnitDelay_InitialCondition_p.P_B_ISS_ISS[1];
    rtb_ImpAsg_InsertedFor_Out1_at_[2] =
      est_estimator_P->UnitDelay_InitialCondition_p.omega_B_ISS_B[2];
    accel[2] = est_estimator_P->UnitDelay_InitialCondition_p.gyro_bias[2];
    UnitDelay_DSTATE_n_V_B_ISS_ISS[2] =
      est_estimator_P->UnitDelay_InitialCondition_p.V_B_ISS_ISS[2];
    UnitDelay_DSTATE_n_A_B_ISS_ISS_ =
      est_estimator_P->UnitDelay_InitialCondition_p.A_B_ISS_ISS[2];
    UnitDelay_DSTATE_n_accel_bias[2] =
      est_estimator_P->UnitDelay_InitialCondition_p.accel_bias[2];
    UnitDelay_DSTATE_n_P_B_ISS_IS_0 =
      est_estimator_P->UnitDelay_InitialCondition_p.P_B_ISS_ISS[2];
    rtb_Switch_m = est_estimator_P->UnitDelay_InitialCondition_p.confidence;
    UnitDelay_DSTATE_aug_state_enum =
      est_estimator_P->UnitDelay_InitialCondition_p.aug_state_enum;
    UnitDelay_DSTATE_n_ml_quat_ISS2[0] =
      est_estimator_P->UnitDelay_InitialCondition_p.ml_quat_ISS2cam[0];
    UnitDelay_DSTATE_n_ml_quat_ISS2[1] =
      est_estimator_P->UnitDelay_InitialCondition_p.ml_quat_ISS2cam[1];
    UnitDelay_DSTATE_n_ml_quat_ISS2[2] =
      est_estimator_P->UnitDelay_InitialCondition_p.ml_quat_ISS2cam[2];
    UnitDelay_DSTATE_n_ml_quat_ISS2[3] =
      est_estimator_P->UnitDelay_InitialCondition_p.ml_quat_ISS2cam[3];
    UnitDelay_DSTATE_n_ml_P_cam_ISS[0] =
      est_estimator_P->UnitDelay_InitialCondition_p.ml_P_cam_ISS_ISS[0];
    UnitDelay_DSTATE_n_ml_P_cam_ISS[1] =
      est_estimator_P->UnitDelay_InitialCondition_p.ml_P_cam_ISS_ISS[1];
    UnitDelay_DSTATE_n_ml_P_cam_ISS[2] =
      est_estimator_P->UnitDelay_InitialCondition_p.ml_P_cam_ISS_ISS[2];
    memcpy(&UnitDelay_DSTATE_n_of_quat_ISS2[0],
           &est_estimator_P->UnitDelay_InitialCondition_p.of_quat_ISS2cam[0],
           (uint32_T)(sizeof(real32_T) << 6U));
    memcpy(&UnitDelay_DSTATE_n_of_P_cam_ISS[0],
           &est_estimator_P->UnitDelay_InitialCondition_p.of_P_cam_ISS_ISS[0],
           (uint32_T)(48U * sizeof(real32_T)));
    memcpy(&UnitDelay_DSTATE_n_cov_diag[0],
           &est_estimator_P->UnitDelay_InitialCondition_p.cov_diag[0], (uint32_T)
           (117U * sizeof(ase_cov_datatype)));
    UnitDelay_DSTATE_n_kfl_status =
      est_estimator_P->UnitDelay_InitialCondition_p.kfl_status;
    rtb_numFeatures_f =
      est_estimator_P->UnitDelay_InitialCondition_p.update_OF_tracks_cnt;
    rtb_Saturation_n =
      est_estimator_P->UnitDelay_InitialCondition_p.update_ML_features_cnt;
    memcpy(&UnitDelay_DSTATE_n_of_mahal_dis[0],
           &est_estimator_P->UnitDelay_InitialCondition_p.of_mahal_distance[0],
           (uint32_T)(50U * sizeof(real_T)));
    memcpy(&UnitDelay_DSTATE_n_ml_mahal_dis[0],
           &est_estimator_P->UnitDelay_InitialCondition_p.ml_mahal_distance[0],
           (uint32_T)(50U * sizeof(real_T)));
    UnitDelay_DSTATE_n_hr_P_hr_ISS_ =
      est_estimator_P->UnitDelay_InitialCondition_p.hr_P_hr_ISS_ISS[0];
    UnitDelay_DSTATE_n_hr_P_hr_IS_0 =
      est_estimator_P->UnitDelay_InitialCondition_p.hr_P_hr_ISS_ISS[1];
    UnitDelay_DSTATE_n_hr_P_hr_IS_1 =
      est_estimator_P->UnitDelay_InitialCondition_p.hr_P_hr_ISS_ISS[2];
    UnitDelay_DSTATE_n_hr_quat_ISS2 =
      est_estimator_P->UnitDelay_InitialCondition_p.hr_quat_ISS2hr[0];
    UnitDelay_DSTATE_n_hr_quat_IS_0 =
      est_estimator_P->UnitDelay_InitialCondition_p.hr_quat_ISS2hr[1];
    UnitDelay_DSTATE_n_hr_quat_IS_1 =
      est_estimator_P->UnitDelay_InitialCondition_p.hr_quat_ISS2hr[2];
    UnitDelay_DSTATE_n_hr_quat_IS_2 =
      est_estimator_P->UnitDelay_InitialCondition_p.hr_quat_ISS2hr[3];
    UnitDelay_DSTATE_n_P_EST_ISS_IS[0] =
      est_estimator_P->UnitDelay_InitialCondition_p.P_EST_ISS_ISS[0];
    UnitDelay_DSTATE_n_P_EST_ISS_IS[1] =
      est_estimator_P->UnitDelay_InitialCondition_p.P_EST_ISS_ISS[1];
    UnitDelay_DSTATE_n_P_EST_ISS_IS[2] =
      est_estimator_P->UnitDelay_InitialCondition_p.P_EST_ISS_ISS[2];

    // InitializeConditions for UnitDelay: '<S24>/Unit Delay1' incorporates:
    //   UnitDelay: '<S24>/Unit Delay1'

    for (i = 0; i < 13689; i++) {
      est_estimator_B->Switch1[i] =
        est_estimator_P->UnitDelay1_InitialCondition_m;
    }

    // End of InitializeConditions for UnitDelay: '<S24>/Unit Delay1'

    // Switch: '<S24>/Switch2' incorporates:
    //   BusAssignment: '<S42>/Bus Assignment'
    //   BusAssignment: '<S6>/Bus Assignment'
    //   BusCreator: '<S2>/Bus Creator2'
    //   UnitDelay: '<S2>/Unit Delay10'
    //   UnitDelay: '<S2>/Unit Delay11'
    //   UnitDelay: '<S2>/Unit Delay12'
    //   UnitDelay: '<S2>/Unit Delay13'
    //   UnitDelay: '<S2>/Unit Delay14'
    //   UnitDelay: '<S2>/Unit Delay15'
    //   UnitDelay: '<S2>/Unit Delay3'
    //   UnitDelay: '<S2>/Unit Delay6'
    //   UnitDelay: '<S2>/Unit Delay7'
    //   UnitDelay: '<S2>/Unit Delay8'

    if (!(1 > est_estimator_P->Switch2_Threshold_b)) {
      rtb_Merge_o[0] = rtb_Product1[0];
      rtb_Merge_o[1] = rtb_Product1[1];
      rtb_Merge_o[2] = rtb_Product1[2];
      rtb_Merge_o[3] = rtb_Product1[3];
      rtb_ImpAsg_InsertedFor_Out1_at_[0] = rtb_ImpAsg_InsertedFor_Out1_a_d[0];
      accel[0] = est_estimator_DW->UnitDelay3_DSTATE[0];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[0] = rtb_Sum2[0];
      rtb_Sum_k1 = rtb_Sum1_k3[0];
      UnitDelay_DSTATE_n_accel_bias[0] = est_estimator_DW->UnitDelay6_DSTATE[0];
      rtb_Sum_l = est_estimator_DW->UnitDelay7_DSTATE[0];
      rtb_ImpAsg_InsertedFor_Out1_at_[1] = rtb_ImpAsg_InsertedFor_Out1_a_d[1];
      accel[1] = est_estimator_DW->UnitDelay3_DSTATE[1];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[1] = rtb_Sum2[1];
      rtb_Gain1_f = rtb_Sum1_k3[1];
      UnitDelay_DSTATE_n_accel_bias[1] = est_estimator_DW->UnitDelay6_DSTATE[1];
      UnitDelay_DSTATE_n_P_B_ISS_ISS_ = est_estimator_DW->UnitDelay7_DSTATE[1];
      rtb_ImpAsg_InsertedFor_Out1_at_[2] = hr_quat_ISS2hr_idx_0;
      accel[2] = est_estimator_DW->UnitDelay3_DSTATE[2];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[2] = rtb_Sum2[2];
      UnitDelay_DSTATE_n_A_B_ISS_ISS_ = rtb_Sum1_k3[2];
      UnitDelay_DSTATE_n_accel_bias[2] = est_estimator_DW->UnitDelay6_DSTATE[2];
      UnitDelay_DSTATE_n_P_B_ISS_IS_0 = est_estimator_DW->UnitDelay7_DSTATE[2];
      rtb_Switch_m = est_estimator_DW->UnitDelay8_DSTATE;
      UnitDelay_DSTATE_aug_state_enum = rtb_BusAssignment_aug_state_enu;
      UnitDelay_DSTATE_n_ml_quat_ISS2[0] = est_estimator_DW->UnitDelay10_DSTATE
        [0];
      UnitDelay_DSTATE_n_ml_quat_ISS2[1] = est_estimator_DW->UnitDelay10_DSTATE
        [1];
      UnitDelay_DSTATE_n_ml_quat_ISS2[2] = est_estimator_DW->UnitDelay10_DSTATE
        [2];
      UnitDelay_DSTATE_n_ml_quat_ISS2[3] = est_estimator_DW->UnitDelay10_DSTATE
        [3];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[0] = est_estimator_DW->UnitDelay11_DSTATE
        [0];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[1] = est_estimator_DW->UnitDelay11_DSTATE
        [1];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[2] = est_estimator_DW->UnitDelay11_DSTATE
        [2];
      memcpy(&UnitDelay_DSTATE_n_of_quat_ISS2[0],
             &est_estimator_DW->UnitDelay12_DSTATE[0], (uint32_T)(sizeof
              (real32_T) << 6U));
      memcpy(&UnitDelay_DSTATE_n_of_P_cam_ISS[0],
             &est_estimator_DW->UnitDelay13_DSTATE[0], (uint32_T)(48U * sizeof
              (real32_T)));
      memcpy(&UnitDelay_DSTATE_n_cov_diag[0],
             &est_estimator_DW->UnitDelay14_DSTATE[0], (uint32_T)(117U * sizeof
              (ase_cov_datatype)));
      UnitDelay_DSTATE_n_kfl_status = est_estimator_DW->UnitDelay15_DSTATE;
      rtb_numFeatures_f = numFeatures;
      rtb_Saturation_n = rtb_BusCreator2_update_ML_featu;
      memcpy(&UnitDelay_DSTATE_n_of_mahal_dis[0], &rtb_UnitDelay18[0], (uint32_T)
             (50U * sizeof(real_T)));
      memcpy(&UnitDelay_DSTATE_n_ml_mahal_dis[0], &rtb_UnitDelay19[0], (uint32_T)
             (50U * sizeof(real_T)));
      UnitDelay_DSTATE_n_hr_P_hr_ISS_ = rtb_Add_e[0];
      UnitDelay_DSTATE_n_hr_P_hr_IS_0 = rtb_Add_e[1];
      UnitDelay_DSTATE_n_hr_P_hr_IS_1 = rtb_Add_e[2];
      UnitDelay_DSTATE_n_hr_quat_ISS2 = rtb_UnitDelay25[0];
      UnitDelay_DSTATE_n_hr_quat_IS_0 = rtb_UnitDelay25[1];
      UnitDelay_DSTATE_n_hr_quat_IS_1 = rtb_UnitDelay25[2];
      UnitDelay_DSTATE_n_hr_quat_IS_2 = rtb_UnitDelay25[3];
      UnitDelay_DSTATE_n_P_EST_ISS_IS[0] = rtb_P_B_ISS_ISS[0];
      UnitDelay_DSTATE_n_P_EST_ISS_IS[1] = rtb_P_B_ISS_ISS[1];
      UnitDelay_DSTATE_n_P_EST_ISS_IS[2] = rtb_P_B_ISS_ISS[2];
    }

    // End of Switch: '<S24>/Switch2'

    // MATLAB Function: '<S24>/compute_of_global_points' incorporates:
    //   Inport: '<Root>/optical_flow_msg'

    // MATLAB Function 'camera_update/Optical_Flow_Update/OF Update/compute_of_global_points': '<S28>:1' 
    //  Code is taken from Zack Morrato's prototyped Optical Flow Kalman Filter. 
    //  This code computes the residual and measurment matrices for the optical
    //  flow measurments.
    //
    // '<S28>:1:8'
    //  Copyright (c) 2017, United States Government, as represented by the
    //  Administrator of the National Aeronautics and Space Administration.
    //
    //  All rights reserved.
    //
    //  The Astrobee platform is licensed under the Apache License, Version 2.0
    //  (the "License"); you may not use this file except in compliance with the 
    //  License. You may obtain a copy of the License at
    //
    //      http://www.apache.org/licenses/LICENSE-2.0
    //
    //  Unless required by applicable law or agreed to in writing, software
    //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
    //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
    //  License for the specific language governing permissions and limitations
    //  under the License.
    //  Code is taken from Zack Morrato's prototyped Optical Flow Kalman Filter. 
    //  This code computes the residual and measurment matrices for the optical
    //  flow measurments.
    //  for some reason matlab doesn't like creating matrix sizes based on "unbounded" parameters 
    //    if ase_of_num_aug ~= 5
    //      error('eml_compute_of_global_points is optimized for four augmented states.'); 
    //    end
    //    ase_of_num_aug = 4;
    memset(&est_estimator_B->of_measured[0], 0, (uint32_T)(1600U * sizeof
            (real32_T)));
    for (i = 0; i < 200; i++) {
      rtb_global_points[i] = 1.0F;
    }

    memset(&rtb_valid_out[0], 0, (uint32_T)(800U * sizeof(int32_T)));
    for (i = 0; i < 1600; i++) {
      est_estimator_B->of_measured_in[i] =
        est_estimator_U_cvs_optical_flow_msg_n->cvs_observations[i] *
        est_estimator_P->tun_ase_vocam_inv_focal_length;
    }

    //  Convert measurements to normalized units
    //  Note for some reason of_measured and valid can not match? Why?
    //  Select out only features that are seen by three or more cameras
    fkngdjekgdjepphl_sum(est_estimator_U_cvs_optical_flow_msg_n->cvs_valid_flag,
                         rtb_UnitDelay18);
    br = 0;
    for (nx = 0; nx < 50; nx++) {
      rtb_Compare = (rtb_UnitDelay18[nx] >= 3.0);
      if (rtb_Compare) {
        br++;
      }

      rtb_Compare_ic[nx] = rtb_Compare;
    }

    handrail_knowledge_dims = br;
    num_original = 0;
    for (br = 0; br < 50; br++) {
      if (rtb_Compare_ic[br]) {
        num_original++;
      }
    }

    C_sizes_idx_1 = num_original;
    num_original = 0;
    for (br = 0; br < 50; br++) {
      if (rtb_Compare_ic[br]) {
        e_data[num_original] = (int8_T)(int32_T)(br + 1);
        num_original++;
      }
    }

    for (i = 0; i < 16; i++) {
      for (b_m = 0; b_m <= (int32_T)(C_sizes_idx_1 - 1); b_m++) {
        rtb_valid_out[(int32_T)(b_m + (int32_T)(50 * i))] = (int32_T)
          est_estimator_U_cvs_optical_flow_msg_n->cvs_valid_flag[(int32_T)
          ((int32_T)((int32_T)(50 * i) + (int32_T)e_data[b_m]) - 1)];
      }
    }

    //  reshape the measurements so the order is by feature, x measure then y
    //  measure, with every camera observation one after the other.
    num_original = (int32_T)(handrail_knowledge_dims << 5);
    nx = 0;
    for (br = 0; br < 50; br++) {
      if (rtb_Compare_ic[br]) {
        nx++;
      }
    }

    C_sizes_idx_1 = nx;
    nx = 0;
    for (br = 0; br < 50; br++) {
      if (rtb_Compare_ic[br]) {
        e_data[nx] = (int8_T)(int32_T)(br + 1);
        nx++;
      }
    }

    of_measured_in_sizes[0] = C_sizes_idx_1;
    of_measured_in_sizes[1] = 2;
    of_measured_in_sizes[2] = 16;
    for (i = 0; i < 16; i++) {
      for (b_m = 0; b_m <= (int32_T)(C_sizes_idx_1 - 1); b_m++) {
        est_estimator_B->of_measured_in_data[(int32_T)(b_m + (int32_T)((int32_T)
          (C_sizes_idx_1 << 1) * i))] = est_estimator_B->of_measured_in[(int32_T)
          ((int32_T)((int32_T)(100 * i) + (int32_T)e_data[b_m]) - 1)];
      }

      for (b_m = 0; b_m <= (int32_T)(C_sizes_idx_1 - 1); b_m++) {
        est_estimator_B->of_measured_in_data[(int32_T)((int32_T)(b_m +
          C_sizes_idx_1) + (int32_T)((int32_T)(C_sizes_idx_1 << 1) * i))] =
          est_estimator_B->of_measured_in[(int32_T)((int32_T)((int32_T)(100 * i)
          + (int32_T)e_data[b_m]) + 49)];
      }
    }

    aaiepphlecjelnoh_permute(est_estimator_B->of_measured_in_data,
      of_measured_in_sizes, est_estimator_B->of_measured_in, x_sizes);
    nx = (int32_T)(x_sizes[1] << 5);
    tmp_h = (int16_T)(int32_T)(handrail_knowledge_dims << 4);
    ar = (int32_T)(int16_T)(int32_T)(handrail_knowledge_dims << 4);
    for (br = 0; (int32_T)(br + 1) <= nx; br++) {
      est_estimator_B->of_measured_in_data[br] = est_estimator_B->
        of_measured_in[br];
    }

    for (i = 0; i <= (int32_T)(ar - 1); i++) {
      est_estimator_B->b_x_data[(int32_T)(i << 1)] =
        est_estimator_B->of_measured_in_data[i];
      est_estimator_B->b_x_data[(int32_T)(1 + (int32_T)(i << 1))] =
        est_estimator_B->of_measured_in_data[(int32_T)(i + (int32_T)tmp_h)];
    }

    nx = (int32_T)((int32_T)tmp_h << 1);
    for (br = 0; (int32_T)(br + 1) <= nx; br++) {
      est_estimator_B->of_measured_in_data[br] = est_estimator_B->b_x_data[br];
    }

    if (1 > num_original) {
      num_original = 0;
    }

    tmp_h = (int16_T)(int32_T)((int32_T)(int16_T)num_original - 1);
    br = (int32_T)((int32_T)tmp_h + 1);
    C_sizes_idx_1 = (int32_T)tmp_h;
    for (i = 0; i <= C_sizes_idx_1; i++) {
      h_data[i] = (int16_T)i;
    }

    for (i = 0; i <= (int32_T)(br - 1); i++) {
      est_estimator_B->of_measured[(int32_T)h_data[i]] =
        est_estimator_B->of_measured_in_data[i];
    }

    //  Extract the 4x4 transforms which convert points from global frame to camera 
    //  frame. I'll be stacking them vertically so they can all be evaluated
    //  simultaneously.
    imohknglphlfpphd_repmat(rtb_camera_tf_global);
    for (num_original = 0; num_original < 16; num_original++) {
      br = (int32_T)((int32_T)((int32_T)(1 + num_original) << 2) - 3);
      nx = (int32_T)((int32_T)((int32_T)(1 + num_original) << 2) - 1);
      if (nx < br) {
        z_est_sizes_idx_1 = 0;
      } else {
        z_est_sizes_idx_1 = (int32_T)((int32_T)(nx - br) + 1);
        C_sizes_idx_1 = (int32_T)(nx - br);
        for (i = 0; i <= C_sizes_idx_1; i++) {
          rot_indices_data[i] = (int8_T)(int32_T)(br + i);
        }
      }

      for (i = 0; i <= (int32_T)(z_est_sizes_idx_1 - 1); i++) {
        c_data_1[i] = (int8_T)(int32_T)((int32_T)rot_indices_data[i] - 1);
      }

      H[0] = UnitDelay_DSTATE_n_of_quat_ISS2[num_original];
      H[1] = UnitDelay_DSTATE_n_of_quat_ISS2[(int32_T)(num_original + 16)];
      H[2] = UnitDelay_DSTATE_n_of_quat_ISS2[(int32_T)(num_original + 32)];
      H[3] = UnitDelay_DSTATE_n_of_quat_ISS2[(int32_T)(num_original + 48)];
      fkfcbaiengdjgdje_quaternion_to_rotation(H, rtb_Product1_0);
      for (i = 0; i < 3; i++) {
        for (b_m = 0; b_m <= (int32_T)(z_est_sizes_idx_1 - 1); b_m++) {
          rtb_camera_tf_global[(int32_T)((int32_T)c_data_1[b_m] + (int32_T)(i <<
            6))] = rtb_Product1_0[(int32_T)((int32_T)(z_est_sizes_idx_1 * i) +
            b_m)];
        }
      }

      for (i = 0; i < 3; i++) {
        for (b_m = 0; b_m <= (int32_T)(z_est_sizes_idx_1 - 1); b_m++) {
          c_a_data[(int32_T)(b_m + (int32_T)(z_est_sizes_idx_1 * i))] =
            -rtb_camera_tf_global[(int32_T)((int32_T)((int32_T)(i << 6) +
            (int32_T)rot_indices_data[b_m]) - 1)];
        }
      }

      br = (int32_T)(int8_T)z_est_sizes_idx_1;
      b_m = (int32_T)(int8_T)z_est_sizes_idx_1;
      for (i = 0; i <= (int32_T)(br - 1); i++) {
        C_data[i] = 0.0F;
      }

      if (z_est_sizes_idx_1 != 0) {
        br = 0;
        while ((z_est_sizes_idx_1 > 0) && (br <= 0)) {
          for (nx = 1; nx <= z_est_sizes_idx_1; nx++) {
            C_data[(int32_T)(nx - 1)] = 0.0F;
          }

          br = z_est_sizes_idx_1;
        }

        br = 3;
        nx = 0;
        while ((z_est_sizes_idx_1 > 0) && (nx <= 0)) {
          ar = 0;
          for (i = (int32_T)(br - 3); (int32_T)(i + 1) <= br; i++) {
            if (UnitDelay_DSTATE_n_of_P_cam_ISS[(int32_T)((int32_T)(i << 4) +
                 num_original)] != 0.0F) {
              s12_iter = ar;
              for (O_sizes_idx_0 = 0; (int32_T)(O_sizes_idx_0 + 1) <=
                   z_est_sizes_idx_1; O_sizes_idx_0++) {
                s12_iter++;
                C_data[O_sizes_idx_0] += UnitDelay_DSTATE_n_of_P_cam_ISS
                  [(int32_T)((int32_T)(i << 4) + num_original)] * c_a_data
                  [(int32_T)(s12_iter - 1)];
              }
            }

            ar += z_est_sizes_idx_1;
          }

          br += 3;
          nx = z_est_sizes_idx_1;
        }
      }

      for (i = 0; i <= (int32_T)(b_m - 1); i++) {
        rtb_camera_tf_global[(int32_T)((int32_T)rot_indices_data[i] + 191)] =
          C_data[i];
      }
    }

    //  Generate the transforms from camera 1 into all the other cameras. This is 
    //  used for point triangulation.
    hdbihlngknopkfcj_repmat(camera_tf_camera1);
    for (i = 0; i < 4; i++) {
      rtb_VectorConcatenate[(int32_T)(i << 2)] = rtb_camera_tf_global[(int32_T)
        (i << 6)];
      rtb_VectorConcatenate[(int32_T)(1 + (int32_T)(i << 2))] =
        rtb_camera_tf_global[(int32_T)((int32_T)(i << 6) + 1)];
      rtb_VectorConcatenate[(int32_T)(2 + (int32_T)(i << 2))] =
        rtb_camera_tf_global[(int32_T)((int32_T)(i << 6) + 2)];
      rtb_VectorConcatenate[(int32_T)(3 + (int32_T)(i << 2))] =
        rtb_camera_tf_global[(int32_T)((int32_T)(i << 6) + 3)];
    }

    biecdbieglngohlf_pinv(rtb_VectorConcatenate, global_tf_camera1);

    //  Used to be inv
    for (num_original = 0; num_original < 16; num_original++) {
      i = (int32_T)((int32_T)((int32_T)(1 + num_original) << 2) - 4);
      for (b_m = 0; b_m < 4; b_m++) {
        rtb_VectorConcatenate[(int32_T)(b_m << 2)] = rtb_camera_tf_global
          [(int32_T)((int32_T)(b_m << 6) + i)];
        rtb_VectorConcatenate[(int32_T)(1 + (int32_T)(b_m << 2))] =
          rtb_camera_tf_global[(int32_T)((int32_T)((int32_T)(b_m << 6) + i) + 1)];
        rtb_VectorConcatenate[(int32_T)(2 + (int32_T)(b_m << 2))] =
          rtb_camera_tf_global[(int32_T)((int32_T)((int32_T)(b_m << 6) + i) + 2)];
        rtb_VectorConcatenate[(int32_T)(3 + (int32_T)(b_m << 2))] =
          rtb_camera_tf_global[(int32_T)((int32_T)((int32_T)(b_m << 6) + i) + 3)];
      }

      i = (int32_T)((int32_T)((int32_T)(1 + num_original) << 2) - 4);
      for (b_m = 0; b_m < 4; b_m++) {
        for (i_0 = 0; i_0 < 4; i_0++) {
          camera_tf_camera1[(int32_T)((int32_T)(b_m + i) + (int32_T)(i_0 << 6))]
            = (real_T)(((global_tf_camera1[(int32_T)((int32_T)(i_0 << 2) + 1)] *
                         rtb_VectorConcatenate[(int32_T)(b_m + 4)] +
                         global_tf_camera1[(int32_T)(i_0 << 2)] *
                         rtb_VectorConcatenate[b_m]) + global_tf_camera1
                        [(int32_T)((int32_T)(i_0 << 2) + 2)] *
                        rtb_VectorConcatenate[(int32_T)(b_m + 8)]) +
                       global_tf_camera1[(int32_T)((int32_T)(i_0 << 2) + 3)] *
                       rtb_VectorConcatenate[(int32_T)(b_m + 12)]);
        }
      }
    }

    //  Triangulate all of the points
    //  for use interanlly, allocate outside for speed
    memset(&A[0], 0, (uint32_T)(96U * sizeof(real32_T)));
    memset(&b_1[0], 0, (uint32_T)(sizeof(real32_T) << 5U));
    for (num_original = 0; (int32_T)(num_original + 1) <=
         handrail_knowledge_dims; num_original++) {
      //  Solving for location of the point in the 3D world
      //  Forming A and b matrices, used in a Ax=b to solve for alpha, beta, rho, 
      //  an inverse depth parameterization of the points location in the 1st
      //  camera.
      for (i = 0; i < 16; i++) {
        rtb_valid_out_0[i] = rtb_valid_out[(int32_T)((int32_T)(50 * i) +
          num_original)];
      }

      num_augs = baaanophjmgddbie_sum(rtb_valid_out_0);
      aug_ind = 1.0;
      for (nx = 0; nx <= (int32_T)((int32_T)num_augs - 1); nx++) {
        while (!(rtb_valid_out[(int32_T)((int32_T)((int32_T)((int32_T)aug_ind -
                   1) * 50) + num_original)] != 0)) {
          aug_ind++;
        }

        ind0 = 4.0 * aug_ind - 4.0;
        tmp_9 = rt_roundd_snf(((real_T)(int32_T)(num_original + 1) - 1.0) * 2.0 *
                              16.0 + 2.0 * aug_ind);
        if (tmp_9 < 2.147483648E+9) {
          if (tmp_9 >= -2.147483648E+9) {
            i = (int32_T)tmp_9;
          } else {
            i = MIN_int32_T;
          }
        } else {
          i = MAX_int32_T;
        }

        br = (int32_T)(i - 2);
        tmp_9 = (1.0 + (real_T)nx) * 2.0;
        A[(int32_T)((int32_T)(tmp_9 + -1.0) - 1)] = (real32_T)camera_tf_camera1
          [(int32_T)((int32_T)(ind0 + 1.0) - 1)] - (real32_T)camera_tf_camera1
          [(int32_T)((int32_T)(ind0 + 3.0) - 1)] * est_estimator_B->
          of_measured[br];
        A[(int32_T)((int32_T)(tmp_9 + -1.0) + 31)] = (real32_T)
          camera_tf_camera1[(int32_T)((int32_T)(ind0 + 1.0) + 63)] - (real32_T)
          camera_tf_camera1[(int32_T)((int32_T)(ind0 + 3.0) + 63)] *
          est_estimator_B->of_measured[br];
        A[(int32_T)((int32_T)(tmp_9 + -1.0) + 63)] = (real32_T)
          camera_tf_camera1[(int32_T)((int32_T)(ind0 + 1.0) + 191)] - (real32_T)
          camera_tf_camera1[(int32_T)((int32_T)(ind0 + 3.0) + 191)] *
          est_estimator_B->of_measured[br];
        A[(int32_T)((int32_T)tmp_9 - 1)] = (real32_T)camera_tf_camera1[(int32_T)
          ((int32_T)(ind0 + 2.0) - 1)] - (real32_T)camera_tf_camera1[(int32_T)
          ((int32_T)(ind0 + 3.0) - 1)] * est_estimator_B->of_measured[(int32_T)
          (1 + br)];
        A[(int32_T)((int32_T)tmp_9 + 31)] = (real32_T)camera_tf_camera1[(int32_T)
          ((int32_T)(ind0 + 2.0) + 63)] - (real32_T)camera_tf_camera1[(int32_T)
          ((int32_T)(ind0 + 3.0) + 63)] * est_estimator_B->of_measured[(int32_T)
          (1 + br)];
        A[(int32_T)((int32_T)tmp_9 + 63)] = (real32_T)camera_tf_camera1[(int32_T)
          ((int32_T)(ind0 + 2.0) + 191)] - (real32_T)camera_tf_camera1[(int32_T)
          ((int32_T)(ind0 + 3.0) + 191)] * est_estimator_B->of_measured[(int32_T)
          (1 + br)];
        tmp_9 = (1.0 + (real_T)nx) * 2.0;
        b_1[(int32_T)((int32_T)(tmp_9 + -1.0) - 1)] = (real32_T)
          camera_tf_camera1[(int32_T)((int32_T)(ind0 + 3.0) + 127)] *
          est_estimator_B->of_measured[br] - (real32_T)camera_tf_camera1
          [(int32_T)((int32_T)(ind0 + 1.0) + 127)];
        b_1[(int32_T)((int32_T)tmp_9 - 1)] = (real32_T)camera_tf_camera1
          [(int32_T)((int32_T)(ind0 + 3.0) + 127)] *
          est_estimator_B->of_measured[(int32_T)(1 + br)] - (real32_T)
          camera_tf_camera1[(int32_T)((int32_T)(ind0 + 2.0) + 127)];
        aug_ind++;
      }

      //  let's weight the oldest augmentation more heavily
      tmp_9 = 2.0 * num_augs;
      aug_ind = 2.0 * num_augs;
      for (i = 0; i < 3; i++) {
        rtb_Product_j[(int32_T)(i << 1)] = A[(int32_T)((int32_T)((int32_T)(tmp_9
          + -1.0) + (int32_T)(i << 5)) - 1)] * 5.0F;
        rtb_Product_j[(int32_T)(1 + (int32_T)(i << 1))] = A[(int32_T)((int32_T)
          ((int32_T)(i << 5) + (int32_T)tmp_9) - 1)] * 5.0F;
      }

      for (i = 0; i < 3; i++) {
        A[(int32_T)((int32_T)((int32_T)(aug_ind + -1.0) + (int32_T)(i << 5)) - 1)]
          = rtb_Product_j[(int32_T)(i << 1)];
        A[(int32_T)((int32_T)((int32_T)aug_ind + (int32_T)(i << 5)) - 1)] =
          rtb_Product_j[(int32_T)((int32_T)(i << 1) + 1)];
      }

      tmp_9 = 2.0 * num_augs;
      aug_ind = 2.0 * num_augs;
      hr_quat_ISS2hr_idx_0 = b_1[(int32_T)((int32_T)tmp_9 - 1)] * 5.0F;
      b_1[(int32_T)((int32_T)(aug_ind + -1.0) - 1)] = b_1[(int32_T)((int32_T)
        (tmp_9 + -1.0) - 1)] * 5.0F;
      b_1[(int32_T)((int32_T)aug_ind - 1)] = hr_quat_ISS2hr_idx_0;
      aug_ind = num_augs * 2.0;
      num_augs *= 2.0;
      if (1.0 > num_augs) {
        br = 0;
      } else {
        br = (int32_T)num_augs;
      }

      if (1.0 > aug_ind) {
        C_sizes_idx_1 = 0;
      } else {
        C_sizes_idx_1 = (int32_T)aug_ind;
      }

      q1_sizes[0] = C_sizes_idx_1;
      q1_sizes[1] = 3;
      for (i = 0; i < 3; i++) {
        for (b_m = 0; b_m <= (int32_T)(C_sizes_idx_1 - 1); b_m++) {
          A_data[(int32_T)(b_m + (int32_T)(C_sizes_idx_1 * i))] = A[(int32_T)
            ((int32_T)(i << 5) + b_m)];
        }
      }

      glfcngdjgdjmmglf_pinv(A_data, q1_sizes, a_data, T_H_sizes);
      if ((T_H_sizes[1] == 1) || (br == 1)) {
        for (i = 0; i <= (int32_T)(br - 1); i++) {
          b_data_0[i] = b_1[i];
        }

        for (i = 0; i < 3; i++) {
          hr_P_hr_ISS_ISS[i] = 0.0F;
          C_sizes_idx_1 = T_H_sizes[1];
          for (b_m = 0; b_m <= (int32_T)(C_sizes_idx_1 - 1); b_m++) {
            hr_P_hr_ISS_ISS[i] += a_data[(int32_T)((int32_T)(T_H_sizes[0] * b_m)
              + i)] * b_data_0[b_m];
          }
        }
      } else {
        hr_P_hr_ISS_ISS[0] = 0.0F;
        hr_P_hr_ISS_ISS[1] = 0.0F;
        hr_P_hr_ISS_ISS[2] = 0.0F;
        ar = 0;
        for (i = 0; (int32_T)(i + 1) <= T_H_sizes[1]; i++) {
          if (b_1[i] != 0.0F) {
            s12_iter = (int32_T)(ar + 1);
            hr_P_hr_ISS_ISS[0] += a_data[(int32_T)(s12_iter - 1)] * b_1[i];
            s12_iter++;
            hr_P_hr_ISS_ISS[1] += a_data[(int32_T)(s12_iter - 1)] * b_1[i];
            s12_iter++;
            hr_P_hr_ISS_ISS[2] += a_data[(int32_T)(s12_iter - 1)] * b_1[i];
          }

          ar += 3;
        }
      }

      //  solve Ax = B with guass newton
      if ((real_T)hr_P_hr_ISS_ISS[2] < 1.0E-5) {
        //  This is a point that is truly in our face because we have no
        //  parallax on it. I only see this happen when using perfect camera
        //  positions and the robot is stationary (our noise usually makes it so 
        //  that inverse depth is non zero).
        hr_P_hr_ISS_ISS[2] = 1.0E-5F;
      }

      //  Converting the inverse depth parameterization into the global coordinate 
      //  frame.
      hr_quat_ISS2hr_idx_0 = hr_P_hr_ISS_ISS[0] / hr_P_hr_ISS_ISS[2];
      rtb_Switch1 = hr_P_hr_ISS_ISS[1] / hr_P_hr_ISS_ISS[2];
      hr_quat_ISS2hr_idx_1 = 1.0F / hr_P_hr_ISS_ISS[2];
      for (i = 0; i < 3; i++) {
        rtb_global_points[(int32_T)(i + (int32_T)(num_original << 2))] = 0.0F;
        rtb_global_points[(int32_T)(i + (int32_T)(num_original << 2))] +=
          global_tf_camera1[i] * hr_quat_ISS2hr_idx_0;
        rtb_global_points[(int32_T)(i + (int32_T)(num_original << 2))] +=
          global_tf_camera1[(int32_T)(i + 4)] * rtb_Switch1;
        rtb_global_points[(int32_T)(i + (int32_T)(num_original << 2))] +=
          global_tf_camera1[(int32_T)(i + 8)] * hr_quat_ISS2hr_idx_1;
        rtb_global_points[(int32_T)(i + (int32_T)(num_original << 2))] +=
          global_tf_camera1[(int32_T)(i + 12)];
      }
    }

    // End of MATLAB Function: '<S24>/compute_of_global_points'

    // Switch: '<S24>/Switch3'
    // '<S28>:1:8'
    rtb_Compare = (1 > est_estimator_P->Switch3_Threshold_d);
    for (i = 0; i < 13689; i++) {
      rtb_Switch1 = est_estimator_B->Switch1[i];
      if (!rtb_Compare) {
        rtb_Switch1 = est_estimator_B->Assignment[i];
      }

      est_estimator_B->Switch1[i] = rtb_Switch1;
    }

    // End of Switch: '<S24>/Switch3'

    // S-Function (ex_of_residual_and_h): '<S24>/ex_of_residual_and_h'
    rtb_ex_of_residual_and_h_o1 = of_residual_and_h((real32_T*)
      &est_estimator_B->of_measured[0], (real32_T*)&rtb_global_points[0],
      (real32_T*)&rtb_camera_tf_global[0], (int32_T*)&rtb_valid_out[0],
      handrail_knowledge_dims, ASE_OF_NUM_AUG, ASE_OF_NUM_FEATURES,
      est_estimator_P->tun_ase_mahal_distance_max,
      est_estimator_P->tun_ase_of_r_mag,
      est_estimator_P->tun_ase_navcam_inv_focal_length,
      est_estimator_P->tun_ase_navcam_distortion, (real32_T*)
      &est_estimator_B->Switch1[0], &rtb_ex_of_residual_and_h_o2[0],
      &est_estimator_B->ex_of_residual_and_h_o3[0], &rtb_ex_of_residual_and_h_o4,
      &rtb_ex_of_residual_and_h_o5, &rtb_ex_of_residual_and_h_o6[0],
      &est_estimator_B->ex_of_residual_and_h_o7[0]);

    // Product: '<S24>/Product'
    for (i = 0; i < 96; i++) {
      A[i] = rtb_ex_of_residual_and_h_o2[i] * rtb_ex_of_residual_and_h_o2[i];
    }

    // End of Product: '<S24>/Product'

    // Sum: '<S24>/Sum of Elements'
    rtb_Switch1 = A[0];
    for (ar = 0; ar < 95; ar++) {
      rtb_Switch1 += A[(int32_T)(ar + 1)];
    }

    // End of Sum: '<S24>/Sum of Elements'

    // Sqrt: '<S24>/Sqrt'
    rtb_Switch1 = (real32_T)sqrt((real_T)rtb_Switch1);

    // S-Function (ex_compute_delta_state_and_cov): '<S24>/ex_compute_delta_state_and_cov' 
    rtb_ex_compute_delta_state_an_g = compute_delta_state_and_cov((real32_T*)
      &rtb_ex_of_residual_and_h_o2[0], rtb_ex_of_residual_and_h_o1, (real32_T*)
      &est_estimator_B->ex_of_residual_and_h_o3[0], 96, 117,
      rtb_ex_of_residual_and_h_o4, (real32_T*)
      &est_estimator_B->ex_of_residual_and_h_o7[0], (real32_T*)
      &est_estimator_B->Switch1[0], &rtb_ex_compute_delta_state_and_[0],
      &est_estimator_B->ex_compute_delta_state_an_e[0]);

    // S-Function (ex_apply_delta_state): '<S27>/ex_apply_delta_state'
    apply_delta_state((real32_T*)&rtb_ex_compute_delta_state_and_[0], 117,
                      est_estimator_P->Constant_Value_c, (real32_T*)
                      &rtb_Merge_o[0], (real32_T*)&accel[0], (real32_T*)
                      &UnitDelay_DSTATE_n_V_B_ISS_ISS[0], (real32_T*)
                      &UnitDelay_DSTATE_n_accel_bias[0], (real32_T*)
                      &UnitDelay_DSTATE_n_P_EST_ISS_IS[0], (real32_T*)
                      &UnitDelay_DSTATE_n_ml_quat_ISS2[0], (real32_T*)
                      &UnitDelay_DSTATE_n_ml_P_cam_ISS[0],
                      UnitDelay_DSTATE_n_kfl_status, (real32_T*)
                      &UnitDelay_DSTATE_n_of_quat_ISS2[0], (real32_T*)
                      &UnitDelay_DSTATE_n_of_P_cam_ISS[0],
                      &rtb_ex_apply_delta_state_o1[0],
                      &rtb_ex_apply_delta_state_o2[0],
                      &rtb_ex_apply_delta_state_o3[0],
                      &rtb_ex_apply_delta_state_o4[0],
                      &rtb_ex_apply_delta_state_o5[0],
                      &rtb_ex_apply_delta_state_o6[0],
                      &rtb_ex_apply_delta_state_o7[0],
                      &rtb_ex_apply_delta_state_o8,
                      &rtb_ex_apply_delta_state_o9[0],
                      &rtb_ex_apply_delta_state_o10[0]);

    // Logic: '<S24>/Logical Operator1' incorporates:
    //   Constant: '<S24>/Constant1'
    //   Constant: '<S27>/Constant'
    //   Product: '<S24>/Divide'
    //   RelationalOperator: '<S24>/Relational Operator1'
    //   Sum: '<S24>/Add'
    //   UnitDelay: '<S24>/Unit Delay2'

    rtb_Compare = ((est_estimator_P->ase_minumum_resid_thresh > (real_T)
                    ((est_estimator_P->UnitDelay2_InitialCondition_f -
                      rtb_Switch1) / rtb_Switch1)) ||
                   (rtb_ex_compute_delta_state_an_g != 0) ||
                   (rtb_ex_of_residual_and_h_o1 != 0));

    // Switch: '<S24>/Switch' incorporates:
    //   BusAssignment: '<S24>/Bus Assignment1'
    //   BusAssignment: '<S27>/Bus Assignment1'
    //   Constant: '<S24>/Constant'
    //   Constant: '<S24>/Constant2'
    //   DataTypeConversion: '<S24>/Data Type Conversion'

    if (!rtb_Compare) {
      rtb_Merge_o[0] = rtb_ex_apply_delta_state_o1[0];
      rtb_Merge_o[1] = rtb_ex_apply_delta_state_o1[1];
      rtb_Merge_o[2] = rtb_ex_apply_delta_state_o1[2];
      rtb_Merge_o[3] = rtb_ex_apply_delta_state_o1[3];
      accel[0] = rtb_ex_apply_delta_state_o2[0];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[0] = rtb_ex_apply_delta_state_o3[0];
      UnitDelay_DSTATE_n_accel_bias[0] = rtb_ex_apply_delta_state_o4[0];
      accel[1] = rtb_ex_apply_delta_state_o2[1];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[1] = rtb_ex_apply_delta_state_o3[1];
      UnitDelay_DSTATE_n_accel_bias[1] = rtb_ex_apply_delta_state_o4[1];
      accel[2] = rtb_ex_apply_delta_state_o2[2];
      UnitDelay_DSTATE_n_V_B_ISS_ISS[2] = rtb_ex_apply_delta_state_o3[2];
      UnitDelay_DSTATE_n_accel_bias[2] = rtb_ex_apply_delta_state_o4[2];
      UnitDelay_DSTATE_n_ml_quat_ISS2[0] = rtb_ex_apply_delta_state_o6[0];
      UnitDelay_DSTATE_n_ml_quat_ISS2[1] = rtb_ex_apply_delta_state_o6[1];
      UnitDelay_DSTATE_n_ml_quat_ISS2[2] = rtb_ex_apply_delta_state_o6[2];
      UnitDelay_DSTATE_n_ml_quat_ISS2[3] = rtb_ex_apply_delta_state_o6[3];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[0] = rtb_ex_apply_delta_state_o7[0];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[1] = rtb_ex_apply_delta_state_o7[1];
      UnitDelay_DSTATE_n_ml_P_cam_ISS[2] = rtb_ex_apply_delta_state_o7[2];
      memcpy(&UnitDelay_DSTATE_n_of_quat_ISS2[0], &rtb_ex_apply_delta_state_o9[0],
             (uint32_T)(sizeof(real32_T) << 6U));
      memcpy(&UnitDelay_DSTATE_n_of_P_cam_ISS[0], &rtb_ex_apply_delta_state_o10
             [0], (uint32_T)(48U * sizeof(real32_T)));
      UnitDelay_DSTATE_n_kfl_status = rtb_ex_apply_delta_state_o8;
      rtb_numFeatures_f = rtb_ex_of_residual_and_h_o5;
      rtb_Saturation_n = est_estimator_P->Constant_Value_dd;
      for (i = 0; i < 50; i++) {
        UnitDelay_DSTATE_n_of_mahal_dis[i] = (real_T)
          rtb_ex_of_residual_and_h_o6[i];
        UnitDelay_DSTATE_n_ml_mahal_dis[i] = est_estimator_P->Constant2_Value[i];
      }

      UnitDelay_DSTATE_n_P_EST_ISS_IS[0] = rtb_ex_apply_delta_state_o5[0];
      UnitDelay_DSTATE_n_P_EST_ISS_IS[1] = rtb_ex_apply_delta_state_o5[1];
      UnitDelay_DSTATE_n_P_EST_ISS_IS[2] = rtb_ex_apply_delta_state_o5[2];
    }

    // End of Switch: '<S24>/Switch'

    // Switch: '<S24>/Switch1'
    for (i = 0; i < 13689; i++) {
      rtb_Switch1 = est_estimator_B->Switch1[i];
      if (!rtb_Compare) {
        rtb_Switch1 = est_estimator_B->ex_compute_delta_state_an_e[i];
      }

      est_estimator_B->Switch1[i] = rtb_Switch1;
    }

    // End of Switch: '<S24>/Switch1'

    // SignalConversion: '<S10>/OutportBufferForstate_out' incorporates:
    //   SignalConversion: '<S24>/Signal Conversion'

    rtb_Merge2.quat_ISS2B[0] = rtb_Merge_o[0];
    rtb_Merge2.quat_ISS2B[1] = rtb_Merge_o[1];
    rtb_Merge2.quat_ISS2B[2] = rtb_Merge_o[2];
    rtb_Merge2.quat_ISS2B[3] = rtb_Merge_o[3];
    rtb_Merge2.omega_B_ISS_B[0] = rtb_ImpAsg_InsertedFor_Out1_at_[0];
    rtb_Merge2.gyro_bias[0] = accel[0];
    rtb_Merge2.V_B_ISS_ISS[0] = UnitDelay_DSTATE_n_V_B_ISS_ISS[0];
    rtb_Merge2.A_B_ISS_ISS[0] = rtb_Sum_k1;
    rtb_Merge2.accel_bias[0] = UnitDelay_DSTATE_n_accel_bias[0];
    rtb_Merge2.P_B_ISS_ISS[0] = rtb_Sum_l;
    rtb_Merge2.omega_B_ISS_B[1] = rtb_ImpAsg_InsertedFor_Out1_at_[1];
    rtb_Merge2.gyro_bias[1] = accel[1];
    rtb_Merge2.V_B_ISS_ISS[1] = UnitDelay_DSTATE_n_V_B_ISS_ISS[1];
    rtb_Merge2.A_B_ISS_ISS[1] = rtb_Gain1_f;
    rtb_Merge2.accel_bias[1] = UnitDelay_DSTATE_n_accel_bias[1];
    rtb_Merge2.P_B_ISS_ISS[1] = UnitDelay_DSTATE_n_P_B_ISS_ISS_;
    rtb_Merge2.omega_B_ISS_B[2] = rtb_ImpAsg_InsertedFor_Out1_at_[2];
    rtb_Merge2.gyro_bias[2] = accel[2];
    rtb_Merge2.V_B_ISS_ISS[2] = UnitDelay_DSTATE_n_V_B_ISS_ISS[2];
    rtb_Merge2.A_B_ISS_ISS[2] = UnitDelay_DSTATE_n_A_B_ISS_ISS_;
    rtb_Merge2.accel_bias[2] = UnitDelay_DSTATE_n_accel_bias[2];
    rtb_Merge2.P_B_ISS_ISS[2] = UnitDelay_DSTATE_n_P_B_ISS_IS_0;
    rtb_Merge2.confidence = rtb_Switch_m;
    rtb_Merge2.aug_state_enum = UnitDelay_DSTATE_aug_state_enum;
    rtb_Merge2.ml_quat_ISS2cam[0] = UnitDelay_DSTATE_n_ml_quat_ISS2[0];
    rtb_Merge2.ml_quat_ISS2cam[1] = UnitDelay_DSTATE_n_ml_quat_ISS2[1];
    rtb_Merge2.ml_quat_ISS2cam[2] = UnitDelay_DSTATE_n_ml_quat_ISS2[2];
    rtb_Merge2.ml_quat_ISS2cam[3] = UnitDelay_DSTATE_n_ml_quat_ISS2[3];
    rtb_Merge2.ml_P_cam_ISS_ISS[0] = UnitDelay_DSTATE_n_ml_P_cam_ISS[0];
    rtb_Merge2.ml_P_cam_ISS_ISS[1] = UnitDelay_DSTATE_n_ml_P_cam_ISS[1];
    rtb_Merge2.ml_P_cam_ISS_ISS[2] = UnitDelay_DSTATE_n_ml_P_cam_ISS[2];
    memcpy(&rtb_Merge2.of_quat_ISS2cam[0], &UnitDelay_DSTATE_n_of_quat_ISS2[0],
           (uint32_T)(sizeof(real32_T) << 6U));
    memcpy(&rtb_Merge2.of_P_cam_ISS_ISS[0], &UnitDelay_DSTATE_n_of_P_cam_ISS[0],
           (uint32_T)(48U * sizeof(real32_T)));
    memcpy(&rtb_Merge2.cov_diag[0], &UnitDelay_DSTATE_n_cov_diag[0], (uint32_T)
           (117U * sizeof(ase_cov_datatype)));
    rtb_Merge2.kfl_status = UnitDelay_DSTATE_n_kfl_status;
    rtb_Merge2.update_OF_tracks_cnt = rtb_numFeatures_f;
    rtb_Merge2.update_ML_features_cnt = rtb_Saturation_n;
    memcpy(&rtb_Merge2.of_mahal_distance[0], &UnitDelay_DSTATE_n_of_mahal_dis[0],
           (uint32_T)(50U * sizeof(real_T)));
    memcpy(&rtb_Merge2.ml_mahal_distance[0], &UnitDelay_DSTATE_n_ml_mahal_dis[0],
           (uint32_T)(50U * sizeof(real_T)));
    rtb_Merge2.hr_P_hr_ISS_ISS[0] = UnitDelay_DSTATE_n_hr_P_hr_ISS_;
    rtb_Merge2.hr_P_hr_ISS_ISS[1] = UnitDelay_DSTATE_n_hr_P_hr_IS_0;
    rtb_Merge2.hr_P_hr_ISS_ISS[2] = UnitDelay_DSTATE_n_hr_P_hr_IS_1;
    rtb_Merge2.hr_quat_ISS2hr[0] = UnitDelay_DSTATE_n_hr_quat_ISS2;
    rtb_Merge2.hr_quat_ISS2hr[1] = UnitDelay_DSTATE_n_hr_quat_IS_0;
    rtb_Merge2.hr_quat_ISS2hr[2] = UnitDelay_DSTATE_n_hr_quat_IS_1;
    rtb_Merge2.hr_quat_ISS2hr[3] = UnitDelay_DSTATE_n_hr_quat_IS_2;
    rtb_Merge2.P_EST_ISS_ISS[0] = UnitDelay_DSTATE_n_P_EST_ISS_IS[0];
    rtb_Merge2.P_EST_ISS_ISS[1] = UnitDelay_DSTATE_n_P_EST_ISS_IS[1];
    rtb_Merge2.P_EST_ISS_ISS[2] = UnitDelay_DSTATE_n_P_EST_ISS_IS[2];

    // End of Outputs for SubSystem: '<S10>/OF Update'
    // End of Outputs for SubSystem: '<S3>/Optical_Flow_Update'
    break;

   case 2:
    // Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S9>/Action Port'

    // SignalConversion: '<S9>/Signal Conversion' incorporates:
    //   BusAssignment: '<S6>/Bus Assignment'
    //   BusAssignment: '<S9>/Bus Assignment1'
    //   BusCreator: '<S2>/Bus Creator2'
    //   Constant: '<S9>/Constant'
    //   Constant: '<S9>/Constant1'
    //   S-Function (sfix_bitop): '<S9>/Bitwise Operator'
    //   UnitDelay: '<S2>/Unit Delay10'
    //   UnitDelay: '<S2>/Unit Delay11'
    //   UnitDelay: '<S2>/Unit Delay12'
    //   UnitDelay: '<S2>/Unit Delay13'
    //   UnitDelay: '<S2>/Unit Delay14'
    //   UnitDelay: '<S2>/Unit Delay15'
    //   UnitDelay: '<S2>/Unit Delay3'
    //   UnitDelay: '<S2>/Unit Delay6'
    //   UnitDelay: '<S2>/Unit Delay7'
    //   UnitDelay: '<S2>/Unit Delay8'

    rtb_Merge2.quat_ISS2B[0] = rtb_Product1[0];
    rtb_Merge2.quat_ISS2B[1] = rtb_Product1[1];
    rtb_Merge2.quat_ISS2B[2] = rtb_Product1[2];
    rtb_Merge2.quat_ISS2B[3] = rtb_Product1[3];
    rtb_Merge2.omega_B_ISS_B[0] = rtb_ImpAsg_InsertedFor_Out1_a_d[0];
    rtb_Merge2.gyro_bias[0] = est_estimator_DW->UnitDelay3_DSTATE[0];
    rtb_Merge2.V_B_ISS_ISS[0] = rtb_Sum2[0];
    rtb_Merge2.A_B_ISS_ISS[0] = rtb_Sum1_k3[0];
    rtb_Merge2.accel_bias[0] = est_estimator_DW->UnitDelay6_DSTATE[0];
    rtb_Merge2.P_B_ISS_ISS[0] = est_estimator_DW->UnitDelay7_DSTATE[0];
    rtb_Merge2.omega_B_ISS_B[1] = rtb_ImpAsg_InsertedFor_Out1_a_d[1];
    rtb_Merge2.gyro_bias[1] = est_estimator_DW->UnitDelay3_DSTATE[1];
    rtb_Merge2.V_B_ISS_ISS[1] = rtb_Sum2[1];
    rtb_Merge2.A_B_ISS_ISS[1] = rtb_Sum1_k3[1];
    rtb_Merge2.accel_bias[1] = est_estimator_DW->UnitDelay6_DSTATE[1];
    rtb_Merge2.P_B_ISS_ISS[1] = est_estimator_DW->UnitDelay7_DSTATE[1];
    rtb_Merge2.omega_B_ISS_B[2] = hr_quat_ISS2hr_idx_0;
    rtb_Merge2.gyro_bias[2] = est_estimator_DW->UnitDelay3_DSTATE[2];
    rtb_Merge2.V_B_ISS_ISS[2] = rtb_Sum2[2];
    rtb_Merge2.A_B_ISS_ISS[2] = rtb_Sum1_k3[2];
    rtb_Merge2.accel_bias[2] = est_estimator_DW->UnitDelay6_DSTATE[2];
    rtb_Merge2.P_B_ISS_ISS[2] = est_estimator_DW->UnitDelay7_DSTATE[2];
    rtb_Merge2.confidence = est_estimator_DW->UnitDelay8_DSTATE;
    rtb_Merge2.aug_state_enum = rtb_BusAssignment_aug_state_enu;
    rtb_Merge2.ml_quat_ISS2cam[0] = est_estimator_DW->UnitDelay10_DSTATE[0];
    rtb_Merge2.ml_quat_ISS2cam[1] = est_estimator_DW->UnitDelay10_DSTATE[1];
    rtb_Merge2.ml_quat_ISS2cam[2] = est_estimator_DW->UnitDelay10_DSTATE[2];
    rtb_Merge2.ml_quat_ISS2cam[3] = est_estimator_DW->UnitDelay10_DSTATE[3];
    rtb_Merge2.ml_P_cam_ISS_ISS[0] = est_estimator_DW->UnitDelay11_DSTATE[0];
    rtb_Merge2.ml_P_cam_ISS_ISS[1] = est_estimator_DW->UnitDelay11_DSTATE[1];
    rtb_Merge2.ml_P_cam_ISS_ISS[2] = est_estimator_DW->UnitDelay11_DSTATE[2];
    memcpy(&rtb_Merge2.of_quat_ISS2cam[0], &est_estimator_DW->
           UnitDelay12_DSTATE[0], (uint32_T)(sizeof(real32_T) << 6U));
    memcpy(&rtb_Merge2.of_P_cam_ISS_ISS[0],
           &est_estimator_DW->UnitDelay13_DSTATE[0], (uint32_T)(48U * sizeof
            (real32_T)));
    memcpy(&rtb_Merge2.cov_diag[0], &est_estimator_DW->UnitDelay14_DSTATE[0],
           (uint32_T)(117U * sizeof(ase_cov_datatype)));
    rtb_Merge2.kfl_status = (uint16_T)(int32_T)((int32_T)
      est_estimator_DW->UnitDelay15_DSTATE & (int32_T)
      est_estimator_P->BitwiseOperator_BitMask_c);
    rtb_Merge2.update_OF_tracks_cnt = est_estimator_P->Constant_Value_oa;
    rtb_Merge2.update_ML_features_cnt = est_estimator_P->Constant1_Value_f;
    memcpy(&rtb_Merge2.of_mahal_distance[0], &rtb_UnitDelay18[0], (uint32_T)(50U
            * sizeof(real_T)));
    memcpy(&rtb_Merge2.ml_mahal_distance[0], &rtb_UnitDelay19[0], (uint32_T)(50U
            * sizeof(real_T)));
    rtb_Merge2.hr_P_hr_ISS_ISS[0] = rtb_Add_e[0];
    rtb_Merge2.hr_P_hr_ISS_ISS[1] = rtb_Add_e[1];
    rtb_Merge2.hr_P_hr_ISS_ISS[2] = rtb_Add_e[2];
    rtb_Merge2.hr_quat_ISS2hr[0] = rtb_UnitDelay25[0];
    rtb_Merge2.hr_quat_ISS2hr[1] = rtb_UnitDelay25[1];
    rtb_Merge2.hr_quat_ISS2hr[2] = rtb_UnitDelay25[2];
    rtb_Merge2.hr_quat_ISS2hr[3] = rtb_UnitDelay25[3];
    rtb_Merge2.P_EST_ISS_ISS[0] = rtb_P_B_ISS_ISS[0];
    rtb_Merge2.P_EST_ISS_ISS[1] = rtb_P_B_ISS_ISS[1];
    rtb_Merge2.P_EST_ISS_ISS[2] = rtb_P_B_ISS_ISS[2];
    memcpy(&est_estimator_B->Switch1[0], &est_estimator_B->Assignment[0],
           (uint32_T)(13689U * sizeof(real32_T)));

    // End of Outputs for SubSystem: '<S3>/If Action Subsystem1'
    break;
  }

  // End of If: '<S3>/If'

  // If: '<S126>/If' incorporates:
  //   Constant: '<S156>/Constant'
  //   Constant: '<S157>/Constant'
  //   Constant: '<S158>/Constant'
  //   Constant: '<S159>/Constant'
  //   Constant: '<S173>/Constant'
  //   Constant: '<S173>/Constant1'
  //   Constant: '<S173>/Constant2'
  //   Constant: '<S173>/Constant3'
  //   Constant: '<S174>/Constant'
  //   Constant: '<S174>/Constant1'
  //   Constant: '<S174>/Constant2'
  //   Constant: '<S174>/Constant3'
  //   Inport: '<Root>/Vision Registration'
  //   Inport: '<Root>/cmc_msg'
  //   Inport: '<S162>/P_in'
  //   Logic: '<S126>/Logical Operator'
  //   Logic: '<S126>/Logical Operator1'
  //   Logic: '<S126>/Logical Operator2'
  //   Logic: '<S126>/Logical Operator3'
  //   RelationalOperator: '<S156>/Compare'
  //   RelationalOperator: '<S157>/Compare'
  //   RelationalOperator: '<S158>/Compare'
  //   RelationalOperator: '<S159>/Compare'
  //   S-Function (sfix_bitop): '<S126>/Bitwise Operator1'
  //   SignalConversion: '<S1>/Signal Conversion'

  if (((est_estimator_U_cmc_msg_o->localization_mode_cmd ==
        est_estimator_P->ase_local_mode_perching) && ((int32_T)
        est_estimator_U_VisionRegistration->cvs_handrail_pulse != 0)) ||
      (((int32_T)est_estimator_U_VisionRegistration->cvs_landmark_pulse != 0) &&
       ((est_estimator_U_cmc_msg_o->localization_mode_cmd ==
         est_estimator_P->ase_local_mode_map) ||
        (est_estimator_U_cmc_msg_o->localization_mode_cmd ==
         est_estimator_P->ase_local_mode_docking)))) {
    // Outputs for IfAction SubSystem: '<S126>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S161>/Action Port'

    rtb_VectorConcatenate_c[0] = est_estimator_P->Constant3_Value_oe;

    // Gain: '<S173>/Gain' incorporates:
    //   Constant: '<S161>/Constant5'
    //   Constant: '<S173>/Constant3'

    rtb_VectorConcatenate_c[1] = est_estimator_P->Gain_Gain_d *
      est_estimator_P->Constant5_Value[2];

    // SignalConversion: '<S173>/ConcatBufferAtVector ConcatenateIn3' incorporates:
    //   Constant: '<S161>/Constant5'

    rtb_VectorConcatenate_c[2] = est_estimator_P->Constant5_Value[1];

    // Gain: '<S173>/Gain1' incorporates:
    //   Constant: '<S161>/Constant5'

    rtb_VectorConcatenate_c[3] = est_estimator_P->Gain1_Gain_n *
      est_estimator_P->Constant5_Value[0];

    // SignalConversion: '<S173>/ConcatBufferAtVector ConcatenateIn5' incorporates:
    //   Constant: '<S161>/Constant5'

    rtb_VectorConcatenate_c[4] = est_estimator_P->Constant5_Value[2];
    rtb_VectorConcatenate_c[5] = est_estimator_P->Constant2_Value_m2;

    // Gain: '<S173>/Gain2' incorporates:
    //   Constant: '<S161>/Constant5'
    //   Constant: '<S173>/Constant2'

    rtb_VectorConcatenate_c[6] = est_estimator_P->Gain2_Gain_k *
      est_estimator_P->Constant5_Value[0];

    // Gain: '<S173>/Gain3' incorporates:
    //   Constant: '<S161>/Constant5'

    rtb_VectorConcatenate_c[7] = est_estimator_P->Gain3_Gain_f *
      est_estimator_P->Constant5_Value[1];

    // Gain: '<S173>/Gain4' incorporates:
    //   Constant: '<S161>/Constant5'

    rtb_VectorConcatenate_c[8] = est_estimator_P->Gain4_Gain_b *
      est_estimator_P->Constant5_Value[1];

    // SignalConversion: '<S173>/ConcatBufferAtVector ConcatenateIn10' incorporates:
    //   Constant: '<S161>/Constant5'

    rtb_VectorConcatenate_c[9] = est_estimator_P->Constant5_Value[0];
    rtb_VectorConcatenate_c[10] = est_estimator_P->Constant1_Value_i;

    // Gain: '<S173>/Gain5' incorporates:
    //   Constant: '<S161>/Constant5'
    //   Constant: '<S173>/Constant1'

    rtb_VectorConcatenate_c[11] = est_estimator_P->Gain5_Gain_f *
      est_estimator_P->Constant5_Value[2];

    // SignalConversion: '<S173>/ConcatBufferAtVector ConcatenateIn13' incorporates:
    //   Constant: '<S161>/Constant5'

    rtb_VectorConcatenate_c[12] = est_estimator_P->Constant5_Value[0];

    // SignalConversion: '<S173>/ConcatBufferAtVector ConcatenateIn14' incorporates:
    //   Constant: '<S161>/Constant5'

    rtb_VectorConcatenate_c[13] = est_estimator_P->Constant5_Value[1];

    // SignalConversion: '<S173>/ConcatBufferAtVector ConcatenateIn15' incorporates:
    //   Constant: '<S161>/Constant5'

    rtb_VectorConcatenate_c[14] = est_estimator_P->Constant5_Value[2];
    rtb_VectorConcatenate_c[15] = est_estimator_P->Constant_Value_m;
    rtb_VectorConcatenate_p[0] = est_estimator_P->Constant3_Value_op;

    // Gain: '<S161>/Gain1' incorporates:
    //   Constant: '<S173>/Constant'
    //   Constant: '<S174>/Constant3'

    rtb_Add_e[0] = est_estimator_P->Gain1_Gain_o * rtb_Merge2.omega_B_ISS_B[0];
    rtb_Add_e[1] = est_estimator_P->Gain1_Gain_o * rtb_Merge2.omega_B_ISS_B[1];
    rtb_Add_e[2] = est_estimator_P->Gain1_Gain_o * rtb_Merge2.omega_B_ISS_B[2];

    // Gain: '<S174>/Gain'
    rtb_VectorConcatenate_p[1] = est_estimator_P->Gain_Gain_ng * rtb_Add_e[2];

    // SignalConversion: '<S174>/ConcatBufferAtVector ConcatenateIn3'
    rtb_VectorConcatenate_p[2] = rtb_Add_e[1];

    // Gain: '<S174>/Gain1'
    rtb_VectorConcatenate_p[3] = est_estimator_P->Gain1_Gain_a * rtb_Add_e[0];

    // SignalConversion: '<S174>/ConcatBufferAtVector ConcatenateIn5'
    rtb_VectorConcatenate_p[4] = rtb_Add_e[2];
    rtb_VectorConcatenate_p[5] = est_estimator_P->Constant2_Value_o;

    // Gain: '<S174>/Gain2' incorporates:
    //   Constant: '<S174>/Constant2'

    rtb_VectorConcatenate_p[6] = est_estimator_P->Gain2_Gain_b * rtb_Add_e[0];

    // Gain: '<S174>/Gain3'
    rtb_VectorConcatenate_p[7] = est_estimator_P->Gain3_Gain_o * rtb_Add_e[1];

    // Gain: '<S174>/Gain4'
    rtb_VectorConcatenate_p[8] = est_estimator_P->Gain4_Gain_i * rtb_Add_e[1];

    // SignalConversion: '<S174>/ConcatBufferAtVector ConcatenateIn10'
    rtb_VectorConcatenate_p[9] = rtb_Add_e[0];
    rtb_VectorConcatenate_p[10] = est_estimator_P->Constant1_Value_b;

    // Gain: '<S174>/Gain5' incorporates:
    //   Constant: '<S174>/Constant1'

    rtb_VectorConcatenate_p[11] = est_estimator_P->Gain5_Gain_c * rtb_Add_e[2];

    // SignalConversion: '<S174>/ConcatBufferAtVector ConcatenateIn13'
    rtb_VectorConcatenate_p[12] = rtb_Add_e[0];

    // SignalConversion: '<S174>/ConcatBufferAtVector ConcatenateIn14'
    rtb_VectorConcatenate_p[13] = rtb_Add_e[1];

    // SignalConversion: '<S174>/ConcatBufferAtVector ConcatenateIn15'
    rtb_VectorConcatenate_p[14] = rtb_Add_e[2];
    rtb_VectorConcatenate_p[15] = est_estimator_P->Constant_Value_px;

    // Product: '<S164>/Product2' incorporates:
    //   Constant: '<S161>/Constant'
    //   Constant: '<S164>/Constant1'
    //   Constant: '<S164>/Constant3'
    //   Constant: '<S174>/Constant'
    //   Product: '<S164>/Product'
    //   Sum: '<S164>/Add'

    for (i = 0; i < 16; i++) {
      rtb_VectorConcatenate[i] = (est_estimator_P->Constant3_Value_da *
        rtb_VectorConcatenate_c[i] *
        est_estimator_P->tun_ase_ml_forward_projection_time +
        rtb_VectorConcatenate_p[i]) * est_estimator_P->Constant1_Value_a *
        est_estimator_P->tun_ase_ml_forward_projection_time;
    }

    // End of Product: '<S164>/Product2'

    // MATLAB Function: '<S164>/MATLAB Function'
    est_estimator_MATLABFunction(rtb_VectorConcatenate,
      &est_estimator_B->sf_MATLABFunction_l0);

    // Product: '<S164>/Product5' incorporates:
    //   Constant: '<S161>/Constant'

    hr_quat_ISS2hr_idx_1 = est_estimator_P->tun_ase_ml_forward_projection_time *
      est_estimator_P->tun_ase_ml_forward_projection_time *
      est_estimator_P->tun_ase_ml_forward_projection_time;
    for (i = 0; i < 4; i++) {
      for (b_m = 0; b_m < 4; b_m++) {
        // Product: '<S164>/Product4' incorporates:
        //   Sum: '<S164>/Add2'

        global_tf_camera1[(int32_T)(b_m + (int32_T)(i << 2))] = 0.0F;

        // Product: '<S164>/Product3' incorporates:
        //   Sum: '<S164>/Add2'

        rtb_VectorConcatenate_hq[(int32_T)(b_m + (int32_T)(i << 2))] = 0.0F;
        global_tf_camera1[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_p[(int32_T)(i << 2)] *
          rtb_VectorConcatenate_c[b_m];
        rtb_VectorConcatenate_hq[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_c[(int32_T)(i << 2)] *
          rtb_VectorConcatenate_p[b_m];
        global_tf_camera1[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_p[(int32_T)((int32_T)(i << 2) + 1)] *
          rtb_VectorConcatenate_c[(int32_T)(b_m + 4)];
        rtb_VectorConcatenate_hq[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_c[(int32_T)((int32_T)(i << 2) + 1)] *
          rtb_VectorConcatenate_p[(int32_T)(b_m + 4)];
        global_tf_camera1[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_p[(int32_T)((int32_T)(i << 2) + 2)] *
          rtb_VectorConcatenate_c[(int32_T)(b_m + 8)];
        rtb_VectorConcatenate_hq[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_c[(int32_T)((int32_T)(i << 2) + 2)] *
          rtb_VectorConcatenate_p[(int32_T)(b_m + 8)];
        global_tf_camera1[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_p[(int32_T)((int32_T)(i << 2) + 3)] *
          rtb_VectorConcatenate_c[(int32_T)(b_m + 12)];
        rtb_VectorConcatenate_hq[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_c[(int32_T)((int32_T)(i << 2) + 3)] *
          rtb_VectorConcatenate_p[(int32_T)(b_m + 12)];
      }
    }

    // Sum: '<S164>/Add1' incorporates:
    //   Constant: '<S164>/Constant2'
    //   Product: '<S164>/Product1'
    //   Product: '<S164>/Product3'
    //   Product: '<S164>/Product4'
    //   Product: '<S164>/Product5'
    //   Sum: '<S164>/Add2'

    for (i = 0; i < 4; i++) {
      rtb_VectorConcatenate[(int32_T)(i << 2)] = (global_tf_camera1[(int32_T)(i <<
        2)] - rtb_VectorConcatenate_hq[(int32_T)(i << 2)]) *
        hr_quat_ISS2hr_idx_1 / est_estimator_P->Constant2_Value_mp +
        est_estimator_B->sf_MATLABFunction_l0.y[(int32_T)(i << 2)];
      rtb_VectorConcatenate[(int32_T)(1 + (int32_T)(i << 2))] =
        (global_tf_camera1[(int32_T)((int32_T)(i << 2) + 1)] -
         rtb_VectorConcatenate_hq[(int32_T)((int32_T)(i << 2) + 1)]) *
        hr_quat_ISS2hr_idx_1 / est_estimator_P->Constant2_Value_mp +
        est_estimator_B->sf_MATLABFunction_l0.y[(int32_T)((int32_T)(i << 2) + 1)];
      rtb_VectorConcatenate[(int32_T)(2 + (int32_T)(i << 2))] =
        (global_tf_camera1[(int32_T)((int32_T)(i << 2) + 2)] -
         rtb_VectorConcatenate_hq[(int32_T)((int32_T)(i << 2) + 2)]) *
        hr_quat_ISS2hr_idx_1 / est_estimator_P->Constant2_Value_mp +
        est_estimator_B->sf_MATLABFunction_l0.y[(int32_T)((int32_T)(i << 2) + 2)];
      rtb_VectorConcatenate[(int32_T)(3 + (int32_T)(i << 2))] =
        (global_tf_camera1[(int32_T)((int32_T)(i << 2) + 3)] -
         rtb_VectorConcatenate_hq[(int32_T)((int32_T)(i << 2) + 3)]) *
        hr_quat_ISS2hr_idx_1 / est_estimator_P->Constant2_Value_mp +
        est_estimator_B->sf_MATLABFunction_l0.y[(int32_T)((int32_T)(i << 2) + 3)];
    }

    // End of Sum: '<S164>/Add1'

    // Product: '<S164>/Product1'
    for (i = 0; i < 4; i++) {
      rtb_Sum_k1 = rtb_VectorConcatenate[(int32_T)(i + 12)] *
        rtb_Merge2.quat_ISS2B[3] + (rtb_VectorConcatenate[(int32_T)(i + 8)] *
        rtb_Merge2.quat_ISS2B[2] + (rtb_VectorConcatenate[(int32_T)(i + 4)] *
        rtb_Merge2.quat_ISS2B[1] + rtb_VectorConcatenate[i] *
        rtb_Merge2.quat_ISS2B[0]));
      rtb_Product1[i] = rtb_Sum_k1;
    }

    // If: '<S175>/If' incorporates:
    //   Inport: '<S176>/In1'

    if (rtb_Product1[3] < 0.0F) {
      // Outputs for IfAction SubSystem: '<S175>/Normalize' incorporates:
      //   ActionPort: '<S177>/Action Port'

      est_estimator_Normalize(rtb_Product1, rtb_UnitDelay25,
        (P_Normalize_est_estimator_T *)&est_estimator_P->Normalize_i);

      // End of Outputs for SubSystem: '<S175>/Normalize'
    } else {
      // Outputs for IfAction SubSystem: '<S175>/No-op' incorporates:
      //   ActionPort: '<S176>/Action Port'

      rtb_UnitDelay25[0] = rtb_Product1[0];
      rtb_UnitDelay25[1] = rtb_Product1[1];
      rtb_UnitDelay25[2] = rtb_Product1[2];
      rtb_UnitDelay25[3] = rtb_Product1[3];

      // End of Outputs for SubSystem: '<S175>/No-op'
    }

    // End of If: '<S175>/If'

    // Sqrt: '<S182>/Sqrt' incorporates:
    //   DotProduct: '<S182>/Dot Product'

    rtb_Switch1 = (real32_T)sqrt((real_T)(((rtb_UnitDelay25[0] *
      rtb_UnitDelay25[0] + rtb_UnitDelay25[1] * rtb_UnitDelay25[1]) +
      rtb_UnitDelay25[2] * rtb_UnitDelay25[2]) + rtb_UnitDelay25[3] *
      rtb_UnitDelay25[3]));

    // If: '<S178>/If' incorporates:
    //   DataTypeConversion: '<S178>/Data Type Conversion'
    //   Inport: '<S180>/In1'

    if ((real_T)rtb_Switch1 > 1.0E-7) {
      // Outputs for IfAction SubSystem: '<S178>/Normalize' incorporates:
      //   ActionPort: '<S181>/Action Port'

      est_estimator_Normalize_p(rtb_UnitDelay25, rtb_Switch1, rtb_Product1);

      // End of Outputs for SubSystem: '<S178>/Normalize'
    } else {
      // Outputs for IfAction SubSystem: '<S178>/No-op' incorporates:
      //   ActionPort: '<S180>/Action Port'

      rtb_Product1[0] = rtb_UnitDelay25[0];
      rtb_Product1[1] = rtb_UnitDelay25[1];
      rtb_Product1[2] = rtb_UnitDelay25[2];
      rtb_Product1[3] = rtb_UnitDelay25[3];

      // End of Outputs for SubSystem: '<S178>/No-op'
    }

    // End of If: '<S178>/If'

    // Sum: '<S187>/Sum' incorporates:
    //   Constant: '<S187>/Constant1'
    //   DataTypeConversion: '<S189>/Conversion'
    //   Gain: '<S187>/Gain'
    //   Math: '<S187>/Math Function'

    rtb_Switch1 = rtb_Product1[3] * rtb_Product1[3] *
      est_estimator_P->Gain_Gain_c - (real32_T)
      est_estimator_P->Constant1_Value_m;

    // Assignment: '<S187>/Assignment' incorporates:
    //   Constant: '<S187>/Constant2'
    //   DataTypeConversion: '<S188>/Conversion'

    for (i = 0; i < 9; i++) {
      rtb_Assignment_b[i] = (real32_T)est_estimator_P->Constant2_Value_m[i];
    }

    rtb_Assignment_b[0] = rtb_Switch1;
    rtb_Assignment_b[4] = rtb_Switch1;
    rtb_Assignment_b[8] = rtb_Switch1;

    // End of Assignment: '<S187>/Assignment'

    // Gain: '<S187>/Gain1'
    rtb_Switch1 = est_estimator_P->Gain1_Gain_nq * rtb_Product1[3];

    // MultiPortSwitch: '<S161>/Multiport Switch1' incorporates:
    //   Constant: '<S161>/Constant1'
    //   Constant: '<S161>/Constant2'
    //   Constant: '<S161>/Constant4'

    switch ((int32_T)est_estimator_U_cmc_msg_o->localization_mode_cmd) {
     case 0:
      rtb_Add_e[0] = est_estimator_P->tun_abp_p_navcam_imu_est[0];
      rtb_Add_e[1] = est_estimator_P->tun_abp_p_navcam_imu_est[1];
      rtb_Add_e[2] = est_estimator_P->tun_abp_p_navcam_imu_est[2];
      break;

     case 1:
      rtb_Add_e[0] = est_estimator_P->tun_abp_p_dockcam_imu_est[0];
      rtb_Add_e[1] = est_estimator_P->tun_abp_p_dockcam_imu_est[1];
      rtb_Add_e[2] = est_estimator_P->tun_abp_p_dockcam_imu_est[2];
      break;

     default:
      rtb_Add_e[0] = est_estimator_P->tun_abp_p_perchcam_imu_est[0];
      rtb_Add_e[1] = est_estimator_P->tun_abp_p_perchcam_imu_est[1];
      rtb_Add_e[2] = est_estimator_P->tun_abp_p_perchcam_imu_est[2];
      break;
    }

    // End of MultiPortSwitch: '<S161>/Multiport Switch1'

    // Product: '<S187>/Product' incorporates:
    //   Constant: '<S190>/Constant3'
    //   DataTypeConversion: '<S191>/Conversion'
    //   Gain: '<S190>/Gain'
    //   Gain: '<S190>/Gain1'
    //   Gain: '<S190>/Gain2'

    tmp_a[0] = (real32_T)est_estimator_P->Constant3_Value_m;
    tmp_a[1] = rtb_Product1[2];
    tmp_a[2] = est_estimator_P->Gain_Gain_fr * rtb_Product1[1];
    tmp_a[3] = est_estimator_P->Gain1_Gain_c * rtb_Product1[2];
    tmp_a[4] = (real32_T)est_estimator_P->Constant3_Value_m;
    tmp_a[5] = rtb_Product1[0];
    tmp_a[6] = rtb_Product1[1];
    tmp_a[7] = est_estimator_P->Gain2_Gain_hc * rtb_Product1[0];
    tmp_a[8] = (real32_T)est_estimator_P->Constant3_Value_m;

    // Math: '<S166>/Math Function' incorporates:
    //   Gain: '<S187>/Gain2'
    //   Math: '<S187>/Math Function1'
    //   Product: '<S187>/Product1'

    for (i = 0; i < 3; i++) {
      rtb_Product1_0[i] = rtb_Product1[0] * rtb_Product1[i];
      rtb_Product1_0[(int32_T)(i + 3)] = rtb_Product1[1] * rtb_Product1[i];
      rtb_Product1_0[(int32_T)(i + 6)] = rtb_Product1[2] * rtb_Product1[i];
    }

    // End of Math: '<S166>/Math Function'

    // Sum: '<S187>/Sum1' incorporates:
    //   Gain: '<S187>/Gain2'
    //   Product: '<S166>/Product'
    //   Product: '<S187>/Product'

    for (i = 0; i < 3; i++) {
      rtb_Assignment_n[(int32_T)(3 * i)] = (rtb_Assignment_b[i] - rtb_Switch1 *
        tmp_a[i]) + rtb_Product1_0[(int32_T)(3 * i)] *
        est_estimator_P->Gain2_Gain_g;
      rtb_Assignment_n[(int32_T)(1 + (int32_T)(3 * i))] = (rtb_Assignment_b
        [(int32_T)(i + 3)] - tmp_a[(int32_T)(i + 3)] * rtb_Switch1) +
        rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 1)] *
        est_estimator_P->Gain2_Gain_g;
      rtb_Assignment_n[(int32_T)(2 + (int32_T)(3 * i))] = (rtb_Assignment_b
        [(int32_T)(i + 6)] - tmp_a[(int32_T)(i + 6)] * rtb_Switch1) +
        rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 2)] *
        est_estimator_P->Gain2_Gain_g;
    }

    // End of Sum: '<S187>/Sum1'

    // Product: '<S166>/Product'
    for (i = 0; i < 3; i++) {
      rtb_ImpAsg_InsertedFor_Out1_a_d[i] = rtb_Assignment_n[(int32_T)(i + 6)] *
        rtb_Add_e[2] + (rtb_Assignment_n[(int32_T)(i + 3)] * rtb_Add_e[1] +
                        rtb_Assignment_n[i] * rtb_Add_e[0]);
    }

    // MultiPortSwitch: '<S161>/Multiport Switch' incorporates:
    //   Constant: '<S161>/Constant6'
    //   Constant: '<S161>/Constant7'
    //   Constant: '<S161>/Constant8'

    switch ((int32_T)est_estimator_U_cmc_msg_o->localization_mode_cmd) {
     case 0:
      rtb_UnitDelay25[0] = est_estimator_P->tun_abp_q_body2navcam[0];
      rtb_UnitDelay25[1] = est_estimator_P->tun_abp_q_body2navcam[1];
      rtb_UnitDelay25[2] = est_estimator_P->tun_abp_q_body2navcam[2];
      rtb_UnitDelay25[3] = est_estimator_P->tun_abp_q_body2navcam[3];
      break;

     case 1:
      rtb_UnitDelay25[0] = est_estimator_P->tun_abp_q_body2dockcam[0];
      rtb_UnitDelay25[1] = est_estimator_P->tun_abp_q_body2dockcam[1];
      rtb_UnitDelay25[2] = est_estimator_P->tun_abp_q_body2dockcam[2];
      rtb_UnitDelay25[3] = est_estimator_P->tun_abp_q_body2dockcam[3];
      break;

     default:
      rtb_UnitDelay25[0] = est_estimator_P->tun_abp_q_body2perchcam[0];
      rtb_UnitDelay25[1] = est_estimator_P->tun_abp_q_body2perchcam[1];
      rtb_UnitDelay25[2] = est_estimator_P->tun_abp_q_body2perchcam[2];
      rtb_UnitDelay25[3] = est_estimator_P->tun_abp_q_body2perchcam[3];
      break;
    }

    // End of MultiPortSwitch: '<S161>/Multiport Switch'

    // Sum: '<S165>/Sum' incorporates:
    //   Constant: '<S165>/Constant1'
    //   DataTypeConversion: '<S184>/Conversion'
    //   Gain: '<S165>/Gain'
    //   Math: '<S165>/Math Function'

    rtb_Switch1 = rtb_UnitDelay25[3] * rtb_UnitDelay25[3] *
      est_estimator_P->Gain_Gain_cu - (real32_T)
      est_estimator_P->Constant1_Value_n;

    // Assignment: '<S165>/Assignment' incorporates:
    //   Constant: '<S165>/Constant2'
    //   DataTypeConversion: '<S183>/Conversion'

    for (i = 0; i < 9; i++) {
      rtb_Assignment_b[i] = (real32_T)est_estimator_P->Constant2_Value_b[i];
    }

    rtb_Assignment_b[0] = rtb_Switch1;
    rtb_Assignment_b[4] = rtb_Switch1;
    rtb_Assignment_b[8] = rtb_Switch1;

    // End of Assignment: '<S165>/Assignment'

    // Gain: '<S165>/Gain1'
    rtb_Switch1 = est_estimator_P->Gain1_Gain_l * rtb_UnitDelay25[3];

    // Assignment: '<S161>/Assignment' incorporates:
    //   Constant: '<S161>/Constant3'

    memcpy(&rtb_Assignment6[0], &est_estimator_P->Constant3_Value_l2[0],
           (uint32_T)(90U * sizeof(ase_cov_datatype)));

    // Product: '<S165>/Product' incorporates:
    //   Constant: '<S185>/Constant3'
    //   DataTypeConversion: '<S186>/Conversion'
    //   Gain: '<S185>/Gain'
    //   Gain: '<S185>/Gain1'
    //   Gain: '<S185>/Gain2'

    rtb_Merge2_1[0] = (real32_T)est_estimator_P->Constant3_Value_d;
    rtb_Merge2_1[1] = rtb_UnitDelay25[2];
    rtb_Merge2_1[2] = est_estimator_P->Gain_Gain_ne * rtb_UnitDelay25[1];
    rtb_Merge2_1[3] = est_estimator_P->Gain1_Gain_j4 * rtb_UnitDelay25[2];
    rtb_Merge2_1[4] = (real32_T)est_estimator_P->Constant3_Value_d;
    rtb_Merge2_1[5] = rtb_UnitDelay25[0];
    rtb_Merge2_1[6] = rtb_UnitDelay25[1];
    rtb_Merge2_1[7] = est_estimator_P->Gain2_Gain_n * rtb_UnitDelay25[0];
    rtb_Merge2_1[8] = (real32_T)est_estimator_P->Constant3_Value_d;

    // Product: '<S165>/Product1' incorporates:
    //   Gain: '<S165>/Gain2'
    //   Math: '<S165>/Math Function1'

    for (i = 0; i < 3; i++) {
      S[i] = rtb_UnitDelay25[i] * rtb_UnitDelay25[0];
      S[(int32_T)(i + 3)] = rtb_UnitDelay25[i] * rtb_UnitDelay25[1];
      S[(int32_T)(i + 6)] = rtb_UnitDelay25[i] * rtb_UnitDelay25[2];
    }

    // End of Product: '<S165>/Product1'

    // SignalConversion: '<S161>/TmpSignal ConversionAtAssignment6Inport2' incorporates:
    //   Assignment: '<S161>/Assignment6'
    //   Constant: '<S167>/Constant3'
    //   DataTypeConversion: '<S192>/Conversion'
    //   Gain: '<S167>/Gain'
    //   Gain: '<S167>/Gain1'
    //   Gain: '<S167>/Gain2'

    tmp_b[0] = (real32_T)est_estimator_P->Constant3_Value_pv;
    tmp_b[1] = rtb_ImpAsg_InsertedFor_Out1_a_d[2];
    tmp_b[2] = est_estimator_P->Gain_Gain_fx * rtb_ImpAsg_InsertedFor_Out1_a_d[1];
    tmp_b[3] = est_estimator_P->Gain1_Gain_ik * rtb_ImpAsg_InsertedFor_Out1_a_d
      [2];
    tmp_b[4] = (real32_T)est_estimator_P->Constant3_Value_pv;
    tmp_b[5] = rtb_ImpAsg_InsertedFor_Out1_a_d[0];
    tmp_b[6] = rtb_ImpAsg_InsertedFor_Out1_a_d[1];
    tmp_b[7] = est_estimator_P->Gain2_Gain_m * rtb_ImpAsg_InsertedFor_Out1_a_d[0];
    tmp_b[8] = (real32_T)est_estimator_P->Constant3_Value_pv;
    for (i = 0; i < 3; i++) {
      // Assignment: '<S161>/Assignment' incorporates:
      //   Gain: '<S165>/Gain2'
      //   Product: '<S165>/Product'
      //   Sum: '<S165>/Sum1'

      rtb_Assignment6[(int32_T)(6 * i)] = (rtb_Assignment_b[(int32_T)(3 * i)] -
        rtb_Merge2_1[(int32_T)(3 * i)] * rtb_Switch1) + S[(int32_T)(3 * i)] *
        est_estimator_P->Gain2_Gain_p0;
      rtb_Assignment6[(int32_T)(1 + (int32_T)(6 * i))] = (rtb_Assignment_b
        [(int32_T)((int32_T)(3 * i) + 1)] - rtb_Merge2_1[(int32_T)((int32_T)(3 *
        i) + 1)] * rtb_Switch1) + S[(int32_T)((int32_T)(3 * i) + 1)] *
        est_estimator_P->Gain2_Gain_p0;
      rtb_Assignment6[(int32_T)(2 + (int32_T)(6 * i))] = (rtb_Assignment_b
        [(int32_T)((int32_T)(3 * i) + 2)] - rtb_Merge2_1[(int32_T)((int32_T)(3 *
        i) + 2)] * rtb_Switch1) + S[(int32_T)((int32_T)(3 * i) + 2)] *
        est_estimator_P->Gain2_Gain_p0;

      // Assignment: '<S161>/Assignment6'
      rtb_Assignment6[(int32_T)(3 + (int32_T)(6 * i))] = tmp_b[(int32_T)(3 * i)];
      rtb_Assignment6[(int32_T)(4 + (int32_T)(6 * i))] = tmp_b[(int32_T)
        ((int32_T)(3 * i) + 1)];
      rtb_Assignment6[(int32_T)(5 + (int32_T)(6 * i))] = tmp_b[(int32_T)
        ((int32_T)(3 * i) + 2)];
    }

    // Assignment: '<S161>/Assignment1'
    memcpy(&est_estimator_B->Assignment[0], &est_estimator_B->Switch1[0],
           (uint32_T)(13689U * sizeof(real32_T)));

    // Product: '<S161>/Product1' incorporates:
    //   Math: '<S161>/Math Function1'
    //   Selector: '<S161>/Selector1'

    for (i = 0; i < 15; i++) {
      for (b_m = 0; b_m < 6; b_m++) {
        Switch1[(int32_T)(i + (int32_T)(15 * b_m))] = 0.0F;
        for (i_0 = 0; i_0 < 15; i_0++) {
          Switch1[(int32_T)(i + (int32_T)(15 * b_m))] +=
            est_estimator_B->Switch1[(int32_T)((int32_T)(117 * i_0) + i)] *
            rtb_Assignment6[(int32_T)((int32_T)(6 * i_0) + b_m)];
        }
      }
    }

    for (i = 0; i < 6; i++) {
      // Assignment: '<S161>/Assignment1' incorporates:
      //   Product: '<S161>/Product1'

      for (b_m = 0; b_m < 6; b_m++) {
        est_estimator_B->Assignment[(int32_T)((int32_T)(i + (int32_T)(117 *
          (int32_T)(15 + b_m))) + 15)] = 0.0F;
        for (i_0 = 0; i_0 < 15; i_0++) {
          est_estimator_B->Assignment[(int32_T)((int32_T)(i + (int32_T)(117 *
            (int32_T)(15 + b_m))) + 15)] = est_estimator_B->Assignment[(int32_T)
            ((int32_T)((int32_T)((int32_T)(15 + b_m) * 117) + i) + 15)] +
            rtb_Assignment6[(int32_T)((int32_T)(6 * i_0) + i)] * Switch1
            [(int32_T)((int32_T)(15 * b_m) + i_0)];
        }
      }

      // Product: '<S161>/Product2' incorporates:
      //   Selector: '<S161>/Selector2'

      for (b_m = 0; b_m < 15; b_m++) {
        rtb_Product2_b[(int32_T)(i + (int32_T)(6 * b_m))] = 0.0F;
        for (i_0 = 0; i_0 < 15; i_0++) {
          rtb_Product2_b[(int32_T)(i + (int32_T)(6 * b_m))] += rtb_Assignment6
            [(int32_T)((int32_T)(6 * i_0) + i)] * est_estimator_B->Switch1
            [(int32_T)((int32_T)(117 * b_m) + i_0)];
        }
      }

      // End of Product: '<S161>/Product2'
    }

    // Assignment: '<S161>/Assignment2'
    for (i = 0; i < 15; i++) {
      for (b_m = 0; b_m < 6; b_m++) {
        est_estimator_B->Assignment[(int32_T)((int32_T)(b_m + (int32_T)(117 * i))
          + 15)] = rtb_Product2_b[(int32_T)((int32_T)(6 * i) + b_m)];
      }
    }

    // End of Assignment: '<S161>/Assignment2'
    for (i = 0; i < 6; i++) {
      // Assignment: '<S161>/Assignment3' incorporates:
      //   Math: '<S161>/Math Function2'

      for (b_m = 0; b_m < 15; b_m++) {
        est_estimator_B->Assignment[(int32_T)(b_m + (int32_T)(117 * (int32_T)(15
          + i)))] = rtb_Product2_b[(int32_T)((int32_T)(6 * b_m) + i)];
      }

      // End of Assignment: '<S161>/Assignment3'

      // Product: '<S161>/Product3' incorporates:
      //   Selector: '<S161>/Selector4'

      for (b_m = 0; b_m < 96; b_m++) {
        rtb_Product3[(int32_T)(i + (int32_T)(6 * b_m))] = 0.0F;
        for (i_0 = 0; i_0 < 15; i_0++) {
          rtb_Product3[(int32_T)(i + (int32_T)(6 * b_m))] +=
            est_estimator_B->Switch1[(int32_T)((int32_T)((int32_T)(21 + b_m) *
            117) + i_0)] * rtb_Assignment6[(int32_T)((int32_T)(6 * i_0) + i)];
        }
      }

      // End of Product: '<S161>/Product3'
    }

    // Assignment: '<S161>/Assignment4'
    for (i = 0; i < 96; i++) {
      for (b_m = 0; b_m < 6; b_m++) {
        est_estimator_B->Assignment[(int32_T)((int32_T)(b_m + (int32_T)(117 *
          (int32_T)(21 + i))) + 15)] = rtb_Product3[(int32_T)((int32_T)(6 * i) +
          b_m)];
      }
    }

    // End of Assignment: '<S161>/Assignment4'

    // Assignment: '<S161>/Assignment5' incorporates:
    //   Math: '<S161>/Math Function3'

    for (i = 0; i < 6; i++) {
      for (b_m = 0; b_m < 96; b_m++) {
        est_estimator_B->Assignment[(int32_T)((int32_T)(b_m + (int32_T)(117 *
          (int32_T)(15 + i))) + 21)] = rtb_Product3[(int32_T)((int32_T)(6 * b_m)
          + i)];
      }
    }

    // End of Assignment: '<S161>/Assignment5'

    // DataTypeConversion: '<S169>/Conversion' incorporates:
    //   Constant: '<S168>/Constant2'

    for (i = 0; i < 9; i++) {
      rtb_Assignment_b[i] = (real32_T)est_estimator_P->Constant2_Value_jy[i];
    }

    // End of DataTypeConversion: '<S169>/Conversion'

    // Assignment: '<S168>/Assignment'
    rtb_Assignment_b[0] = rtb_Product1[3];
    rtb_Assignment_b[4] = rtb_Product1[3];
    rtb_Assignment_b[8] = rtb_Product1[3];

    // Sum: '<S168>/Sum2' incorporates:
    //   Constant: '<S170>/Constant3'
    //   DataTypeConversion: '<S171>/Conversion'
    //   Gain: '<S170>/Gain'
    //   Gain: '<S170>/Gain1'
    //   Gain: '<S170>/Gain2'

    tmp_c[0] = (real32_T)est_estimator_P->Constant3_Value_pi;
    tmp_c[1] = rtb_Product1[2];
    tmp_c[2] = est_estimator_P->Gain_Gain_j * rtb_Product1[1];
    tmp_c[3] = est_estimator_P->Gain1_Gain_g * rtb_Product1[2];
    tmp_c[4] = (real32_T)est_estimator_P->Constant3_Value_pi;
    tmp_c[5] = rtb_Product1[0];
    tmp_c[6] = rtb_Product1[1];
    tmp_c[7] = est_estimator_P->Gain2_Gain_eo * rtb_Product1[0];
    tmp_c[8] = (real32_T)est_estimator_P->Constant3_Value_pi;

    // Concatenate: '<S168>/Matrix Concatenate' incorporates:
    //   Gain: '<S168>/Gain1'
    //   Sum: '<S168>/Sum2'

    for (i = 0; i < 3; i++) {
      rtb_VectorConcatenate_c[(int32_T)(i << 2)] = rtb_Assignment_b[(int32_T)(3 *
        i)] + tmp_c[(int32_T)(3 * i)];
      rtb_VectorConcatenate_c[(int32_T)(1 + (int32_T)(i << 2))] =
        rtb_Assignment_b[(int32_T)((int32_T)(3 * i) + 1)] + tmp_c[(int32_T)
        ((int32_T)(3 * i) + 1)];
      rtb_VectorConcatenate_c[(int32_T)(2 + (int32_T)(i << 2))] =
        rtb_Assignment_b[(int32_T)((int32_T)(3 * i) + 2)] + tmp_c[(int32_T)
        ((int32_T)(3 * i) + 2)];
    }

    rtb_VectorConcatenate_c[3] = est_estimator_P->Gain1_Gain_ei * rtb_Product1[0];
    rtb_VectorConcatenate_c[7] = est_estimator_P->Gain1_Gain_ei * rtb_Product1[1];
    rtb_VectorConcatenate_c[11] = est_estimator_P->Gain1_Gain_ei * rtb_Product1
      [2];

    // End of Concatenate: '<S168>/Matrix Concatenate'

    // Reshape: '<S163>/Reshape1'
    rtb_VectorConcatenate_c[12] = rtb_Product1[0];
    rtb_VectorConcatenate_c[13] = rtb_Product1[1];
    rtb_VectorConcatenate_c[14] = rtb_Product1[2];
    rtb_VectorConcatenate_c[15] = rtb_Product1[3];

    // BusAssignment: '<S161>/Bus Assignment' incorporates:
    //   Gain: '<S161>/Gain'
    //   Product: '<S163>/Product'
    //   S-Function (sfix_bitop): '<S161>/Bitwise Operator2'
    //   Sum: '<S161>/Add'
    //   Sum: '<S161>/Add1'

    rtb_BusAssignment_a = rtb_Merge2;
    rtb_BusAssignment_a.aug_state_enum = (uint32_T)(rtb_Merge2.aug_state_enum |
      est_estimator_P->BitwiseOperator2_BitMask);
    rtb_BusAssignment_a.ml_P_cam_ISS_ISS[0] = (rtb_Merge2.P_EST_ISS_ISS[0] -
      est_estimator_P->tun_ase_ml_forward_projection_time *
      rtb_Merge2.V_B_ISS_ISS[0]) + rtb_ImpAsg_InsertedFor_Out1_a_d[0];
    rtb_BusAssignment_a.ml_P_cam_ISS_ISS[1] = (rtb_Merge2.P_EST_ISS_ISS[1] -
      est_estimator_P->tun_ase_ml_forward_projection_time *
      rtb_Merge2.V_B_ISS_ISS[1]) + rtb_ImpAsg_InsertedFor_Out1_a_d[1];
    rtb_BusAssignment_a.ml_P_cam_ISS_ISS[2] = (rtb_Merge2.P_EST_ISS_ISS[2] -
      est_estimator_P->tun_ase_ml_forward_projection_time *
      rtb_Merge2.V_B_ISS_ISS[2]) + rtb_ImpAsg_InsertedFor_Out1_a_d[2];
    for (i = 0; i < 4; i++) {
      rtb_BusAssignment_a.ml_quat_ISS2cam[i] = 0.0F;
      rtb_BusAssignment_a.ml_quat_ISS2cam[i] += rtb_VectorConcatenate_c[i] *
        rtb_UnitDelay25[0];
      rtb_BusAssignment_a.ml_quat_ISS2cam[i] += rtb_VectorConcatenate_c[(int32_T)
        (i + 4)] * rtb_UnitDelay25[1];
      rtb_BusAssignment_a.ml_quat_ISS2cam[i] += rtb_VectorConcatenate_c[(int32_T)
        (i + 8)] * rtb_UnitDelay25[2];
      rtb_BusAssignment_a.ml_quat_ISS2cam[i] += rtb_VectorConcatenate_c[(int32_T)
        (i + 12)] * rtb_UnitDelay25[3];
    }

    // End of BusAssignment: '<S161>/Bus Assignment'

    // SignalConversion: '<S161>/Signal Conversion1' incorporates:
    //   DataTypeConversion: '<S161>/Data Type Conversion1'

    ml_vel_aug[0] = (real_T)rtb_Merge2.V_B_ISS_ISS[0];

    // SignalConversion: '<S161>/Signal Conversion1' incorporates:
    //   DataTypeConversion: '<S161>/Data Type Conversion2'

    ml_omega_aug[0] = (real_T)rtb_Merge2.omega_B_ISS_B[0];

    // SignalConversion: '<S161>/Signal Conversion1' incorporates:
    //   DataTypeConversion: '<S161>/Data Type Conversion1'

    ml_vel_aug[1] = (real_T)rtb_Merge2.V_B_ISS_ISS[1];

    // SignalConversion: '<S161>/Signal Conversion1' incorporates:
    //   DataTypeConversion: '<S161>/Data Type Conversion2'

    ml_omega_aug[1] = (real_T)rtb_Merge2.omega_B_ISS_B[1];

    // SignalConversion: '<S161>/Signal Conversion1' incorporates:
    //   DataTypeConversion: '<S161>/Data Type Conversion1'

    ml_vel_aug[2] = (real_T)rtb_Merge2.V_B_ISS_ISS[2];

    // SignalConversion: '<S161>/Signal Conversion1' incorporates:
    //   DataTypeConversion: '<S161>/Data Type Conversion2'

    ml_omega_aug[2] = (real_T)rtb_Merge2.omega_B_ISS_B[2];

    // SignalConversion: '<S161>/Signal Conversion1'
    memcpy(&of_vel_aug[0], &rtb_of_vel_aug[0], (uint32_T)(48U * sizeof(real_T)));

    // SignalConversion: '<S161>/Signal Conversion1'
    memcpy(&of_omega_aug[0], &rtb_of_omega_aug[0], (uint32_T)(48U * sizeof
            (real_T)));

    // End of Outputs for SubSystem: '<S126>/If Action Subsystem2'
  } else if ((int32_T)((int32_T)rtb_Merge2.kfl_status & (int32_T)
                       est_estimator_P->BitwiseOperator1_BitMask) != (int32_T)
             est_estimator_P->Constant_Value_o) {
    // Outputs for IfAction SubSystem: '<S126>/If Action Subsystem4' incorporates:
    //   ActionPort: '<S162>/Action Port'

    memcpy(&est_estimator_B->Assignment[0], &est_estimator_B->Switch1[0],
           (uint32_T)(13689U * sizeof(real32_T)));

    // SignalConversion: '<S162>/Signal Conversion' incorporates:
    //   Inport: '<S162>/P_in'

    rtb_BusAssignment_a = rtb_Merge2;

    // SignalConversion: '<S162>/Signal Conversion2'
    ml_vel_aug[0] = rtb_ml_vel_aug[0];

    // SignalConversion: '<S162>/Signal Conversion2'
    ml_omega_aug[0] = rtb_ml_omega_aug[0];

    // SignalConversion: '<S162>/Signal Conversion2'
    ml_vel_aug[1] = rtb_ml_vel_aug[1];

    // SignalConversion: '<S162>/Signal Conversion2'
    ml_omega_aug[1] = rtb_ml_omega_aug[1];

    // SignalConversion: '<S162>/Signal Conversion2'
    ml_vel_aug[2] = rtb_ml_vel_aug[2];

    // SignalConversion: '<S162>/Signal Conversion2'
    ml_omega_aug[2] = rtb_ml_omega_aug[2];

    // SignalConversion: '<S162>/Signal Conversion2'
    memcpy(&of_vel_aug[0], &rtb_of_vel_aug[0], (uint32_T)(48U * sizeof(real_T)));

    // SignalConversion: '<S162>/Signal Conversion2'
    memcpy(&of_omega_aug[0], &rtb_of_omega_aug[0], (uint32_T)(48U * sizeof
            (real_T)));

    // End of Outputs for SubSystem: '<S126>/If Action Subsystem4'
  } else {
    // Outputs for IfAction SubSystem: '<S126>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S160>/Action Port'

    est_estimato_IfActionSubsystem1(&rtb_Merge2, est_estimator_B->Switch1,
      rtb_ml_vel_aug, rtb_ml_omega_aug, rtb_of_vel_aug, rtb_of_omega_aug,
      &rtb_BusAssignment_a, est_estimator_B->Assignment, ml_vel_aug,
      ml_omega_aug, of_vel_aug, of_omega_aug);

    // End of Outputs for SubSystem: '<S126>/If Action Subsystem1'
  }

  // End of If: '<S126>/If'

  // If: '<S125>/If' incorporates:
  //   Constant: '<S125>/Constant'
  //   Constant: '<S127>/Constant'
  //   Constant: '<S146>/Constant'
  //   Constant: '<S146>/Constant1'
  //   Constant: '<S146>/Constant2'
  //   Constant: '<S146>/Constant3'
  //   Constant: '<S147>/Constant'
  //   Constant: '<S147>/Constant1'
  //   Constant: '<S147>/Constant2'
  //   Constant: '<S147>/Constant3'
  //   Inport: '<Root>/Vision Registration'
  //   Logic: '<S125>/Logical Operator'
  //   RelationalOperator: '<S127>/Compare'

  if ((est_estimator_U_VisionRegistration->cvs_optical_flow_pulse >
       est_estimator_P->CompareToConstant_const) && ((int32_T)
       est_estimator_P->tun_ase_enable_of != 0)) {
    // Outputs for IfAction SubSystem: '<S125>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S129>/Action Port'

    rtb_VectorConcatenate_m[0] = est_estimator_P->Constant3_Value_cc;

    // Gain: '<S146>/Gain' incorporates:
    //   Constant: '<S133>/Constant'
    //   Constant: '<S146>/Constant3'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[1] = est_estimator_P->Gain_Gain_h * (real32_T)
      est_estimator_P->Constant_Value_p[2];

    // SignalConversion: '<S146>/ConcatBufferAtVector ConcatenateIn3' incorporates:
    //   Constant: '<S133>/Constant'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[2] = (real32_T)est_estimator_P->Constant_Value_p[1];

    // Gain: '<S146>/Gain1' incorporates:
    //   Constant: '<S133>/Constant'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[3] = est_estimator_P->Gain1_Gain_b * (real32_T)
      est_estimator_P->Constant_Value_p[0];

    // SignalConversion: '<S146>/ConcatBufferAtVector ConcatenateIn5' incorporates:
    //   Constant: '<S133>/Constant'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[4] = (real32_T)est_estimator_P->Constant_Value_p[2];
    rtb_VectorConcatenate_m[5] = est_estimator_P->Constant2_Value_pd;

    // Gain: '<S146>/Gain2' incorporates:
    //   Constant: '<S133>/Constant'
    //   Constant: '<S146>/Constant2'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[6] = est_estimator_P->Gain2_Gain_h * (real32_T)
      est_estimator_P->Constant_Value_p[0];

    // Gain: '<S146>/Gain3' incorporates:
    //   Constant: '<S133>/Constant'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[7] = est_estimator_P->Gain3_Gain * (real32_T)
      est_estimator_P->Constant_Value_p[1];

    // Gain: '<S146>/Gain4' incorporates:
    //   Constant: '<S133>/Constant'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[8] = est_estimator_P->Gain4_Gain * (real32_T)
      est_estimator_P->Constant_Value_p[1];

    // SignalConversion: '<S146>/ConcatBufferAtVector ConcatenateIn10' incorporates:
    //   Constant: '<S133>/Constant'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[9] = (real32_T)est_estimator_P->Constant_Value_p[0];
    rtb_VectorConcatenate_m[10] = est_estimator_P->Constant1_Value_j;

    // Gain: '<S146>/Gain5' incorporates:
    //   Constant: '<S133>/Constant'
    //   Constant: '<S146>/Constant1'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[11] = est_estimator_P->Gain5_Gain * (real32_T)
      est_estimator_P->Constant_Value_p[2];

    // SignalConversion: '<S146>/ConcatBufferAtVector ConcatenateIn13' incorporates:
    //   Constant: '<S133>/Constant'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[12] = (real32_T)est_estimator_P->Constant_Value_p[0];

    // SignalConversion: '<S146>/ConcatBufferAtVector ConcatenateIn14' incorporates:
    //   Constant: '<S133>/Constant'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[13] = (real32_T)est_estimator_P->Constant_Value_p[1];

    // SignalConversion: '<S146>/ConcatBufferAtVector ConcatenateIn15' incorporates:
    //   Constant: '<S133>/Constant'
    //   DataTypeConversion: '<S143>/Conversion'

    rtb_VectorConcatenate_m[14] = (real32_T)est_estimator_P->Constant_Value_p[2];
    rtb_VectorConcatenate_m[15] = est_estimator_P->Constant_Value_f;
    rtb_VectorConcatenate_i[0] = est_estimator_P->Constant3_Value_iq;

    // Gain: '<S129>/Gain1' incorporates:
    //   Constant: '<S146>/Constant'
    //   Constant: '<S147>/Constant3'

    rtb_Add_e[0] = est_estimator_P->Gain1_Gain_j *
      rtb_BusAssignment_a.omega_B_ISS_B[0];
    rtb_Add_e[1] = est_estimator_P->Gain1_Gain_j *
      rtb_BusAssignment_a.omega_B_ISS_B[1];
    rtb_Add_e[2] = est_estimator_P->Gain1_Gain_j *
      rtb_BusAssignment_a.omega_B_ISS_B[2];

    // Gain: '<S147>/Gain'
    rtb_VectorConcatenate_i[1] = est_estimator_P->Gain_Gain_n * rtb_Add_e[2];

    // SignalConversion: '<S147>/ConcatBufferAtVector ConcatenateIn3'
    rtb_VectorConcatenate_i[2] = rtb_Add_e[1];

    // Gain: '<S147>/Gain1'
    rtb_VectorConcatenate_i[3] = est_estimator_P->Gain1_Gain_f * rtb_Add_e[0];

    // SignalConversion: '<S147>/ConcatBufferAtVector ConcatenateIn5'
    rtb_VectorConcatenate_i[4] = rtb_Add_e[2];
    rtb_VectorConcatenate_i[5] = est_estimator_P->Constant2_Value_n;

    // Gain: '<S147>/Gain2' incorporates:
    //   Constant: '<S147>/Constant2'

    rtb_VectorConcatenate_i[6] = est_estimator_P->Gain2_Gain_a * rtb_Add_e[0];

    // Gain: '<S147>/Gain3'
    rtb_VectorConcatenate_i[7] = est_estimator_P->Gain3_Gain_l * rtb_Add_e[1];

    // Gain: '<S147>/Gain4'
    rtb_VectorConcatenate_i[8] = est_estimator_P->Gain4_Gain_o * rtb_Add_e[1];

    // SignalConversion: '<S147>/ConcatBufferAtVector ConcatenateIn10'
    rtb_VectorConcatenate_i[9] = rtb_Add_e[0];
    rtb_VectorConcatenate_i[10] = est_estimator_P->Constant1_Value_nk;

    // Gain: '<S147>/Gain5' incorporates:
    //   Constant: '<S147>/Constant1'

    rtb_VectorConcatenate_i[11] = est_estimator_P->Gain5_Gain_j * rtb_Add_e[2];

    // SignalConversion: '<S147>/ConcatBufferAtVector ConcatenateIn13'
    rtb_VectorConcatenate_i[12] = rtb_Add_e[0];

    // SignalConversion: '<S147>/ConcatBufferAtVector ConcatenateIn14'
    rtb_VectorConcatenate_i[13] = rtb_Add_e[1];

    // SignalConversion: '<S147>/ConcatBufferAtVector ConcatenateIn15'
    rtb_VectorConcatenate_i[14] = rtb_Add_e[2];
    rtb_VectorConcatenate_i[15] = est_estimator_P->Constant_Value_j;

    // Product: '<S144>/Product2' incorporates:
    //   Constant: '<S129>/Constant'
    //   Constant: '<S144>/Constant1'
    //   Constant: '<S144>/Constant3'
    //   Constant: '<S147>/Constant'
    //   Product: '<S144>/Product'
    //   Sum: '<S144>/Add'

    for (i = 0; i < 16; i++) {
      rtb_VectorConcatenate_c[i] = (est_estimator_P->Constant3_Value_f *
        rtb_VectorConcatenate_m[i] *
        est_estimator_P->tun_ase_ml_forward_projection_time +
        rtb_VectorConcatenate_i[i]) * est_estimator_P->Constant1_Value_cn *
        est_estimator_P->tun_ase_ml_forward_projection_time;
    }

    // End of Product: '<S144>/Product2'

    // MATLAB Function: '<S144>/MATLAB Function'
    est_estimator_MATLABFunction(rtb_VectorConcatenate_c,
      &est_estimator_B->sf_MATLABFunction_o);

    // Product: '<S144>/Product5' incorporates:
    //   Constant: '<S129>/Constant'

    hr_quat_ISS2hr_idx_1 = est_estimator_P->tun_ase_ml_forward_projection_time *
      est_estimator_P->tun_ase_ml_forward_projection_time *
      est_estimator_P->tun_ase_ml_forward_projection_time;
    for (i = 0; i < 4; i++) {
      for (b_m = 0; b_m < 4; b_m++) {
        // Product: '<S144>/Product4' incorporates:
        //   Sum: '<S144>/Add2'

        rtb_VectorConcatenate_c[(int32_T)(b_m + (int32_T)(i << 2))] = 0.0F;

        // Product: '<S144>/Product3' incorporates:
        //   Sum: '<S144>/Add2'

        rtb_VectorConcatenate_p[(int32_T)(b_m + (int32_T)(i << 2))] = 0.0F;
        rtb_VectorConcatenate_c[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_i[(int32_T)(i << 2)] *
          rtb_VectorConcatenate_m[b_m];
        rtb_VectorConcatenate_p[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_m[(int32_T)(i << 2)] *
          rtb_VectorConcatenate_i[b_m];
        rtb_VectorConcatenate_c[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_i[(int32_T)((int32_T)(i << 2) + 1)] *
          rtb_VectorConcatenate_m[(int32_T)(b_m + 4)];
        rtb_VectorConcatenate_p[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_m[(int32_T)((int32_T)(i << 2) + 1)] *
          rtb_VectorConcatenate_i[(int32_T)(b_m + 4)];
        rtb_VectorConcatenate_c[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_i[(int32_T)((int32_T)(i << 2) + 2)] *
          rtb_VectorConcatenate_m[(int32_T)(b_m + 8)];
        rtb_VectorConcatenate_p[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_m[(int32_T)((int32_T)(i << 2) + 2)] *
          rtb_VectorConcatenate_i[(int32_T)(b_m + 8)];
        rtb_VectorConcatenate_c[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_i[(int32_T)((int32_T)(i << 2) + 3)] *
          rtb_VectorConcatenate_m[(int32_T)(b_m + 12)];
        rtb_VectorConcatenate_p[(int32_T)(b_m + (int32_T)(i << 2))] +=
          rtb_VectorConcatenate_m[(int32_T)((int32_T)(i << 2) + 3)] *
          rtb_VectorConcatenate_i[(int32_T)(b_m + 12)];
      }
    }

    // Sum: '<S144>/Add1' incorporates:
    //   Constant: '<S144>/Constant2'
    //   Product: '<S144>/Product1'
    //   Product: '<S144>/Product3'
    //   Product: '<S144>/Product4'
    //   Product: '<S144>/Product5'
    //   Sum: '<S144>/Add2'

    for (i = 0; i < 4; i++) {
      rtb_VectorConcatenate[(int32_T)(i << 2)] = (rtb_VectorConcatenate_c
        [(int32_T)(i << 2)] - rtb_VectorConcatenate_p[(int32_T)(i << 2)]) *
        hr_quat_ISS2hr_idx_1 / est_estimator_P->Constant2_Value_p3 +
        est_estimator_B->sf_MATLABFunction_o.y[(int32_T)(i << 2)];
      rtb_VectorConcatenate[(int32_T)(1 + (int32_T)(i << 2))] =
        (rtb_VectorConcatenate_c[(int32_T)((int32_T)(i << 2) + 1)] -
         rtb_VectorConcatenate_p[(int32_T)((int32_T)(i << 2) + 1)]) *
        hr_quat_ISS2hr_idx_1 / est_estimator_P->Constant2_Value_p3 +
        est_estimator_B->sf_MATLABFunction_o.y[(int32_T)((int32_T)(i << 2) + 1)];
      rtb_VectorConcatenate[(int32_T)(2 + (int32_T)(i << 2))] =
        (rtb_VectorConcatenate_c[(int32_T)((int32_T)(i << 2) + 2)] -
         rtb_VectorConcatenate_p[(int32_T)((int32_T)(i << 2) + 2)]) *
        hr_quat_ISS2hr_idx_1 / est_estimator_P->Constant2_Value_p3 +
        est_estimator_B->sf_MATLABFunction_o.y[(int32_T)((int32_T)(i << 2) + 2)];
      rtb_VectorConcatenate[(int32_T)(3 + (int32_T)(i << 2))] =
        (rtb_VectorConcatenate_c[(int32_T)((int32_T)(i << 2) + 3)] -
         rtb_VectorConcatenate_p[(int32_T)((int32_T)(i << 2) + 3)]) *
        hr_quat_ISS2hr_idx_1 / est_estimator_P->Constant2_Value_p3 +
        est_estimator_B->sf_MATLABFunction_o.y[(int32_T)((int32_T)(i << 2) + 3)];
    }

    // End of Sum: '<S144>/Add1'

    // Product: '<S144>/Product1'
    for (i = 0; i < 4; i++) {
      rtb_Sum_k1 = rtb_VectorConcatenate[(int32_T)(i + 12)] *
        rtb_BusAssignment_a.quat_ISS2B[3] + (rtb_VectorConcatenate[(int32_T)(i +
        8)] * rtb_BusAssignment_a.quat_ISS2B[2] + (rtb_VectorConcatenate
        [(int32_T)(i + 4)] * rtb_BusAssignment_a.quat_ISS2B[1] +
        rtb_VectorConcatenate[i] * rtb_BusAssignment_a.quat_ISS2B[0]));
      rtb_Product1[i] = rtb_Sum_k1;
    }

    // If: '<S148>/If' incorporates:
    //   Inport: '<S149>/In1'

    if (rtb_Product1[3] < 0.0F) {
      // Outputs for IfAction SubSystem: '<S148>/Normalize' incorporates:
      //   ActionPort: '<S150>/Action Port'

      est_estimator_Normalize(rtb_Product1, rtb_UnitDelay25,
        (P_Normalize_est_estimator_T *)&est_estimator_P->Normalize_h);

      // End of Outputs for SubSystem: '<S148>/Normalize'
    } else {
      // Outputs for IfAction SubSystem: '<S148>/No-op' incorporates:
      //   ActionPort: '<S149>/Action Port'

      rtb_UnitDelay25[0] = rtb_Product1[0];
      rtb_UnitDelay25[1] = rtb_Product1[1];
      rtb_UnitDelay25[2] = rtb_Product1[2];
      rtb_UnitDelay25[3] = rtb_Product1[3];

      // End of Outputs for SubSystem: '<S148>/No-op'
    }

    // End of If: '<S148>/If'

    // Sqrt: '<S155>/Sqrt' incorporates:
    //   DotProduct: '<S155>/Dot Product'

    rtb_Switch1 = (real32_T)sqrt((real_T)(((rtb_UnitDelay25[0] *
      rtb_UnitDelay25[0] + rtb_UnitDelay25[1] * rtb_UnitDelay25[1]) +
      rtb_UnitDelay25[2] * rtb_UnitDelay25[2]) + rtb_UnitDelay25[3] *
      rtb_UnitDelay25[3]));

    // If: '<S151>/If' incorporates:
    //   DataTypeConversion: '<S151>/Data Type Conversion'
    //   Inport: '<S153>/In1'

    if ((real_T)rtb_Switch1 > 1.0E-7) {
      // Outputs for IfAction SubSystem: '<S151>/Normalize' incorporates:
      //   ActionPort: '<S154>/Action Port'

      est_estimator_Normalize_p(rtb_UnitDelay25, rtb_Switch1, rtb_Product1);

      // End of Outputs for SubSystem: '<S151>/Normalize'
    } else {
      // Outputs for IfAction SubSystem: '<S151>/No-op' incorporates:
      //   ActionPort: '<S153>/Action Port'

      rtb_Product1[0] = rtb_UnitDelay25[0];
      rtb_Product1[1] = rtb_UnitDelay25[1];
      rtb_Product1[2] = rtb_UnitDelay25[2];
      rtb_Product1[3] = rtb_UnitDelay25[3];

      // End of Outputs for SubSystem: '<S151>/No-op'
    }

    // End of If: '<S151>/If'

    // Sum: '<S138>/Sum' incorporates:
    //   Constant: '<S138>/Constant1'
    //   DataTypeConversion: '<S140>/Conversion'
    //   Gain: '<S138>/Gain'
    //   Math: '<S138>/Math Function'

    rtb_Switch1 = rtb_Product1[3] * rtb_Product1[3] *
      est_estimator_P->Gain_Gain_a - (real32_T)est_estimator_P->Constant1_Value;
    for (i = 0; i < 9; i++) {
      // Assignment: '<S138>/Assignment' incorporates:
      //   Constant: '<S138>/Constant2'
      //   DataTypeConversion: '<S139>/Conversion'

      rtb_Assignment_b[i] = (real32_T)est_estimator_P->Constant2_Value_j[i];

      // DataTypeConversion: '<S135>/Conversion' incorporates:
      //   Constant: '<S134>/Constant2'

      rtb_Assignment_n[i] = (real32_T)est_estimator_P->Constant2_Value_l[i];
    }

    // Assignment: '<S138>/Assignment'
    rtb_Assignment_b[0] = rtb_Switch1;
    rtb_Assignment_b[4] = rtb_Switch1;
    rtb_Assignment_b[8] = rtb_Switch1;

    // Gain: '<S138>/Gain1'
    rtb_Switch1 = est_estimator_P->Gain1_Gain_e * rtb_Product1[3];

    // Assignment: '<S134>/Assignment'
    rtb_Assignment_n[0] = rtb_Product1[3];
    rtb_Assignment_n[4] = rtb_Product1[3];
    rtb_Assignment_n[8] = rtb_Product1[3];

    // Sum: '<S134>/Sum2' incorporates:
    //   Constant: '<S136>/Constant3'
    //   DataTypeConversion: '<S137>/Conversion'
    //   Gain: '<S136>/Gain'
    //   Gain: '<S136>/Gain1'
    //   Gain: '<S136>/Gain2'

    tmp_d[0] = (real32_T)est_estimator_P->Constant3_Value_p;
    tmp_d[1] = rtb_Product1[2];
    tmp_d[2] = est_estimator_P->Gain_Gain_g * rtb_Product1[1];
    tmp_d[3] = est_estimator_P->Gain1_Gain_jc * rtb_Product1[2];
    tmp_d[4] = (real32_T)est_estimator_P->Constant3_Value_p;
    tmp_d[5] = rtb_Product1[0];
    tmp_d[6] = rtb_Product1[1];
    tmp_d[7] = est_estimator_P->Gain2_Gain_o * rtb_Product1[0];
    tmp_d[8] = (real32_T)est_estimator_P->Constant3_Value_p;

    // Concatenate: '<S134>/Matrix Concatenate' incorporates:
    //   Gain: '<S134>/Gain1'
    //   Sum: '<S134>/Sum2'

    for (i = 0; i < 3; i++) {
      rtb_VectorConcatenate_m[(int32_T)(i << 2)] = rtb_Assignment_n[(int32_T)(3 *
        i)] + tmp_d[(int32_T)(3 * i)];
      rtb_VectorConcatenate_m[(int32_T)(1 + (int32_T)(i << 2))] =
        rtb_Assignment_n[(int32_T)((int32_T)(3 * i) + 1)] + tmp_d[(int32_T)
        ((int32_T)(3 * i) + 1)];
      rtb_VectorConcatenate_m[(int32_T)(2 + (int32_T)(i << 2))] =
        rtb_Assignment_n[(int32_T)((int32_T)(3 * i) + 2)] + tmp_d[(int32_T)
        ((int32_T)(3 * i) + 2)];
    }

    rtb_VectorConcatenate_m[3] = est_estimator_P->Gain1_Gain_i * rtb_Product1[0];
    rtb_VectorConcatenate_m[7] = est_estimator_P->Gain1_Gain_i * rtb_Product1[1];
    rtb_VectorConcatenate_m[11] = est_estimator_P->Gain1_Gain_i * rtb_Product1[2];

    // End of Concatenate: '<S134>/Matrix Concatenate'

    // Reshape: '<S131>/Reshape1'
    rtb_VectorConcatenate_m[12] = rtb_Product1[0];
    rtb_VectorConcatenate_m[13] = rtb_Product1[1];
    rtb_VectorConcatenate_m[14] = rtb_Product1[2];
    rtb_VectorConcatenate_m[15] = rtb_Product1[3];

    // MATLAB Function: '<S129>/MATLAB Function'
    // MATLAB Function 'state_manager/Optical Flow Registration Manager/If Action Subsystem2/MATLAB Function': '<S130>:1' 
    //  From Zack's matlab filter.  This function add loads up the most recent
    //  camera attitude and position, as well as setting the aug_state_byte
    // '<S130>:1:5'
    //  Copyright (c) 2017, United States Government, as represented by the
    //  Administrator of the National Aeronautics and Space Administration.
    //
    //  All rights reserved.
    //
    //  The Astrobee platform is licensed under the Apache License, Version 2.0
    //  (the "License"); you may not use this file except in compliance with the 
    //  License. You may obtain a copy of the License at
    //
    //      http://www.apache.org/licenses/LICENSE-2.0
    //
    //  Unless required by applicable law or agreed to in writing, software
    //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
    //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
    //  License for the specific language governing permissions and limitations
    //  under the License.
    //  This function add loads up the most recent
    //  camera attitude and position, as well as setting the aug_state_byte
    //  Cast this back to double to not cause issues with other integers
    //  retain the values between function calls
    if ((!est_estimator_DW->aug_velocity_not_empty) ||
        (!est_estimator_DW->aug_velocity_mag_not_empty) ||
        (!est_estimator_DW->aug_omega_not_empty) ||
        (!est_estimator_DW->aug_omega_mag_not_empty)) {
      //  Initialize values to zero and the same data type as state_in.V_B_ISS_ISS 
      memset(&est_estimator_DW->aug_velocity[0], 0, (uint32_T)(48U * sizeof
              (real32_T)));
      est_estimator_DW->aug_velocity_not_empty = true;
      memset(&est_estimator_DW->aug_velocity_mag[0], 0, (uint32_T)(sizeof
              (real32_T) << 4U));
      est_estimator_DW->aug_velocity_mag_not_empty = true;
      memset(&est_estimator_DW->aug_omega[0], 0, (uint32_T)(48U * sizeof
              (real32_T)));
      est_estimator_DW->aug_omega_not_empty = true;
      memset(&est_estimator_DW->aug_omega_mag[0], 0, (uint32_T)(sizeof(real32_T)
              << 4U));
      est_estimator_DW->aug_omega_mag_not_empty = true;
    }

    memcpy(&est_estimator_B->Switch1[0], &est_estimator_B->Assignment[0],
           (uint32_T)(13689U * sizeof(real32_T)));
    rtb_Merge2 = rtb_BusAssignment_a;

    //  Constants/variables I'll need later
    //  Augment flag
    //  [MSB   Oldest_OF_Aug ... Newest_OF_Aug Valid_ML_Augment(LSB)]
    //  Mask off just the OF bits
    //  Extract out the bits associated with OF
    //  Shift all the OF bits 1 bit more significant
    //  Set the newest OF bit as valid
    //  Mask off the unused bits, remove rollover
    rtb_Merge2.aug_state_enum = (uint32_T)((uint32_T)((uint32_T)((uint32_T)
      ((uint32_T)(rtb_BusAssignment_a.aug_state_enum & 131070U) << 1U) | 2U) &
      131070U) | (uint32_T)((int32_T)(uint32_T)
      (rtb_BusAssignment_a.aug_state_enum & 1U) != 0));

    //  Restore the value of the ML aug bit
    // new_jf = bitset(bitshift(bitand(jf, bin2dec('111110')), 1), 2)
    //  Augment the state vector
    //  Ive arranged the state vector so it is:
    //  [IMU location, ML Camera Location, Newest OF Camera Location .... Oldest OF Camera Loc] 
    UnitDelay_DSTATE_aug_state_enum = (uint32_T)(16U - (uint32_T)
      est_estimator_U_VisionRegistration->cvs_optical_flow_pulse);
    if (UnitDelay_DSTATE_aug_state_enum > 16U) {
      UnitDelay_DSTATE_aug_state_enum = 0U;
    }

    numFeatures = (uint8_T)(int32_T)((int32_T)UnitDelay_DSTATE_aug_state_enum
      + 1);

    //  lowest number replaces most recent
    memset(&of_in_prange[0], 0, (uint32_T)(90U * sizeof(real_T)));
    num_augs = 1.0;
    for (num_original = 0; num_original < 15; num_original++) {
      if (num_augs == (real_T)numFeatures) {
        num_augs++;
      }

      kept_augmentations[num_original] = num_augs;
      br = (int32_T)((int32_T)(6 * num_original) + 1);
      nx = (int32_T)((int32_T)(1 + num_original) * 6);
      if (br > nx) {
        br = 1;
        nx = 0;
      }

      handrail_knowledge_dims = (int32_T)((int32_T)(nx - br) + 1);
      C_sizes_idx_1 = (int32_T)(nx - br);
      for (i = 0; i <= C_sizes_idx_1; i++) {
        f_data[i] = (int8_T)(int32_T)((int32_T)(int8_T)(int32_T)(br + i) - 1);
      }

      tmp_9 = (num_augs - 1.0) * 6.0 + 21.0;
      for (i = 0; i < 6; i++) {
        tmp_g[i] = (int8_T)(int32_T)(1 + i);
      }

      for (i = 0; i <= (int32_T)(handrail_knowledge_dims - 1); i++) {
        of_in_prange[(int32_T)f_data[i]] = tmp_9 + (real_T)tmp_g[i];
      }

      num_augs++;
    }

    for (i = 0; i < 4; i++) {
      for (b_m = 0; b_m < 15; b_m++) {
        rtb_Merge2_0[(int32_T)(b_m + (int32_T)(15 * i))] =
          rtb_Merge2.of_quat_ISS2cam[(int32_T)((int32_T)((int32_T)(i << 4) +
          (int32_T)kept_augmentations[b_m]) - 1)];
      }
    }

    for (i = 0; i < 4; i++) {
      for (b_m = 0; b_m < 15; b_m++) {
        rtb_Merge2.of_quat_ISS2cam[(int32_T)((int32_T)(b_m + (int32_T)(i << 4))
          + 1)] = rtb_Merge2_0[(int32_T)((int32_T)(15 * i) + b_m)];
      }

      // DataTypeConversion: '<S129>/Data Type Conversion1' incorporates:
      //   Constant: '<S129>/Constant2'
      //   Product: '<S131>/Product'

      rtb_VectorConcatenate_o[i] = (real_T)(((rtb_VectorConcatenate_m[(int32_T)
        (i + 4)] * est_estimator_P->tun_abp_q_body2navcam[1] +
        rtb_VectorConcatenate_m[i] * est_estimator_P->tun_abp_q_body2navcam[0])
        + rtb_VectorConcatenate_m[(int32_T)(i + 8)] *
        est_estimator_P->tun_abp_q_body2navcam[2]) + rtb_VectorConcatenate_m
        [(int32_T)(i + 12)] * est_estimator_P->tun_abp_q_body2navcam[3]);
      rtb_Merge2.of_quat_ISS2cam[(int32_T)(i << 4)] = (real32_T)
        rtb_VectorConcatenate_o[i];
    }

    // Product: '<S138>/Product' incorporates:
    //   Constant: '<S141>/Constant3'
    //   DataTypeConversion: '<S142>/Conversion'
    //   Gain: '<S141>/Gain'
    //   Gain: '<S141>/Gain1'
    //   Gain: '<S141>/Gain2'

    tmp_e[0] = (real32_T)est_estimator_P->Constant3_Value_l;
    tmp_e[1] = rtb_Product1[2];
    tmp_e[2] = est_estimator_P->Gain_Gain_f * rtb_Product1[1];
    tmp_e[3] = est_estimator_P->Gain1_Gain_k * rtb_Product1[2];
    tmp_e[4] = (real32_T)est_estimator_P->Constant3_Value_l;
    tmp_e[5] = rtb_Product1[0];
    tmp_e[6] = rtb_Product1[1];
    tmp_e[7] = est_estimator_P->Gain2_Gain_i * rtb_Product1[0];
    tmp_e[8] = (real32_T)est_estimator_P->Constant3_Value_l;

    // Math: '<S132>/Math Function' incorporates:
    //   Gain: '<S138>/Gain2'
    //   Math: '<S138>/Math Function1'
    //   Product: '<S138>/Product1'

    for (i = 0; i < 3; i++) {
      rtb_Product1_0[i] = rtb_Product1[0] * rtb_Product1[i];
      rtb_Product1_0[(int32_T)(i + 3)] = rtb_Product1[1] * rtb_Product1[i];
      rtb_Product1_0[(int32_T)(i + 6)] = rtb_Product1[2] * rtb_Product1[i];
    }

    // End of Math: '<S132>/Math Function'

    // Sum: '<S138>/Sum1' incorporates:
    //   Gain: '<S138>/Gain2'
    //   Product: '<S132>/Product'
    //   Product: '<S138>/Product'

    for (i = 0; i < 3; i++) {
      rtb_Assignment_n[(int32_T)(3 * i)] = (rtb_Assignment_b[i] - rtb_Switch1 *
        tmp_e[i]) + rtb_Product1_0[(int32_T)(3 * i)] *
        est_estimator_P->Gain2_Gain_p;
      rtb_Assignment_n[(int32_T)(1 + (int32_T)(3 * i))] = (rtb_Assignment_b
        [(int32_T)(i + 3)] - tmp_e[(int32_T)(i + 3)] * rtb_Switch1) +
        rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 1)] *
        est_estimator_P->Gain2_Gain_p;
      rtb_Assignment_n[(int32_T)(2 + (int32_T)(3 * i))] = (rtb_Assignment_b
        [(int32_T)(i + 6)] - tmp_e[(int32_T)(i + 6)] * rtb_Switch1) +
        rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 2)] *
        est_estimator_P->Gain2_Gain_p;
    }

    // End of Sum: '<S138>/Sum1'
    for (i = 0; i < 3; i++) {
      // MATLAB Function: '<S129>/MATLAB Function' incorporates:
      //   Constant: '<S129>/Constant1'
      //   DataTypeConversion: '<S129>/Data Type Conversion2'
      //   Gain: '<S129>/Gain'
      //   Product: '<S132>/Product'
      //   Sum: '<S129>/Add'
      //   Sum: '<S129>/Add1'

      UnitDelay_DSTATE_n_of_P_cam_ISS[(int32_T)(i << 4)] = ((rtb_Assignment_n
        [(int32_T)(i + 3)] * est_estimator_P->tun_abp_p_navcam_imu_est[1] +
        rtb_Assignment_n[i] * est_estimator_P->tun_abp_p_navcam_imu_est[0]) +
        rtb_Assignment_n[(int32_T)(i + 6)] *
        est_estimator_P->tun_abp_p_navcam_imu_est[2]) +
        (rtb_BusAssignment_a.P_EST_ISS_ISS[i] -
         est_estimator_P->tun_ase_ml_forward_projection_time *
         rtb_BusAssignment_a.V_B_ISS_ISS[i]);
      for (b_m = 0; b_m < 15; b_m++) {
        UnitDelay_DSTATE_n_of_P_cam_ISS[(int32_T)((int32_T)(b_m + (int32_T)(i <<
          4)) + 1)] = rtb_Merge2.of_P_cam_ISS_ISS[(int32_T)((int32_T)((int32_T)
          (i << 4) + (int32_T)kept_augmentations[b_m]) - 1)];
      }
    }

    // MATLAB Function: '<S129>/MATLAB Function'
    //  Augment velocities
    for (i = 0; i < 3; i++) {
      memcpy(&rtb_Merge2.of_P_cam_ISS_ISS[(int32_T)(i << 4)],
             &UnitDelay_DSTATE_n_of_P_cam_ISS[(int32_T)(i << 4)], (uint32_T)
             (sizeof(real32_T) << 4U));
      rtb_BusAssignment_h[(int32_T)(i << 4)] = rtb_BusAssignment_a.V_B_ISS_ISS[i];
      for (b_m = 0; b_m < 15; b_m++) {
        rtb_BusAssignment_h[(int32_T)((int32_T)(b_m + (int32_T)(i << 4)) + 1)] =
          est_estimator_DW->aug_velocity[(int32_T)((int32_T)((int32_T)(i << 4) +
          (int32_T)kept_augmentations[b_m]) - 1)];
      }
    }

    for (i = 0; i < 3; i++) {
      memcpy(&est_estimator_DW->aug_velocity[(int32_T)(i << 4)],
             &rtb_BusAssignment_h[(int32_T)(i << 4)], (uint32_T)(sizeof(real32_T)
              << 4U));
    }

    rtb_VectorConcatenate[0] = aimgbiekknohhdjm_norm
      (rtb_BusAssignment_a.V_B_ISS_ISS);
    for (i = 0; i < 15; i++) {
      rtb_VectorConcatenate[(int32_T)(i + 1)] =
        est_estimator_DW->aug_velocity_mag[(int32_T)((int32_T)
        kept_augmentations[i] - 1)];
    }

    memcpy(&est_estimator_DW->aug_velocity_mag[0], &rtb_VectorConcatenate[0],
           (uint32_T)(sizeof(real32_T) << 4U));
    for (i = 0; i < 3; i++) {
      UnitDelay_DSTATE_n_of_P_cam_ISS[(int32_T)(i << 4)] =
        rtb_BusAssignment_a.omega_B_ISS_B[i];
      for (b_m = 0; b_m < 15; b_m++) {
        UnitDelay_DSTATE_n_of_P_cam_ISS[(int32_T)((int32_T)(b_m + (int32_T)(i <<
          4)) + 1)] = est_estimator_DW->aug_omega[(int32_T)((int32_T)((int32_T)
          (i << 4) + (int32_T)kept_augmentations[b_m]) - 1)];
      }
    }

    for (i = 0; i < 3; i++) {
      memcpy(&est_estimator_DW->aug_omega[(int32_T)(i << 4)],
             &UnitDelay_DSTATE_n_of_P_cam_ISS[(int32_T)(i << 4)], (uint32_T)
             (sizeof(real32_T) << 4U));
    }

    rtb_VectorConcatenate[0] = aimgbiekknohhdjm_norm
      (rtb_BusAssignment_a.omega_B_ISS_B);
    for (i = 0; i < 15; i++) {
      rtb_VectorConcatenate[(int32_T)(i + 1)] = est_estimator_DW->aug_omega_mag
        [(int32_T)((int32_T)kept_augmentations[i] - 1)];
    }

    memcpy(&est_estimator_DW->aug_omega_mag[0], &rtb_VectorConcatenate[0],
           (uint32_T)(sizeof(real32_T) << 4U));

    //  Augmenting the covariance matrix
    //  Move covariances down the stack:
    //  P = [A B C] then P+1 = [A 0 B]
    //      [D E F]            [0 0 0]
    //      [G H J]            [D 0 E]
    //  Section D
    for (i = 0; i < 21; i++) {
      for (b_m = 0; b_m < 90; b_m++) {
        est_estimator_B->Switch1[(int32_T)((int32_T)(b_m + (int32_T)(117 * i)) +
          27)] = est_estimator_B->Assignment[(int32_T)((int32_T)((int32_T)(117 *
          i) + (int32_T)of_in_prange[b_m]) - 1)];
      }
    }

    //  Section B
    for (i = 0; i < 90; i++) {
      for (b_m = 0; b_m < 21; b_m++) {
        est_estimator_B->Switch1_c[(int32_T)(b_m + (int32_T)(21 * i))] =
          est_estimator_B->Switch1[(int32_T)((int32_T)((int32_T)((int32_T)
          of_in_prange[i] - 1) * 117) + b_m)];
      }
    }

    for (i = 0; i < 90; i++) {
      memcpy(&est_estimator_B->Switch1[(int32_T)((int32_T)(i * 117) + 3159)],
             &est_estimator_B->Switch1_c[(int32_T)(i * 21)], (uint32_T)(21U *
              sizeof(real32_T)));
    }

    //  Section E
    for (i = 0; i < 90; i++) {
      for (b_m = 0; b_m < 90; b_m++) {
        est_estimator_B->Switch1_k[(int32_T)(b_m + (int32_T)(90 * i))] =
          est_estimator_B->Switch1[(int32_T)((int32_T)((int32_T)((int32_T)
          ((int32_T)of_in_prange[i] - 1) * 117) + (int32_T)of_in_prange[b_m]) -
          1)];
      }
    }

    for (i = 0; i < 90; i++) {
      memcpy(&est_estimator_B->Switch1[(int32_T)((int32_T)(i * 117) + 3186)],
             &est_estimator_B->Switch1_k[(int32_T)(i * 90)], (uint32_T)(90U *
              sizeof(real32_T)));
    }

    //  Now actually place an augmentation of IMU into OF
    //  M here is actually just the left part of J as defined in equation 24 in the 
    //  Visinav paper by Mourikis '09 + space for the ML augmentation.
    fkfcbaiengdjgdje_quaternion_to_rotation(rtb_BusAssignment_a.quat_ISS2B,
      rtb_Product1_0);

    //  Copyright (c) 2017, United States Government, as represented by the
    //  Administrator of the National Aeronautics and Space Administration.
    //
    //  All rights reserved.
    //
    //  The Astrobee platform is licensed under the Apache License, Version 2.0
    //  (the "License"); you may not use this file except in compliance with the 
    //  License. You may obtain a copy of the License at
    //
    //      http://www.apache.org/licenses/LICENSE-2.0
    //
    //  Unless required by applicable law or agreed to in writing, software
    //  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT 
    //  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the 
    //  License for the specific language governing permissions and limitations
    //  under the License.
    //  construct swew matrix from a vector
    //  From Zack and Brian's ekf.m  Used as a nested function in the optical
    //  flow update
    fkfcbaiengdjgdje_quaternion_to_rotation
      (est_estimator_P->tun_abp_q_body2navcam, rtb_Assignment_o);
    for (i = 0; i < 3; i++) {
      M[(int32_T)(6 * i)] = rtb_Assignment_o[(int32_T)(3 * i)];
      M[(int32_T)(1 + (int32_T)(6 * i))] = rtb_Assignment_o[(int32_T)((int32_T)
        (3 * i) + 1)];
      M[(int32_T)(2 + (int32_T)(6 * i))] = rtb_Assignment_o[(int32_T)((int32_T)
        (3 * i) + 2)];
      rtb_Add_e[i] = rtb_Product1_0[(int32_T)((int32_T)(3 * i) + 2)] *
        est_estimator_P->tun_abp_p_navcam_imu_est[2] + (rtb_Product1_0[(int32_T)
        ((int32_T)(3 * i) + 1)] * est_estimator_P->tun_abp_p_navcam_imu_est[1] +
        rtb_Product1_0[(int32_T)(3 * i)] *
        est_estimator_P->tun_abp_p_navcam_imu_est[0]);
    }

    for (i = 0; i < 12; i++) {
      M[(int32_T)(6 * (int32_T)(i + 3))] = 0.0F;
      M[(int32_T)(1 + (int32_T)(6 * (int32_T)(i + 3)))] = 0.0F;
      M[(int32_T)(2 + (int32_T)(6 * (int32_T)(i + 3)))] = 0.0F;
    }

    for (i = 0; i < 6; i++) {
      M[(int32_T)(6 * (int32_T)(i + 15))] = 0.0F;
      M[(int32_T)(1 + (int32_T)(6 * (int32_T)(i + 15)))] = 0.0F;
      M[(int32_T)(2 + (int32_T)(6 * (int32_T)(i + 15)))] = 0.0F;
    }

    M[3] = 0.0F;
    M[9] = -rtb_Add_e[2];
    M[15] = rtb_Add_e[1];
    M[4] = rtb_Add_e[2];
    M[10] = 0.0F;
    M[16] = -rtb_Add_e[0];
    M[5] = -rtb_Add_e[1];
    M[11] = rtb_Add_e[0];
    M[17] = 0.0F;
    for (i = 0; i < 9; i++) {
      M[(int32_T)(3 + (int32_T)(6 * (int32_T)(i + 3)))] = 0.0F;
      M[(int32_T)(4 + (int32_T)(6 * (int32_T)(i + 3)))] = 0.0F;
      M[(int32_T)(5 + (int32_T)(6 * (int32_T)(i + 3)))] = 0.0F;
    }

    for (i = 0; i < 3; i++) {
      M[(int32_T)(3 + (int32_T)(6 * (int32_T)(i + 12)))] = (real32_T)g[(int32_T)
        (3 * i)];
      M[(int32_T)(4 + (int32_T)(6 * (int32_T)(i + 12)))] = (real32_T)g[(int32_T)
        ((int32_T)(3 * i) + 1)];
      M[(int32_T)(5 + (int32_T)(6 * (int32_T)(i + 12)))] = (real32_T)g[(int32_T)
        ((int32_T)(3 * i) + 2)];
    }

    for (i = 0; i < 6; i++) {
      M[(int32_T)(3 + (int32_T)(6 * (int32_T)(i + 15)))] = 0.0F;
      M[(int32_T)(4 + (int32_T)(6 * (int32_T)(i + 15)))] = 0.0F;
      M[(int32_T)(5 + (int32_T)(6 * (int32_T)(i + 15)))] = 0.0F;
    }

    //    J = [eye(21, size(P, 2)); M zeros(6, size(P, 2) - size(M, 2)); zeros(size(P, 1) - 27, 27) eye(size(P, 1) - 27, size(P, 2) - 27)]; 
    //    P = J * P * J';
    //  P = [A 0 C] then P+1 = [A  AMt  C ]
    //      [0 0 0]            [MA MAMt MC]
    //      [G 0 J]            [G  GMt  J ]
    //  Center section
    //  Top left sections
    for (i = 0; i < 6; i++) {
      for (b_m = 0; b_m < 21; b_m++) {
        M_0[(int32_T)(i + (int32_T)(6 * b_m))] = 0.0F;
        for (i_0 = 0; i_0 < 21; i_0++) {
          M_0[(int32_T)(i + (int32_T)(6 * b_m))] += M[(int32_T)((int32_T)(6 *
            i_0) + i)] * est_estimator_B->Switch1[(int32_T)((int32_T)(117 * b_m)
            + i_0)];
        }
      }

      for (b_m = 0; b_m < 6; b_m++) {
        est_estimator_B->Switch1[(int32_T)((int32_T)(i + (int32_T)(117 *
          (int32_T)(21 + b_m))) + 21)] = 0.0F;
        for (i_0 = 0; i_0 < 21; i_0++) {
          est_estimator_B->Switch1[(int32_T)((int32_T)(i + (int32_T)(117 *
            (int32_T)(21 + b_m))) + 21)] = est_estimator_B->Switch1[(int32_T)
            ((int32_T)((int32_T)((int32_T)(21 + b_m) * 117) + i) + 21)] + M_0
            [(int32_T)((int32_T)(6 * i_0) + i)] * M[(int32_T)((int32_T)(6 * i_0)
            + b_m)];
        }
      }

      for (b_m = 0; b_m < 21; b_m++) {
        M_1[(int32_T)(i + (int32_T)(6 * b_m))] = 0.0F;
        for (i_0 = 0; i_0 < 21; i_0++) {
          M_1[(int32_T)(i + (int32_T)(6 * b_m))] += M[(int32_T)((int32_T)(6 *
            i_0) + i)] * est_estimator_B->Switch1[(int32_T)((int32_T)(117 * b_m)
            + i_0)];
        }
      }
    }

    for (i = 0; i < 21; i++) {
      for (b_m = 0; b_m < 6; b_m++) {
        est_estimator_B->Switch1[(int32_T)((int32_T)(b_m + (int32_T)(117 * i)) +
          21)] = M_1[(int32_T)((int32_T)(6 * i) + b_m)];
      }
    }

    for (i = 0; i < 6; i++) {
      for (b_m = 0; b_m < 21; b_m++) {
        M_0[(int32_T)(b_m + (int32_T)(21 * i))] = est_estimator_B->Switch1
          [(int32_T)((int32_T)((int32_T)(117 * b_m) + i) + 21)];
      }
    }

    for (i = 0; i < 6; i++) {
      memcpy(&est_estimator_B->Switch1[(int32_T)((int32_T)(i * 117) + 2457)],
             &M_0[(int32_T)(i * 21)], (uint32_T)(21U * sizeof(real32_T)));
    }

    //  Bottom right sections
    for (i = 0; i < 6; i++) {
      for (b_m = 0; b_m < 90; b_m++) {
        M_2[(int32_T)(i + (int32_T)(6 * b_m))] = 0.0F;
        for (i_0 = 0; i_0 < 21; i_0++) {
          M_2[(int32_T)(i + (int32_T)(6 * b_m))] += est_estimator_B->Switch1
            [(int32_T)((int32_T)((int32_T)(27 + b_m) * 117) + i_0)] * M[(int32_T)
            ((int32_T)(6 * i_0) + i)];
        }
      }
    }

    for (i = 0; i < 90; i++) {
      for (b_m = 0; b_m < 6; b_m++) {
        est_estimator_B->Switch1[(int32_T)((int32_T)(b_m + (int32_T)(117 *
          (int32_T)(27 + i))) + 21)] = M_2[(int32_T)((int32_T)(6 * i) + b_m)];
      }
    }

    for (i = 0; i < 6; i++) {
      for (b_m = 0; b_m < 90; b_m++) {
        M_2[(int32_T)(b_m + (int32_T)(90 * i))] = est_estimator_B->Switch1
          [(int32_T)((int32_T)((int32_T)((int32_T)(27 + b_m) * 117) + i) + 21)];
      }
    }

    for (i = 0; i < 6; i++) {
      memcpy(&est_estimator_B->Switch1[(int32_T)((int32_T)(i * 117) + 2484)],
             &M_2[(int32_T)(i * 90)], (uint32_T)(90U * sizeof(real32_T)));
    }

    // SignalConversion: '<S129>/Signal Conversion1'
    // '<S130>:1:5'
    rtb_ml_vel_aug[0] = ml_vel_aug[0];

    // SignalConversion: '<S129>/Signal Conversion1'
    rtb_ml_omega_aug[0] = ml_omega_aug[0];

    // SignalConversion: '<S129>/Signal Conversion1'
    rtb_ml_vel_aug[1] = ml_vel_aug[1];

    // SignalConversion: '<S129>/Signal Conversion1'
    rtb_ml_omega_aug[1] = ml_omega_aug[1];

    // SignalConversion: '<S129>/Signal Conversion1'
    rtb_ml_vel_aug[2] = ml_vel_aug[2];

    // SignalConversion: '<S129>/Signal Conversion1'
    rtb_ml_omega_aug[2] = ml_omega_aug[2];
    for (i = 0; i < 48; i++) {
      // SignalConversion: '<S129>/Signal Conversion1' incorporates:
      //   MATLAB Function: '<S129>/MATLAB Function'

      rtb_of_vel_aug[i] = (real_T)est_estimator_DW->aug_velocity[i];

      // SignalConversion: '<S129>/Signal Conversion1' incorporates:
      //   MATLAB Function: '<S129>/MATLAB Function'

      rtb_of_omega_aug[i] = (real_T)est_estimator_DW->aug_omega[i];
    }

    // End of Outputs for SubSystem: '<S125>/If Action Subsystem2'
  } else {
    // Outputs for IfAction SubSystem: '<S125>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S128>/Action Port'

    est_estimato_IfActionSubsystem1(&rtb_BusAssignment_a,
      est_estimator_B->Assignment, ml_vel_aug, ml_omega_aug, of_vel_aug,
      of_omega_aug, &rtb_Merge2, est_estimator_B->Switch1, rtb_ml_vel_aug,
      rtb_ml_omega_aug, rtb_of_vel_aug, rtb_of_omega_aug);

    // End of Outputs for SubSystem: '<S125>/If Action Subsystem1'
  }

  // End of If: '<S125>/If'

  // Sqrt: '<S5>/Sqrt' incorporates:
  //   Math: '<S5>/Math Function'
  //   SignalConversion: '<S5>/TmpSignal ConversionAtMath FunctionInport1'
  //   Sum: '<S5>/Sum of Elements'

  rtb_Switch1 = (real32_T)sqrt((real_T)((est_estimator_B->Switch1[1416] *
    est_estimator_B->Switch1[1416] + est_estimator_B->Switch1[1534] *
    est_estimator_B->Switch1[1534]) + est_estimator_B->Switch1[1652] *
    est_estimator_B->Switch1[1652]));

  // Switch: '<S5>/Switch2' incorporates:
  //   Constant: '<S5>/Constant2'
  //   Constant: '<S5>/Constant3'
  //   S-Function (sfix_bitop): '<S5>/Bitwise Operator'
  //   Sum: '<S5>/Sum'
  //   UnitDelay: '<S5>/Unit Delay'

  if ((int32_T)((int32_T)rtb_Merge2.kfl_status & (int32_T)
                est_estimator_P->BitwiseOperator_BitMask_l) != 0) {
    num_augs = est_estimator_P->Constant2_Value_h;
  } else {
    num_augs = est_estimator_DW->UnitDelay_DSTATE_j +
      est_estimator_P->Constant3_Value_p3;
  }

  // End of Switch: '<S5>/Switch2'

  // Saturate: '<S5>/Saturation'
  if (num_augs > (real_T)est_estimator_P->tun_ase_acquired_ticks) {
    num_augs = (real_T)est_estimator_P->tun_ase_acquired_ticks;
  } else {
    if (num_augs < est_estimator_P->Saturation_LowerSat) {
      num_augs = est_estimator_P->Saturation_LowerSat;
    }
  }

  // End of Saturate: '<S5>/Saturation'

  // RelationalOperator: '<S86>/Compare' incorporates:
  //   Constant: '<S86>/Constant'

  rtb_Compare = (num_augs >= (real_T)est_estimator_P->tun_ase_acquired_ticks);

  // Switch: '<S5>/Switch1' incorporates:
  //   Constant: '<S5>/Constant1'
  //   Constant: '<S81>/Constant'
  //   Constant: '<S82>/Constant'
  //   Constant: '<S83>/Constant'
  //   Constant: '<S84>/Constant'
  //   Constant: '<S85>/Constant'
  //   Constant: '<S87>/Constant'
  //   Constant: '<S88>/Constant'
  //   Logic: '<S5>/Logical Operator'
  //   Logic: '<S5>/Logical Operator1'
  //   Logic: '<S5>/Logical Operator2'
  //   Logic: '<S5>/Logical Operator3'
  //   Logic: '<S5>/Logical Operator4'
  //   Logic: '<S5>/Logical Operator5'
  //   Logic: '<S5>/Logical Operator6'
  //   Logic: '<S5>/Logical Operator7'
  //   Logic: '<S5>/Logical Operator8'
  //   RelationalOperator: '<S5>/Relational Operator'
  //   RelationalOperator: '<S81>/Compare'
  //   RelationalOperator: '<S82>/Compare'
  //   RelationalOperator: '<S83>/Compare'
  //   RelationalOperator: '<S84>/Compare'
  //   RelationalOperator: '<S85>/Compare'
  //   RelationalOperator: '<S87>/Compare'
  //   RelationalOperator: '<S88>/Compare'
  //   Switch: '<S5>/Switch'
  //   Switch: '<S5>/Switch3'

  if ((rtb_Switch1 < est_estimator_P->tun_ase_converged_thresh) &&
      ((rtb_Merge2.confidence == est_estimator_P->ase_status_diverged) ||
       ((rtb_Merge2.confidence == est_estimator_P->ase_status_acquiring) &&
        (!rtb_Compare)))) {
    rtb_Switch_m = est_estimator_P->ase_status_converged;
  } else if (((rtb_Switch1 > est_estimator_P->tun_ase_diverged_thresh) ||
              (!((!rtIsNaNF(rtb_Switch1)) && (!rtIsInfF(rtb_Switch1))))) &&
             ((rtb_Merge2.confidence == est_estimator_P->ase_status_converged) ||
              (rtb_Merge2.confidence == est_estimator_P->ase_status_acquiring)))
  {
    // Switch: '<S5>/Switch' incorporates:
    //   Constant: '<S5>/Constant'

    rtb_Switch_m = est_estimator_P->ase_status_diverged;
  } else if ((rtb_Merge2.confidence == est_estimator_P->ase_status_converged) &&
             rtb_Compare) {
    // Switch: '<S5>/Switch3' incorporates:
    //   Constant: '<S5>/Constant4'
    //   Switch: '<S5>/Switch'

    rtb_Switch_m = est_estimator_P->ase_status_acquiring;
  } else {
    // Switch: '<S5>/Switch' incorporates:
    //   Switch: '<S5>/Switch3'

    rtb_Switch_m = rtb_Merge2.confidence;
  }

  // End of Switch: '<S5>/Switch1'

  // BusAssignment: '<S5>/Bus Assignment'
  UnitDelay_DSTATE_n_cov_diag[0] = est_estimator_B->Switch1[0];
  UnitDelay_DSTATE_n_cov_diag[1] = est_estimator_B->Switch1[118];
  UnitDelay_DSTATE_n_cov_diag[2] = est_estimator_B->Switch1[236];
  UnitDelay_DSTATE_n_cov_diag[3] = est_estimator_B->Switch1[354];
  UnitDelay_DSTATE_n_cov_diag[4] = est_estimator_B->Switch1[472];
  UnitDelay_DSTATE_n_cov_diag[5] = est_estimator_B->Switch1[590];
  UnitDelay_DSTATE_n_cov_diag[6] = est_estimator_B->Switch1[708];
  UnitDelay_DSTATE_n_cov_diag[7] = est_estimator_B->Switch1[826];
  UnitDelay_DSTATE_n_cov_diag[8] = est_estimator_B->Switch1[944];
  UnitDelay_DSTATE_n_cov_diag[9] = est_estimator_B->Switch1[1062];
  UnitDelay_DSTATE_n_cov_diag[10] = est_estimator_B->Switch1[1180];
  UnitDelay_DSTATE_n_cov_diag[11] = est_estimator_B->Switch1[1298];
  UnitDelay_DSTATE_n_cov_diag[12] = est_estimator_B->Switch1[1416];
  UnitDelay_DSTATE_n_cov_diag[13] = est_estimator_B->Switch1[1534];
  UnitDelay_DSTATE_n_cov_diag[14] = est_estimator_B->Switch1[1652];
  UnitDelay_DSTATE_n_cov_diag[15] = est_estimator_B->Switch1[1770];
  UnitDelay_DSTATE_n_cov_diag[16] = est_estimator_B->Switch1[1888];
  UnitDelay_DSTATE_n_cov_diag[17] = est_estimator_B->Switch1[2006];
  UnitDelay_DSTATE_n_cov_diag[18] = est_estimator_B->Switch1[2124];
  UnitDelay_DSTATE_n_cov_diag[19] = est_estimator_B->Switch1[2242];
  UnitDelay_DSTATE_n_cov_diag[20] = est_estimator_B->Switch1[2360];
  UnitDelay_DSTATE_n_cov_diag[21] = est_estimator_B->Switch1[2478];
  UnitDelay_DSTATE_n_cov_diag[22] = est_estimator_B->Switch1[2596];
  UnitDelay_DSTATE_n_cov_diag[23] = est_estimator_B->Switch1[2714];
  UnitDelay_DSTATE_n_cov_diag[24] = est_estimator_B->Switch1[2832];
  UnitDelay_DSTATE_n_cov_diag[25] = est_estimator_B->Switch1[2950];
  UnitDelay_DSTATE_n_cov_diag[26] = est_estimator_B->Switch1[3068];
  UnitDelay_DSTATE_n_cov_diag[27] = est_estimator_B->Switch1[3186];
  UnitDelay_DSTATE_n_cov_diag[28] = est_estimator_B->Switch1[3304];
  UnitDelay_DSTATE_n_cov_diag[29] = est_estimator_B->Switch1[3422];
  UnitDelay_DSTATE_n_cov_diag[30] = est_estimator_B->Switch1[3540];
  UnitDelay_DSTATE_n_cov_diag[31] = est_estimator_B->Switch1[3658];
  UnitDelay_DSTATE_n_cov_diag[32] = est_estimator_B->Switch1[3776];
  UnitDelay_DSTATE_n_cov_diag[33] = est_estimator_B->Switch1[3894];
  UnitDelay_DSTATE_n_cov_diag[34] = est_estimator_B->Switch1[4012];
  UnitDelay_DSTATE_n_cov_diag[35] = est_estimator_B->Switch1[4130];
  UnitDelay_DSTATE_n_cov_diag[36] = est_estimator_B->Switch1[4248];
  UnitDelay_DSTATE_n_cov_diag[37] = est_estimator_B->Switch1[4366];
  UnitDelay_DSTATE_n_cov_diag[38] = est_estimator_B->Switch1[4484];
  UnitDelay_DSTATE_n_cov_diag[39] = est_estimator_B->Switch1[4602];
  UnitDelay_DSTATE_n_cov_diag[40] = est_estimator_B->Switch1[4720];
  UnitDelay_DSTATE_n_cov_diag[41] = est_estimator_B->Switch1[4838];
  UnitDelay_DSTATE_n_cov_diag[42] = est_estimator_B->Switch1[4956];
  UnitDelay_DSTATE_n_cov_diag[43] = est_estimator_B->Switch1[5074];
  UnitDelay_DSTATE_n_cov_diag[44] = est_estimator_B->Switch1[5192];
  UnitDelay_DSTATE_n_cov_diag[45] = est_estimator_B->Switch1[5310];
  UnitDelay_DSTATE_n_cov_diag[46] = est_estimator_B->Switch1[5428];
  UnitDelay_DSTATE_n_cov_diag[47] = est_estimator_B->Switch1[5546];
  UnitDelay_DSTATE_n_cov_diag[48] = est_estimator_B->Switch1[5664];
  UnitDelay_DSTATE_n_cov_diag[49] = est_estimator_B->Switch1[5782];
  UnitDelay_DSTATE_n_cov_diag[50] = est_estimator_B->Switch1[5900];
  UnitDelay_DSTATE_n_cov_diag[51] = est_estimator_B->Switch1[6018];
  UnitDelay_DSTATE_n_cov_diag[52] = est_estimator_B->Switch1[6136];
  UnitDelay_DSTATE_n_cov_diag[53] = est_estimator_B->Switch1[6254];
  UnitDelay_DSTATE_n_cov_diag[54] = est_estimator_B->Switch1[6372];
  UnitDelay_DSTATE_n_cov_diag[55] = est_estimator_B->Switch1[6490];
  UnitDelay_DSTATE_n_cov_diag[56] = est_estimator_B->Switch1[6608];
  UnitDelay_DSTATE_n_cov_diag[57] = est_estimator_B->Switch1[6726];
  UnitDelay_DSTATE_n_cov_diag[58] = est_estimator_B->Switch1[6844];
  UnitDelay_DSTATE_n_cov_diag[59] = est_estimator_B->Switch1[6962];
  UnitDelay_DSTATE_n_cov_diag[60] = est_estimator_B->Switch1[7080];
  UnitDelay_DSTATE_n_cov_diag[61] = est_estimator_B->Switch1[7198];
  UnitDelay_DSTATE_n_cov_diag[62] = est_estimator_B->Switch1[7316];
  UnitDelay_DSTATE_n_cov_diag[63] = est_estimator_B->Switch1[7434];
  UnitDelay_DSTATE_n_cov_diag[64] = est_estimator_B->Switch1[7552];
  UnitDelay_DSTATE_n_cov_diag[65] = est_estimator_B->Switch1[7670];
  UnitDelay_DSTATE_n_cov_diag[66] = est_estimator_B->Switch1[7788];
  UnitDelay_DSTATE_n_cov_diag[67] = est_estimator_B->Switch1[7906];
  UnitDelay_DSTATE_n_cov_diag[68] = est_estimator_B->Switch1[8024];
  UnitDelay_DSTATE_n_cov_diag[69] = est_estimator_B->Switch1[8142];
  UnitDelay_DSTATE_n_cov_diag[70] = est_estimator_B->Switch1[8260];
  UnitDelay_DSTATE_n_cov_diag[71] = est_estimator_B->Switch1[8378];
  UnitDelay_DSTATE_n_cov_diag[72] = est_estimator_B->Switch1[8496];
  UnitDelay_DSTATE_n_cov_diag[73] = est_estimator_B->Switch1[8614];
  UnitDelay_DSTATE_n_cov_diag[74] = est_estimator_B->Switch1[8732];
  UnitDelay_DSTATE_n_cov_diag[75] = est_estimator_B->Switch1[8850];
  UnitDelay_DSTATE_n_cov_diag[76] = est_estimator_B->Switch1[8968];
  UnitDelay_DSTATE_n_cov_diag[77] = est_estimator_B->Switch1[9086];
  UnitDelay_DSTATE_n_cov_diag[78] = est_estimator_B->Switch1[9204];
  UnitDelay_DSTATE_n_cov_diag[79] = est_estimator_B->Switch1[9322];
  UnitDelay_DSTATE_n_cov_diag[80] = est_estimator_B->Switch1[9440];
  UnitDelay_DSTATE_n_cov_diag[81] = est_estimator_B->Switch1[9558];
  UnitDelay_DSTATE_n_cov_diag[82] = est_estimator_B->Switch1[9676];
  UnitDelay_DSTATE_n_cov_diag[83] = est_estimator_B->Switch1[9794];
  UnitDelay_DSTATE_n_cov_diag[84] = est_estimator_B->Switch1[9912];
  UnitDelay_DSTATE_n_cov_diag[85] = est_estimator_B->Switch1[10030];
  UnitDelay_DSTATE_n_cov_diag[86] = est_estimator_B->Switch1[10148];
  UnitDelay_DSTATE_n_cov_diag[87] = est_estimator_B->Switch1[10266];
  UnitDelay_DSTATE_n_cov_diag[88] = est_estimator_B->Switch1[10384];
  UnitDelay_DSTATE_n_cov_diag[89] = est_estimator_B->Switch1[10502];
  UnitDelay_DSTATE_n_cov_diag[90] = est_estimator_B->Switch1[10620];
  UnitDelay_DSTATE_n_cov_diag[91] = est_estimator_B->Switch1[10738];
  UnitDelay_DSTATE_n_cov_diag[92] = est_estimator_B->Switch1[10856];
  UnitDelay_DSTATE_n_cov_diag[93] = est_estimator_B->Switch1[10974];
  UnitDelay_DSTATE_n_cov_diag[94] = est_estimator_B->Switch1[11092];
  UnitDelay_DSTATE_n_cov_diag[95] = est_estimator_B->Switch1[11210];
  UnitDelay_DSTATE_n_cov_diag[96] = est_estimator_B->Switch1[11328];
  UnitDelay_DSTATE_n_cov_diag[97] = est_estimator_B->Switch1[11446];
  UnitDelay_DSTATE_n_cov_diag[98] = est_estimator_B->Switch1[11564];
  UnitDelay_DSTATE_n_cov_diag[99] = est_estimator_B->Switch1[11682];
  UnitDelay_DSTATE_n_cov_diag[100] = est_estimator_B->Switch1[11800];
  UnitDelay_DSTATE_n_cov_diag[101] = est_estimator_B->Switch1[11918];
  UnitDelay_DSTATE_n_cov_diag[102] = est_estimator_B->Switch1[12036];
  UnitDelay_DSTATE_n_cov_diag[103] = est_estimator_B->Switch1[12154];
  UnitDelay_DSTATE_n_cov_diag[104] = est_estimator_B->Switch1[12272];
  UnitDelay_DSTATE_n_cov_diag[105] = est_estimator_B->Switch1[12390];
  UnitDelay_DSTATE_n_cov_diag[106] = est_estimator_B->Switch1[12508];
  UnitDelay_DSTATE_n_cov_diag[107] = est_estimator_B->Switch1[12626];
  UnitDelay_DSTATE_n_cov_diag[108] = est_estimator_B->Switch1[12744];
  UnitDelay_DSTATE_n_cov_diag[109] = est_estimator_B->Switch1[12862];
  UnitDelay_DSTATE_n_cov_diag[110] = est_estimator_B->Switch1[12980];
  UnitDelay_DSTATE_n_cov_diag[111] = est_estimator_B->Switch1[13098];
  UnitDelay_DSTATE_n_cov_diag[112] = est_estimator_B->Switch1[13216];
  UnitDelay_DSTATE_n_cov_diag[113] = est_estimator_B->Switch1[13334];
  UnitDelay_DSTATE_n_cov_diag[114] = est_estimator_B->Switch1[13452];
  UnitDelay_DSTATE_n_cov_diag[115] = est_estimator_B->Switch1[13570];
  UnitDelay_DSTATE_n_cov_diag[116] = est_estimator_B->Switch1[13688];

  // Sum: '<S90>/Sum' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'
  //   Constant: '<S90>/Constant1'
  //   DataTypeConversion: '<S92>/Conversion'
  //   Gain: '<S90>/Gain'
  //   Math: '<S90>/Math Function'

  rtb_Switch1 = rtb_Merge2.quat_ISS2B[3] * rtb_Merge2.quat_ISS2B[3] *
    est_estimator_P->Gain_Gain_h3 - (real32_T)
    est_estimator_P->Constant1_Value_ec;

  // Assignment: '<S90>/Assignment' incorporates:
  //   Constant: '<S90>/Constant2'
  //   DataTypeConversion: '<S91>/Conversion'

  for (i = 0; i < 9; i++) {
    rtb_Assignment_b[i] = (real32_T)est_estimator_P->Constant2_Value_d[i];
  }

  rtb_Assignment_b[0] = rtb_Switch1;
  rtb_Assignment_b[4] = rtb_Switch1;
  rtb_Assignment_b[8] = rtb_Switch1;

  // End of Assignment: '<S90>/Assignment'

  // Gain: '<S90>/Gain1' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  rtb_Sum_k1 = est_estimator_P->Gain1_Gain_jb * rtb_Merge2.quat_ISS2B[3];

  // Product: '<S90>/Product' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'
  //   Constant: '<S93>/Constant3'
  //   DataTypeConversion: '<S94>/Conversion'
  //   Gain: '<S93>/Gain'
  //   Gain: '<S93>/Gain1'
  //   Gain: '<S93>/Gain2'

  tmp_f[0] = (real32_T)est_estimator_P->Constant3_Value_ol;
  tmp_f[1] = rtb_Merge2.quat_ISS2B[2];
  tmp_f[2] = est_estimator_P->Gain_Gain_j2 * rtb_Merge2.quat_ISS2B[1];
  tmp_f[3] = est_estimator_P->Gain1_Gain_jp * rtb_Merge2.quat_ISS2B[2];
  tmp_f[4] = (real32_T)est_estimator_P->Constant3_Value_ol;
  tmp_f[5] = rtb_Merge2.quat_ISS2B[0];
  tmp_f[6] = rtb_Merge2.quat_ISS2B[1];
  tmp_f[7] = est_estimator_P->Gain2_Gain_ko * rtb_Merge2.quat_ISS2B[0];
  tmp_f[8] = (real32_T)est_estimator_P->Constant3_Value_ol;

  // Math: '<S89>/Math Function' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'
  //   Gain: '<S90>/Gain2'
  //   Product: '<S90>/Product1'

  for (i = 0; i < 3; i++) {
    rtb_Merge2_1[i] = rtb_Merge2.quat_ISS2B[0] * rtb_Merge2.quat_ISS2B[i];
    rtb_Merge2_1[(int32_T)(i + 3)] = rtb_Merge2.quat_ISS2B[1] *
      rtb_Merge2.quat_ISS2B[i];
    rtb_Merge2_1[(int32_T)(i + 6)] = rtb_Merge2.quat_ISS2B[2] *
      rtb_Merge2.quat_ISS2B[i];
  }

  // End of Math: '<S89>/Math Function'

  // Sum: '<S90>/Sum1' incorporates:
  //   Gain: '<S90>/Gain2'
  //   Product: '<S89>/Product'
  //   Product: '<S90>/Product'

  for (i = 0; i < 3; i++) {
    rtb_Assignment_n[(int32_T)(3 * i)] = (rtb_Assignment_b[i] - rtb_Sum_k1 *
      tmp_f[i]) + rtb_Merge2_1[(int32_T)(3 * i)] *
      est_estimator_P->Gain2_Gain_a2;
    rtb_Assignment_n[(int32_T)(1 + (int32_T)(3 * i))] = (rtb_Assignment_b
      [(int32_T)(i + 3)] - tmp_f[(int32_T)(i + 3)] * rtb_Sum_k1) + rtb_Merge2_1
      [(int32_T)((int32_T)(3 * i) + 1)] * est_estimator_P->Gain2_Gain_a2;
    rtb_Assignment_n[(int32_T)(2 + (int32_T)(3 * i))] = (rtb_Assignment_b
      [(int32_T)(i + 6)] - tmp_f[(int32_T)(i + 6)] * rtb_Sum_k1) + rtb_Merge2_1
      [(int32_T)((int32_T)(3 * i) + 2)] * est_estimator_P->Gain2_Gain_a2;
  }

  // End of Sum: '<S90>/Sum1'
  for (i = 0; i < 3; i++) {
    // Sum: '<S5>/Sum1' incorporates:
    //   BusAssignment: '<S5>/Bus Assignment'
    //   Constant: '<S5>/Constant5'
    //   Product: '<S89>/Product'

    rtb_Sum1_k3[i] = rtb_Merge2.P_EST_ISS_ISS[i] - ((rtb_Assignment_n[(int32_T)
      (i + 3)] * est_estimator_P->tun_abp_p_imu_body_body[1] +
      rtb_Assignment_n[i] * est_estimator_P->tun_abp_p_imu_body_body[0]) +
      rtb_Assignment_n[(int32_T)(i + 6)] *
      est_estimator_P->tun_abp_p_imu_body_body[2]);

    // Update for UnitDelay: '<S2>/Unit Delay20'
    est_estimator_DW->UnitDelay20_DSTATE[i] = rtb_ml_vel_aug[i];

    // Update for UnitDelay: '<S2>/Unit Delay21'
    est_estimator_DW->UnitDelay21_DSTATE[i] = rtb_ml_omega_aug[i];
  }

  // Update for UnitDelay: '<S2>/Unit Delay22'
  memcpy(&est_estimator_DW->UnitDelay22_DSTATE[0], &rtb_of_vel_aug[0], (uint32_T)
         (48U * sizeof(real_T)));

  // Update for UnitDelay: '<S2>/Unit Delay23'
  memcpy(&est_estimator_DW->UnitDelay23_DSTATE[0], &rtb_of_omega_aug[0],
         (uint32_T)(48U * sizeof(real_T)));

  // Update for Delay: '<S2>/Delay'
  est_estimator_DW->icLoad = 0U;
  memcpy(&est_estimator_DW->Delay_DSTATE[0], &est_estimator_B->Switch1[0],
         (uint32_T)(13689U * sizeof(ase_cov_datatype)));

  // Update for UnitDelay: '<S2>/Unit Delay1' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay1_DSTATE[0] = rtb_Merge2.quat_ISS2B[0];
  est_estimator_DW->UnitDelay1_DSTATE[1] = rtb_Merge2.quat_ISS2B[1];
  est_estimator_DW->UnitDelay1_DSTATE[2] = rtb_Merge2.quat_ISS2B[2];
  est_estimator_DW->UnitDelay1_DSTATE[3] = rtb_Merge2.quat_ISS2B[3];

  // Update for UnitDelay: '<S2>/Unit Delay3' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay3_DSTATE[0] = rtb_Merge2.gyro_bias[0];

  // Update for UnitDelay: '<S2>/Unit Delay4' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay4_DSTATE[0] = rtb_Merge2.V_B_ISS_ISS[0];

  // Update for UnitDelay: '<S2>/Unit Delay6' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay6_DSTATE[0] = rtb_Merge2.accel_bias[0];

  // Update for UnitDelay: '<S2>/Unit Delay7' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment1'

  est_estimator_DW->UnitDelay7_DSTATE[0] = rtb_Sum1_k3[0];

  // Update for UnitDelay: '<S2>/Unit Delay3' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay3_DSTATE[1] = rtb_Merge2.gyro_bias[1];

  // Update for UnitDelay: '<S2>/Unit Delay4' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay4_DSTATE[1] = rtb_Merge2.V_B_ISS_ISS[1];

  // Update for UnitDelay: '<S2>/Unit Delay6' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay6_DSTATE[1] = rtb_Merge2.accel_bias[1];

  // Update for UnitDelay: '<S2>/Unit Delay7' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment1'

  est_estimator_DW->UnitDelay7_DSTATE[1] = rtb_Sum1_k3[1];

  // Update for UnitDelay: '<S2>/Unit Delay3' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay3_DSTATE[2] = rtb_Merge2.gyro_bias[2];

  // Update for UnitDelay: '<S2>/Unit Delay4' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay4_DSTATE[2] = rtb_Merge2.V_B_ISS_ISS[2];

  // Update for UnitDelay: '<S2>/Unit Delay6' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay6_DSTATE[2] = rtb_Merge2.accel_bias[2];

  // Update for UnitDelay: '<S2>/Unit Delay7' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment1'

  est_estimator_DW->UnitDelay7_DSTATE[2] = rtb_Sum1_k3[2];

  // Update for UnitDelay: '<S2>/Unit Delay8' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay8_DSTATE = rtb_Switch_m;

  // Update for UnitDelay: '<S2>/Unit Delay9' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay9_DSTATE = rtb_Merge2.aug_state_enum;

  // Update for UnitDelay: '<S2>/Unit Delay10' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay10_DSTATE[0] = rtb_Merge2.ml_quat_ISS2cam[0];
  est_estimator_DW->UnitDelay10_DSTATE[1] = rtb_Merge2.ml_quat_ISS2cam[1];
  est_estimator_DW->UnitDelay10_DSTATE[2] = rtb_Merge2.ml_quat_ISS2cam[2];
  est_estimator_DW->UnitDelay10_DSTATE[3] = rtb_Merge2.ml_quat_ISS2cam[3];

  // Update for UnitDelay: '<S2>/Unit Delay11' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay11_DSTATE[0] = rtb_Merge2.ml_P_cam_ISS_ISS[0];
  est_estimator_DW->UnitDelay11_DSTATE[1] = rtb_Merge2.ml_P_cam_ISS_ISS[1];
  est_estimator_DW->UnitDelay11_DSTATE[2] = rtb_Merge2.ml_P_cam_ISS_ISS[2];

  // Update for UnitDelay: '<S2>/Unit Delay12' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  memcpy(&est_estimator_DW->UnitDelay12_DSTATE[0], &rtb_Merge2.of_quat_ISS2cam[0],
         (uint32_T)(sizeof(real32_T) << 6U));

  // Update for UnitDelay: '<S2>/Unit Delay13' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  memcpy(&est_estimator_DW->UnitDelay13_DSTATE[0], &rtb_Merge2.of_P_cam_ISS_ISS
         [0], (uint32_T)(48U * sizeof(real32_T)));

  // Update for UnitDelay: '<S2>/Unit Delay14' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment1'

  memcpy(&est_estimator_DW->UnitDelay14_DSTATE[0], &UnitDelay_DSTATE_n_cov_diag
         [0], (uint32_T)(117U * sizeof(ase_cov_datatype)));

  // Update for UnitDelay: '<S2>/Unit Delay15' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay15_DSTATE = rtb_Merge2.kfl_status;

  // Update for UnitDelay: '<S2>/Unit Delay16' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay16_DSTATE = rtb_Merge2.update_OF_tracks_cnt;

  // Update for UnitDelay: '<S2>/Unit Delay17' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay17_DSTATE = rtb_Merge2.update_ML_features_cnt;

  // Update for UnitDelay: '<S2>/Unit Delay18' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  memcpy(&est_estimator_DW->UnitDelay18_DSTATE[0],
         &rtb_Merge2.of_mahal_distance[0], (uint32_T)(50U * sizeof(real_T)));

  // Update for UnitDelay: '<S2>/Unit Delay19' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  memcpy(&est_estimator_DW->UnitDelay19_DSTATE[0],
         &rtb_Merge2.ml_mahal_distance[0], (uint32_T)(50U * sizeof(real_T)));

  // Update for UnitDelay: '<S2>/Unit Delay24' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay24_DSTATE[0] = rtb_Merge2.hr_P_hr_ISS_ISS[0];
  est_estimator_DW->UnitDelay24_DSTATE[1] = rtb_Merge2.hr_P_hr_ISS_ISS[1];
  est_estimator_DW->UnitDelay24_DSTATE[2] = rtb_Merge2.hr_P_hr_ISS_ISS[2];

  // Update for UnitDelay: '<S2>/Unit Delay25' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay25_DSTATE[0] = rtb_Merge2.hr_quat_ISS2hr[0];
  est_estimator_DW->UnitDelay25_DSTATE[1] = rtb_Merge2.hr_quat_ISS2hr[1];
  est_estimator_DW->UnitDelay25_DSTATE[2] = rtb_Merge2.hr_quat_ISS2hr[2];
  est_estimator_DW->UnitDelay25_DSTATE[3] = rtb_Merge2.hr_quat_ISS2hr[3];

  // Update for UnitDelay: '<S2>/Unit Delay26' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'

  est_estimator_DW->UnitDelay26_DSTATE[0] = rtb_Merge2.P_EST_ISS_ISS[0];
  est_estimator_DW->UnitDelay26_DSTATE[1] = rtb_Merge2.P_EST_ISS_ISS[1];
  est_estimator_DW->UnitDelay26_DSTATE[2] = rtb_Merge2.P_EST_ISS_ISS[2];

  // Update for UnitDelay: '<S75>/Delay Input1' incorporates:
  //   Update for Inport: '<Root>/handrail_msg'

  est_estimator_DW->DelayInput1_DSTATE =
    est_estimator_U_handrail_msg->cvs_timestamp_sec;

  // Update for UnitDelay: '<S76>/Delay Input1' incorporates:
  //   Update for Inport: '<Root>/handrail_msg'

  est_estimator_DW->DelayInput1_DSTATE_h =
    est_estimator_U_handrail_msg->cvs_timestamp_nsec;

  // Update for UnitDelay: '<S69>/Delay Input1' incorporates:
  //   Inport: '<Root>/cmc_msg'
  //   SignalConversion: '<S1>/Signal Conversion'

  est_estimator_DW->DelayInput1_DSTATE_k =
    est_estimator_U_cmc_msg_o->localization_mode_cmd;

  // Update for UnitDelay: '<S77>/Delay Input1' incorporates:
  //   Update for Inport: '<Root>/landmark_msg'

  est_estimator_DW->DelayInput1_DSTATE_o =
    est_estimator_U_landmark_msg->cvs_timestamp_sec;

  // Update for UnitDelay: '<S78>/Delay Input1' incorporates:
  //   Update for Inport: '<Root>/landmark_msg'

  est_estimator_DW->DelayInput1_DSTATE_n =
    est_estimator_U_landmark_msg->cvs_timestamp_nsec;

  // Update for UnitDelay: '<S79>/Delay Input1' incorporates:
  //   Update for Inport: '<Root>/optical_flow_msg'

  est_estimator_DW->DelayInput1_DSTATE_b =
    est_estimator_U_cvs_optical_flow_msg_n->cvs_timestamp_sec;

  // Update for UnitDelay: '<S80>/Delay Input1' incorporates:
  //   Update for Inport: '<Root>/optical_flow_msg'

  est_estimator_DW->DelayInput1_DSTATE_d =
    est_estimator_U_cvs_optical_flow_msg_n->cvs_timestamp_nsec;

  // Update for UnitDelay: '<S5>/Unit Delay'
  est_estimator_DW->UnitDelay_DSTATE_j = num_augs;

  // Outport: '<Root>/kfl_msg' incorporates:
  //   BusAssignment: '<S5>/Bus Assignment'
  //   BusAssignment: '<S5>/Bus Assignment1'

  est_estimator_Y_kfl_msg_h->quat_ISS2B[0] = rtb_Merge2.quat_ISS2B[0];
  est_estimator_Y_kfl_msg_h->quat_ISS2B[1] = rtb_Merge2.quat_ISS2B[1];
  est_estimator_Y_kfl_msg_h->quat_ISS2B[2] = rtb_Merge2.quat_ISS2B[2];
  est_estimator_Y_kfl_msg_h->quat_ISS2B[3] = rtb_Merge2.quat_ISS2B[3];
  est_estimator_Y_kfl_msg_h->omega_B_ISS_B[0] = rtb_Merge2.omega_B_ISS_B[0];
  est_estimator_Y_kfl_msg_h->gyro_bias[0] = rtb_Merge2.gyro_bias[0];
  est_estimator_Y_kfl_msg_h->V_B_ISS_ISS[0] = rtb_Merge2.V_B_ISS_ISS[0];
  est_estimator_Y_kfl_msg_h->A_B_ISS_ISS[0] = rtb_Merge2.A_B_ISS_ISS[0];
  est_estimator_Y_kfl_msg_h->accel_bias[0] = rtb_Merge2.accel_bias[0];
  est_estimator_Y_kfl_msg_h->P_B_ISS_ISS[0] = rtb_Sum1_k3[0];
  est_estimator_Y_kfl_msg_h->omega_B_ISS_B[1] = rtb_Merge2.omega_B_ISS_B[1];
  est_estimator_Y_kfl_msg_h->gyro_bias[1] = rtb_Merge2.gyro_bias[1];
  est_estimator_Y_kfl_msg_h->V_B_ISS_ISS[1] = rtb_Merge2.V_B_ISS_ISS[1];
  est_estimator_Y_kfl_msg_h->A_B_ISS_ISS[1] = rtb_Merge2.A_B_ISS_ISS[1];
  est_estimator_Y_kfl_msg_h->accel_bias[1] = rtb_Merge2.accel_bias[1];
  est_estimator_Y_kfl_msg_h->P_B_ISS_ISS[1] = rtb_Sum1_k3[1];
  est_estimator_Y_kfl_msg_h->omega_B_ISS_B[2] = rtb_Merge2.omega_B_ISS_B[2];
  est_estimator_Y_kfl_msg_h->gyro_bias[2] = rtb_Merge2.gyro_bias[2];
  est_estimator_Y_kfl_msg_h->V_B_ISS_ISS[2] = rtb_Merge2.V_B_ISS_ISS[2];
  est_estimator_Y_kfl_msg_h->A_B_ISS_ISS[2] = rtb_Merge2.A_B_ISS_ISS[2];
  est_estimator_Y_kfl_msg_h->accel_bias[2] = rtb_Merge2.accel_bias[2];
  est_estimator_Y_kfl_msg_h->P_B_ISS_ISS[2] = rtb_Sum1_k3[2];
  est_estimator_Y_kfl_msg_h->confidence = rtb_Switch_m;
  est_estimator_Y_kfl_msg_h->aug_state_enum = rtb_Merge2.aug_state_enum;
  est_estimator_Y_kfl_msg_h->ml_quat_ISS2cam[0] = rtb_Merge2.ml_quat_ISS2cam[0];
  est_estimator_Y_kfl_msg_h->ml_quat_ISS2cam[1] = rtb_Merge2.ml_quat_ISS2cam[1];
  est_estimator_Y_kfl_msg_h->ml_quat_ISS2cam[2] = rtb_Merge2.ml_quat_ISS2cam[2];
  est_estimator_Y_kfl_msg_h->ml_quat_ISS2cam[3] = rtb_Merge2.ml_quat_ISS2cam[3];
  est_estimator_Y_kfl_msg_h->ml_P_cam_ISS_ISS[0] = rtb_Merge2.ml_P_cam_ISS_ISS[0];
  est_estimator_Y_kfl_msg_h->ml_P_cam_ISS_ISS[1] = rtb_Merge2.ml_P_cam_ISS_ISS[1];
  est_estimator_Y_kfl_msg_h->ml_P_cam_ISS_ISS[2] = rtb_Merge2.ml_P_cam_ISS_ISS[2];
  memcpy(&est_estimator_Y_kfl_msg_h->of_quat_ISS2cam[0],
         &rtb_Merge2.of_quat_ISS2cam[0], (uint32_T)(sizeof(real32_T) << 6U));
  memcpy(&est_estimator_Y_kfl_msg_h->of_P_cam_ISS_ISS[0],
         &rtb_Merge2.of_P_cam_ISS_ISS[0], (uint32_T)(48U * sizeof(real32_T)));
  memcpy(&est_estimator_Y_kfl_msg_h->cov_diag[0], &UnitDelay_DSTATE_n_cov_diag[0],
         (uint32_T)(117U * sizeof(ase_cov_datatype)));
  est_estimator_Y_kfl_msg_h->kfl_status = rtb_Merge2.kfl_status;
  est_estimator_Y_kfl_msg_h->update_OF_tracks_cnt =
    rtb_Merge2.update_OF_tracks_cnt;
  est_estimator_Y_kfl_msg_h->update_ML_features_cnt =
    rtb_Merge2.update_ML_features_cnt;
  memcpy(&est_estimator_Y_kfl_msg_h->of_mahal_distance[0],
         &rtb_Merge2.of_mahal_distance[0], (uint32_T)(50U * sizeof(real_T)));
  memcpy(&est_estimator_Y_kfl_msg_h->ml_mahal_distance[0],
         &rtb_Merge2.ml_mahal_distance[0], (uint32_T)(50U * sizeof(real_T)));
  est_estimator_Y_kfl_msg_h->hr_P_hr_ISS_ISS[0] = rtb_Merge2.hr_P_hr_ISS_ISS[0];
  est_estimator_Y_kfl_msg_h->hr_P_hr_ISS_ISS[1] = rtb_Merge2.hr_P_hr_ISS_ISS[1];
  est_estimator_Y_kfl_msg_h->hr_P_hr_ISS_ISS[2] = rtb_Merge2.hr_P_hr_ISS_ISS[2];
  est_estimator_Y_kfl_msg_h->hr_quat_ISS2hr[0] = rtb_Merge2.hr_quat_ISS2hr[0];
  est_estimator_Y_kfl_msg_h->hr_quat_ISS2hr[1] = rtb_Merge2.hr_quat_ISS2hr[1];
  est_estimator_Y_kfl_msg_h->hr_quat_ISS2hr[2] = rtb_Merge2.hr_quat_ISS2hr[2];
  est_estimator_Y_kfl_msg_h->hr_quat_ISS2hr[3] = rtb_Merge2.hr_quat_ISS2hr[3];
  est_estimator_Y_kfl_msg_h->P_EST_ISS_ISS[0] = rtb_Merge2.P_EST_ISS_ISS[0];
  est_estimator_Y_kfl_msg_h->P_EST_ISS_ISS[1] = rtb_Merge2.P_EST_ISS_ISS[1];
  est_estimator_Y_kfl_msg_h->P_EST_ISS_ISS[2] = rtb_Merge2.P_EST_ISS_ISS[2];

  // End of Outputs for SubSystem: '<Root>/est_estimator'

  // Outport: '<Root>/P_out'
  memcpy(&est_estimator_Y_P_out[0], &est_estimator_B->Switch1[0], (uint32_T)
         (13689U * sizeof(ase_cov_datatype)));
}

// Model initialize function
void est_estimator_initialize(RT_MODEL_est_estimator_T *const est_estimator_M,
  cvs_landmark_msg *est_estimator_U_landmark_msg, cvs_registration_pulse
  *est_estimator_U_VisionRegistration, cvs_optical_flow_msg
  *est_estimator_U_cvs_optical_flow_msg_n, cvs_handrail_msg
  *est_estimator_U_handrail_msg, imu_msg *est_estimator_U_imu_msg_c, cmc_msg
  *est_estimator_U_cmc_msg_o, real32_T est_estimator_U_Q_ISS2B[4], kfl_msg
  *est_estimator_Y_kfl_msg_h, ase_cov_datatype est_estimator_Y_P_out[13689])
{
  P_est_estimator_T *est_estimator_P = ((P_est_estimator_T *)
    est_estimator_M->defaultParam);
  B_est_estimator_T *est_estimator_B = ((B_est_estimator_T *)
    est_estimator_M->blockIO);
  DW_est_estimator_T *est_estimator_DW = ((DW_est_estimator_T *)
    est_estimator_M->dwork);

  {
    // local scratch DWork variables
    int32_T ForEach_itr;
    int32_T ForEach_itr_g;
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/est_estimator'
    // Start for Iterator SubSystem: '<S41>/filter'
    for (ForEach_itr_g = 0; ForEach_itr_g < 3; ForEach_itr_g++) {
      est_estimator_DW->CoreSubsys[ForEach_itr_g].uHzLowPass_states = 0.0F;
      est_estimator_DW->CoreSubsys[ForEach_itr_g].DiscreteTransferFcn_states[0] =
        0.0F;
      est_estimator_DW->CoreSubsys[ForEach_itr_g].DiscreteTransferFcn_states[1] =
        0.0F;

      // Start for MATLAB Function: '<S46>/MATLAB Function1'
      est_estim_MATLABFunction1_Start(&est_estimator_B->CoreSubsys[ForEach_itr_g]
        .sf_MATLABFunction1);
    }

    // End of Start for SubSystem: '<S41>/filter'

    // Start for Iterator SubSystem: '<S41>/filter_with_HP_filter'
    for (ForEach_itr = 0; ForEach_itr < 3; ForEach_itr++) {
      est_estimator_DW->CoreSubsys_l[ForEach_itr].uHzLowPass_states = 0.0F;
      est_estimator_DW->CoreSubsys_l[ForEach_itr].DiscreteTransferFcn_states[0] =
        0.0F;
      est_estimator_DW->CoreSubsys_l[ForEach_itr].DiscreteTransferFcn_states[1] =
        0.0F;
      est_estimator_DW->CoreSubsys_l[ForEach_itr].HighPassFilter_states = 0.0F;

      // Start for MATLAB Function: '<S47>/MATLAB Function1'
      est_estim_MATLABFunction1_Start(&est_estimator_B->CoreSubsys_l[ForEach_itr]
        .sf_MATLABFunction1);
    }

    // End of Start for SubSystem: '<S41>/filter_with_HP_filter'
    // End of Start for SubSystem: '<Root>/est_estimator'

    // SystemInitialize for Atomic SubSystem: '<Root>/est_estimator'
    // InitializeConditions for UnitDelay: '<S2>/Unit Delay20'
    est_estimator_DW->UnitDelay20_DSTATE[0] =
      est_estimator_P->UnitDelay20_InitialCondition;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay21'
    est_estimator_DW->UnitDelay21_DSTATE[0] =
      est_estimator_P->UnitDelay21_InitialCondition;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay20'
    est_estimator_DW->UnitDelay20_DSTATE[1] =
      est_estimator_P->UnitDelay20_InitialCondition;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay21'
    est_estimator_DW->UnitDelay21_DSTATE[1] =
      est_estimator_P->UnitDelay21_InitialCondition;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay20'
    est_estimator_DW->UnitDelay20_DSTATE[2] =
      est_estimator_P->UnitDelay20_InitialCondition;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay21'
    est_estimator_DW->UnitDelay21_DSTATE[2] =
      est_estimator_P->UnitDelay21_InitialCondition;
    for (i = 0; i < 48; i++) {
      // InitializeConditions for UnitDelay: '<S2>/Unit Delay22'
      est_estimator_DW->UnitDelay22_DSTATE[i] =
        est_estimator_P->UnitDelay22_InitialCondition;

      // InitializeConditions for UnitDelay: '<S2>/Unit Delay23'
      est_estimator_DW->UnitDelay23_DSTATE[i] =
        est_estimator_P->UnitDelay23_InitialCondition;
    }

    // InitializeConditions for Delay: '<S2>/Delay'
    est_estimator_DW->icLoad = 1U;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay1'
    est_estimator_DW->UnitDelay1_DSTATE[0] =
      est_estimator_P->tun_ase_state_ic_quat_ISS2B[0];
    est_estimator_DW->UnitDelay1_DSTATE[1] =
      est_estimator_P->tun_ase_state_ic_quat_ISS2B[1];
    est_estimator_DW->UnitDelay1_DSTATE[2] =
      est_estimator_P->tun_ase_state_ic_quat_ISS2B[2];
    est_estimator_DW->UnitDelay1_DSTATE[3] =
      est_estimator_P->tun_ase_state_ic_quat_ISS2B[3];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay3'
    est_estimator_DW->UnitDelay3_DSTATE[0] =
      est_estimator_P->ase_state_ic_gyro_bias[0];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay4'
    est_estimator_DW->UnitDelay4_DSTATE[0] =
      est_estimator_P->tun_ase_state_ic_V_B_ISS_ISS[0];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay6'
    est_estimator_DW->UnitDelay6_DSTATE[0] =
      est_estimator_P->ase_state_ic_accel_bias[0];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay7'
    est_estimator_DW->UnitDelay7_DSTATE[0] =
      est_estimator_P->tun_ase_state_ic_P_B_ISS_ISS[0];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay3'
    est_estimator_DW->UnitDelay3_DSTATE[1] =
      est_estimator_P->ase_state_ic_gyro_bias[1];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay4'
    est_estimator_DW->UnitDelay4_DSTATE[1] =
      est_estimator_P->tun_ase_state_ic_V_B_ISS_ISS[1];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay6'
    est_estimator_DW->UnitDelay6_DSTATE[1] =
      est_estimator_P->ase_state_ic_accel_bias[1];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay7'
    est_estimator_DW->UnitDelay7_DSTATE[1] =
      est_estimator_P->tun_ase_state_ic_P_B_ISS_ISS[1];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay3'
    est_estimator_DW->UnitDelay3_DSTATE[2] =
      est_estimator_P->ase_state_ic_gyro_bias[2];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay4'
    est_estimator_DW->UnitDelay4_DSTATE[2] =
      est_estimator_P->tun_ase_state_ic_V_B_ISS_ISS[2];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay6'
    est_estimator_DW->UnitDelay6_DSTATE[2] =
      est_estimator_P->ase_state_ic_accel_bias[2];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay7'
    est_estimator_DW->UnitDelay7_DSTATE[2] =
      est_estimator_P->tun_ase_state_ic_P_B_ISS_ISS[2];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay8'
    est_estimator_DW->UnitDelay8_DSTATE =
      est_estimator_P->ase_state_ic_confidence;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay9'
    est_estimator_DW->UnitDelay9_DSTATE = (uint32_T)
      est_estimator_P->ase_state_ic_aug_state_enum;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay10'
    est_estimator_DW->UnitDelay10_DSTATE[0] =
      est_estimator_P->ase_state_ic_ml_quat_ISS2cam[0];
    est_estimator_DW->UnitDelay10_DSTATE[1] =
      est_estimator_P->ase_state_ic_ml_quat_ISS2cam[1];
    est_estimator_DW->UnitDelay10_DSTATE[2] =
      est_estimator_P->ase_state_ic_ml_quat_ISS2cam[2];
    est_estimator_DW->UnitDelay10_DSTATE[3] =
      est_estimator_P->ase_state_ic_ml_quat_ISS2cam[3];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay11'
    est_estimator_DW->UnitDelay11_DSTATE[0] =
      est_estimator_P->ase_state_ic_ml_P_cam_ISS_ISS[0];
    est_estimator_DW->UnitDelay11_DSTATE[1] =
      est_estimator_P->ase_state_ic_ml_P_cam_ISS_ISS[1];
    est_estimator_DW->UnitDelay11_DSTATE[2] =
      est_estimator_P->ase_state_ic_ml_P_cam_ISS_ISS[2];

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay12'
    memcpy(&est_estimator_DW->UnitDelay12_DSTATE[0],
           &est_estimator_P->ase_state_ic_of_quat_ISS2cam[0], (uint32_T)(sizeof
            (real32_T) << 6U));

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay13'
    memcpy(&est_estimator_DW->UnitDelay13_DSTATE[0],
           &est_estimator_P->ase_state_ic_of_P_cam_ISS_ISS[0], (uint32_T)(48U *
            sizeof(real32_T)));

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay14'
    memcpy(&est_estimator_DW->UnitDelay14_DSTATE[0],
           &est_estimator_P->ase_state_ic_cov_diag[0], (uint32_T)(117U * sizeof
            (ase_cov_datatype)));

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay15'
    est_estimator_DW->UnitDelay15_DSTATE = (uint16_T)
      est_estimator_P->ase_state_ic_status;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay16'
    est_estimator_DW->UnitDelay16_DSTATE =
      est_estimator_P->UnitDelay16_InitialCondition;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay17'
    est_estimator_DW->UnitDelay17_DSTATE =
      est_estimator_P->UnitDelay17_InitialCondition;
    for (i = 0; i < 50; i++) {
      // InitializeConditions for UnitDelay: '<S2>/Unit Delay18'
      est_estimator_DW->UnitDelay18_DSTATE[i] =
        est_estimator_P->UnitDelay18_InitialCondition;

      // InitializeConditions for UnitDelay: '<S2>/Unit Delay19'
      est_estimator_DW->UnitDelay19_DSTATE[i] =
        est_estimator_P->UnitDelay19_InitialCondition;
    }

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay24'
    est_estimator_DW->UnitDelay24_DSTATE[0] =
      est_estimator_P->UnitDelay24_InitialCondition;
    est_estimator_DW->UnitDelay24_DSTATE[1] =
      est_estimator_P->UnitDelay24_InitialCondition;
    est_estimator_DW->UnitDelay24_DSTATE[2] =
      est_estimator_P->UnitDelay24_InitialCondition;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay25'
    est_estimator_DW->UnitDelay25_DSTATE[0] =
      est_estimator_P->UnitDelay25_InitialCondition;
    est_estimator_DW->UnitDelay25_DSTATE[1] =
      est_estimator_P->UnitDelay25_InitialCondition;
    est_estimator_DW->UnitDelay25_DSTATE[2] =
      est_estimator_P->UnitDelay25_InitialCondition;
    est_estimator_DW->UnitDelay25_DSTATE[3] =
      est_estimator_P->UnitDelay25_InitialCondition;

    // InitializeConditions for UnitDelay: '<S2>/Unit Delay26'
    est_estimator_DW->UnitDelay26_DSTATE[0] =
      est_estimator_P->tun_ase_state_ic_P_EST_ISS_ISS[0];
    est_estimator_DW->UnitDelay26_DSTATE[1] =
      est_estimator_P->tun_ase_state_ic_P_EST_ISS_ISS[1];
    est_estimator_DW->UnitDelay26_DSTATE[2] =
      est_estimator_P->tun_ase_state_ic_P_EST_ISS_ISS[2];

    // InitializeConditions for UnitDelay: '<S75>/Delay Input1'
    est_estimator_DW->DelayInput1_DSTATE = est_estimator_P->DetectChange6_vinit;

    // InitializeConditions for UnitDelay: '<S76>/Delay Input1'
    est_estimator_DW->DelayInput1_DSTATE_h =
      est_estimator_P->DetectChange7_vinit;

    // InitializeConditions for UnitDelay: '<S69>/Delay Input1'
    est_estimator_DW->DelayInput1_DSTATE_k =
      est_estimator_P->DetectChange_vinit_i;

    // InitializeConditions for UnitDelay: '<S77>/Delay Input1'
    est_estimator_DW->DelayInput1_DSTATE_o = est_estimator_P->DetectChange_vinit;

    // InitializeConditions for UnitDelay: '<S78>/Delay Input1'
    est_estimator_DW->DelayInput1_DSTATE_n =
      est_estimator_P->DetectChange1_vinit;

    // InitializeConditions for UnitDelay: '<S79>/Delay Input1'
    est_estimator_DW->DelayInput1_DSTATE_b =
      est_estimator_P->DetectChange4_vinit;

    // InitializeConditions for UnitDelay: '<S80>/Delay Input1'
    est_estimator_DW->DelayInput1_DSTATE_d =
      est_estimator_P->DetectChange5_vinit;

    // InitializeConditions for UnitDelay: '<S5>/Unit Delay'
    est_estimator_DW->UnitDelay_DSTATE_j =
      est_estimator_P->UnitDelay_InitialCondition_h;

    // SystemInitialize for Iterator SubSystem: '<S41>/filter'
    for (ForEach_itr_g = 0; ForEach_itr_g < 3; ForEach_itr_g++) {
      // InitializeConditions for DiscreteTransferFcn: '<S46>/3 Hz Low Pass'
      est_estimator_DW->CoreSubsys[ForEach_itr_g].uHzLowPass_states =
        est_estimator_P->CoreSubsys.uHzLowPass_InitialStates;

      // InitializeConditions for DiscreteTransferFcn: '<S46>/Discrete Transfer Fcn' 
      est_estimator_DW->CoreSubsys[ForEach_itr_g].DiscreteTransferFcn_states[0] =
        est_estimator_P->CoreSubsys.DiscreteTransferFcn_InitialStat;
      est_estimator_DW->CoreSubsys[ForEach_itr_g].DiscreteTransferFcn_states[1] =
        est_estimator_P->CoreSubsys.DiscreteTransferFcn_InitialStat;

      // SystemInitialize for MATLAB Function: '<S46>/MATLAB Function1'
      est_estima_MATLABFunction1_Init(&est_estimator_DW->
        CoreSubsys[ForEach_itr_g].sf_MATLABFunction1);
    }

    // End of SystemInitialize for SubSystem: '<S41>/filter'

    // SystemInitialize for Iterator SubSystem: '<S41>/filter_with_HP_filter'
    for (ForEach_itr = 0; ForEach_itr < 3; ForEach_itr++) {
      // InitializeConditions for DiscreteTransferFcn: '<S47>/3 Hz Low Pass'
      est_estimator_DW->CoreSubsys_l[ForEach_itr].uHzLowPass_states =
        est_estimator_P->CoreSubsys_l.uHzLowPass_InitialStates;

      // InitializeConditions for DiscreteTransferFcn: '<S47>/Discrete Transfer Fcn' 
      est_estimator_DW->CoreSubsys_l[ForEach_itr].DiscreteTransferFcn_states[0] =
        est_estimator_P->CoreSubsys_l.DiscreteTransferFcn_InitialStat;
      est_estimator_DW->CoreSubsys_l[ForEach_itr].DiscreteTransferFcn_states[1] =
        est_estimator_P->CoreSubsys_l.DiscreteTransferFcn_InitialStat;

      // InitializeConditions for DiscreteTransferFcn: '<S47>/High Pass Filter'
      est_estimator_DW->CoreSubsys_l[ForEach_itr].HighPassFilter_states =
        est_estimator_P->CoreSubsys_l.HighPassFilter_InitialStates;

      // SystemInitialize for MATLAB Function: '<S47>/MATLAB Function1'
      est_estima_MATLABFunction1_Init(&est_estimator_DW->
        CoreSubsys_l[ForEach_itr].sf_MATLABFunction1);
    }

    // End of SystemInitialize for SubSystem: '<S41>/filter_with_HP_filter'

    // SystemInitialize for Enabled SubSystem: '<S11>/Enabled Row-Wise SUM'
    // SystemInitialize for Outport: '<S40>/Out1'
    for (i = 0; i < 50; i++) {
      est_estimator_B->SumofElements3[i] = est_estimator_P->Out1_Y0;
    }

    // End of SystemInitialize for Outport: '<S40>/Out1'
    // End of SystemInitialize for SubSystem: '<S11>/Enabled Row-Wise SUM'

    // SystemInitialize for IfAction SubSystem: '<S3>/Absolute_Update'
    // SystemInitialize for Iterator SubSystem: '<S8>/ML Update'
    // SystemInitialize for IfAction SubSystem: '<S13>/HR_Compute_Residual_and_H1' 
    // SystemInitialize for MATLAB Function: '<S16>/Compute Global positions of Handrail Features' 
    est_estimator_DW->hr_P_hr_ISS_ISS_pers_not_empty = false;
    est_estimator_DW->hr_quat_ISS2hr_pers_not_empty = false;

    // End of SystemInitialize for SubSystem: '<S13>/HR_Compute_Residual_and_H1' 

    // SystemInitialize for IfAction SubSystem: '<S13>/ML_Compute_Residual_and_H' 
    // SystemInitialize for MATLAB Function: '<S17>/Compute Residual and H'
    est_estimator_DW->num_consecutive_rejected_meas = 0.0;

    // End of SystemInitialize for SubSystem: '<S13>/ML_Compute_Residual_and_H'

    // SystemInitialize for Merge: '<S13>/Merge'
    for (i = 0; i < 6; i++) {
      est_estimator_B->r_out[i] = est_estimator_P->Merge_1_InitialOutput;
    }

    // End of SystemInitialize for Merge: '<S13>/Merge'

    // SystemInitialize for Merge: '<S13>/Merge'
    est_estimator_B->error_out = est_estimator_P->Merge_2_InitialOutput;

    // SystemInitialize for Merge: '<S13>/Merge'
    for (i = 0; i < 702; i++) {
      est_estimator_B->H_out[i] = est_estimator_P->Merge_3_InitialOutput;
    }

    // End of SystemInitialize for Merge: '<S13>/Merge'

    // SystemInitialize for Merge: '<S13>/Merge'
    for (i = 0; i < 36; i++) {
      est_estimator_B->R_mat[i] = est_estimator_P->Merge_4_InitialOutput;
    }

    // End of SystemInitialize for Merge: '<S13>/Merge'
    // End of SystemInitialize for SubSystem: '<S8>/ML Update'
    // End of SystemInitialize for SubSystem: '<S3>/Absolute_Update'

    // SystemInitialize for IfAction SubSystem: '<S125>/If Action Subsystem2'
    // SystemInitialize for MATLAB Function: '<S129>/MATLAB Function'
    est_estimator_DW->aug_velocity_not_empty = false;
    est_estimator_DW->aug_velocity_mag_not_empty = false;
    est_estimator_DW->aug_omega_not_empty = false;
    est_estimator_DW->aug_omega_mag_not_empty = false;

    // End of SystemInitialize for SubSystem: '<S125>/If Action Subsystem2'
    // End of SystemInitialize for SubSystem: '<Root>/est_estimator'
  }
}

// Model terminate function
void est_estimator_terminate(RT_MODEL_est_estimator_T * est_estimator_M)
{
  // model code
  rt_FREE(est_estimator_M->blockIO);
  if (est_estimator_M->paramIsMalloced) {
    rt_FREE(est_estimator_M->defaultParam);
  }

  rt_FREE(est_estimator_M->dwork);
  rt_FREE(est_estimator_M);
}

// Model data allocation function
RT_MODEL_est_estimator_T *est_estimator(cvs_landmark_msg
  *est_estimator_U_landmark_msg, cvs_registration_pulse
  *est_estimator_U_VisionRegistration, cvs_optical_flow_msg
  *est_estimator_U_cvs_optical_flow_msg_n, cvs_handrail_msg
  *est_estimator_U_handrail_msg, imu_msg *est_estimator_U_imu_msg_c, cmc_msg
  *est_estimator_U_cmc_msg_o, real32_T est_estimator_U_Q_ISS2B[4], kfl_msg
  *est_estimator_Y_kfl_msg_h, ase_cov_datatype est_estimator_Y_P_out[13689])
{
  RT_MODEL_est_estimator_T *est_estimator_M;
  est_estimator_M = (RT_MODEL_est_estimator_T *) malloc(sizeof
    (RT_MODEL_est_estimator_T));
  if (est_estimator_M == NULL) {
    return NULL;
  }

  (void) memset((char *)est_estimator_M, 0,
                sizeof(RT_MODEL_est_estimator_T));

  // block I/O
  {
    B_est_estimator_T *b = (B_est_estimator_T *) malloc(sizeof(B_est_estimator_T));
    rt_VALIDATE_MEMORY(est_estimator_M,b);
    est_estimator_M->blockIO = (b);
  }

  // parameters
  {
    P_est_estimator_T *p;
    static int_T pSeen = 0;

    // only malloc on multiple model instantiation
    if (pSeen == 1 ) {
      p = (P_est_estimator_T *) malloc(sizeof(P_est_estimator_T));
      rt_VALIDATE_MEMORY(est_estimator_M,p);
      (void) memcpy(p, &est_estimator_P,
                    sizeof(P_est_estimator_T));
      est_estimator_M->paramIsMalloced = (true);
    } else {
      p = &est_estimator_P;
      est_estimator_M->paramIsMalloced = (false);
      pSeen = 1;
    }

    est_estimator_M->defaultParam = (p);
  }

  // states (dwork)
  {
    DW_est_estimator_T *dwork = (DW_est_estimator_T *) malloc(sizeof
      (DW_est_estimator_T));
    rt_VALIDATE_MEMORY(est_estimator_M,dwork);
    est_estimator_M->dwork = (dwork);
  }

  {
    P_est_estimator_T *est_estimator_P = ((P_est_estimator_T *)
      est_estimator_M->defaultParam);
    B_est_estimator_T *est_estimator_B = ((B_est_estimator_T *)
      est_estimator_M->blockIO);
    DW_est_estimator_T *est_estimator_DW = ((DW_est_estimator_T *)
      est_estimator_M->dwork);

    // initialize non-finites
    rt_InitInfAndNaN(sizeof(real_T));

    // non-finite (run-time) assignments
    est_estimator_P->UnitDelay2_InitialCondition = rtInfF;
    est_estimator_P->UnitDelay2_InitialCondition_f = rtInfF;

    // block I/O
    (void) memset(((void *) est_estimator_B), 0,
                  sizeof(B_est_estimator_T));

    // states (dwork)
    (void) memset((void *)est_estimator_DW, 0,
                  sizeof(DW_est_estimator_T));

    // external inputs
    (void)memset(&est_estimator_U_Q_ISS2B[0], 0, sizeof(real32_T) << 2U);
    *est_estimator_U_landmark_msg = est_estimator_rtZcvs_landmark_m;
    *est_estimator_U_VisionRegistration = est_estimator_rtZcvs_registrati;
    *est_estimator_U_cvs_optical_flow_msg_n = est_estimator_rtZcvs_optical_fl;
    *est_estimator_U_handrail_msg = est_estimator_rtZcvs_handrail_m;
    *est_estimator_U_imu_msg_c = est_estimator_rtZimu_msg;
    *est_estimator_U_cmc_msg_o = est_estimator_rtZcmc_msg;

    // external outputs
    (*est_estimator_Y_kfl_msg_h) = est_estimator_rtZkfl_msg;
    (void) memset(&est_estimator_Y_P_out[0], 0,
                  13689U*sizeof(real32_T));
  }

  return est_estimator_M;
}

//
// File trailer for generated code.
//
// [EOF]
//
