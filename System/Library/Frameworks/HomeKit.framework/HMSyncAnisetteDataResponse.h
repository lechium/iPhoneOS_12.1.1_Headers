/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMRemoteLoginMessage.h>
#import <libobjc.A.dylib/HMRemoteLoginMessageProtocol.h>

@class NSString, NSDictionary;

@interface HMSyncAnisetteDataResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol> {

	BOOL _didSucceed;

}

@property (assign,nonatomic) BOOL didSucceed;                              //@synthesize didSucceed=_didSucceed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * messagePayload; 
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
+(BOOL)supportsSecureCoding;
-(id)messageName;
-(NSDictionary *)messagePayload;
-(id)xpcMessageName;
-(BOOL)didSucceed;
-(void)setDidSucceed:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
@end

