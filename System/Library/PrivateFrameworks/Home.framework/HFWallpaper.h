/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFCroppedWallpaperInfo, NSString;

@interface HFWallpaper : NSObject <NSCopying> {

	long long _type;
	HFCroppedWallpaperInfo* _cropInfo;
	NSString* _assetIdentifier;

}

@property (nonatomic,copy) HFCroppedWallpaperInfo * cropInfo;                //@synthesize cropInfo=_cropInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetIdentifier;              //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
+(id)customWallpaperWithAssetIdentifier:(id)arg1 ;
+(CGSize)size;
-(NSString *)assetIdentifier;
-(id)sliceIdentifierForVariant:(long long)arg1 ;
-(id)wallpaperIdentifier;
-(void)setCropInfo:(HFCroppedWallpaperInfo *)arg1 ;
-(id)initWithType:(long long)arg1 assetIdentifier:(id)arg2 cropInfo:(id)arg3 ;
-(HFCroppedWallpaperInfo *)cropInfo;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

