/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface SUItemValidator : NSObject {

	NSMutableArray* _collectionTests;
	NSMutableArray* _itemTests;

}

@property (nonatomic,readonly) NSArray * validationTests; 
-(BOOL)validateItems:(id)arg1 offers:(id)arg2 error:(id*)arg3 ;
-(void)addCollectionValidationTests:(id)arg1 ;
-(void)addItemValidationTests:(id)arg1 ;
-(void)removeValidationTest:(id)arg1 ;
-(BOOL)validateItems:(id)arg1 error:(id*)arg2 ;
-(NSArray *)validationTests;
-(void)dealloc;
@end
