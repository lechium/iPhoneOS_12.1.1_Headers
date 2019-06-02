/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFilterProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSDictionary, NSString;

@interface NEFilterControlProvider : NEFilterProvider <NSExtensionRequestHandling> {

	NSDictionary* _remediationMap;
	NSDictionary* _URLAppendStringMap;

}

@property (copy) NSDictionary * remediationMap; 
@property (copy) NSDictionary * URLAppendStringMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleNewFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleReport:(id)arg1 ;
-(void)notifyRulesChanged;
-(void)setRemediationMap:(NSDictionary *)arg1 ;
-(void)setURLAppendStringMap:(NSDictionary *)arg1 ;
-(NSDictionary *)remediationMap;
-(NSDictionary *)URLAppendStringMap;
-(void)handleRemediationForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

