/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _PFFreeMapEntry : NSObject {

	int _retainCount;
	NSMutableSet* _owners;

}
-(void)addOwner:(id)arg1 ;
-(void)removeOwner:(id)arg1 ;
-(void)removeAllOwners;
-(BOOL)decrement;
-(id)init;
-(void)dealloc;
@end
