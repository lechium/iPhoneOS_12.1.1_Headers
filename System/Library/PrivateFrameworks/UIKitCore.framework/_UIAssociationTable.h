/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface _UIAssociationTable : NSObject {

	NSMapTable* _leftToRightHashTables;
	NSMapTable* _rightToLeftHashTables;

}
-(id)description;
-(BOOL)isEmpty;
-(id)initWithLeftValueOptions:(unsigned long long)arg1 rightValueOptions:(unsigned long long)arg2 ;
-(id)rightValueEnumerableForLeftValue:(id)arg1 ;
-(void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2 ;
-(void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2 ;
-(BOOL)hasRightValuesForLeftValue:(id)arg1 ;
-(BOOL)hasLeftValuesForRightValue:(id)arg1 ;
-(id)leftValuesForRightValue:(id)arg1 ;
-(id)leftValueEnumerable;
-(id)leftValues;
-(id)rightValues;
-(id)rightValueEnumerable;
-(id)rightValuesForLeftValue:(id)arg1 ;
-(id)leftValueEnumerableForRightValue:(id)arg1 ;
@end
