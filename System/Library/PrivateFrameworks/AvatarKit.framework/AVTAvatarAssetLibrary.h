/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface AVTAvatarAssetLibrary : NSObject {

	NSMutableArray* _assetsByType[13];
	NSMutableDictionary* _assets;

}
+(id)sharedAvatarAssetLibrary;
-(void)loadAssetWithPath:(id)arg1 type:(long long)arg2 inPackID:(id)arg3 ;
-(void)loadAssetsWithPackID:(id)arg1 inFolder:(id)arg2 ;
-(id)assetsWithType:(long long)arg1 ;
-(id)assetsWithType:(long long)arg1 ContainingString:(id)arg2 ;
-(id)assetWithUID:(id)arg1 ;
-(void)reload;
@end

