/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSString, CUIMutableCommonAssetStorage;

@interface TDAssetPack : NSObject <NSCopying> {

	BOOL wasModified;
	NSSet* tags;
	NSString* outputPath;
	CUIMutableCommonAssetStorage* assetStore;
	NSString* assetPackIdentifier;

}

@property (retain) CUIMutableCommonAssetStorage * assetStore; 
@property (nonatomic,retain) NSSet * tags; 
@property (nonatomic,copy) NSString * outputPath; 
@property (nonatomic,copy) NSString * assetPackIdentifier; 
@property (assign,nonatomic) BOOL wasModified; 
-(NSString *)assetPackIdentifier;
-(CUIMutableCommonAssetStorage *)assetStore;
-(void)setAssetStore:(CUIMutableCommonAssetStorage *)arg1 ;
-(void)setTags:(NSSet *)arg1 ;
-(NSSet *)tags;
-(NSString *)outputPath;
-(void)setOutputPath:(NSString *)arg1 ;
-(void)setAssetPackIdentifier:(NSString *)arg1 ;
-(BOOL)wasModified;
-(void)setWasModified:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

