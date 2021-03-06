/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NEHotspotConfigurationManager : NSObject
+(id)sharedManager;
-(id)serializeConfiguration:(id)arg1 ;
-(void)applyConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeConfigurationForSSID:(id)arg1 ;
-(void)removeConfigurationForHS20DomainName:(id)arg1 ;
-(void)getConfiguredSSIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)errorWithCode:(long long)arg1 ;
@end

