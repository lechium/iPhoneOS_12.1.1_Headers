/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PUEditableAsset;
@class PLPhotoEditMutableModel;

@interface _PUAdjustmentsLoadResult : NSObject {

	PLPhotoEditMutableModel* _editModel;
	long long _penultimateState;
	long long _resolvedVersion;
	id<PUEditableAsset> _asset;

}

@property (nonatomic,readonly) PLPhotoEditMutableModel * editModel;              //@synthesize editModel=_editModel - In the implementation block
@property (nonatomic,readonly) long long penultimateState;                       //@synthesize penultimateState=_penultimateState - In the implementation block
@property (nonatomic,readonly) long long resolvedVersion;                        //@synthesize resolvedVersion=_resolvedVersion - In the implementation block
@property (nonatomic,readonly) id<PUEditableAsset> asset;                        //@synthesize asset=_asset - In the implementation block
-(PLPhotoEditMutableModel *)editModel;
-(long long)resolvedVersion;
-(id)initWithEditModel:(id)arg1 penultimateState:(long long)arg2 resolvedVersion:(long long)arg3 asset:(id)arg4 ;
-(long long)penultimateState;
-(id<PUEditableAsset>)asset;
@end

