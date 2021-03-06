/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSKChangeNotifier : NSObject {

	CFDictionaryRef mChangeSourceObservers;
	CFDictionaryRef mChangeSourceOfClassObservers;
	CFArrayRef mQueuedObserverListChanges;
	unsigned long long mProcessingChanges;
	id mQueuedObserverLock;

}
-(void)p_queueObserverListChange:(id)arg1 ;
-(id)p_findCountedObserverForObserver:(id)arg1 inArray:(id)arg2 ;
-(void)p_addObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(BOOL)arg3 ;
-(void)p_removeObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(BOOL)arg3 ;
-(BOOL)p_pendingAddOrRemoveOfObserver:(id)arg1 forChangeSource:(id)arg2 ;
-(void)p_updateObserverList;
-(void)addObserver:(id)arg1 forChangeSource:(id)arg2 ;
-(void)removeObserver:(id)arg1 forChangeSource:(id)arg2 ;
-(void)addObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2 ;
-(void)removeObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2 ;
-(void)syncProcessChanges:(id)arg1 ;
-(void)asyncProcessChanges:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

