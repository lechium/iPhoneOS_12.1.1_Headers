/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXRunNode.h>

@class PHAsset, PHAdjustmentData;

@interface PUPhotoKitAdjustmentDataNode : PXRunNode {

	int _requestID;
	PHAsset* _asset;
	PHAdjustmentData* _adjustmentData;

}

@property (nonatomic,readonly) PHAsset * asset;                                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PHAdjustmentData * adjustmentData;              //@synthesize adjustmentData=_adjustmentData - In the implementation block
-(void)didCancel;
-(PHAdjustmentData *)adjustmentData;
-(void)_handleDidLoadAdjustmentData:(id)arg1 error:(id)arg2 ;
-(id)initWithAsset:(id)arg1 ;
-(void)run;
-(PHAsset *)asset;
@end

