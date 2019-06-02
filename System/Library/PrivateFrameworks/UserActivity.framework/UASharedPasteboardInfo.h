/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserActivity/UserActivity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSFileHandle, NSArray, NSString, NSDictionary;

@interface UASharedPasteboardInfo : NSObject <NSSecureCoding, NSCopying> {

	NSFileHandle* _dataFile;
	long long _dataSize;
	NSArray* _items;
	NSString* _sharedDataPath;
	NSDictionary* _sandboxExtensions;

}

@property (retain) NSFileHandle * dataFile;                     //@synthesize dataFile=_dataFile - In the implementation block
@property (assign) long long dataSize;                          //@synthesize dataSize=_dataSize - In the implementation block
@property (copy) NSArray * items;                               //@synthesize items=_items - In the implementation block
@property (copy) NSString * sharedDataPath;                     //@synthesize sharedDataPath=_sharedDataPath - In the implementation block
@property (copy) NSDictionary * sandboxExtensions;              //@synthesize sandboxExtensions=_sandboxExtensions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDataSize:(long long)arg1 ;
-(long long)dataSize;
-(void)setSandboxExtensions:(NSDictionary *)arg1 ;
-(NSDictionary *)sandboxExtensions;
-(void)setDataFile:(NSFileHandle *)arg1 ;
-(NSFileHandle *)dataFile;
-(void)setSharedDataPath:(NSString *)arg1 ;
-(NSString *)sharedDataPath;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end

