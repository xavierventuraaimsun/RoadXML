#pragma once
#include "RoadXML/RoadXML.h"

#include <string>

namespace RoadXML
{
	// Elements tags
	static const std::string kRoadXMLTag					= "RoadXML";
	static const std::string kTrackClippedDataTag			= "TrackClippedData";
	static const std::string kMarkClippedDataTag			= "MarkClippedData";
	static const std::string kLaneTag						= "Lane";
	static const std::string kLaneBorderTag					= "LaneBorder";
	static const std::string kDecorationTag					= "Decoration";
	static const std::string kLaneScopeTag					= "LaneScope";
	static const std::string kMarkingTag					= "Marking";
	static const std::string kNetworkTag					= "Network";
	static const std::string kIntersectionTag				= "Intersection";
	static const std::string kSubNetworkJunctionTag			= "SubNetworkJunction";
	static const std::string kObstacleTag					= "Obstacle";
	static const std::string kPortionTag					= "Portion";
	static const std::string kProfileTag					= "Profile";
	static const std::string kRoadElementTag				= "RoadElement";
	static const std::string kRoadSignTag					= "RoadSign";
	static const std::string kRoadTag						= "Road";
	static const std::string kSubNetworkTag					= "SubNetwork";
	static const std::string kSurfaceModifierTag			= "SurfaceModifier";
	static const std::string kExternalElementTag			= "ExternalElement";
	static const std::string kExternalSurfaceTag			= "ExternalSurface";
	static const std::string kExternalTerrainTag			= "ExternalTerrain";
	static const std::string kExternalPhysicalSurfaceTag	= "ExternalPhysicSurface";
	static const std::string kProxyFileTag					= "ProxyFile";
	static const std::string kTrackClipTag					= "TrackClip";
	static const std::string kTrackScopeTag					= "TrackScope";
	static const std::string kSequenceTag					= "Sequence";
	static const std::string kSequenceYTag					= "SequenceY";
	static const std::string kSequenceZTag					= "SequenceZ";
	static const std::string kTrackTag						= "Track";
	static const std::string kTrajectoryTag					= "Trajectory";
	static const std::string kTrajectoryElementTag			= "TrajectoryElement";
	static const std::string kTrajectoryPartTag				= "TrajectoryPart";
	static const std::string kPolyLineTag					= "PolyLine";
	static const std::string kPolynomialTag					= "Polynomial";
	static const std::string kSegmentTag					= "Segment";
	static const std::string kClothoidSplineTag				= "ClothoidSpline";
	static const std::string kClothoArcTag					= "ClothoArc";
	static const std::string kCircleArcTag					= "CircleArc";
	static const std::string kUVMappingTag					= "UVMapping";
	static const std::string kVehicleTypeTag				= "VehicleType";
	static const std::string kVectord2Tag					= "Vectord2";
	static const std::string kTrafficLightGroupTag			= "TrafficLightGroup";
	static const std::string kTrafficLightStateTag			= "TrafficLightState";
	static const std::string kTrafficLightAnimationTag		= "TrafficLightAnimation";
	static const std::string kStateTag						= "State";
	static const std::string kLanePairTag					= "LanePair";
	static const std::string kLightTag						= "Light";
	static const std::string kTimerTag						= "Timer";
	static const std::string kXYCurveTag					= "XYCurve";
	static const std::string kSZCurveTag					= "SZCurve";
	static const std::string kColorElementTag				= "Color";
	static const std::string kBankingCurveTag				= "BankingCurve";
	static const std::string kContourPieceTag				= "ContourPiece";
	static const std::string kGroundTag						= "Ground";
	static const std::string kMaterialTag					= "Material";
	static const std::string kMaterialNameTag				= "material";
	static const std::string kDiffuseTag					= "Diffuse";
	static const std::string kAmbientTag					= "Ambient";
	static const std::string kSpecularTag					= "Specular";
	static const std::string kTextureTag					= "Texture";
	static const std::string kEmissiveTag					= "Emissive";

	static const std::string kNormalMapTag					= "NormalMap";
	static const std::string kReflectionMapTag				= "ReflectionMap";
	static const std::string kSpecularMapTag				= "SpecularMap";
	static const std::string kAmbientOcclusionMapTag		= "AmbientOcclusionMap";
	static const std::string kMaterialBRDFTag				= "BRDF";

