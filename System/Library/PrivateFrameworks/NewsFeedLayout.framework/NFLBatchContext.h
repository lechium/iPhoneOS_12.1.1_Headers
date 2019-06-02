/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NFLBatchContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _batchType;

}

@property (nonatomic,readonly) unsigned long long batchType;              //@synthesize batchType=_batchType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initForTesting;
-(unsigned long long)batchType;
-(id)initWithBatchType:(unsigned long long)arg1 ;
-(id)init;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

