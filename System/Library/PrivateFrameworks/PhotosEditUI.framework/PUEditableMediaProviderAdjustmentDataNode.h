/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXRunNode.h>

@protocol PUEditableAsset;
@class PHAdjustmentData, PUEditableMediaProvider;

@interface PUEditableMediaProviderAdjustmentDataNode : PXRunNode {

	int _requestID;
	id<PUEditableAsset> _asset;
	PHAdjustmentData* _adjustmentData;
	PUEditableMediaProvider* _mediaProvider;

}

@property (nonatomic,readonly) id<PUEditableAsset> asset;                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PHAdjustmentData * adjustmentData;                    //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProvider * mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
-(void)didCancel;
-(PUEditableMediaProvider *)mediaProvider;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(PHAdjustmentData *)adjustmentData;
-(void)_handleDidLoadAdjustmentData:(id)arg1 error:(id)arg2 ;
-(void)run;
-(id<PUEditableAsset>)asset;
@end
