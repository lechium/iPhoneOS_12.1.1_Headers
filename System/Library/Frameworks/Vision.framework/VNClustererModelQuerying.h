/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VNClustererModelQuerying
@required
+(id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id*)arg3;
+(id)nonGroupedGroupID;
+(id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id*)arg3;
+(id)representativenessForFaces:(id)arg1 error:(id*)arg2;
+(id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id*)arg3;
-(id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3;
-(id)maximumFaceIdInModelAndReturnError:(id*)arg1;
-(id)allClusteredFaceIdsAndReturnError:(id*)arg1;
-(id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id*)arg2;
-(id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id*)arg2;
-(id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3;
-(id)distanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2;
-(id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 canceller:(id)arg3 error:(id*)arg4;

@end

