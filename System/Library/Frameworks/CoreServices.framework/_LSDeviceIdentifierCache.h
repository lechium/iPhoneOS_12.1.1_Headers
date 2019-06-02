/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreServices/CoreServices-Structs.h>
@class NSUUID, NSObject, NSDictionary;

@interface _LSDeviceIdentifierCache : NSObject {

	NSDictionary* _identifiers;
	NSUUID* _advertiserIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	int _saveFlag;
	NSDictionary* _perUserEntropy;

}
+(id)sharedCache;
-(void)save;
-(BOOL)deviceUnlockedSinceBoot;
-(NSMutableDictionary*)identifiersOfTypeNotDispatched:(long long)arg1 ;
-(id)applyPerUserEntropyNotDispatched:(id)arg1 type:(long long)arg2 ;
-(id)generateSomePerUserEntropyNotDispatched;
-(NSDictionary*)allIdentifiersNotDispatched;
-(void)generatePerUserEntropyIfNeededNotDispatched;
-(void)clearAllIdentifiersOfType:(long long)arg1 ;
-(void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

