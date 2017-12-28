
"use strict";

let DumpAllVars = require('./DumpAllVars.js')
let StepSimulation = require('./StepSimulation.js')
let SetString = require('./SetString.js')
let SetTargetLegAngles = require('./SetTargetLegAngles.js')
let SetPauseMode = require('./SetPauseMode.js')
let EnableAutopilot = require('./EnableAutopilot.js')
let GetNamedFloat = require('./GetNamedFloat.js')
let SetBool = require('./SetBool.js')
let SetGait = require('./SetGait.js')
let SetPeriodicLegCommand = require('./SetPeriodicLegCommand.js')
let SetNamedFloat = require('./SetNamedFloat.js')
let GetTargetLegAngles = require('./GetTargetLegAngles.js')
let GetLegParams = require('./GetLegParams.js')
let SetAutopilotMode = require('./SetAutopilotMode.js')
let GetAutopilotState = require('./GetAutopilotState.js')
let SetLegParams = require('./SetLegParams.js')
let GetNamedBool = require('./GetNamedBool.js')
let GetPeriodicLegCommand = require('./GetPeriodicLegCommand.js')
let EmptyBool = require('./EmptyBool.js')
let IsCalibrated = require('./IsCalibrated.js')
let SetAutopilotParams = require('./SetAutopilotParams.js')
let GetAutopilotParams = require('./GetAutopilotParams.js')
let GetNamedInt = require('./GetNamedInt.js')
let SetTargetAngles = require('./SetTargetAngles.js')
let Menu = require('./Menu.js')
let SetDirection = require('./SetDirection.js')
let GetState = require('./GetState.js')
let SetUpRegulatedSwimMode = require('./SetUpRegulatedSwimMode.js')
let EnableDepthControl = require('./EnableDepthControl.js')
let SetTargetDepth = require('./SetTargetDepth.js')
let RunSimulationUntilTime = require('./RunSimulationUntilTime.js')

module.exports = {
  DumpAllVars: DumpAllVars,
  StepSimulation: StepSimulation,
  SetString: SetString,
  SetTargetLegAngles: SetTargetLegAngles,
  SetPauseMode: SetPauseMode,
  EnableAutopilot: EnableAutopilot,
  GetNamedFloat: GetNamedFloat,
  SetBool: SetBool,
  SetGait: SetGait,
  SetPeriodicLegCommand: SetPeriodicLegCommand,
  SetNamedFloat: SetNamedFloat,
  GetTargetLegAngles: GetTargetLegAngles,
  GetLegParams: GetLegParams,
  SetAutopilotMode: SetAutopilotMode,
  GetAutopilotState: GetAutopilotState,
  SetLegParams: SetLegParams,
  GetNamedBool: GetNamedBool,
  GetPeriodicLegCommand: GetPeriodicLegCommand,
  EmptyBool: EmptyBool,
  IsCalibrated: IsCalibrated,
  SetAutopilotParams: SetAutopilotParams,
  GetAutopilotParams: GetAutopilotParams,
  GetNamedInt: GetNamedInt,
  SetTargetAngles: SetTargetAngles,
  Menu: Menu,
  SetDirection: SetDirection,
  GetState: GetState,
  SetUpRegulatedSwimMode: SetUpRegulatedSwimMode,
  EnableDepthControl: EnableDepthControl,
  SetTargetDepth: SetTargetDepth,
  RunSimulationUntilTime: RunSimulationUntilTime,
};
