/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@interface RESiriActionsDonationsWhitelist : NSObject {

	NSDictionary* _whitelist;

}
+(id)sharedInstance;
-(BOOL)intentIsWhitelistedForBundleID:(id)arg1 andTypeName:(id)arg2 ;
-(id)userActivityWhitelistedRelevanceThresholdForBundleID:(id)arg1 andActivityType:(id)arg2 ;
-(id)intentWhitelistedRelevanceThresholdForBundleID:(id)arg1 andTypeName:(id)arg2 ;
-(BOOL)userActivityIsWhitelistedForBundleID:(id)arg1 andActivityType:(id)arg2 ;
-(id)init;
@end
