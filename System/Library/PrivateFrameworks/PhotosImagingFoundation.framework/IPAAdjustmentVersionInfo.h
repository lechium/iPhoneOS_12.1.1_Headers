/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IPAAdjustmentVersionInfo : NSObject <NSCopying> {

	NSString* _platform;
	NSString* _buildNumber;
	NSString* _appVersion;
	long long _schemaRevision;

}

@property (nonatomic,copy) NSString * platform;                     //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSString * buildNumber;                  //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,copy) NSString * appVersion;                   //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) long long schemaRevision;              //@synthesize schemaRevision=_schemaRevision - In the implementation block
+(id)systemBuildVersion;
+(id)_systemBuildVersion;
+(id)_systemVersionPlistPath;
+(id)_frameworkVersion;
+(id)frameworkVersion;
+(id)currentVersionInfo;
+(id)versionInfoFromArchivalRepresentation:(id)arg1 ;
-(void)setBuildNumber:(NSString *)arg1 ;
-(NSString *)buildNumber;
-(void)setPlatform:(NSString *)arg1 ;
-(long long)schemaRevision;
-(void)setSchemaRevision:(long long)arg1 ;
-(id)archivalRepresentation;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appVersion;
-(NSString *)platform;
-(BOOL)isEqualToVersionInfo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

