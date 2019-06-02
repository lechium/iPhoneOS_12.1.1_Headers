/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface WBSHistoryServiceURLRepresentation : NSObject <NSSecureCoding, NSCopying> {

	NSString* _urlString;
	NSData* _urlHash;
	NSData* _urlSalt;

}

@property (nonatomic,copy,readonly) NSString * urlString;              //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy,readonly) NSData * urlHash;                  //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,copy,readonly) NSData * urlSalt;                  //@synthesize urlSalt=_urlSalt - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithURLString:(id)arg1 ;
-(NSData *)urlHash;
-(NSData *)urlSalt;
-(id)initWithURLHash:(id)arg1 salt:(id)arg2 ;
-(NSString *)urlString;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
