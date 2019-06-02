/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NENetworkAgent.h>

@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent {

	NSData* _agentData;

}

@property (retain) NSData * agentData;              //@synthesize agentData=_agentData - In the implementation block
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(id)initWithProxyConfiguration:(id)arg1 ;
-(id)copyAgentData;
-(id)agentDescription;
-(NSData *)agentData;
-(void)setAgentData:(NSData *)arg1 ;
@end