	static const std::string kRoadNetworkTag				= "RoadNetwork";
	static const std::string kFrameTag						= "Frame";
	static const std::string kGeolocalisationTag			= "Geolocalisation";
	static const std::string kWellKnownTextTag				= "WKT";
	static const std::string kEpsgCodeTag					= "EPSG";
	static const std::string kTimeOffsetTag					= "TimeOffset";
	static const std::string kTranslationTag				= "Translation";
	static const std::string kAzimuthTag					= "Azimuth";
	static const std::string kSubNetworkExitTag				= "SubNetworkExit";
	static const std::string kTerrainContourTag				= "TerrainContour";
	static const std::string kGeneratedTerrainMaterialTag	= "GeneratedTerrainMaterial";
	static const std::string k2x2DPointTag					= "Point2x2D";	
	static const std::string kRoughnessAnalyticTag			= "RoughnessAnalytic";
	static const std::string kRoughnessTag					= "Roughness";
	static const std::string kScale2x2DPointsTag			= "Scale2x2DPoints";
	static const std::string kOffset2x2DPointsTag			= "Offset2x2DPoints";
	static const std::string kRepeatPatternTag				= "RepeatPattern";
	static const std::string kRoughness2x2DTag				= "Roughness2x2D";
	static const std::string kRollingSurfacePropsTag		= "RollingSurfaceProps";
	static const std::string k3DLayersToExportTag			= "Export3DLayers";
	static const std::string k3DRoadsGenerationElementTag   = "Generate3DRoads";
	static const std::string kSolExportOptionsElementTag    = "SolExportOptions";

	static const std::string kBorderOffsetTag				= "BorderOffset";
	static const std::string kBorderModifierTag				= "BorderModifier";
	static const std::string kProfileModifierTag			= "ProfileModifier";
	

	
	
	// Element array tags
	static const std::string kGroundsTag					= "Grounds";
	static const std::string kMaterialsTag					= "Materials";
	static const std::string kMarkingsTag					= "Markings";
	static const std::string kProfilesTag					= "Profiles";
	static const std::string kIntersectionsTag				= "Intersections";
	static const std::string kTracksTag						= "Tracks";
	static const std::string kTrajectoriesTag				= "Trajectories";
	static const std::string kTrajectoryPartsTag			= "TrajectoryParts";
	static const std::string kTrafficLightGroupsTag			= "TrafficLightGroups";
	static const std::string kSubNetworkJunctionsTag		= "SubNetworkJunctions";
	static const std::string kSubNetworksTag				= "SubNetworks";
	static const std::string kRoadsTag						= "Roads";
	static const std::string kBannedLinksTag				= "BannedLinks";
	static const std::string kClippedDatasTag				= "ClippedDatas";
	static const std::string kContoursTag					= "Contours";
	static const std::string kRoadPiecesTag					= "RoadPieces";
	static const std::string kStatesTag						= "States";
	static const std::string kAnimationsTag					= "Animations";
	static const std::string kPortionsTag					= "Portions";
	static const std::string kSubNetworkExitsTag			= "SubNetworkExits";
	static const std::string kTerrainContoursTag			= "TerrainContours";
	static const std::string k2x2DPointsTag					= "Points2x2D";
	
