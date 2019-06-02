/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapsSupport/MapsSupport-Structs.h>
@class NSMutableArray, NSMutableSet, NSArray;

@interface _MSPContainerEditsRecorder : NSObject {

	NSMutableArray* _originalMutableArray;
	NSMutableArray* _orderedEdits;
	NSMutableSet* _updatedObjects;

}

@property (nonatomic,readonly) NSMutableArray * recordableMutableArray; 
@property (nonatomic,readonly) NSArray * orderedEdits; 
-(id)initWithMutableArray:(id)arg1 ;
-(NSMutableArray *)recordableMutableArray;
-(NSArray *)orderedEdits;
-(unsigned long long)countOfEditableObjects;
-(id)objectInEditableObjectsAtIndex:(unsigned long long)arg1 ;
-(id)editableObjectsAtIndexes:(id)arg1 ;
-(void)getEditableObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 inEditableObjectsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromEditableObjectsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInEditableObjectsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertEditableObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeEditableObjectsAtIndexes:(id)arg1 ;
-(void)replaceEditableObjectsAtIndexes:(id)arg1 withEditableObjects:(id)arg2 ;
-(void)_mutableObjectContentDidUpdate:(id)arg1 ;
-(void)_editDetectorDidDetectUpdateForObject:(id)arg1 ;
-(void)useImmutableObjectsForEditsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
@end
