/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CATArbitrator : NSObject {

	NSMutableDictionary* mRegistrationByKey;

}
-(id)resourcesForKeys:(id)arg1 exclusive:(BOOL)arg2 ;
-(void)registerResource:(id)arg1 forKey:(id)arg2 maxConcurrentCount:(unsigned long long)arg3 ;
-(id)resourceForKey:(id)arg1 exclusive:(BOOL)arg2 ;
-(id)waitForResourcesForKeys:(id)arg1 exclusive:(BOOL)arg2 delegateQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)stopWaiting:(id)arg1 ;
-(void)registerResource:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)unregisterResourceForKey:(id)arg1 ;
-(id)init;
-(id)debugDescription;
@end