	// Attributes tags
	static const std::string kVersionTag				= "version";
	static const std::string kVersionRevisionTag		= "versionRevision";
	static const std::string kXTag						= "x";
	static const std::string kYTag						= "y";
	static const std::string kZTag						= "z";
	static const std::string kAbscissaTag				= "abscissa";
	static const std::string kDistanceTag				= "distance";
	static const std::string kHeightTag					= "height";
	static const std::string kElevationTag				= "elevation";
	static const std::string kVerticalTag				= "vertical";
	static const std::string kRollTag					= "roll";
	static const std::string kPitchTag					= "pitch";
	static const std::string kHeadingTag				= "heading";
	static const std::string kNumberTag					= "number";
	static const std::string kCategoriesTag				= "categories";
	static const std::string kIndexTag					= "index";
	static const std::string kNameTag					= "name";
	static const std::string kProxyFileNameTag			= "proxyFileName";
	static const std::string kTextTag					= "text";
	static const std::string kTypeTag					= "type";
	static const std::string kTrafficHandTypeTag		= "traffic";
	static const std::string kPathTag					= "path";
	static const std::string kIsInvertedTag				= "flipped";
	static const std::string kIlluminationTag			= "illumination";
	static const std::string kDirectionTag				= "direction";
	static const std::string kValueTag					= "value";
	static const std::string kSpeedLimitTag				= "speedLimit";
	static const std::string kLineLengthTag				= "lineLength";
	static const std::string kTotLengthTag				= "totalLength";
	static const std::string kGripTag					= "grip";
	static const std::string kLeftTag					= "left";
	static const std::string kRightTag					= "right";
	static const std::string kTopTag					= "top";
	static const std::string kBottomTag					= "bottom";
	static const std::string kLeftToRightTag			= "leftToRight";
	static const std::string kRightToLeftTag			= "rightToLeft";
	static const std::string kLengthTag					= "length";
	static const std::string kCurvatureTag				= "curvature";
	static const std::string kStartCurvatureTag			= "startCurvature";
	static const std::string kEndCurvatureTag			= "endCurvature";
	static const std::string kBeginTag					= "begin";
	static const std::string kEndTag					= "end";
	static const std::string kPriorityLevelTag			= "priorityLevel";
	static const std::string kSubNetworkNameTag			= "subNetwork";
	static const std::string kTrackNameTag				= "track";
	static const std::string kTrajectoryPartNameTag		= "trajectoryPart";
	static const std::string kIsTrackStart				= "isTrackStart";
	static const std::string kWeightTag					= "weight";
	static const std::string kWeightPerAxleTag			= "weightPerAxle";
	static const std::string kTrailedWeightTag			= "trailedWeight";
	static const std::string kWidthTag					= "width";
	static const std::string kCirculationWayTag			= "circulationWay";
	static const std::string kGranulosityTag			= "granulosity";
	static const std::string kGroundNameTag				= "groundName";
	static const std::string kColorTag					= "color";
	static const std::string kLeftUTag					= "leftU";
	static const std::string kRightUTag					= "rightU";
	static const std::string kLengthVTag				= "lengthV";
	static const std::string kRoadSignNameTag			= "roadSign";
	static const std::string kTimeLengthTag				= "timeLength";
	static const std::string kFromTrackTag				= "fromTrack";
	static const std::string kFromTrackBoundInfoTag		= "fromTrackBoundInfo";
	static const std::string kFromLaneTag				= "fromLane";
	static const std::string kToTrackTag				= "toTrack";
	static const std::string kToTrackBoundInfoTag		= "toTrackBoundInfo";
	static const std::string kToLaneTag					= "toLane";
	static const std::string kSignTypeTag				= "signType";
	static const std::string kSignNameTag				= "signName";
	static const std::string kMessageTag				= "message";
	static const std::string kTemporaryTag				= "temporary";
	static const std::string kTargetNameTag				= "targetName";
	static const std::string kFromTag					= "from";
	static const std::string kToTag						= "to";
	static const std::string kRangeTag					= "range";
	static const std::string kWayTag					= "way";
	static const std::string kDodgeTag					= "dodge";
	static const std::string kStartProfile				= "startProfile";
	static const std::string kEndProfile				= "endProfile";
	static const std::string kEndDistance				= "endDistance";
	static const std::string kStartNodeTag				= "startNode";
	static const std::string kEndNodeTag				= "endNode";
	static const std::string kRoadCategoryTag			= "roadCategory";
	static const std::string kSymmetricTag				= "symetric";
	static const std::string kThresholdTag				= "threshold";
	static const std::string kMassTag					= "mass";
	static const std::string kSequenceOrientationTag	= "sequenceOrientation";
	static const std::string kIsSequenceAsOneTag		= "treatSequenceAsOne";
	static const std::string kMarkingOffsetTag			= "markingOffset";
	static const std::string kMarkingNameTag			= "markingName";
	static const std::string kUVScaleXTag				= "uVScaleX";
	static const std::string kUVScaleYTag				= "uVScaleY";
	static const std::string kUVHeadingTag				= "uVHeading";
	static const std::string kUVOffsetXTag				= "uVOffsetX";
	static const std::string kUVOffsetYTag				= "uVOffsetY";
	static const std::string kStartAnchorTrackTag		= "startAnchorTrack";
	static const std::string kIsStartAnchorOnTrackEndTag = "isStartAnchorOnTrackEnd";
	static const std::string kIsStartAnchorOnLeftSideTag = "isStartAnchorOnLeftSide";
	static const std::string kEndAnchorTrackTag			= "endAnchorTrack";
	static const std::string kIsEndAnchorOnTrackEndTag	= "isEndAnchorOnTrackEnd";
	static const std::string kIsEndAnchorOnLeftSideTag	= "isEndAnchorOnLeftSide";
	static const std::string kCycleNameTag				= "cycleName";
	static const std::string kEndHeadingTag				= "endHeading";
	static const std::string kRedTag					= "red";
	static const std::string kGreenTag					= "green";
	static const std::string kBlueTag					= "blue";
	static const std::string kAlphaTag					= "alpha";
	static const std::string kShininessTag				= "shininess";
	static const std::string kTrackBoundInfoTag			= "trackBoundInfo";
	static const std::string kExitAtEndTag				= "exitAtEnd";
	static const std::string kExitAtStartTag			= "exitAtStart";
	static const std::string kContourPointsTag			= "contourPoints";
	static const std::string kCurvilinearDistanceTag	= "curvilinearDistance";
	static const std::string kZLeftTag					= "zLeft";
	static const std::string kZRightTag					= "zRight";
	static const std::string kBankingLeftTag			= "bankingLeft";
	static const std::string kBankingRightTag			= "bankingRight";
	static const std::string kDoubleMarkingTag			= "doubleMarking";
	static const std::string kWaterLevelTag				= "waterLevel";
	static const std::string kRoughnessHeightTag		= "RoughnessHeight";
	static const std::string kRoughnessLengthTag		= "RoughnessLength";
	static const std::string kRoughnessHeightStdDeviationTag = "RoughnessHeightStdDeviation";
	static const std::string kRoughnessLengthStdDeviationTag = "RoughnessLengthStdDeviation";
	static const std::string kIsRollingSurfaceUpdateOnSaveTag	= "isRollingSurfaceUpdateOnSave";
	static const std::string kRoadsAndIntersectionsTag			= "RoadsAndIntersections";
	static const std::string kExportMarkingsTag					= "exportMarkings";
	static const std::string kGeneratedGroundTag				= "exportGeneratedGround";
	static const std::string k3DObjectsTag						= "export3DObjects";
	static const std::string kExportGroundTag					= "exportGround";
	static const std::string kExternalFileTag					= "exportExternalFile";
	static const std::string kExternalFilePathTag				= "exportedExternalFilePath";
	static const std::string kMergeRollinSurfacesTag			= "mergeRollinSurfaces";
	static const std::string kCTolTag							= "curvatureTolerence";
	static const std::string kminStepTag						= "minimumStep";
	static const std::string kMaxStepTag						= "maximumStep";
	static const std::string kmaxNormalVariationTag				= "maximumNormalVariation";
	static const std::string kmaxWidthTag						= "maximumWidth";
	static const std::string kMinPointsDistanceTag				= "minPointsDistance";
	static const std::string kGenerateDebugFileTag				= "generateDbugFile";
	static const std::string kRemoveTrianglesTag				= "removeBadTriangles";
	static const std::string kCheckOrientaionsTag				= "checkOrientations";
	static const std::string kDissuasive						= "dissuasive";
	static const std::string kDestinationSeparation				= "destinationSeparation";
	static const std::string kNoStop							= "noStop";
	static const std::string kNoParking							= "noParking";
	static const std::string kAlternate							= "alternate";
	static const std::string kMarkingQuality					= "quality";

	static const std::string kTTag								= "t";
	static const std::string kYOffsetTag						= "yOffset";
	static const std::string kDirInTag							= "directionIn";
	static const std::string kDirOutTag							= "directionOut";
	static const std::string kIdTag								= "id";
}