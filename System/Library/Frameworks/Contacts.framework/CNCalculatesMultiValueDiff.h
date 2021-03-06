/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSOrderedSet, NSMutableOrderedSet, NSMutableArray;

@interface CNCalculatesMultiValueDiff : NSObject {

	NSArray* _multiValue1;
	NSArray* _multiValue2;
	NSOrderedSet* _originalIdentifiers;
	NSOrderedSet* _finalIdentifiers;
	NSMutableOrderedSet* _addedIdentifiers;
	NSMutableOrderedSet* _removedIdentifiers;
	NSMutableOrderedSet* _sameIdentifiers;
	NSMutableOrderedSet* _calculatedFinalIdentifiers;
	NSMutableArray* _updates;

}
+(id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2 ;
-(void)calculateDiff;
-(id)initWithMultiValue1:(id)arg1 multiValue2:(id)arg2 ;
-(void)setupOriginalIdentifiers;
-(void)setupFinalIdentifiers;
-(void)setupAddedIdentifiers;
-(void)setupRemovedIdentifiers;
-(void)setupSameIdentifiers;
-(void)setupCalculatedFinalIdentifiers;
-(void)appendRemoveUpdates;
-(void)appendAddUpdates;
-(void)appendReplaceUpdates;
-(void)appendReorderUpdates;
-(id)updates;
@end

