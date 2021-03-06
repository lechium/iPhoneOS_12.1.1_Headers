/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject {

	NSMutableDictionary* _personMap;

}

@property (retain) NSMutableDictionary * _personMap;              //@synthesize personMap=_personMap - In the implementation block
+(id)sharedInstance;
-(void)registerPerson:(id)arg1 ;
-(void)unregisterPerson:(id)arg1 ;
-(id)personForUniqueID:(id)arg1 ;
-(void)_dumpAllPersons;
-(NSMutableDictionary *)_personMap;
-(void)set_personMap:(NSMutableDictionary *)arg1 ;
@end

