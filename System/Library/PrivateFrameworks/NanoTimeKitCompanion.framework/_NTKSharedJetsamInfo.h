/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSMapTable, NSLock;

@interface _NTKSharedJetsamInfo : NSObject {

	NSMapTable* _fetchers;
	NSLock* _fetchersLock;
	int _pid;

}
+(id)sharedJetsamInfo;
-(BOOL)getInfoFor:(id)arg1 into:(jetsam_info*)arg2 ;
-(BOOL)resetIntervalFor:(id)arg1 ;
-(void)unregister:(id)arg1 ;
-(id)init;
@end

