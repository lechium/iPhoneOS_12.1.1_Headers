/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol HMRemoteLoginMessageProtocol <NSObject,NSSecureCoding>
@property (nonatomic,readonly) NSDictionary * messagePayload; 
@required
+(id)messageName;
+(id)objWithDict:(id)arg1;
+(id)objWithMessage:(id)arg1;
+(id)xpcMessageName;
-(id)messageName;
-(NSDictionary *)messagePayload;
-(id)xpcMessageName;

@end

