/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLSyncContext;
@interface PLCPLFacePushSupport : NSObject {

	id<PLSyncContext> _syncContext;

}
+(void)markSyncableFacesAsPushedInAsset:(id)arg1 ;
+(void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 inPhotoLibrary:(id)arg3 ;
+(BOOL)isFaceSyncable:(id)arg1 ;
+(BOOL)_shouldPushBeingKeyFace:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 ;
-(void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 ;
-(id)cplFaceAnalysisRefFromAsset:(id)arg1 algorithmVersion:(long long*)arg2 ;
-(id)_facesAdjustmentsFingerprintFromAsset:(id)arg1 assetChange:(id)arg2 ;
-(id)cplFaceRefsFromFaces:(id)arg1 algorithmVersion:(long long*)arg2 ;
-(BOOL)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg1 ;
-(id)cplFaceRefFromFace:(id)arg1 ;
-(id)rejectedPersonIdentifiersForFace:(id)arg1 ;
-(void)dealloc;
@end

