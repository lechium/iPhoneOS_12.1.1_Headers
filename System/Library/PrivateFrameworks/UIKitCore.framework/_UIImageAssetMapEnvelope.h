/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImageAsset, NSString;

@interface _UIImageAssetMapEnvelope : NSObject {

	UIImageAsset* _imageAsset;
	NSString* _assetName;

}

@property (assign,nonatomic,__weak) UIImageAsset * imageAsset;              //@synthesize imageAsset=_imageAsset - In the implementation block
@property (nonatomic,copy) NSString * assetName;                            //@synthesize assetName=_assetName - In the implementation block
+(id)wrapAsset:(id)arg1 ;
-(id)description;
-(UIImageAsset *)imageAsset;
-(void)setImageAsset:(UIImageAsset *)arg1 ;
-(NSString *)assetName;
-(void)setAssetName:(NSString *)arg1 ;
@end

