/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSSUsageApp : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	unsigned long long _staticSize;
	unsigned long long _dynamicSize;
	unsigned long long _sharedSize;
	unsigned long long _dataSize;
	unsigned long long _totalSize;

}

@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                     //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) unsigned long long staticSize;                //@synthesize staticSize=_staticSize - In the implementation block
@property (assign,nonatomic) unsigned long long dynamicSize;               //@synthesize dynamicSize=_dynamicSize - In the implementation block
@property (assign,nonatomic) unsigned long long dataSize;                  //@synthesize dataSize=_dataSize - In the implementation block
@property (assign,nonatomic) unsigned long long totalSize;                 //@synthesize totalSize=_totalSize - In the implementation block
@property (nonatomic,readonly) unsigned long long sharedSize;              //@synthesize sharedSize=_sharedSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDataSize:(unsigned long long)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(unsigned long long)dynamicSize;
-(unsigned long long)staticSize;
-(unsigned long long)dataSize;
-(unsigned long long)totalSize;
-(void)setStaticSize:(unsigned long long)arg1 ;
-(void)setDynamicSize:(unsigned long long)arg1 ;
-(unsigned long long)sharedSize;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

