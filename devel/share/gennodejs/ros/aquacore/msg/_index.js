
"use strict";

let PeriodicLegCommand = require('./PeriodicLegCommand.js');
let GPSFixList = require('./GPSFixList.js');
let Health = require('./Health.js');
let SurfaceTaskTypes = require('./SurfaceTaskTypes.js');
let AutopilotModes = require('./AutopilotModes.js');
let Velocity = require('./Velocity.js');
let Command = require('./Command.js');
let cuROSTityScore = require('./cuROSTityScore.js');
let StateMsg = require('./StateMsg.js');
let KeepAlive = require('./KeepAlive.js');
let GotoAction = require('./GotoAction.js');
let GotoActionGoal = require('./GotoActionGoal.js');
let ChangeDepthGoal = require('./ChangeDepthGoal.js');
let SwimForwardAction = require('./SwimForwardAction.js');
let GotoActionResult = require('./GotoActionResult.js');
let SwimForwardFeedback = require('./SwimForwardFeedback.js');
let SwimForwardActionResult = require('./SwimForwardActionResult.js');
let GotoResult = require('./GotoResult.js');
let ChangeDepthResult = require('./ChangeDepthResult.js');
let DoSurfaceTaskAction = require('./DoSurfaceTaskAction.js');
let ChangeDepthActionFeedback = require('./ChangeDepthActionFeedback.js');
let SwimForwardActionFeedback = require('./SwimForwardActionFeedback.js');
let GotoActionFeedback = require('./GotoActionFeedback.js');
let DoSurfaceTaskActionResult = require('./DoSurfaceTaskActionResult.js');
let ChangeDepthFeedback = require('./ChangeDepthFeedback.js');
let SwimForwardGoal = require('./SwimForwardGoal.js');
let SwimForwardActionGoal = require('./SwimForwardActionGoal.js');
let ChangeDepthActionResult = require('./ChangeDepthActionResult.js');
let ChangeDepthAction = require('./ChangeDepthAction.js');
let DoSurfaceTaskGoal = require('./DoSurfaceTaskGoal.js');
let ChangeDepthActionGoal = require('./ChangeDepthActionGoal.js');
let GotoGoal = require('./GotoGoal.js');
let DoSurfaceTaskFeedback = require('./DoSurfaceTaskFeedback.js');
let DoSurfaceTaskResult = require('./DoSurfaceTaskResult.js');
let GotoFeedback = require('./GotoFeedback.js');
let SwimForwardResult = require('./SwimForwardResult.js');
let DoSurfaceTaskActionGoal = require('./DoSurfaceTaskActionGoal.js');
let DoSurfaceTaskActionFeedback = require('./DoSurfaceTaskActionFeedback.js');

module.exports = {
  PeriodicLegCommand: PeriodicLegCommand,
  GPSFixList: GPSFixList,
  Health: Health,
  SurfaceTaskTypes: SurfaceTaskTypes,
  AutopilotModes: AutopilotModes,
  Velocity: Velocity,
  Command: Command,
  cuROSTityScore: cuROSTityScore,
  StateMsg: StateMsg,
  KeepAlive: KeepAlive,
  GotoAction: GotoAction,
  GotoActionGoal: GotoActionGoal,
  ChangeDepthGoal: ChangeDepthGoal,
  SwimForwardAction: SwimForwardAction,
  GotoActionResult: GotoActionResult,
  SwimForwardFeedback: SwimForwardFeedback,
  SwimForwardActionResult: SwimForwardActionResult,
  GotoResult: GotoResult,
  ChangeDepthResult: ChangeDepthResult,
  DoSurfaceTaskAction: DoSurfaceTaskAction,
  ChangeDepthActionFeedback: ChangeDepthActionFeedback,
  SwimForwardActionFeedback: SwimForwardActionFeedback,
  GotoActionFeedback: GotoActionFeedback,
  DoSurfaceTaskActionResult: DoSurfaceTaskActionResult,
  ChangeDepthFeedback: ChangeDepthFeedback,
  SwimForwardGoal: SwimForwardGoal,
  SwimForwardActionGoal: SwimForwardActionGoal,
  ChangeDepthActionResult: ChangeDepthActionResult,
  ChangeDepthAction: ChangeDepthAction,
  DoSurfaceTaskGoal: DoSurfaceTaskGoal,
  ChangeDepthActionGoal: ChangeDepthActionGoal,
  GotoGoal: GotoGoal,
  DoSurfaceTaskFeedback: DoSurfaceTaskFeedback,
  DoSurfaceTaskResult: DoSurfaceTaskResult,
  GotoFeedback: GotoFeedback,
  SwimForwardResult: SwimForwardResult,
  DoSurfaceTaskActionGoal: DoSurfaceTaskActionGoal,
  DoSurfaceTaskActionFeedback: DoSurfaceTaskActionFeedback,
};
