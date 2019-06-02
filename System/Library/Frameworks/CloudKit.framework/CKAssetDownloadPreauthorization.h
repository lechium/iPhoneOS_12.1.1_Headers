/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface CKAssetDownloadPreauthorization : NSObject <NSCopying> {

	NSString* _responseUUID;
	NSDictionary* _contentResponseHeaders;
	NSData* _contentResponseBody;

}

@property (nonatomic,retain) NSString * responseUUID;                            //@synthesize responseUUID=_responseUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * contentResponseHeaders;              //@synthesize contentResponseHeaders=_contentResponseHeaders - In the implementation block
@property (nonatomic,retain) NSData * contentResponseBody;                       //@synthesize contentResponseBody=_contentResponseBody - In the implementation block
-(void)setContentResponseBody:(NSData *)arg1 ;
-(NSDictionary *)contentResponseHeaders;
-(void)setResponseUUID:(NSString *)arg1 ;
-(NSString *)responseUUID;
-(NSData *)contentResponseBody;
-(void)setContentResponseHeaders:(NSDictionary *)arg1 ;
-(id)initWithResponseUUID:(id)arg1 contentResponseHeaders:(id)arg2 contentResponseBody:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

