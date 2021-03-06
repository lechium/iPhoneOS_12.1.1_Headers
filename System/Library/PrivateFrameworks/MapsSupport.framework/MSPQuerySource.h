/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPContainerObserver.h>
#import <libobjc.A.dylib/MSPQuerySourceObserver.h>

@class MSPContainer, NSHashTable, _MSPQueryState, NSString;

@interface MSPQuerySource : NSObject <MSPContainerObserver, MSPQuerySourceObserver> {

	MSPContainer* _owningContainer;
	MSPQuerySource* _parentSource;
	/*^block*/id _mappingBlock;
	/*^block*/id _preprocessingBlock;
	NSHashTable* _observers;
	_MSPQueryState* _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeObserver:(id)arg1 ;
-(void)_addObserver:(id)arg1 ;
-(id)_container;
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5 ;
-(void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3 ;
-(id)_initWithOwningContainer:(id)arg1 ;
-(id)_initWithParentSource:(id)arg1 preprocessingBlock:(/*^block*/id)arg2 mappingBlock:(/*^block*/id)arg3 ;
-(void)_didReceiveContainerContents:(id)arg1 context:(id)arg2 ;
-(id)sourceByMappingContentsUsingBlock:(/*^block*/id)arg1 ;
-(id)sourceByMappingContentsUsingPreprocessingBlock:(/*^block*/id)arg1 mappingBlock:(/*^block*/id)arg2 ;
-(id)newQuery;
-(id)newEditableQuery;
@end

