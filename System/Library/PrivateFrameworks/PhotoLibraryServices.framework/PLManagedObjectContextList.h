/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSHashTable;

@interface PLManagedObjectContextList : NSObject {

	os_unfair_lock_s _lock;
	NSHashTable* _contexts;

}
-(id)allContextsNotIdenticalTo:(id)arg1 ;
-(void)addContext:(id)arg1 ;
-(id)init;
-(id)allContexts;
@end

